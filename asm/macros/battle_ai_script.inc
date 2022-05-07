	.macro if_random_less_than percent:req, ptr:req
	.byte 0x00
	.byte \percent
	.4byte \ptr
	.endm

	@ unused
	.macro if_random_greater_than percent:req, ptr:req
	.byte 0x01
	.byte \percent
	.4byte \ptr
	.endm

	@ unused
	.macro if_random_equal ptr:req
	.byte 0x02
	.4byte \ptr
	.endm

	@ unused
	.macro if_random_not_equal ptr:req
	.byte 0x03
	.4byte \ptr
	.endm

	.macro score score:req
	.byte 0x04
	.byte \score
	.endm

	.macro if_hp_less_than battler:req, percent:req, ptr:req
	.byte 0x05
	.byte \battler
	.byte \percent
	.4byte \ptr
	.endm

	.macro if_hp_more_than battler:req, percent:req, ptr:req
	.byte 0x06
	.byte \battler
	.byte \percent
	.4byte \ptr
	.endm

	.macro if_hp_equal battler:req, percent:req, ptr:req
	.byte 0x07
	.byte \battler
	.byte \percent
	.4byte \ptr
	.endm

	.macro if_hp_not_equal battler:req, percent:req, ptr:req
	.byte 0x08
	.byte \battler
	.byte \percent
	.4byte \ptr
	.endm

	.macro if_status battler:req, status:req, ptr:req
	.byte 0x09
	.byte \battler
	.4byte \status
	.4byte \ptr
	.endm

	.macro if_not_status battler:req, status:req, ptr:req
	.byte 0x0a
	.byte \battler
	.4byte \status
	.4byte \ptr
	.endm

	.macro if_status2 battler:req, status:req, ptr:req
	.byte 0x0b
	.byte \battler
	.4byte \status
	.4byte \ptr
	.endm

	.macro if_not_status2 battler:req, status:req, ptr:req
	.byte 0x0c
	.byte \battler
	.4byte \status
	.4byte \ptr
	.endm

	.macro if_status3 battler:req, status:req, ptr:req
	.byte 0x0d
	.byte \battler
	.4byte \status
	.4byte \ptr
	.endm

	.macro if_not_status3 battler:req, status:req, ptr:req
	.byte 0x0e
	.byte \battler
	.4byte \status
	.4byte \ptr
	.endm

	.macro if_side_affecting battler:req, sidestatus:req, ptr:req
	.byte 0x0f
	.byte \battler
	.4byte \sidestatus
	.4byte \ptr
	.endm

	.macro if_not_side_affecting battler:req, sidestatus:req, ptr:req
	.byte 0x10
	.byte \battler
	.4byte \sidestatus
	.4byte \ptr
	.endm

	.macro if_less_than value:req, ptr:req
	.byte 0x11
	.byte \value
	.4byte \ptr
	.endm

	.macro if_more_than value:req, ptr:req
	.byte 0x12
	.byte \value
	.4byte \ptr
	.endm

	.macro if_equal value:req, ptr:req
	.byte 0x13
	.byte \value
	.4byte \ptr
	.endm

	.macro if_not_equal value:req, ptr:req
	.byte 0x14
	.byte \value
	.4byte \ptr
	.endm

	.macro if_less_than_ptr value:req, ptr:req
	.byte 0x15
	.4byte \value
	.4byte \ptr
	.endm

	.macro if_more_than_ptr value:req, ptr:req
	.byte 0x16
	.4byte \value
	.4byte \ptr
	.endm

	.macro if_equal_ptr value:req, ptr:req
	.byte 0x17
	.4byte \value
	.4byte \ptr
	.endm

	.macro if_not_equal_ptr value:req, ptr:req
	.byte 0x18
	.4byte \value
	.4byte \ptr
	.endm

	.macro if_move move:req, ptr:req
	.byte 0x19
	.2byte \move
	.4byte \ptr
	.endm

	.macro if_not_move move:req, ptr:req
	.byte 0x1a
	.2byte \move
	.4byte \ptr
	.endm

	.macro if_in_bytes list:req, ptr:req
	.byte 0x1b
	.4byte \list
	.4byte \ptr
	.endm

	.macro if_not_in_bytes list:req, ptr:req
	.byte 0x1c
	.4byte \list
	.4byte \ptr
	.endm

	.macro if_in_hwords list:req, ptr:req
	.byte 0x1d
	.4byte \list
	.4byte \ptr
	.endm

	.macro if_not_in_hwords list:req, ptr:req
	.byte 0x1e
	.4byte \list
	.4byte \ptr
	.endm

	.macro if_user_has_attacking_move ptr:req
	.byte 0x1f
	.4byte \ptr
	.endm

	.macro if_user_has_no_attacking_moves ptr:req
	.byte 0x20
	.4byte \ptr
	.endm

	.macro get_turn_count
	.byte 0x21
	.endm

	.macro get_type byte:req
	.byte 0x22
	.byte \byte
	.endm

	.macro get_considered_move_power
	.byte 0x23
	.endm

	.macro get_how_powerful_move_is
	.byte 0x24
	.endm

	.macro get_last_used_move battler:req
	.byte 0x25
	.byte \battler
	.endm

	.macro if_equal_ type:req, ptr:req
	.byte 0x26
	.byte \type
	.4byte \ptr
	.endm

	@ unused
	.macro if_not_equal_ type:req, ptr:req
	.byte 0x27
	.byte \type
	.4byte \ptr
	.endm

	.macro if_would_go_first battler:req, ptr:req
	.byte 0x28
	.byte \battler
	.4byte \ptr
	.endm

	.macro if_would_not_go_first battler:req, ptr:req
	.byte 0x29
	.byte \battler
	.4byte \ptr
	.endm

	@ nullsub
	.macro ai_2a
	.byte 0x2a
	.endm

	@ nullsub
	.macro ai_2b
	.byte 0x2b
	.endm

	.macro count_alive_pokemon battler:req
	.byte 0x2c
	.byte \battler
	.endm

	@ unused
	.macro get_considered_move
	.byte 0x2d
	.endm

	.macro get_considered_move_effect
	.byte 0x2e
	.endm

	.macro get_ability battler:req
	.byte 0x2f
	.byte \battler
	.endm

	@ unused
	.macro get_highest_type_effectiveness
	.byte 0x30
	.endm

	.macro if_type_effectiveness effectiveness:req, ptr:req
	.byte 0x31
	.byte \effectiveness
	.4byte \ptr
	.endm

	@ nullsub
	.macro ai_32
	.byte 0x32
	.endm

	@ nullsub
	.macro ai_33
	.byte 0x33
	.endm

	.macro if_status_in_party battler:req, status:req, ptr:req
	.byte 0x34
	.byte \battler
	.4byte \status
	.4byte \ptr
	.endm

	@ bugged
	.macro if_status_not_in_party battler:req, status:req, ptr:req
	.byte 0x35
	.byte \battler
	.4byte \status
	.4byte \ptr
	.endm

	.macro get_weather
	.byte 0x36
	.endm

	.macro if_effect byte:req, ptr:req
	.byte 0x37
	.byte \byte
	.4byte \ptr
	.endm

	.macro if_not_effect byte:req, ptr:req
	.byte 0x38
	.byte \byte
	.4byte \ptr
	.endm

	.macro if_stat_level_less_than battler:req, stat:req, level:req, ptr:req
	.byte 0x39
	.byte \battler
	.byte \stat
	.byte \level
	.4byte \ptr
	.endm

	.macro if_stat_level_more_than battler:req, stat:req, level:req, ptr:req
	.byte 0x3a
	.byte \battler
	.byte \stat
	.byte \level
	.4byte \ptr
	.endm

	.macro if_stat_level_equal battler:req, stat:req, level:req, ptr:req
	.byte 0x3b
	.byte \battler
	.byte \stat
	.byte \level
	.4byte \ptr
	.endm

	.macro if_stat_level_not_equal battler:req, stat:req, level:req, ptr:req
	.byte 0x3c
	.byte \battler
	.byte \stat
	.byte \level
	.4byte \ptr
	.endm

	.macro if_can_faint ptr:req
	.byte 0x3d
	.4byte \ptr
	.endm

	.macro if_cant_faint ptr:req
	.byte 0x3e
	.4byte \ptr
	.endm

	.macro if_has_move battler:req, move:req, ptr:req
	.byte 0x3f
	.byte \battler
	.2byte \move
	.4byte \ptr
	.endm

	@ unused
	.macro if_doesnt_have_move battler:req, move:req, ptr:req
	.byte 0x40
	.byte \battler
	.2byte \move
	.4byte \ptr
	.endm

	.macro if_has_move_with_effect battler:req, effect:req, ptr:req
	.byte 0x41
	.byte \battler
	.byte \effect
	.4byte \ptr
	.endm

	.macro if_doesnt_have_move_with_effect battler:req, effect:req, ptr:req
	.byte 0x42
	.byte \battler
	.byte \effect
	.4byte \ptr
	.endm

	.macro if_any_move_disabled_or_encored battler:req, byte:req, ptr:req
	.byte 0x43
	.byte \battler
	.byte \byte
	.4byte \ptr
	.endm

	.macro if_curr_move_disabled_or_encored battler:req, ptr:req
	.byte 0x44
	.byte \battler
	.4byte \ptr
	.endm

	.macro flee
	.byte 0x45
	.endm

	.macro if_random_safari_flee ptr:req
	.byte 0x46
	.4byte \ptr
	.endm

	.macro watch
	.byte 0x47
	.endm

	.macro get_hold_effect battler:req
	.byte 0x48
	.byte \battler
	.endm

	.macro get_gender battler:req
	.byte 0x49
	.byte \battler
	.endm

	.macro is_first_turn_for battler:req
	.byte 0x4a
	.byte \battler
	.endm

	.macro get_stockpile_count battler:req
	.byte 0x4b
	.byte \battler
	.endm

	.macro is_double_battle
	.byte 0x4c
	.endm

	.macro get_used_held_item battler:req
	.byte 0x4d
	.byte \battler
	.endm

	.macro get_move_type_from_result
	.byte 0x4e
	.endm

	.macro get_move_power_from_result
	.byte 0x4f
	.endm

	.macro get_move_effect_from_result
	.byte 0x50
	.endm

	.macro get_protect_count battler:req
	.byte 0x51
	.byte \battler
	.endm

	@ nullsub
	.macro ai_52
	.byte 0x52
	.endm

	@ nullsub
	.macro ai_53
	.byte 0x53
	.endm

	@ nullsub
	.macro ai_54
	.byte 0x54
	.endm

	@ nullsub
	.macro ai_55
	.byte 0x55
	.endm

	@ nullsub
	.macro ai_56
	.byte 0x56
	.endm

	@ nullsub
	.macro ai_57
	.byte 0x57
	.endm

	.macro call ptr:req
	.byte 0x58
	.4byte \ptr
	.endm

	.macro goto ptr:req
	.byte 0x59
	.4byte \ptr
	.endm

	.macro end
	.byte 0x5a
	.endm

	.macro if_level_cond cond:req, ptr:req
	.byte 0x5b
	.byte \cond
	.4byte \ptr
	.endm

	.macro if_user_higher_level ptr:req
	if_level_cond 0, \ptr
	.endm

	.macro if_target_higher_level ptr:req
	if_level_cond 1, \ptr
	.endm

	.macro if_equal_levels ptr:req
	if_level_cond 2, \ptr
	.endm

	.macro if_target_taunted ptr:req
	.byte 0x5c
	.4byte \ptr
	.endm

	.macro if_target_not_taunted ptr:req
	.byte 0x5d
	.4byte \ptr
	.endm
	
@ New AIs
	
	.macro if_target_is_ally param0:req
	.byte 0x5e
	.4byte \param0
	.endm
	
	.macro is_of_type battler:req, type:req
	.byte 0x5f
	.byte \battler
	.byte \type
	.endm

	.macro check_ability battler:req, ability:req
	.byte 0x60
	.byte \battler
	.byte \ability
	.endm

	.macro if_flash_fired battler:req, param1:req
	.byte 0x61
	.byte \battler
	.4byte \param1
	.endm

	.macro if_holds_item battler:req, param1:req, param2:req
	.byte 0x62
	.byte \battler
	.2byte \param1
	.4byte \param2
	.endm
	
	.macro get_hazards_count battler:req, effect:req
	.byte 0x63
	.byte \battler
	.2byte \effect
	.endm
	
	.macro get_curr_dmg_hp_percent
	.byte 0x64
	.endm
	
	.macro if_hp_condition param1:req, param2:req
	.byte 0x65
	.byte \param1
	.4byte \param2
	.endm
	
    .macro if_accuracy_less_than acc:req, param2:req
    .byte 0x66
    .byte \acc
    .4byte \param2
    .endm
	
    .macro if_not_expected_to_sleep param:req
    .byte 0x67
    .4byte \param
    .endm
	
    .macro if_receiving_wish battler:req, param:req
    .byte 0x68
    .byte \battler
    .4byte \param
    .endm
	
    .macro if_target_wont_attack_due_to_truant param:req
    .byte 0x69
    .4byte \param
    .endm
	
    .macro if_trick_fails_in_this_type_of_battle param:req
    .byte 0x6a
    .4byte \param
    .endm
	
    .macro calculate_nhko battler
    .byte 0x6b
    .ifnb \battler
        .byte \battler
    .else
        .byte AI_USER
    .endif
    .endm

    .macro if_next_turn_target_might_use_move_with_effect effect:req param:req
    .byte 0x6c
    .byte \effect
    .4byte \param
    .endm
	
	.macro if_battler_absent battler:req, ptr:req
	.byte 0x6d
	.byte \battler
	.4byte \ptr
	.endm
	
    .macro get_possible_categories_of_foes_attacks
    .byte 0x6e
    .endm

    .macro if_perish_song_not_about_to_trigger battler:req, ptr:req
    .byte 0x6f
    .byte \battler
    .4byte \ptr
    .endm

    .macro if_high_change_to_break_sub_and_keep_hitting ptr:req
    .byte 0x70
    .4byte \ptr
    .endm

    .macro if_user_has_revealed_move move:req, ptr:req
    .byte 0x71
    .2byte \move
    .4byte \ptr
    .endm

	.macro if_has_non_ineffective_move_with_effect battler:req, param1:req, param2:req
	.byte 0x72
	.byte \battler
	.byte \param1
	.4byte \param2
	.endm

	.macro if_doesnt_have_non_ineffective_move_with_effect battler:req, param1:req, param2:req
	.byte 0x73
	.byte \battler
	.byte \param1
	.4byte \param2
	.endm


@ useful script macros
	.macro get_curr_move_type
	get_type AI_TYPE_MOVE
	.endm
	
	.macro get_user_type1
	get_type AI_TYPE1_USER
	.endm
	
	.macro get_user_type2
	get_type AI_TYPE2_USER
	.endm
	
	.macro get_target_type1
	get_type AI_TYPE1_TARGET
	.endm
	
	.macro get_target_type2
	get_type AI_TYPE2_TARGET
	.endm
	
@ New other AIs

	.macro if_ability battler:req, ability:req, ptr:req
	check_ability \battler, \ability
	if_equal 1, \ptr
	.endm
	
	.macro if_no_ability battler:req, ability:req, ptr:req
	check_ability \battler, \ability
	if_equal 0, \ptr
	.endm
	
	.macro if_ability_might_be battler:req, ability:req, ptr:req
	check_ability \battler, \ability
	if_not_equal 0, \ptr
	.endm
	
	.macro if_type battler:req, type:req, ptr:req
	is_of_type \battler, \type
	if_equal 1, \ptr
	.endm

	.macro if_no_type battler:req, type:req, ptr:req
	is_of_type \battler, \type
	if_equal 0, \ptr
	.endm
	
@ Other Old AIs

	.macro if_target_faster ptr:req
	if_would_go_first 1, \ptr
	.endm
	
	.macro if_user_faster ptr:req
	if_would_go_first 0, \ptr
	.endm

	.macro if_double_battle ptr:req
	is_double_battle
	if_equal 1, \ptr
	.endm
	
	.macro if_not_double_battle ptr:req
	is_double_battle
	if_equal 0, \ptr
	.endm

	.macro if_any_move_disabled battler:req, ptr:req
	if_any_move_disabled_or_encored \battler, 0, \ptr
	.endm
	
	.macro if_any_move_encored battler:req, ptr:req
	if_any_move_disabled_or_encored \battler, 1, \ptr
	.endm
	
@ New other AIs

	.macro if_has_a_50_percent_hp_recovery_move battler:req, ptr:req
    if_has_move_with_effect \battler, EFFECT_RESTORE_HP, \ptr
    if_has_move_with_effect \battler, EFFECT_SOFTBOILED, \ptr
    if_has_move_with_effect \battler, EFFECT_MORNING_SUN, \ptr
    if_has_move_with_effect \battler, EFFECT_MOONLIGHT, \ptr
    if_has_move_with_effect \battler, EFFECT_SHORE_UP, \ptr
    if_has_move_with_effect \battler, EFFECT_SYNTHESIS, \ptr
    .endm
	
	.macro if_this_attack_might_be_the_last ptr:req
    @ Si tiene la Evasión subida, tiene una pequeña probabilidad de jugársela
    @ (7/8 a +2 o +3, 49/64 a +4 o más)
    @ (la probabilidad de jugársela en alguno de los turnos en los que se está 
    @ subiendo la Evasión hasta +6 es de aproximadamente un 49%)
    if_has_non_ineffective_move_with_effect AI_TARGET, EFFECT_ALWAYS_HIT, .AI_skip_evasion_check_\@
    if_stat_level_less_than AI_USER, STAT_EVASION, 8, .AI_skip_evasion_check_\@
    if_random_less_than 32, \ptr
    if_stat_level_less_than AI_USER, STAT_EVASION, 10, .AI_skip_evasion_check_\@
    if_random_less_than 32, \ptr
    .AI_skip_evasion_check_\@:
    calculate_nhko AI_TARGET
	if_equal 1, .AI_attack_is_the_last_unless_faster_and_with_sub\@
    if_more_than 2, .AI_attack_is_probably_not_the_last_\@
    if_status2 AI_USER, STATUS2_SUBSTITUTE, .AI_attack_is_probably_not_the_last_\@
    if_target_faster \ptr
    goto .AI_attack_is_probably_not_the_last_\@
    .AI_attack_is_the_last_unless_faster_and_with_sub\@:
    if_not_status2 AI_USER, STATUS2_SUBSTITUTE, \ptr
    if_target_faster \ptr
	.AI_attack_is_probably_not_the_last_\@:
    .endm
	
	.macro if_target_might_have_a_sub_before_our_attack ptr:req
    if_status2 AI_TARGET, STATUS2_SUBSTITUTE, \ptr
    if_user_faster .AI_target_not_expected_to_use_sub_\@
    if_hp_condition TARGET_CANNOT_USE_SUB, .AI_target_not_expected_to_use_sub_\@
    if_has_move_with_effect AI_TARGET, EFFECT_SUBSTITUTE, \ptr
	.AI_target_not_expected_to_use_sub_\@:
    .endm
	
    .macro if_free_setup_turn_assuming_target_will_be_slower ptr:req
    if_status2 AI_TARGET, STATUS2_SUBSTITUTE, .AI_no_free_setup_\@
	if_target_wont_attack_due_to_truant \ptr
    if_hp_less_than AI_USER, 100, .AI_no_free_setup_\@
    if_has_non_ineffective_move_with_effect AI_TARGET, EFFECT_QUICK_ATTACK, .AI_no_free_setup_\@
    if_ability AI_USER, ABILITY_STURDY, \ptr
    if_holds_item AI_USER, ITEM_FOCUS_SASH, \ptr
    .AI_no_free_setup_\@:
    .endm

    .macro if_free_setup_turn ptr:req
    if_target_faster .AI_no_free_setup_\@
    if_free_setup_turn_assuming_target_will_be_slower \ptr
    .AI_no_free_setup_\@:
    .endm
	
	.macro if_target_not_expected_to_sleep ptr:req
    if_not_status AI_TARGET, STATUS1_SLEEP, \ptr
    @ Comprueba si el status de sueño es 5 (101 en binario), en cuyo caso va a despertar
    if_not_status AI_TARGET, 1, .AI_target_might_be_sleeping_\@
    if_status AI_TARGET, 2, .AI_target_might_be_sleeping_\@
    if_status AI_TARGET, 4, \ptr
    .AI_target_might_be_sleeping_\@:
    .endm
	
   @ Determina que el usuario puede boostearse tranquilamente:
    @ - Si el rival no puede debilitarlo en 3 golpes (ni con movs desconocidos probables), o si está durmiendo (y no tiene Sleep Talk) o congelado y no puede debilitarlo en 2 golpes
    @ - Escenario A: Si tiene movs de curación del 50% y el rival no puede debilitarlo en 2 golpes
    @ - Escenario B: Si tiene movs de curación (incluido Rest), el mov boostea la defensa por la que
    @    ataca el rival, el usuario tiene Restos (o con Rest, Chesto o Lum Berry) y el rival no hace OHKO
    @ (si el usuario es más lento, hace lo mismo pero exigiendo un golpe más)
	@ No considera seguro boostearse si está intoxicado o si puede recibir Taunt
    @ o si puede recibir Haze o movs de phazeo
	.macro if_user_can_probably_boost_safely ptr:req
	if_user_is_intoxicated_and_does_not_have_baton_pass .AI_user_might_not_be_able_to_boost_safely_\@
    if_status3 AI_USER, STATUS3_PERISH_SONG, .AI_user_might_not_be_able_to_boost_safely_\@
    if_next_turn_target_might_use_move_with_effect EFFECT_HAZE, .AI_user_might_not_be_able_to_boost_safely_\@
    if_next_turn_target_might_use_move_with_effect EFFECT_ROAR, .AI_check_if_user_can_be_phazed_\@
    goto .AI_everything_ok_calculate_nhko_\@

    .AI_check_if_user_can_be_phazed_\@:
    count_alive_pokemon AI_USER
    if_equal 0, .AI_everything_ok_calculate_nhko_\@
    if_ability AI_USER, ABILITY_SUCTION_CUPS, .AI_everything_ok_calculate_nhko_\@
    if_status3 AI_USER, STATUS3_ROOTED, .AI_everything_ok_calculate_nhko_\@
    goto .AI_user_might_not_be_able_to_boost_safely_\@

    .AI_everything_ok_calculate_nhko_\@:
	calculate_nhko AI_TARGET | AI_NHKO_PESSIMISTIC
	if_effect EFFECT_CURSE, .AI_user_slower_\@
    if_target_faster .AI_user_slower_\@

    if_target_not_expected_to_sleep .AI_user_faster_target_not_sleeping_\@
    if_has_move_with_effect AI_TARGET, EFFECT_SLEEP_TALK, .AI_user_faster_target_not_sleeping_\@
    if_more_than 2, \ptr
    .AI_user_faster_target_not_sleeping_\@:
    if_not_status AI_TARGET, STATUS1_FREEZE, .AI_user_faster_target_not_statused_\@
    if_more_than 2, \ptr
    
    .AI_user_faster_target_not_statused_\@:
    if_more_than 3, \ptr
    if_equal 3, .AI_check_scenarios_A_and_B_\@
    if_equal 2, .AI_check_scenario_B_\@
    goto .AI_user_might_not_be_able_to_boost_safely_\@

    .AI_check_scenarios_A_and_B_\@:
    if_has_a_50_percent_hp_recovery_move AI_USER, \ptr
    .AI_check_scenario_B_\@:
    get_possible_categories_of_foes_attacks
    if_effect EFFECT_BULK_UP, .AI_check_scenario_B_move_boosts_physical_defense\@
    if_effect EFFECT_CURSE, .AI_check_scenario_B_move_boosts_physical_defense\@
    if_effect EFFECT_COIL, .AI_check_scenario_B_move_boosts_physical_defense\@
    if_effect EFFECT_CALM_MIND, .AI_check_scenario_B_move_boosts_physical_defense\@
    if_effect EFFECT_QUIVER_DANCE, .AI_check_scenario_B_move_boosts_physical_defense\@
    goto .AI_user_might_not_be_able_to_boost_safely_\@

    .AI_check_scenario_B_move_boosts_physical_defense\@:
    if_equal AI_PHYSICAL_ONLY, .AI_check_scenario_B_move_boosts_proper_defense\@
    if_equal AI_ONLY_PHYSICAL_KNOWN, .AI_check_scenario_B_move_boosts_proper_defense\@
    if_equal AI_UNKNOWN_CATEGORIES_PROBABLY_PHYSICAL, .AI_check_scenario_B_move_boosts_proper_defense\@
    goto .AI_user_might_not_be_able_to_boost_safely_\@

    .AI_check_scenario_B_move_boosts_special_defense\@:
    if_equal AI_SPECIAL_ONLY, .AI_check_scenario_B_move_boosts_proper_defense\@
    if_equal AI_ONLY_SPECIAL_KNOWN, .AI_check_scenario_B_move_boosts_proper_defense\@
    if_equal AI_UNKNOWN_CATEGORIES_PROBABLY_SPECIAL, .AI_check_scenario_B_move_boosts_proper_defense\@
    goto .AI_user_might_not_be_able_to_boost_safely_\@

    .AI_check_scenario_B_move_boosts_proper_defense\@:
    if_holds_item AI_USER, ITEM_LEFTOVERS, .AI_check_recovery_move_\@
    if_holds_item AI_USER, ITEM_CHESTO_BERRY, .AI_check_Rest_\@
    if_holds_item AI_USER, ITEM_LUM_BERRY, .AI_check_Rest_\@
    goto .AI_user_might_not_be_able_to_boost_safely_\@
    .AI_check_recovery_move_\@:
    if_has_a_50_percent_hp_recovery_move AI_USER, \ptr
    .AI_check_Rest_\@:
    if_has_move_with_effect AI_USER, EFFECT_REST, \ptr
    goto .AI_user_might_not_be_able_to_boost_safely_\@

    .AI_user_slower_\@:
    if_next_turn_target_might_use_move_with_effect EFFECT_TAUNT, .AI_user_might_not_be_able_to_boost_safely_\@

    if_target_not_expected_to_sleep .AI_user_slower_target_not_sleeping_\@
	
	if_has_move_with_effect AI_TARGET, EFFECT_SLEEP_TALK, .AI_user_slower_target_not_sleeping_\@
    if_more_than 3, \ptr
    .AI_user_slower_target_not_sleeping_\@:
    if_not_status AI_TARGET, STATUS1_FREEZE, .AI_user_slower_target_not_statused_\@
    if_more_than 3, \ptr
    
    .AI_user_slower_target_not_statused_\@:
    if_more_than 4, \ptr
    if_equal 4, .AI_check_scenarios_A_and_B_\@
    if_equal 3, .AI_check_scenario_B_\@
    .AI_user_might_not_be_able_to_boost_safely_\@:
    .endm
	
	.macro if_user_is_intoxicated_and_does_not_have_baton_pass ptr:req
    if_not_status AI_USER, STATUS1_TOXIC_POISON, .AI_no_problem_with_toxic_\@
    if_has_move_with_effect AI_USER, EFFECT_BATON_PASS, .AI_no_problem_with_toxic_\@
    if_has_move_with_effect AI_USER, EFFECT_REST, .AI_no_problem_with_toxic_\@
    if_has_move_with_effect AI_USER, EFFECT_REFRESH, .AI_no_problem_with_toxic_\@
    goto \ptr
    .AI_no_problem_with_toxic_\@:
    .endm
	
    .macro if_move_is_useless_when_choiced ptr:req
    get_considered_move_effect
    if_in_bytes AI_UselessEffectsWhenChoiced, \ptr
    if_not_effect EFFECT_CURSE, .AI_not_useless_\@
    get_user_type1
    if_equal TYPE_GHOST, .AI_not_useless_\@
    get_user_type2
    if_not_equal TYPE_GHOST, \ptr
    .AI_not_useless_\@:
    .endm
	
    .macro if_user_choiced ptr:req
    if_holds_item AI_USER, ITEM_CHOICE_BAND, \ptr
    if_holds_item AI_USER, ITEM_CHOICE_SPECS, \ptr
    if_holds_item AI_USER, ITEM_CHOICE_SCARF, \ptr
    .endm

    .macro if_target_probably_cannot_repeat_last_effect param:req
    if_next_turn_target_might_use_move_with_effect AI_LAST_EFFECT_BY_TARGET, .AI_target_might_repeat_efect_\@
    goto \param
    .AI_target_might_repeat_efect_\@:
    .endm
