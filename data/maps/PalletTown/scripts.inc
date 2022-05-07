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
	clearflag FLAG_RYU_RANDOMBATTLE // Test random battle desactivado, borrar luego
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
	end

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
    setflag FLAG_SYS_POKEMON_GET
    setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_DEXNAV_GET
	setflag FLAG_RYU_RANDOMBATTLE
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
    additem ITEM_POKE_BALL, 99
    additem ITEM_GREAT_BALL, 99
    additem ITEM_ULTRA_BALL, 99
    additem ITEM_MASTER_BALL, 99
    additem ITEM_REPEL, 99
	additem ITEM_ESCAPE_ROPE, 99
    additem ITEM_FIRE_STONE, 99
    additem ITEM_WATER_STONE, 99
    additem ITEM_THUNDER_STONE, 99
    additem ITEM_LEAF_STONE, 99
    additem ITEM_SUN_STONE, 99
    additem ITEM_MOON_STONE, 99
	additem ITEM_DAWN_STONE, 99
	additem ITEM_DUSK_STONE, 99
	additem ITEM_SHINY_STONE, 99
	additem ITEM_ICE_STONE, 99
    additem ITEM_RARE_CANDY, 99
	additem ITEM_ABILITY_CAPSULE, 99
	additem ITEM_SACRED_ASH, 99
	additem ITEM_FULL_RESTORE, 99
	additem ITEM_NUGGET, 99
	additem ITEM_NUGGET, 99
	additem ITEM_NUGGET, 99
	additem ITEM_LEFTOVERS, 99
	additem ITEM_CHOICE_SCARF, 99
	additem ITEM_CHOICE_SPECS, 99
    additem ITEM_HM01, 1
    additem ITEM_HM02, 1
    additem ITEM_HM03, 1
    additem ITEM_HM04, 1
    additem ITEM_HM05, 1
    additem ITEM_HM06, 1
    additem ITEM_HM07, 1
    additem ITEM_HM08, 1
    additem ITEM_TM01, 99
    additem ITEM_TM02, 99
    additem ITEM_TM03, 99
    additem ITEM_TM04, 99
    additem ITEM_TM05, 99
    additem ITEM_TM06, 99
    additem ITEM_TM07, 99
    additem ITEM_TM08, 99
    additem ITEM_TM09, 99
    additem ITEM_TM10, 99
    additem ITEM_TM11, 99
    additem ITEM_TM12, 99
    additem ITEM_TM13, 99
    additem ITEM_TM14, 99
    additem ITEM_TM15, 99
    additem ITEM_TM16, 99
    additem ITEM_TM17, 99
    additem ITEM_TM18, 99
    additem ITEM_TM19, 99
    additem ITEM_TM20, 99
    additem ITEM_TM21, 99
    additem ITEM_TM22, 99
    additem ITEM_TM23, 99
    additem ITEM_TM24, 99
    additem ITEM_TM25, 99
    additem ITEM_TM26, 99
    additem ITEM_TM27, 99
    additem ITEM_TM28, 99
    additem ITEM_TM29, 99
    additem ITEM_TM30, 99
    additem ITEM_TM31, 99
    additem ITEM_TM32, 99
    additem ITEM_TM33, 99
    additem ITEM_TM34, 99
    additem ITEM_TM35, 99
    additem ITEM_TM36, 99
    additem ITEM_TM37, 99
    additem ITEM_TM38, 99
    additem ITEM_TM39, 99
    additem ITEM_TM40, 99
    additem ITEM_TM41, 99
    additem ITEM_TM42, 99
    additem ITEM_TM43, 99
    additem ITEM_TM44, 99
    additem ITEM_TM45, 99
    additem ITEM_TM46, 99
    additem ITEM_TM47, 99
    additem ITEM_TM48, 99
    additem ITEM_TM49, 99
    additem ITEM_TM50, 99
    additem ITEM_TOWN_MAP, 1
    additem ITEM_EXP_SHARE, 1
    additem ITEM_BICYCLE, 1
    additem ITEM_SILPH_SCOPE, 1
	additem ITEM_POKE_FLUTE, 1
	additem ITEM_VS_SEEKER, 1
	additem ITEM_FAME_CHECKER, 1
	additem ITEM_SITRUS_BERRY, 99
	additem ITEM_BERRY_POUCH, 1
	additem ITEM_POWDER_JAR, 1
    additem ITEM_OLD_ROD, 1
    additem ITEM_GOOD_ROD, 1
    additem ITEM_SUPER_ROD, 1
	additem ITEM_COIN_CASE, 1
	additem ITEM_ITEMFINDER, 1
    givemon SPECIES_RAICHU, 100, ITEM_NONE
    givemon SPECIES_ESPEON, 100, ITEM_NONE
    givemon SPECIES_SHEDINJA, 100, ITEM_NONE
    givemon SPECIES_AERODACTYL, 99, ITEM_NONE
    givemon SPECIES_RAYQUAZA, 99, ITEM_NONE
    givemon SPECIES_GROUDON, 99, ITEM_NONE
    givemon SPECIES_KYOGRE, 100, ITEM_NONE,
    release
    end
