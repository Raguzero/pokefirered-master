PKMN_Center_Move_Tutor::
	lockall
	message PKMN_Center_Move_Tutor_Text_HowCanHelp
	waitmessage
	multichoice 0, 0, MULTICHOICE_PKMN_CENTER_MOVE_TUTOR, 0
	switch VAR_RESULT
	case 0, PKMN_Center_MoveReminder_EventScript
	case 1, PKMN_Center_MoveDeleter_EventScript
	case 2, PKMN_Center_NameRater_EventScript
	case 3, PKMN_Center_Move_Tutor_General_Exit
	case SCR_MENU_CANCEL, PKMN_Center_Move_Tutor_General_Exit

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Move Reminder @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

PKMN_Center_MoveReminder_EventScript::
	lock
	faceplayer
	msgbox Relearn_Move_Text_TeachMonMove
	goto Relearn_Move_EventScript_AskTutorMon
	end

Relearn_Move_EventScript_AskTutorMon::
	msgbox Relearn_Move_Text_WantMeToTeachMove, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Relearn_Move_EventScript_EndTutorMove
	goto Relearn_Move_EventScript_ChooseMonToTutor
	end

Relearn_Move_EventScript_ChooseMonToTutor::
	msgbox Relearn_Move_Text_TutorWhichMon
	special SelectMoveTutorMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Relearn_Move_EventScript_EndTutorMove
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq Relearn_Move_EventScript_CantTutorEgg
	compare VAR_0x8005, 0
	goto_if_eq Relearn_Move_EventScript_NoMoveToTutorMon
	goto Relearn_Move_EventScript_ChooseMoveToTeach
	end

Relearn_Move_EventScript_ChooseMoveToTeach::
	msgbox Relearn_Move_Text_TeachWhichMove
	special DisplayMoveTutorMenu
	waitstate
	compare VAR_0x8004, 0
	goto_if_eq Relearn_Move_EventScript_ChooseMonToTutor
	end

Relearn_Move_EventScript_NoMoveToTutorMon::
	msgbox Relearn_Move_Text_NoMoveICanTeachThatMon
	goto Relearn_Move_EventScript_ChooseMonToTutor
	end

Relearn_Move_EventScript_CantTutorEgg::
	msgbox Relearn_Move_Text_CantTeachAnEgg
	goto Relearn_Move_EventScript_ChooseMonToTutor
	end

Relearn_Move_EventScript_EndTutorMove::
	msgbox Relearn_Move_Text_End
	release
	end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Move Deleter @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@	

PKMN_Center_MoveDeleter_EventScript::
	lock
	faceplayer
	msgbox MoveDeleter_Text_WouldYouLikeToForgetMove, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MoveDeleter_EventScript_ChooseMonForMoveDeleter
	goto MoveDeleter_EventScript_CancelForgetMove
	end

MoveDeleter_EventScript_ChooseMonForMoveDeleter::
	msgbox MoveDeleter_Text_WhichMonShouldForgetMove
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge MoveDeleter_EventScript_CancelForgetMove
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq MoveDeleter_EventScript_CantForgetMoveEgg
	special GetNumMovesSelectedMonHas
	compare VAR_RESULT, 1
	goto_if_eq MoveDeleter_EventScript_CantForgetOnlyMove
	msgbox MoveDeleter_Text_WhichMoveShouldBeForgotten
	fadescreen FADE_TO_BLACK
	special SelectMoveDeleterMove
	fadescreen FADE_FROM_BLACK
	compare VAR_0x8005, MAX_MON_MOVES
	goto_if_eq MoveDeleter_EventScript_ChooseMonForMoveDeleter
	special BufferMoveDeleterNicknameAndMove
	msgbox MoveDeleter_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MoveDeleter_EventScript_ForgetMove
	goto MoveDeleter_EventScript_CancelForgetMove
	end

MoveDeleter_EventScript_ForgetMove::
	special MoveDeleterForgetMove
	playfanfare MUS_MOVE_DELETED
	waitfanfare
	msgbox MoveDeleter_Text_MonHasForgottenMoveCompletely
	release
	end

MoveDeleter_EventScript_CantForgetOnlyMove::
	special BufferMoveDeleterNicknameAndMove
	msgbox MoveDeleter_Text_MonOnlyKnowsOneMove
	release
	end

MoveDeleter_EventScript_CantForgetMoveEgg::
	msgbox MoveDeleter_Text_NoEggShouldKnowMoves
	release
	end

MoveDeleter_EventScript_CancelForgetMove::
	msgbox MoveDeleter_Text_ComeAgainToForgetOtherMoves
	release
	end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Name Rater @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

PKMN_Center_NameRater_EventScript::
	lock
	faceplayer
	msgbox NameRater_Text_WantMeToRateNicknames, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NameRater_EventScript_ChooseMon
	compare VAR_RESULT, NO
	goto_if_eq NameRater_EventScript_DontRateNickname
	end

NameRater_EventScript_ChooseMon::
	msgbox NameRater_Text_CritiqueWhichMonsNickname
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_SIZE
	goto_if_lt NameRater_EventScript_CheckCanRateMon
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge NameRater_EventScript_DontRateNickname
	end

NameRater_EventScript_DontRateNickname::
	msgbox NameRater_Text_ISeeComeVisitAgain
	release
	end

NameRater_EventScript_CheckCanRateMon::
	specialvar VAR_RESULT, GetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq NameRater_EventScript_CantNicknameEgg
	special BufferMonNickname
	special IsMonOTIDNotPlayers
	compare VAR_RESULT, TRUE
	goto_if_eq NameRater_EventScript_CantNicknameTradeMon
	specialvar VAR_RESULT, IsMonOTNameNotPlayers
	special BufferMonNickname
	compare VAR_RESULT, TRUE
	goto_if_eq NameRater_EventScript_CantNicknameTradeMon
	msgbox NameRater_Text_GiveItANicerName, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NameRater_EventScript_ChooseNewNickname
	compare VAR_RESULT, NO
	goto_if_eq NameRater_EventScript_DontRateNickname
	end

NameRater_EventScript_CantNicknameEgg::
	msgbox NameRater_Text_ThatIsMerelyAnEgg
	release
	end

NameRater_EventScript_CantNicknameTradeMon::
	msgbox NameRater_Text_TrulyImpeccableName
	release
	end

NameRater_EventScript_ChooseNewNickname::
	msgbox NameRater_Text_WhatShallNewNicknameBe
	call EventScript_ChangePokemonNickname
	specialvar VAR_RESULT, NameRaterWasNicknameChanged
	special BufferMonNickname
	compare VAR_RESULT, TRUE
	goto_if_eq NameRater_EventScript_ChoseNewNickname
	msgbox NameRater_Text_FromNowOnShallBeKnownAsSameName
	release
	end

NameRater_EventScript_ChoseNewNickname::
	msgbox NameRater_Text_FromNowOnShallBeKnownAsName
	release
	end

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ Strings @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

PKMN_Center_Move_Tutor_General_Exit::
	msgbox PKMN_Center_Move_Tutor_General_Exit_Text
	release
	end

PKMN_Center_Move_Tutor_Text_HowCanHelp:
	.string "How can I help you today?$"

PKMN_Center_Move_Tutor_Text_WhichSetofMoves:
	.string "Which set of moves would you\n"
	.string "like to choose from?$"

PKMN_Center_Move_Tutor_Text_WhichMove:
	.string "Which move would should I\n"
	.string "teach to your Pokemon?$"
	
PKMN_Center_Move_Tutor_Text_IsThisRightMove:
	.string "The move {STR_VAR_1}, is it?$"

PKMN_Center_Move_Tutor_Text_TeachMoveToWhichMon:
	.string "Which Pokemon should learn\n"
	.string "{STR_VAR_1}?$"
	
PKMN_Center_Move_Tutor_Text_TeachAnotherMove:
	.string "Would you like me to teach\n"
    .string "another move?$"

PKMN_Center_Move_Tutor_Text_SeeYou:
	.string "See you later, then!$"

PKMN_Center_MoveReminder_Text_WantMeToTeachMove:
	.string "Would you like a Pokemon to remember\n"
	.string "a move it has forgotten?$"

PKMN_Center_MoveReminder_Text_TutorWhichMon:
	.string "Which Pokemon should remember a move?$"

PKMN_Center_MoveReminder_Text_TeachWhichMove:
	.string "Which move would you like it to\n"
	.string "remember?$"

PKMN_Center_MoveReminder_Text_DontHaveMoveToTeachPokemon:
	.string "I'm sorry, that Pokemon doesn't have\n"
	.string "any moves it can remember.$"

PKMN_Center_MoveReminder_Text_CantTeachEgg:
	.string "I'm sorry, an Egg can't remember any\n"
	.string "moves.$"

PKMN_Center_MoveReminder_Text_RememberAnotherMove:
	.string "Would you like a Pokemon to remember\n"
	.string "another move?$"
	
PKMN_Center_MoveDeleter_Text_ICanMakeMonForgetMove:
	.string "Would you like one of your Pokemon\n"
	.string "to forget a move?$"

PKMN_Center_MoveDeleter_Text_WhichMonShouldForget:
	.string "Which Pokemon should forget a move?$"

PKMN_Center_MoveDeleter_Text_WhichMoveShouldBeForgotten:
	.string "Which move should be forgotten?$"

PKMN_Center_MoveDeleter_Text_MonOnlyKnowsOneMove:
	.string "{STR_VAR_1} knows only one move,\n"
	.string "so it can't be forgotten.$"

PKMN_Center_MoveDeleter_Text_MonsMoveShouldBeForgotten:
	.string "Hm! {STR_VAR_1}'s {STR_VAR_2}?\n"
	.string "That move should be forgotten?$"

PKMN_Center_MoveDeleter_Text_MonHasForgottenMove:
	.string "It worked to perfection!\p"
	.string "{STR_VAR_1} has forgotten\n"
	.string "{STR_VAR_2} completely.$"

PKMN_Center_MoveDeleter_Text_EggCantForgetMoves:
	.string "What?\n"
	.string "No Egg should know any moves.$"
	
NameRater_Text_WantMeToRateNicknames::
    .string "Hello, hello!\n"
    .string "I am the official NAME RATER!\p"
    .string "Want me to rate the nicknames of\n"
    .string "your POKeMON?$"

NameRater_Text_CritiqueWhichMonsNickname::
    .string "Which POKeMON's nickname should\n"
    .string "I critique?$"

NameRater_Text_GiveItANicerName::
    .string "{STR_VAR_1}, is it?\n"
    .string "That is a decent nickname!\p"
    .string "But, would you like me to give it\n"
    .string "a nicer name?\p"
    .string "How about it?$"

NameRater_Text_WhatShallNewNicknameBe::
    .string "Ah, good. Then, what shall the new\n"
    .string "nickname be?$"

NameRater_Text_FromNowOnShallBeKnownAsName::
    .string "Done! From now on, this POKeMON\n"
    .string "shall be known as {STR_VAR_1}!\p"
    .string "It is a better name than before!\n"
    .string "How fortunate for you!$"

NameRater_Text_ISeeComeVisitAgain::
    .string "I see.\n"
    .string "Do come visit again.$"

NameRater_Text_FromNowOnShallBeKnownAsSameName::
    .string "Done! From now on, this POKeMON\n"
    .string "shall be known as {STR_VAR_1}!\p"
    .string "It looks no different from before,\n"
    .string "and yet, this is vastly superior!\p"
    .string "How fortunate for you!$"

NameRater_Text_TrulyImpeccableName::
    .string "{STR_VAR_1}, is it?\n"
    .string "That is a truly impeccable name!\p"
    .string "Take good care of {STR_VAR_1}!$"

NameRater_Text_ThatIsMerelyAnEgg::
    .string "Now, now.\n"
    .string "That is merely an EGG!$"
	
Relearn_Move_Text_TeachMonMove::
    .string "I'm the POKeMON MOVE MANIAC.\p"
    .string "I know every single move that\n"
    .string "POKeMON learn growing up.\p"
    .string "I'll teach a move to one\n"
    .string "POKeMON. IT'S FREE!$"

Relearn_Move_Text_WantMeToTeachMove:
    .string "Do you want me to teach a move\n"
    .string "to a POKeMON of yours?$"

Relearn_Move_Text_TutorWhichMon::
    .string "Which POKeMON needs tutoring?$"

Relearn_Move_Text_TeachWhichMove::
    .string "Which move should I teach?$"

Relearn_Move_Text_NoMoveICanTeachThatMon::
    .string "Sorry...\p"
    .string "It doesn't appear as if I have a\n"
    .string "move I can teach that POKeMON.$"

Relearn_Move_Text_End::
    .string "If your POKeMON need to learn a\n"
    .string "move, come back.$"

Relearn_Move_Text_CantTeachAnEgg::
    .string "Hunh? There isn't a single move\n"
    .string "that I can teach an EGG.$"
	
MoveDeleter_Text_WouldYouLikeToForgetMove::
    .string "Uh...\n"
    .string "Oh, yes, I'm the MOVE DELETER.\p"
    .string "I can make POKeMON forget their\n"
    .string "moves.\p"
    .string "Would you like me to do that?$"

MoveDeleter_Text_WhichMonShouldForgetMove::
    .string "Which POKeMON should forget a\n"
    .string "move?$"

MoveDeleter_Text_WhichMoveShouldBeForgotten::
    .string "Which move should be forgotten?$"

MoveDeleter_Text_MonOnlyKnowsOneMove::
    .string "{STR_VAR_1} seems to know only one\n"
    .string "move...$"

MoveDeleter_Text_MonsMoveShouldBeForgotten::
    .string "Hm! {STR_VAR_1}'s {STR_VAR_2}?\n"
    .string "That move should be forgotten?$"

MoveDeleter_Text_MonHasForgottenMoveCompletely::
    .string "It worked to perfection!\p"
    .string "{STR_VAR_1} has forgotten\n"
    .string "{STR_VAR_2} completely.$"

MoveDeleter_Text_ComeAgainToForgetOtherMoves::
    .string "Come again if there are other\n"
    .string "moves to be forgotten.$"

MoveDeleter_Text_NoEggShouldKnowMoves::
    .string "What?\n"
    .string "No EGG should know any moves.$"
	
PKMN_Center_Move_Tutor_General_Exit_Text::
    .string "Come back!$"
