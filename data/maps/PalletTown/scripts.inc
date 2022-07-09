.equ LOCALID_SIGN_LADY, 1
.equ LOCALID_PROF_OAK,  3

.equ SIGN_LADY_READY, VAR_TEMP_2

PalletTown_MapScripts:: @ 816545A
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_OnFrame
	.byte 0

PalletTown_OnTransition:: @ 8165465
	setworldmapflag FLAG_WORLD_MAP_PALLET_TOWN
	call_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_TryReadySignLady
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 0
	call_if_eq PalletTown_EventScript_SetSignLadyPos
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	call_if_eq PalletTown_EventScript_SetSignLadyDone
	end

PalletTown_EventScript_TryReadySignLady:: @ 8165488
	goto_if_unset FLAG_OPENED_START_MENU, EventScript_Return
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	goto_if_ge EventScript_Return
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	return

PalletTown_EventScript_SetSignLadyDone:: @ 81654A2
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
	return

PalletTown_EventScript_SetSignLadyPos:: @ 81654A8
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_MoveSignLadyToRouteEntrance
	setobjectxyperm LOCALID_SIGN_LADY, 5, 15
	setobjectmovementtype LOCALID_SIGN_LADY, MOVEMENT_TYPE_FACE_UP
	return

PalletTown_EventScript_MoveSignLadyToRouteEntrance:: @ 81654BD
	setobjectxyperm LOCALID_SIGN_LADY, 12, 2
	setobjectmovementtype LOCALID_SIGN_LADY, MOVEMENT_TYPE_FACE_DOWN
	setvar SIGN_LADY_READY, TRUE
	return

PalletTown_OnFrame:: @ 81654CE
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_OAK, 2, PalletTown_EventScript_OakRatingScene
	.2byte 0

@ Oak approaches player after exiting their house post Elite Four to check if they should receieve the National Dex
PalletTown_EventScript_OakRatingScene:: @ 81654D8
	lockall
	textcolor 0
	setobjectxyperm LOCALID_PROF_OAK, 14, 14
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_LEFT
	addobject LOCALID_PROF_OAK
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToPlayersDoor
	waitmovement 0
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_EventScript_NotBeenToOneIslandYet
	msgbox PalletTown_Text_OakLetMeSeePokedex
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetPokedexCount
	copyvar VAR_0x8008, VAR_0x8005
	copyvar VAR_0x8009, VAR_0x8006
	getnumberstring 0, VAR_0x8008
	getnumberstring 1, VAR_0x8009
	compare VAR_0x8009, 60
	goto_if_lt PalletTown_EventScript_NotEnoughMonsForNationalDex
	msgbox PalletTown_Text_CaughtXImpressiveFollowMe
	closemessage
	playbgm MUS_FOLLOW_ME, 0
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabFromHouse
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabFromHouse
	waitmovement 0
	opendoor 16, 13
	waitdooranim
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLab
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
	waitmovement 0
	closedoor 16, 13
	waitdooranim
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 255, 6, 12
	waitstate
	releaseall
	end

PalletTown_EventScript_EndOakRatingScene:: @ 816557E
	closemessage
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakExit
	waitmovement 0
	removeobject LOCALID_PROF_OAK
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
	releaseall
	end

PalletTown_EventScript_NotEnoughMonsForNationalDex:: @ 8165593
	msgbox PalletTown_Text_CaughtXPuttingInHonestEffort
	goto PalletTown_EventScript_EndOakRatingScene
	end

PalletTown_EventScript_NotBeenToOneIslandYet:: @ 81655A1
	msgbox PalletTown_Text_OakYouEnjoyingTraveling
	goto PalletTown_EventScript_EndOakRatingScene
	end

PalletTown_Movement_OakWalkToPlayersDoor:: @ 81655AF
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end

PalletTown_Movement_OakExit:: @ 81655BE
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

PalletTown_Movement_OakWalkToLabFromHouse:: @ 81655CC
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end

PalletTown_Movement_PlayerWalkToLabFromHouse:: @ 81655DD
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

PalletTown_EventScript_OakTriggerLeft:: @ 81655ED
	lockall
	setvar VAR_TEMP_1, 0
	goto PalletTown_EventScript_OakTrigger
	end

PalletTown_EventScript_OakTriggerRight:: @ 81655F9
	lockall
	setvar VAR_TEMP_1, 1
	goto PalletTown_EventScript_OakTrigger
	end

PalletTown_EventScript_OakTrigger:: @ 8165605
	famechecker FAMECHECKER_OAK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
	textcolor 0
	delay 30
	playbgm MUS_OAK, 0
	message PalletTown_Text_OakDontGoOut
	waitmessage
	delay 85
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkInPlaceFastestDown
	waitmovement 0
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_ExclamationMark
	waitmovement 0
	delay 30
	addobject LOCALID_PROF_OAK
	compare VAR_TEMP_1, 0
	call_if_eq PalletTown_EventScript_OakEnterLeft
	compare VAR_TEMP_1, 1
	call_if_eq PalletTown_EventScript_OakEnterRight
	delay 30
	msgbox PalletTown_Text_OakGrassUnsafeNeedMon
	closemessage
	delay 30
	compare VAR_TEMP_1, 0
	call_if_eq PalletTown_EventScript_OakLeadPlayerToLabLeft
	compare VAR_TEMP_1, 1
	call_if_eq PalletTown_EventScript_OakLeadPlayerToLabRight
	opendoor 16, 13
	waitdooranim
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLab
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
	waitmovement 0
	closedoor 16, 13
	waitdooranim
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
	setflag FLAG_DONT_TRANSITION_MUSIC
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 255, 6, 12
	waitstate
	releaseall
	end

PalletTown_EventScript_OakEnterLeft:: @ 81656B8
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLeft
	waitmovement 0
	return

PalletTown_EventScript_OakEnterRight:: @ 81656C3
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterRight
	waitmovement 0
	return

PalletTown_EventScript_OakLeadPlayerToLabLeft:: @ 81656CE
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabLeft
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabLeft
	waitmovement 0
	return

PalletTown_EventScript_OakLeadPlayerToLabRight:: @ 81656E0
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabRight
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabRight
	waitmovement 0
	return

PalletTown_Movement_OakEnterLeft:: @ 81656F2
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	step_end

PalletTown_Movement_OakEnterRight:: @ 81656FB
	walk_right
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	step_end

	.macro walk_to_lab
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	.endm

PalletTown_Movement_OakWalkToLabLeft:: @ 8165705
	walk_down
	walk_to_lab
	walk_right
	walk_in_place_fastest_up
	step_end

PalletTown_Movement_OakWalkToLabRight:: @ 8165719
	walk_down
	walk_left
	walk_to_lab
	walk_right
	walk_in_place_fastest_up
	step_end

PalletTown_Movement_OakEnterLab:: @ 816572E
	walk_up
	set_invisible
	step_end

PalletTown_Movement_PlayerWalkToLabLeft:: @ 8165731
	walk_down
	walk_down
	walk_to_lab
	step_end

PalletTown_Movement_PlayerWalkToLabRight:: @ 8165744
	walk_down
	walk_down
	walk_left
	walk_to_lab
	step_end

PalletTown_Movement_PlayerEnterLab:: @ 8165758
	walk_right
	walk_up
	set_invisible
	step_end

PalletTown_EventScript_SignLady:: @ 816575C
	lock
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
	goto_if_eq PalletTown_EventScript_SignLadyDone
	compare VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	goto_if_eq PalletTown_EventScript_SignLadyJustShowedSign
	compare SIGN_LADY_READY, TRUE
	goto_if_eq PalletTown_EventScript_SignLadyStartShowSign
	goto_if_set FLAG_TEMP_2, PalletTown_EventScript_SignLadyGoReadSign
	msgbox PalletTown_Text_HmmIsThatRight
	applymovement LOCALID_SIGN_LADY, Movement_FacePlayer
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_SIGN_LADY, Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SIGN_LADY, Movement_Delay48
	waitmovement 0
	msgbox PalletTown_Text_OhLookLook
	closemessage
	compare VAR_FACING, DIR_EAST
	call_if_eq PalletTown_EventScript_SignLadyMoveOutOfWayRight
	compare VAR_FACING, DIR_EAST
	call_if_ne PalletTown_EventScript_SignLadyMoveOutOfWayLeft
	moveobjectoffscreen 1
	setflag FLAG_TEMP_2
	release
	end

PalletTown_EventScript_SignLadyMoveOutOfWayRight:: @ 81657D7
	applymovement LOCALID_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayRight
	waitmovement 0
	return

PalletTown_EventScript_SignLadyMoveOutOfWayLeft:: @ 81657E2
	applymovement LOCALID_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayLeft
	waitmovement 0
	return

PalletTown_EventScript_SignLadyDone:: @ 81657ED
//	applymovement LOCALID_SIGN_LADY, Movement_FacePlayer
//	waitmovement 0
//	msgbox PalletTown_Text_RaisingMonsToo
//	release
//	end
@ TODO: possible refactor
//BattleFrontier_Lounge5_EventScript_Midele_NatureChanger2::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge5_Text_Midele_NatureChanger2_Greeting, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_NoChange

	msgbox BattleFrontier_Lounge5_Text_Midele_NatureChanger_ChooseMon, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_NoChange
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_NoEgg

	msgbox BattleFrontier_Lounge5_Text_Midele_NatureChanger_ChooseNature, MSGBOX_DEFAULT
	multichoicegrid 0, 0, MULTICHOICE_MIDELE_NATURES_2, 3, 0
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Quiet
	case 1, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Bashful
	case 2, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Rash
	case 3, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Calm
	case 4, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Gentle
	case 5, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Sassy
	case 6, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Careful
	case 7, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Quirky
	case 8, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_NoChange
	case SCR_MENU_CANCEL, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_NoChange
	end

PalletTown_EventScript_SignLadyGoReadSign:: @ 8165801
	applymovement LOCALID_SIGN_LADY, Movement_FacePlayer
	waitmovement 0
	msgbox PalletTown_Text_ReadItReadIt
	release
	end

PalletTown_EventScript_SignLadyJustShowedSign:: @ 8165815
	applymovement LOCALID_SIGN_LADY, Movement_FacePlayer
	waitmovement 0
	msgbox PalletTown_Text_SignsAreUsefulArentThey
	release
	end

PalletTown_Movement_SignLadyMoveOutOfWayRight:: @ 8165829
	walk_right
	walk_in_place_fastest_left
	step_end

PalletTown_Movement_SignLadyMoveOutOfWayLeft:: @ 816582C
	walk_left
	walk_in_place_fastest_right
	step_end

PalletTown_EventScript_FatMan:: @ 816582F
	//msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
	//end
//BattleFrontier_Lounge5_EventScript_Midele_NatureChanger1::
	lock
	faceplayer
	msgbox BattleFrontier_Lounge5_Text_Midele_NatureChanger1_Greeting, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_NoChange

	msgbox BattleFrontier_Lounge5_Text_Midele_NatureChanger_ChooseMon, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_NoChange
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_NoEgg

	msgbox BattleFrontier_Lounge5_Text_Midele_NatureChanger_ChooseNature, MSGBOX_DEFAULT
	multichoicegrid 0, 0, MULTICHOICE_MIDELE_NATURES_1, 3, 0
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Hardy
	case 1, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Lonely
	case 2, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Brave
	case 3, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Adamant
	case 4, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Naughty
	case 5, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Bold
	case 6, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Docile
	case 7, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Relaxed
	case 8, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Impish
	case 9, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Lax
	case 10, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Timid
	case 11, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Hasty
	case 12, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Serious
	case 13, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Jolly
	case 14, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Naive
	case 15, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Modest
	case 16, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Mild
	case 17, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_NoChange
	case SCR_MENU_CANCEL, BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_NoChange
	end
	
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Hardy::
	setvar VAR_0x8005, NATURE_HARDY
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Lonely::
	setvar VAR_0x8005, NATURE_LONELY
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Brave::
	setvar VAR_0x8005, NATURE_BRAVE
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Adamant::
	setvar VAR_0x8005, NATURE_ADAMANT
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Naughty::
	setvar VAR_0x8005, NATURE_NAUGHTY
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Bold::
	setvar VAR_0x8005, NATURE_BOLD
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Docile::
	setvar VAR_0x8005, NATURE_DOCILE
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Relaxed::
	setvar VAR_0x8005, NATURE_RELAXED
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Impish::
	setvar VAR_0x8005, NATURE_IMPISH
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Lax::
	setvar VAR_0x8005, NATURE_LAX
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Timid::
	setvar VAR_0x8005, NATURE_TIMID
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Hasty::
	setvar VAR_0x8005, NATURE_HASTY
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Serious::
	setvar VAR_0x8005, NATURE_SERIOUS
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Jolly::
	setvar VAR_0x8005, NATURE_JOLLY
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Naive::
	setvar VAR_0x8005, NATURE_NAIVE
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Modest::
	setvar VAR_0x8005, NATURE_MODEST
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Mild::
	setvar VAR_0x8005, NATURE_MILD
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Quiet::
	setvar VAR_0x8005, NATURE_QUIET
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Bashful::
	setvar VAR_0x8005, NATURE_BASHFUL
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Rash::
	setvar VAR_0x8005, NATURE_RASH
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Calm::
	setvar VAR_0x8005, NATURE_CALM
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Gentle::
	setvar VAR_0x8005, NATURE_GENTLE
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Sassy::
	setvar VAR_0x8005, NATURE_SASSY
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Careful::
	setvar VAR_0x8005, NATURE_CAREFUL
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Quirky::
	setvar VAR_0x8005, NATURE_QUIRKY
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply

BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_Apply::
	special MideleChangeSelectedMonNature
	playfanfare MUS_MOVE_DELETED
	waitfanfare
	msgbox BattleFrontier_Lounge5_Text_Midele_NatureChanger_Done, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_NoChange
	end
	
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_NoChange::
	msgbox BattleFrontier_Lounge5_Text_Midele_NatureChanger_NoChange
	release
	end
	
BattleFrontier_Lounge5_EventScript_Midele_NatureChanger_NoEgg::
	msgbox BattleFrontier_Lounge5_Text_Midele_NatureChanger_NoEgg
	release
	end
	
BattleFrontier_Lounge5_Text_Midele_NatureChanger1_Greeting::
	.string "SASAGEYOOO, SASAGEYOOO....\p"
	.string "Uh, perdona... me he dejado llevar.\n"
	.string "Gracias a mi poder, puedo cambiar la\p"
	.string "NATURALEZA de tus POKéMON.\n"
	.string "¿Te interesa?$"
	
BattleFrontier_Lounge5_Text_Midele_NatureChanger2_Greeting::
	.string "4%... esa es la probabilidad de\n"
	.string "que te toque la naturaleza que quieres.\p"
	.string "¿Injusto? No te preocupes, yo puedo\n"
	.string "cambiar la NATURALEZA de tus POKéMON.\p"
	.string "¿Te interesa?$"
	
	
BattleFrontier_Lounge5_Text_Midele_NatureChanger_NoChange::
	.string "Vuelve cuando quieras.$"
	
BattleFrontier_Lounge5_Text_Midele_NatureChanger_ChooseMon::
	.string "Elige un POKéMON.$"
	
BattleFrontier_Lounge5_Text_Midele_NatureChanger_ChooseNature::
	.string "Elige una NATURALEZA.$"
	
BattleFrontier_Lounge5_Text_Midele_NatureChanger_NoEgg::
	.string "No puedo cambiar la NATURALEZA\n"
	.string "de un HUEVO.$"
	
BattleFrontier_Lounge5_Text_Midele_NatureChanger_Done::
	.string "La NATURALEZA de tu POKéMON ha sido\n"
	.string "modificada exitosamente.$"

PalletTown_EventScript_OaksLabSign:: @ 8165838
	lockall
	famechecker FAMECHECKER_OAK, 0
	msgbox PalletTown_Text_OakPokemonResearchLab
	releaseall
	end

PalletTown_EventScript_PlayersHouseSign:: @ 8165850
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
	//end
// Deoxys change form
	specialvar VAR_RESULT, CheckDeoxys
	copyvar VAR_0x8004, VAR_RESULT
	compare VAR_RESULT, FALSE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_NoEffect
	msgbox FallarborTown_CozmosHouse_Text_Deoxys, MSGBOX_DEFAULT
	msgbox FallarborTown_Text_Deoxys_Changer, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FallarborTown_EventScript_Deoxys_NoChange
compare VAR_0x8004, SPECIES_DEOXYS
	goto_if_eq FallarborTown_CozmosHouse_EventScript_ChangeForm_Normal
	compare VAR_0x8004, SPECIES_DEOXYS_ATTACK
	goto_if_eq FallarborTown_CozmosHouse_EventScript_ChangeForm_Attack
	compare VAR_0x8004, SPECIES_DEOXYS_DEFENSE
	goto_if_eq FallarborTown_CozmosHouse_EventScript_ChangeForm_Defense
	compare VAR_0x8004, SPECIES_DEOXYS_SPEED
	goto_if_eq FallarborTown_CozmosHouse_EventScript_ChangeForm_Speed
	release
	end
	
FallarborTown_CozmosHouse_EventScript_ChangeForm_Normal:
	multichoicegrid 0, 0, MULTI_DEOXYS_CHANGE_FORM_NORMAL, 4, 0
	switch VAR_RESULT
	case 0, FallarborTown_EventScript_Deoxys_Attack
	case 1, FallarborTown_EventScript_Deoxys_Defense
	case 2, FallarborTown_EventScript_Deoxys_Speed
	case 3, FallarborTown_EventScript_Deoxys_NoChange
	case SCR_MENU_CANCEL, FallarborTown_EventScript_Deoxys_NoChange
	release
	end
	
FallarborTown_CozmosHouse_EventScript_ChangeForm_Attack:
	multichoicegrid 0, 0, MULTI_DEOXYS_CHANGE_FORM_ATTACK, 4, 0
	switch VAR_RESULT
	case 0, FallarborTown_EventScript_Deoxys
	case 1, FallarborTown_EventScript_Deoxys_Defense
	case 2, FallarborTown_EventScript_Deoxys_Speed
	case 3, FallarborTown_EventScript_Deoxys_NoChange
	case SCR_MENU_CANCEL, FallarborTown_EventScript_Deoxys_NoChange
	release
	end
	
FallarborTown_CozmosHouse_EventScript_ChangeForm_Defense:
	multichoicegrid 0, 0, MULTI_DEOXYS_CHANGE_FORM_DEFENSE, 4, 0
	switch VAR_RESULT
	case 0, FallarborTown_EventScript_Deoxys
	case 1, FallarborTown_EventScript_Deoxys_Attack
	case 2, FallarborTown_EventScript_Deoxys_Speed
	case 3, FallarborTown_EventScript_Deoxys_NoChange
	case SCR_MENU_CANCEL, FallarborTown_EventScript_Deoxys_NoChange
	release
	end

FallarborTown_CozmosHouse_EventScript_ChangeForm_Speed:
	multichoicegrid 0, 0, MULTI_DEOXYS_CHANGE_FORM_SPEED, 4, 0
	switch VAR_RESULT
	case 0, FallarborTown_EventScript_Deoxys
	case 1, FallarborTown_EventScript_Deoxys_Attack
	case 2, FallarborTown_EventScript_Deoxys_Defense
	case 3, FallarborTown_EventScript_Deoxys_NoChange
	case SCR_MENU_CANCEL, FallarborTown_EventScript_Deoxys_NoChange
	release
	end
	
FallarborTown_CozmosHouse_EventScript_NoEffect::
	release
	end
	
FallarborTown_EventScript_Deoxys_NoChange::
	msgbox FallarborTown_Deoxys_NoChange_Text
	release
	end
	
FallarborTown_EventScript_Deoxys::
	setvar VAR_0x8005, SPECIES_DEOXYS
	special ChangeDeoxysForm
	delay 20
	msgbox FallarborTown_Deoxys_Change1
	release
	end
	
FallarborTown_EventScript_Deoxys_Attack::
	setvar VAR_0x8005, SPECIES_DEOXYS_ATTACK
	special ChangeDeoxysForm
	delay 20
	msgbox FallarborTown_Deoxys_Change2
	release
	end
	
FallarborTown_EventScript_Deoxys_Defense::
	setvar VAR_0x8005, SPECIES_DEOXYS_DEFENSE
	special ChangeDeoxysForm
	delay 20
	msgbox FallarborTown_Deoxys_Change3
	release
	end
	
FallarborTown_EventScript_Deoxys_Speed::
	setvar VAR_0x8005, SPECIES_DEOXYS_SPEED
	special ChangeDeoxysForm
	delay 20
	msgbox FallarborTown_Deoxys_Change4
	release
	end

FallarborTown_CozmosHouse_Text_Deoxys: 
	.string "DEOXYS is reacting to the METEORITE.\p"

	.string "PROF. COZMO: OH MY GOD!\n"
	.string "THE METEORITE IS SHINING!$"
	
FallarborTown_Deoxys_NoChange_Text: 
	.string "The METEORITE stopped glowing!$"
	
FallarborTown_Deoxys_Change1: 
	.string "DEOXYS changed to NORMAL FORM!$"

FallarborTown_Deoxys_Change2: 
	.string "DEOXYS changed to ATTACK FORM!$"
	
FallarborTown_Deoxys_Change3: 
	.string "DEOXYS changed to DEFENSE FORM!$"
	
FallarborTown_Deoxys_Change4: 
	.string "DEOXYS changed to SPEED FORM!$"
	
FallarborTown_Text_Deoxys_Changer:
	.string "Change DEOXYS form?$"
// Deoxys change form		


PalletTown_EventScript_RivalsHouseSign:: @ 8165859
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
	end

PalletTown_EventScript_TownSign:: @ 8165862
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
	end

PalletTown_EventScript_TrainerTips:: @ 816586B
	lockall
	msgbox PalletTown_Text_PressStartToOpenMenu
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	releaseall
	end

PalletTown_EventScript_SignLadyTrigger:: @ 816587B
	lockall
	applymovement LOCALID_SIGN_LADY, Movement_WalkInPlaceFastestRight
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkInPlaceFastestLeft
	waitmovement 0
	call PalletTown_EventScript_SignLadyShowSign
	releaseall
	end

PalletTown_EventScript_SignLadyShowSign:: @ 8165894
	textcolor 1
	msgbox PalletTown_Text_LookCopiedTrainerTipsSign
	closemessage
	delay 20
	textcolor 3
	setflag FLAG_OPENED_START_MENU
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
	setvar SIGN_LADY_READY, FALSE
	special SetWalkingIntoSignVars
	special DisableMsgBoxWalkaway
	signmsg
	msgbox PalletTown_Text_PressStartToOpenMenuCopy
	normalmsg
	return

PalletTown_EventScript_SignLadyStartShowSign:: @ 81658C2
	applymovement LOCALID_SIGN_LADY, Movement_FacePlayer
	waitmovement 0
	call PalletTown_EventScript_SignLadyShowSign
	release
	end
	
// DEBUG AGATHA
EventScript_Debug_Pallet_Town::
	faceplayer
	lock
	msgbox Debug_Text
	buffercustomstring 0, Text_Placeholder_Option1_TeamMons
	buffercustomstring 1, Text_Placeholder_Option2_CajaMons
	buffercustomstring 2, Text_Placeholder_Option3_AllItems
	buffercustomstring 3, Text_Placeholder_Option4_ActiveFlagsAdventure
	buffercustomstring 4, Text_Placeholder_Option5_DisableFlagsAdventure
	buffercustomstring 5, Text_Placeholder_Option6_IndividualRandomBattleCC
	buffercustomstring 6, Text_Placeholder_Option7_DoblesRandomBattleCC
	setvar VAR_TMP_CUSTOM_MENU_SIZE 7
	multichoice 0, 0, MULTICHOICE_CUSTOM, FALSE
	switch VAR_RESULT
	case 0, EventScript_TeamMons
	case 1, EventScript_CajaMons
	case 2, EventScript_AllItems
	case 3, EventScript_ActiveFlagsAdventure
	case 4, EventScript_DisableFlagsAdventure
	case 5, EventScript_IndividualRandomBattleCC
	case 6, EventScript_DoblesRandomBattleCC
	case 127, EventScript_End
	release
	end
	
Debug_Text:
	.string "Bienvenido al DEBUG. Elige una opción\n"
	.string "o pulsa B para cancelar$"
	
Text_Placeholder_Option1_TeamMons:
	.string "TEAM MONS$"
	
Text_Placeholder_Option2_CajaMons:
	.string "CAJA MONS$"
	
Text_Placeholder_Option3_AllItems:
	.string "ALL ITEMS$"
	
Text_Placeholder_Option4_ActiveFlagsAdventure:
	.string "ACTIVEFLAGADVENT$"
	
Text_Placeholder_Option5_DisableFlagsAdventure:
	.string "DISABLEFLAGADVEN$"
	
Text_Placeholder_Option6_IndividualRandomBattleCC:
	.string "EMPIEZA INDIVIDUAL CC$"
	
Text_Placeholder_Option7_DoblesRandomBattleCC:
	.string "EMPIEZA DOBLES CC$"
	
EventScript_End:
    callnative(CheckSaveFileSize)
    msgbox SaveFileStructMsg
	release
	end

SaveFileStructMsg:
    .string "SaveBlock1 size is {STR_VAR_1}/15872 bytes.\nSaveBlock2 size is {STR_VAR_2}/3968 bytes.\pPokemonStorage is {STR_VAR_3} bytes long.\nMax size is 35712 bytes.$"

EventScript_TeamMons::	
	givecustommon SPECIES_OCTILLERY_BETA, 100, ITEM_CHOICE_SPECS, ITEM_MASTER_BALL, NATURE_MODEST, 0, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_SURF, MOVE_WATERFALL, MOVE_FLASH_CANNON, MOVE_MONADO_POWER, TRUE, 0
	givecustommon SPECIES_RAYQUAZA, 100, ITEM_NONE, ITEM_MASTER_BALL, NATURE_NAIVE, 0, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_FLY, MOVE_HOLA_REINA, MOVE_STRENGTH, MOVE_ROCK_SMASH, TRUE, 0
    givemon SPECIES_AERODACTYL, 99, ITEM_NONE
	givecustommon SPECIES_VENUSAUR, 100, ITEM_NONE, ITEM_MASTER_BALL, NATURE_ADAMANT, 0, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_CUT, MOVE_FLASH, MOVE_DARK_THUNDER, MOVE_MIDELE_POWER, TRUE, 0
    givemon SPECIES_NOCTOWL_BETA, 99, ITEM_NONE
    givemon SPECIES_EEVEE, 99, ITEM_NONE,
    release
    end
	
EventScript_CajaMons::
	special GiveAllMons
	release
	end

EventScript_AllItems::
	special GiveAllItems
	release
	end

EventScript_ActiveFlagsAdventure::	
    setflag FLAG_SYS_POKEMON_GET
    setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	special EnableNationalPokedex
	setflag FLAG_SYS_DEXNAV_GET
	setflag FLAG_SYS_B_DASH @ RUNNING SHOES
    clearflag FLAG_HIDE_OAK_IN_HIS_LAB
    setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
    setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
    setflag FLAG_OPENED_START_MENU
    setflag FLAG_VISITED_OAKS_LAB
    setvar VAR_STARTER_MON, 2                              @ Chose Charmander
    setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
    setflag FLAG_HIDE_RIVAL_IN_LAB
    setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
    setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
    setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6 @ Parcel delivery done
    setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2       @ Obtained the Town Map
    setvar RECEIVED_TOWN_MAP, TRUE
    setflag FLAG_HIDE_TOWN_MAP
    setvar VAR_MAP_SCENE_ROUTE22, 1                        @ Ready to fight the Rival in Route 22
    setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2             @ Parcel delivery done
    setflag FLAG_HIDE_POKEDEX
    setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2          @ Old Man's catching tutorial done
    setvar VAR_MAP_SCENE_PEWTER_CITY, 2                    @ Received the Running Shoes in Pewter City
    setflag FLAG_BADGE01_GET
    setflag FLAG_BADGE02_GET
    setflag FLAG_BADGE03_GET
    setflag FLAG_BADGE04_GET
    setflag FLAG_BADGE05_GET
    setflag FLAG_BADGE06_GET
    setflag FLAG_BADGE07_GET
    setflag FLAG_BADGE08_GET
    setflag FLAG_WORLD_MAP_PALLET_TOWN
    setflag FLAG_WORLD_MAP_VIRIDIAN_CITY
    setflag FLAG_WORLD_MAP_PEWTER_CITY
    setflag FLAG_WORLD_MAP_CERULEAN_CITY
    setflag FLAG_WORLD_MAP_LAVENDER_TOWN
    setflag FLAG_WORLD_MAP_VERMILION_CITY
    setflag FLAG_WORLD_MAP_CELADON_CITY
    setflag FLAG_WORLD_MAP_FUCHSIA_CITY
    setflag FLAG_WORLD_MAP_CINNABAR_ISLAND
    setflag FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR
    setflag FLAG_WORLD_MAP_SAFFRON_CITY
    setflag FLAG_WORLD_MAP_ONE_ISLAND
    setflag FLAG_WORLD_MAP_TWO_ISLAND
    setflag FLAG_WORLD_MAP_THREE_ISLAND
    setflag FLAG_WORLD_MAP_FOUR_ISLAND
    setflag FLAG_WORLD_MAP_FIVE_ISLAND
    setflag FLAG_WORLD_MAP_SEVEN_ISLAND
    setflag FLAG_WORLD_MAP_SIX_ISLAND
    setflag FLAG_WORLD_MAP_ROUTE4_POKEMON_CENTER_1F
    setflag FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F
    setflag FLAG_WORLD_MAP_VIRIDIAN_FOREST
    setflag FLAG_WORLD_MAP_MT_MOON_1F
    setflag FLAG_WORLD_MAP_SSANNE_EXTERIOR
    setflag FLAG_WORLD_MAP_UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL
    setflag FLAG_WORLD_MAP_UNDERGROUND_PATH_EAST_WEST_TUNNEL
    setflag FLAG_WORLD_MAP_DIGLETTS_CAVE_B1F
    setflag FLAG_WORLD_MAP_VICTORY_ROAD_1F
    setflag FLAG_WORLD_MAP_ROCKET_HIDEOUT_B1F
    setflag FLAG_WORLD_MAP_SILPH_CO_1F
    setflag FLAG_WORLD_MAP_POKEMON_MANSION_1F
    setflag FLAG_WORLD_MAP_SAFARI_ZONE_CENTER
    setflag FLAG_WORLD_MAP_POKEMON_LEAGUE_LORELEIS_ROOM
    setflag FLAG_WORLD_MAP_ROCK_TUNNEL_1F
    setflag FLAG_WORLD_MAP_SEAFOAM_ISLANDS_1F
    setflag FLAG_WORLD_MAP_POKEMON_TOWER_1F
    setflag FLAG_WORLD_MAP_CERULEAN_CAVE_1F
    setflag FLAG_WORLD_MAP_POWER_PLANT
    setflag FLAG_WORLD_MAP_MT_EMBER_EXTERIOR
    setflag FLAG_WORLD_MAP_THREE_ISLAND_BERRY_FOREST
    setflag FLAG_WORLD_MAP_FOUR_ISLAND_ICEFALL_CAVE_ENTRANCE
    setflag FLAG_WORLD_MAP_FIVE_ISLAND_ROCKET_WAREHOUSE
    setflag FLAG_WORLD_MAP_TRAINER_TOWER_LOBBY
    setflag FLAG_WORLD_MAP_SIX_ISLAND_DOTTED_HOLE_1F
    setflag FLAG_WORLD_MAP_FIVE_ISLAND_LOST_CAVE_ENTRANCE
    setflag FLAG_WORLD_MAP_SIX_ISLAND_PATTERN_BUSH
    setflag FLAG_WORLD_MAP_SIX_ISLAND_ALTERING_CAVE
    setflag FLAG_WORLD_MAP_SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER
    setflag FLAG_WORLD_MAP_THREE_ISLAND_DUNSPARCE_TUNNEL
    setflag FLAG_WORLD_MAP_SEVEN_ISLAND_SEVAULT_CANYON_TANOBY_KEY
	release
	end
	
EventScript_DisableFlagsAdventure::	
    clearflag FLAG_SYS_POKEMON_GET
    clearflag FLAG_SYS_POKEDEX_GET
	clearflag FLAG_SYS_DEXNAV_GET
	clearflag FLAG_SYS_B_DASH @ RUNNING SHOES
    setflag FLAG_HIDE_OAK_IN_HIS_LAB
    setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 0
    clearflag FLAG_HIDE_OAK_IN_PALLET_TOWN
    clearflag FLAG_OPENED_START_MENU
    clearflag FLAG_VISITED_OAKS_LAB
    setvar VAR_STARTER_MON, 0                              @ Chose Charmander
    clearflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
    clearflag FLAG_HIDE_RIVAL_IN_LAB
    clearflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
    clearflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
    setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 0 @ Parcel delivery done
    setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 0       @ Obtained the Town Map
    setvar RECEIVED_TOWN_MAP, FALSE
    clearflag FLAG_HIDE_TOWN_MAP
    setvar VAR_MAP_SCENE_ROUTE22, 0                        @ Ready to fight the Rival in Route 22
    setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 0             @ Parcel delivery done
    clearflag FLAG_HIDE_POKEDEX
    setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0          @ Old Man's catching tutorial done
    setvar VAR_MAP_SCENE_PEWTER_CITY, 0                    @ Received the Running Shoes in Pewter City
    clearflag FLAG_BADGE01_GET
    clearflag FLAG_BADGE02_GET
    clearflag FLAG_BADGE03_GET
    clearflag FLAG_BADGE04_GET
    clearflag FLAG_BADGE05_GET
    clearflag FLAG_BADGE06_GET
    clearflag FLAG_BADGE07_GET
    clearflag FLAG_BADGE08_GET
    clearflag FLAG_WORLD_MAP_PALLET_TOWN
    clearflag FLAG_WORLD_MAP_VIRIDIAN_CITY
    clearflag FLAG_WORLD_MAP_PEWTER_CITY
    clearflag FLAG_WORLD_MAP_CERULEAN_CITY
    clearflag FLAG_WORLD_MAP_LAVENDER_TOWN
    clearflag FLAG_WORLD_MAP_VERMILION_CITY
    clearflag FLAG_WORLD_MAP_CELADON_CITY
    clearflag FLAG_WORLD_MAP_FUCHSIA_CITY
    clearflag FLAG_WORLD_MAP_CINNABAR_ISLAND
    clearflag FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR
    clearflag FLAG_WORLD_MAP_SAFFRON_CITY
    clearflag FLAG_WORLD_MAP_ONE_ISLAND
    clearflag FLAG_WORLD_MAP_TWO_ISLAND
    clearflag FLAG_WORLD_MAP_THREE_ISLAND
    clearflag FLAG_WORLD_MAP_FOUR_ISLAND
    clearflag FLAG_WORLD_MAP_FIVE_ISLAND
    clearflag FLAG_WORLD_MAP_SEVEN_ISLAND
    clearflag FLAG_WORLD_MAP_SIX_ISLAND
    clearflag FLAG_WORLD_MAP_ROUTE4_POKEMON_CENTER_1F
    clearflag FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F
    clearflag FLAG_WORLD_MAP_VIRIDIAN_FOREST
    clearflag FLAG_WORLD_MAP_MT_MOON_1F
    clearflag FLAG_WORLD_MAP_SSANNE_EXTERIOR
    clearflag FLAG_WORLD_MAP_UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL
    clearflag FLAG_WORLD_MAP_UNDERGROUND_PATH_EAST_WEST_TUNNEL
    clearflag FLAG_WORLD_MAP_DIGLETTS_CAVE_B1F
    clearflag FLAG_WORLD_MAP_VICTORY_ROAD_1F
    clearflag FLAG_WORLD_MAP_ROCKET_HIDEOUT_B1F
    clearflag FLAG_WORLD_MAP_SILPH_CO_1F
    clearflag FLAG_WORLD_MAP_POKEMON_MANSION_1F
    clearflag FLAG_WORLD_MAP_SAFARI_ZONE_CENTER
    clearflag FLAG_WORLD_MAP_POKEMON_LEAGUE_LORELEIS_ROOM
    clearflag FLAG_WORLD_MAP_ROCK_TUNNEL_1F
    clearflag FLAG_WORLD_MAP_SEAFOAM_ISLANDS_1F
    clearflag FLAG_WORLD_MAP_POKEMON_TOWER_1F
    clearflag FLAG_WORLD_MAP_CERULEAN_CAVE_1F
    clearflag FLAG_WORLD_MAP_POWER_PLANT
    clearflag FLAG_WORLD_MAP_MT_EMBER_EXTERIOR
    clearflag FLAG_WORLD_MAP_THREE_ISLAND_BERRY_FOREST
    clearflag FLAG_WORLD_MAP_FOUR_ISLAND_ICEFALL_CAVE_ENTRANCE
    clearflag FLAG_WORLD_MAP_FIVE_ISLAND_ROCKET_WAREHOUSE
    clearflag FLAG_WORLD_MAP_TRAINER_TOWER_LOBBY
    clearflag FLAG_WORLD_MAP_SIX_ISLAND_DOTTED_HOLE_1F
    clearflag FLAG_WORLD_MAP_FIVE_ISLAND_LOST_CAVE_ENTRANCE
    clearflag FLAG_WORLD_MAP_SIX_ISLAND_PATTERN_BUSH
    clearflag FLAG_WORLD_MAP_SIX_ISLAND_ALTERING_CAVE
    clearflag FLAG_WORLD_MAP_SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER
    clearflag FLAG_WORLD_MAP_THREE_ISLAND_DUNSPARCE_TUNNEL
    clearflag FLAG_WORLD_MAP_SEVEN_ISLAND_SEVAULT_CANYON_TANOBY_KEY
	release
	end
	
EventScript_IndividualRandomBattleCC::
    special SavePlayerParty
	setflag FLAG_RYU_RANDOMBATTLE  // Test random battle activado
	trainerbattle_no_intro TRAINER_DEBUG, Route22_Text_LateRivalDefeat
	clearflag FLAG_RYU_RANDOMBATTLE // Test random battle desactivado
	special LoadPlayerParty
	release
	end	

EventScript_DoblesRandomBattleCC::
    special SavePlayerParty
	setflag FLAG_RYU_RANDOMBATTLE // Test random battle desactivado
	trainerbattle_no_intro TRAINER_DEBUG_2, Route22_Text_LateRivalDefeat
	clearflag FLAG_RYU_RANDOMBATTLE // Test random battle desactivado
	special LoadPlayerParty
	release
	end