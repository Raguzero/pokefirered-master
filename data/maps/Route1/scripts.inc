Route1_MapScripts:: @ 8167EFD
	.byte 0

Route1_EventScript_MartClerk:: @ 8167EFE
//lock
//faceplayer
//goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
//msgbox Route1_Text_WorkAtPokeMartTakeSample
//textcolor 3
//checkitemspace ITEM_POTION, 1
//compare VAR_RESULT, FALSE
//goto_if_eq EventScript_BagIsFull
//getitemname 1, ITEM_POTION
//playfanfare MUS_LEVEL_UP
//message Text_ObtainedTheX
//waitmessage
//waitfanfare
//additem ITEM_POTION
//msgbox Route1_Text_PutPotionAway
//call EventScript_RestorePrevTextColor
//setflag FLAG_GOT_POTION_ON_ROUTE_1
//release
//end
	lock
	faceplayer
	msgbox FortreeCity_House2_Text_Midele_HPTypeGreeting, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq FortreeCity_House2_EventScript_Midele_HiddenPowerTypeChange_NoChange

	msgbox FortreeCity_House2_Text_Midele_HPTTypeChooseMon, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, 255
	goto_if_eq FortreeCity_House2_EventScript_Midele_HiddenPowerTypeChange_NoChange
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq FortreeCity_House2_EventScript_Midele_HiddenPowerTypeChange_NoEgg

	msgbox FortreeCity_House2_Text_Midele_HPTypeChoose, MSGBOX_DEFAULT
	multichoicegrid 0, 0, MULTICHOICE_MIDELE_HIDDEN_POWER_TYPES, 3, 0
	switch VAR_RESULT
	case 0, FortreeCity_House2_EventScript_Midele_HP_Normal
	case 1, FortreeCity_House2_EventScript_Midele_HP_Fighting
	case 2, FortreeCity_House2_EventScript_Midele_HP_Flying
	case 3, FortreeCity_House2_EventScript_Midele_HP_Poison
	case 4, FortreeCity_House2_EventScript_Midele_HP_Ground
	case 5, FortreeCity_House2_EventScript_Midele_HP_Rock
	case 6, FortreeCity_House2_EventScript_Midele_HP_Bug
	case 7, FortreeCity_House2_EventScript_Midele_HP_Ghost
	case 8, FortreeCity_House2_EventScript_Midele_HP_Steel
	case 9, FortreeCity_House2_EventScript_Midele_HP_Fire
	case 10, FortreeCity_House2_EventScript_Midele_HP_Water
	case 11, FortreeCity_House2_EventScript_Midele_HP_Grass
	case 12, FortreeCity_House2_EventScript_Midele_HP_Electric
	case 13, FortreeCity_House2_EventScript_Midele_HP_Psychic
	case 14, FortreeCity_House2_EventScript_Midele_HP_Ice
	case 15, FortreeCity_House2_EventScript_Midele_HP_Dragon
	case 16, FortreeCity_House2_EventScript_Midele_HP_Dark
	case 17, FortreeCity_House2_EventScript_Midele_HP_Fairy
	case SCR_MENU_CANCEL, FortreeCity_House2_EventScript_Midele_HiddenPowerTypeChange_NoChange
	end

FortreeCity_House2_EventScript_Midele_HiddenPowerTypeChange_NoChange::
	msgbox FortreeCity_House2_Text_Midele_HPBye, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_Midele_HiddenPowerTypeChange_NoEgg::
	msgbox FortreeCity_House2_Text_Midele_HPEgg, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_Midele_HP_Normal::
	 setvar VAR_0x8005, TYPE_NORMAL
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Fighting::
	 setvar VAR_0x8005, TYPE_FIGHTING
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Flying::
	 setvar VAR_0x8005, TYPE_FLYING
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Poison::
	 setvar VAR_0x8005, TYPE_POISON
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Ground::
	 setvar VAR_0x8005, TYPE_GROUND
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Rock::
	 setvar VAR_0x8005, TYPE_ROCK
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Bug::
	 setvar VAR_0x8005, TYPE_BUG
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Ghost::
	 setvar VAR_0x8005, TYPE_GHOST
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Steel::
	 setvar VAR_0x8005, TYPE_STEEL
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Fire::
	 setvar VAR_0x8005, TYPE_FIRE
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Water::
	 setvar VAR_0x8005, TYPE_WATER
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Grass::
	 setvar VAR_0x8005, TYPE_GRASS
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Electric::
	 setvar VAR_0x8005, TYPE_ELECTRIC
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Psychic::
	 setvar VAR_0x8005, TYPE_PSYCHIC
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Ice::
	 setvar VAR_0x8005, TYPE_ICE
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Dragon::
	 setvar VAR_0x8005, TYPE_DRAGON
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Dark::
	 setvar VAR_0x8005, TYPE_DARK
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply
FortreeCity_House2_EventScript_Midele_HP_Fairy::
	 setvar VAR_0x8005, TYPE_FAIRY
	 goto FortreeCity_House2_EventScript_Midele_HP_Apply

FortreeCity_House2_EventScript_Midele_HP_Apply::
	special MideleChangeSelectedMonHiddenPowerType
	playfanfare MUS_MOVE_DELETED
	waitfanfare
	msgbox FortreeCity_House2_Text_Midele_HPDone, MSGBOX_DEFAULT
	goto FortreeCity_House2_EventScript_Midele_HiddenPowerTypeChange_NoChange
	end



Route1_EventScript_AlreadyGotPotion:: @ 8167F48
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
	release
	end

Route1_EventScript_Boy:: @ 8167F52
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
	end

Route1_EventScript_RouteSign:: @ 8167F5B
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
	end
	
FortreeCity_House2_Text_Midele_HPTypeGreeting:
	.string "Alabada sea Midele.\n"
	.string "Gracias al poder que me ha dado he\p"
	.string "logrado dominar el arte del PODER\n"
	.string "OCULTO... pagando un precio.\p"
	.string "Compartiré este poder contigo...\n"
	.string "¿Quieres cambiar el tipo del PODER \p"
	.string "OCULTO de alguno de tus POKéMON?$"

FortreeCity_House2_Text_Midele_HPBye:
	.string "Vuelve cuando quieras.$"

FortreeCity_House2_Text_Midele_HPTTypeChooseMon:
	.string "Elige un POKéMON.$"

FortreeCity_House2_Text_Midele_HPEgg::
	.string "No puedo cambiar el tipo del\n"
	.string "PODER OCULTO a un HUEVO.$"

FortreeCity_House2_Text_Midele_HPTypeChoose::
	.string "Elige un tipo.$"

FortreeCity_House2_Text_Midele_HPDone::
	.string "El poder de Midele ha cambiado\n"
	.string "exitosamente el tipo de PODER\p"
	.string "OCULTO de tu POKéMON.$"
