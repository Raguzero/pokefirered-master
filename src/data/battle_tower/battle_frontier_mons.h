const struct FacilityMon gBattleFrontierMons[NUM_FRONTIER_MONS] =
{
    [FRONTIER_MON_SUNKERN] = {
        .species = SPECIES_SUNKERN,
        .moves = {MOVE_SOLAR_BEAM, MOVE_ENDEAVOR, MOVE_SUNNY_DAY, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_AZURILL] = {
        .species = SPECIES_AZURILL,
        .moves = {MOVE_KNOCK_OFF, MOVE_BODY_SLAM, MOVE_SING, MOVE_CHARM},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CATERPIE] = {
        .species = SPECIES_CATERPIE,
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_ELECTROWEB, MOVE_NONE},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_WEEDLE] = {
        .species = SPECIES_WEEDLE,
        .moves = {MOVE_POISON_STING, MOVE_STRING_SHOT, MOVE_ELECTROWEB, MOVE_NONE},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_WURMPLE] = {
        .species = SPECIES_WURMPLE,
        .moves = {MOVE_TACKLE, MOVE_STRING_SHOT, MOVE_POISON_STING, MOVE_ELECTROWEB},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_RALTS] = {
        .species = SPECIES_RALTS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_DAZZLING_GLEAM, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MAGIKARP] = {
        .species = SPECIES_MAGIKARP,
        .moves = {MOVE_REVERSAL, MOVE_HYDRO_PUMP, MOVE_FLAIL, MOVE_BOUNCE},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_FEEBAS] = {
        .species = SPECIES_FEEBAS,
        .moves = {MOVE_HYPNOSIS, MOVE_MIRROR_COAT, MOVE_HAZE, MOVE_SURF},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE
    },
	[FRONTIER_MON_METAPOD] = {
        .species = SPECIES_METAPOD,
        .moves = {MOVE_IRON_DEFENSE, MOVE_TACKLE, MOVE_ELECTROWEB, MOVE_SNORE},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
	[FRONTIER_MON_KAKUNA] = {
        .species = SPECIES_KAKUNA,
        .moves = {MOVE_STRING_SHOT, MOVE_POISON_STING, MOVE_ELECTROWEB, MOVE_IRON_DEFENSE},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_PICHU] = {
        .species = SPECIES_PICHU,
        .moves = {MOVE_ENDEAVOR, MOVE_THUNDER_WAVE, MOVE_COUNTER, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SILCOON] = {
        .species = SPECIES_SILCOON,
        .moves = {MOVE_IRON_DEFENSE, MOVE_ELECTROWEB, MOVE_TACKLE, MOVE_POISON_STING},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_CASCOON] = {
        .species = SPECIES_CASCOON,
        .moves = {MOVE_IRON_DEFENSE, MOVE_ELECTROWEB, MOVE_TACKLE, MOVE_POISON_STING},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_IGGLYBUFF] = {
        .species = SPECIES_IGGLYBUFF,
        .moves = {MOVE_SING, MOVE_WISH, MOVE_FLAMETHROWER, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_WOOPER] = {
        .species = SPECIES_WOOPER,
        .moves = {MOVE_YAWN, MOVE_DIG, MOVE_SURF, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_TYROGUE] = {
        .species = SPECIES_TYROGUE,
        .moves = {MOVE_MACH_PUNCH, MOVE_FAKE_OUT, MOVE_COUNTER, MOVE_TOXIC},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_SENTRET] = {
        .species = SPECIES_SENTRET,
        .moves = {MOVE_QUICK_ATTACK, MOVE_FOLLOW_ME, MOVE_HELPING_HAND, MOVE_ASSIST},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CLEFFA] = {
        .species = SPECIES_CLEFFA,
        .moves = {MOVE_SWEET_KISS, MOVE_SING, MOVE_ATTRACT, MOVE_METRONOME},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SEEDOT] = {
        .species = SPECIES_SEEDOT,
        .moves = {MOVE_BULLET_SEED, MOVE_EXPLOSION, MOVE_DEFENSE_CURL, MOVE_ROLLOUT},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_LOTAD] = {
        .species = SPECIES_LOTAD,
        .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_POOCHYENA] = {
        .species = SPECIES_POOCHYENA,
        .moves = {MOVE_CRUNCH, MOVE_SWAGGER, MOVE_MOONBLAST, MOVE_SUPER_FANG},
        .itemTableId = BATTLE_TOWER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHEDINJA] = {
        .species = SPECIES_SHEDINJA,
        .moves = {MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_X_SCISSOR, MOVE_GRUDGE},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAKUHITA] = {
        .species = SPECIES_MAKUHITA,
        .moves = {MOVE_FAKE_OUT, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_WHISMUR] = {
        .species = SPECIES_WHISMUR,
        .moves = {MOVE_COUNTER, MOVE_ENDEAVOR, MOVE_BODY_SLAM, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_ZIGZAGOON] = {
        .species = SPECIES_ZIGZAGOON,
        .moves = {MOVE_RETURN, MOVE_THUNDER_WAVE, MOVE_SHADOW_BALL, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_TOWER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZUBAT] = {
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_POISON_FANG, MOVE_LEECH_LIFE, MOVE_CONFUSE_RAY, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TOGEPI] = {
        .species = SPECIES_TOGEPI,
        .moves = {MOVE_RETURN, MOVE_YAWN, MOVE_WISH, MOVE_SWEET_KISS},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SPINARAK] = {
        .species = SPECIES_SPINARAK,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_NIGHT_SHADE, MOVE_SPIDER_WEB, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_TOWER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MARILL] = {
        .species = SPECIES_MARILL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_LIGHT_SCREEN, MOVE_RETURN},
        .itemTableId = BATTLE_TOWER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_HOPPIP] = {
        .species = SPECIES_HOPPIP,
        .moves = {MOVE_MEMENTO, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SLUGMA] = {
        .species = SPECIES_SLUGMA,
        .moves = {MOVE_FLAMETHROWER, MOVE_RECOVER, MOVE_YAWN, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SWINUB] = {
        .species = SPECIES_SWINUB,
        .moves = {MOVE_ICY_WIND, MOVE_DIG, MOVE_ROCK_TOMB, MOVE_ENDEAVOR},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_SMEARGLE] = {
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_SPIKES, MOVE_ENDEAVOR, MOVE_SPORE, MOVE_EXTREME_SPEED},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
	[FRONTIER_MON_PIDGEY] = {
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_FLY, MOVE_SAND_ATTACK, MOVE_TOXIC, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_TOWER_ITEM_SHARP_BEAK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
	[FRONTIER_MON_RATTATA] = {
        .species = SPECIES_RATTATA,
        .moves = {MOVE_HYPER_FANG, MOVE_SHADOW_BALL, MOVE_QUICK_ATTACK, MOVE_SWAGGER},
        .itemTableId = BATTLE_TOWER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WYNAUT] = {
        .species = SPECIES_WYNAUT,
        .moves = {MOVE_ENCORE, MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_SKITTY] = {
        .species = SPECIES_SKITTY,
        .moves = {MOVE_SING, MOVE_ATTRACT, MOVE_CHARM, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
	[FRONTIER_MON_SPEAROW] = {
        .species = SPECIES_SPEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_RETURN, MOVE_MIRROR_MOVE, MOVE_DRILL_RUN},
        .itemTableId = BATTLE_TOWER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HOOTHOOT] = {
        .species = SPECIES_HOOTHOOT,
        .moves = {MOVE_HEAT_WAVE, MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT},
        .itemTableId = BATTLE_TOWER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DIGLETT] = {
        .species = SPECIES_DIGLETT,
        .moves = {MOVE_MAGNITUDE, MOVE_SLASH, MOVE_ROCK_TOMB, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_TOWER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LEDYBA] = {
        .species = SPECIES_LEDYBA,
        .moves = {MOVE_ICE_PUNCH, MOVE_AGILITY, MOVE_BATON_PASS, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_TOWER_ITEM_LUCKY_PUNCH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NINCADA] = {
        .species = SPECIES_NINCADA,
        .moves = {MOVE_LEECH_LIFE, MOVE_DIG, MOVE_TOXIC, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SURSKIT] = {
        .species = SPECIES_SURSKIT,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_THIEF},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JIGGLYPUFF] = {
        .species = SPECIES_JIGGLYPUFF,
        .moves = {MOVE_SING, MOVE_WISH, MOVE_DAZZLING_GLEAM, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_TAILLOW] = {
        .species = SPECIES_TAILLOW,
        .moves = {MOVE_FLY, MOVE_QUICK_ATTACK, MOVE_ENDEAVOR, MOVE_BOOMBURST},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_WINGULL] = {
        .species = SPECIES_WINGULL,
        .moves = {MOVE_WATER_PULSE, MOVE_FLY, MOVE_KNOCK_OFF, MOVE_TOXIC},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE
    },
	[FRONTIER_MON_NIDORAN_M] = {
        .species = SPECIES_NIDORAN_M,
        .moves = {MOVE_DOUBLE_KICK, MOVE_POISON_TAIL, MOVE_DISABLE, MOVE_HELPING_HAND},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDORAN_F] = {
        .species = SPECIES_NIDORAN_F,
        .moves = {MOVE_POISON_FANG, MOVE_DOUBLE_KICK, MOVE_FLATTER, MOVE_HELPING_HAND},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KIRLIA] = {
        .species = SPECIES_KIRLIA,
        .moves = {MOVE_PSYCHIC, MOVE_WILL_O_WISP, MOVE_FUTURE_SIGHT, MOVE_DAZZLING_GLEAM},
        .itemTableId = BATTLE_TOWER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAREEP] = {
        .species = SPECIES_MAREEP,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH, MOVE_REFLECT, MOVE_COTTON_SPORE},
        .itemTableId = BATTLE_TOWER_ITEM_MAGNET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MEDITITE] = {
        .species = SPECIES_MEDITITE,
        .moves = {MOVE_HI_JUMP_KICK, MOVE_COUNTER, MOVE_FAKE_OUT, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_SLAKOTH] = {
        .species = SPECIES_SLAKOTH,
        .moves = {MOVE_YAWN, MOVE_BODY_SLAM, MOVE_ENCORE, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PARAS] = {
        .species = SPECIES_PARAS,
        .moves = {MOVE_SPORE, MOVE_LEECH_LIFE, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_TINY_MUSHROOM,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
	[FRONTIER_MON_EKANS] = {
        .species = SPECIES_EKANS,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_DIG, MOVE_SCREECH, MOVE_TORMENT},
        .itemTableId = BATTLE_TOWER_ITEM_POISON_BARB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DITTO] = {
        .species = SPECIES_DITTO,
        .moves = {MOVE_TRANSFORM, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BARBOACH] = {
        .species = SPECIES_BARBOACH,
        .moves = {MOVE_MAGNITUDE, MOVE_WATER_PULSE, MOVE_SPARK, MOVE_FUTURE_SIGHT},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BASHFUL
    },
    [FRONTIER_MON_MEOWTH] = {
        .species = SPECIES_MEOWTH,
        .moves = {MOVE_SLASH, MOVE_SHADOW_BALL, MOVE_SCREECH, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PINECO] = {
        .species = SPECIES_PINECO,
        .moves = {MOVE_EXPLOSION, MOVE_SPIKES, MOVE_COUNTER, MOVE_RAPID_SPIN},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TRAPINCH] = {
        .species = SPECIES_TRAPINCH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SIGNAL_BEAM, MOVE_SUPERPOWER},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SPHEAL] = {
        .species = SPECIES_SPHEAL,
        .moves = {MOVE_BLIZZARD, MOVE_WATER_PULSE, MOVE_HAIL, MOVE_SUPER_FANG},
        .itemTableId = BATTLE_TOWER_ITEM_NEVER_MELT_ICE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HORSEA] = {
        .species = SPECIES_HORSEA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_AGILITY, MOVE_ICE_BEAM, MOVE_DISABLE},
        .itemTableId = BATTLE_TOWER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHROOMISH] = {
        .species = SPECIES_SHROOMISH,
        .moves = {MOVE_SPORE, MOVE_BULLET_SEED, MOVE_LEECH_SEED, MOVE_FOCUS_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_SHUPPET] = {
        .species = SPECIES_SHUPPET,
        .moves = {MOVE_THUNDER_WAVE, MOVE_SHADOW_BALL, MOVE_GRUDGE, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_DUSKULL] = {
        .species = SPECIES_DUSKULL,
        .moves = {MOVE_WILL_O_WISP, MOVE_NIGHT_SHADE, MOVE_MEMENTO, MOVE_TORMENT},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ELECTRIKE] = {
        .species = SPECIES_ELECTRIKE,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_CRUNCH, MOVE_SWAGGER},
        .itemTableId = BATTLE_TOWER_ITEM_MAGNET,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VULPIX] = {
        .species = SPECIES_VULPIX,
        .moves = {MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_FLAMETHROWER, MOVE_HYPNOSIS},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
	[FRONTIER_MON_PIKACHU] = {
        .species = SPECIES_PIKACHU,
        .moves = {MOVE_VOLT_TACKLE, MOVE_SURF, MOVE_KNOCK_OFF, MOVE_PETAL_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_LIGHT_BALL,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SANDSHREW] = {
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_DIG, MOVE_ROCK_TOMB, MOVE_SANDSTORM, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLIWAG] = {
        .species = SPECIES_POLIWAG,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_SURF, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BELLSPROUT] = {
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_RAZOR_LEAF, MOVE_SLUDGE_BOMB, MOVE_STUN_SPORE, MOVE_WRAP},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_LAX
    },
    [FRONTIER_MON_GEODUDE] = {
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_BLAST, MOVE_EXPLOSION, MOVE_ROCK_POLISH},
        .itemTableId = BATTLE_TOWER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_DRATINI] = {
        .species = SPECIES_DRATINI,
        .moves = {MOVE_OUTRAGE, MOVE_THUNDER_WAVE, MOVE_FLAMETHROWER, MOVE_WATER_PULSE},
        .itemTableId = BATTLE_TOWER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SNUBBULL] = {
        .species = SPECIES_SNUBBULL,
        .moves = {MOVE_EARTHQUAKE, MOVE_CHARM, MOVE_ROCK_SLIDE, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REMORAID] = {
        .species = SPECIES_REMORAID,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_WATER_SPOUT, MOVE_ENERGY_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LARVITAR] = {
        .species = SPECIES_LARVITAR,
        .moves = {MOVE_THRASH, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BALTOY] = {
        .species = SPECIES_BALTOY,
        .moves = {MOVE_REFLECT, MOVE_ANCIENT_POWER, MOVE_LIGHT_SCREEN, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORUNT] = {
        .species = SPECIES_SNORUNT,
        .moves = {MOVE_ICY_WIND, MOVE_DISABLE, MOVE_SPIKES, MOVE_SING},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_BAGON] = {
        .species = SPECIES_BAGON,
        .moves = {MOVE_DRAGON_BREATH, MOVE_IRON_HEAD, MOVE_BRICK_BREAK, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_TOWER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_BELDUM] = {
        .species = SPECIES_BELDUM,
        .moves = {MOVE_TAKE_DOWN, MOVE_IRON_HEAD, MOVE_IRON_DEFENSE, MOVE_HEADBUTT},
        .itemTableId = BATTLE_TOWER_ITEM_METAL_COAT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GULPIN] = {
        .species = SPECIES_GULPIN,
        .moves = {MOVE_YAWN, MOVE_COUNTER, MOVE_PAIN_SPLIT, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_VENONAT] = {
        .species = SPECIES_VENONAT,
        .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_STUN_SPORE, MOVE_SKILL_SWAP},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MANKEY] = {
        .species = SPECIES_MANKEY,
        .moves = {MOVE_ROCK_SLIDE, MOVE_LOW_KICK, MOVE_SCREECH, MOVE_SWAGGER},
        .itemTableId = BATTLE_TOWER_ITEM_BLACK_BELT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHOP] = {
        .species = SPECIES_MACHOP,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_CROSS_CHOP, MOVE_STONE_EDGE, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHELLDER] = {
        .species = SPECIES_SHELLDER,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_ATTRACT, MOVE_CLAMP, MOVE_IRON_DEFENSE},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SMOOCHUM] = {
        .species = SPECIES_SMOOCHUM,
        .moves = {MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_COUNTER, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_NUMEL] = {
        .species = SPECIES_NUMEL,
        .moves = {MOVE_OVERHEAT, MOVE_MAGNITUDE, MOVE_ROCK_TOMB, MOVE_YAWN},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_CARVANHA] = {
        .species = SPECIES_CARVANHA,
        .moves = {MOVE_TAUNT, MOVE_DESTINY_BOND, MOVE_SURF, MOVE_DARK_PULSE},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_CORPHISH] = {
        .species = SPECIES_CORPHISH,
        .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_COUNTER, MOVE_ENDEAVOR},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
	[FRONTIER_MON_CHARMANDER] = {
        .species = SPECIES_CHARMANDER,
        .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_SMOKESCREEN, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CYNDAQUIL] = {
        .species = SPECIES_CYNDAQUIL,
        .moves = {MOVE_FLAMETHROWER, MOVE_BODY_SLAM, MOVE_QUICK_ATTACK, MOVE_SMOKESCREEN},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ABRA] = {
        .species = SPECIES_ABRA,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_KNOCK_OFF, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DODUO] = {
        .species = SPECIES_DODUO,
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GASTLY] = {
        .species = SPECIES_GASTLY,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SWABLU] = {
        .species = SPECIES_SWABLU,
        .moves = {MOVE_BODY_SLAM, MOVE_DREAM_EATER, MOVE_SING, MOVE_ATTRACT},
        .itemTableId = BATTLE_TOWER_ITEM_MENTAL_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_TREECKO] = {
        .species = SPECIES_TREECKO,
        .moves = {MOVE_COUNTER, MOVE_ENDEAVOR, MOVE_QUICK_ATTACK, MOVE_ENERGY_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_TORCHIC] = {
        .species = SPECIES_TORCHIC,
        .moves = {MOVE_FLAMETHROWER, MOVE_QUICK_ATTACK, MOVE_SAND_ATTACK, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_MUDKIP] = {
        .species = SPECIES_MUDKIP,
        .moves = {MOVE_SURF, MOVE_ENDEAVOR, MOVE_COUNTER, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_SQUIRTLE] = {
        .species = SPECIES_SQUIRTLE,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_IRON_DEFENSE, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TOTODILE] = {
        .species = SPECIES_TOTODILE,
        .moves = {MOVE_SLASH, MOVE_WATERFALL, MOVE_SCREECH, MOVE_ICY_WIND},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_SLOWPOKE] = {
        .species = SPECIES_SLOWPOKE,
        .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_WATER_PULSE, MOVE_YAWN},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
  },
	[FRONTIER_MON_BULBASAUR] = {
        .species = SPECIES_BULBASAUR,
        .moves = {MOVE_RAZOR_LEAF, MOVE_SWEET_SCENT, MOVE_SLEEP_POWDER, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CHIKORITA] = {
        .species = SPECIES_CHIKORITA,
        .moves = {MOVE_SECRET_POWER, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ODDISH] = {
        .species = SPECIES_ODDISH,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_STUN_SPORE, MOVE_GIGA_DRAIN, MOVE_MOONLIGHT},
        .itemTableId = BATTLE_TOWER_ITEM_POISON_BARB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
	[FRONTIER_MON_PSYDUCK] = {
        .species = SPECIES_PSYDUCK,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_CROSS_CHOP, MOVE_DISABLE},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_CUBONE] = {
        .species = SPECIES_CUBONE,
        .moves = {MOVE_BONEMERANG, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_TOWER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLDEEN] = {
        .species = SPECIES_GOLDEEN,
        .moves = {MOVE_WATERFALL, MOVE_MEGAHORN, MOVE_AGILITY, MOVE_PSYBEAM},
        .itemTableId = BATTLE_TOWER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_NATU] = {
        .species = SPECIES_NATU,
        .moves = {MOVE_NIGHT_SHADE, MOVE_FUTURE_SIGHT, MOVE_CONFUSE_RAY, MOVE_FLASH},
        .itemTableId = BATTLE_TOWER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CLEFAIRY] = {
        .species = SPECIES_CLEFAIRY,
        .moves = {MOVE_FOLLOW_ME, MOVE_RETURN, MOVE_ENCORE, MOVE_SING},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGNEMITE] = {
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_THUNDER, MOVE_AGILITY, MOVE_EXPLOSION, MOVE_REFLECT},
        .itemTableId = BATTLE_TOWER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_SEEL] = {
        .species = SPECIES_SEEL,
        .moves = {MOVE_AURORA_BEAM, MOVE_DIVE, MOVE_BODY_SLAM, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_TOWER_ITEM_ASPEAR_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GRIMER] = {
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ROCK_TOMB, MOVE_ACID_ARMOR, MOVE_MINIMIZE},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_KRABBY] = {
        .species = SPECIES_KRABBY,
        .moves = {MOVE_CRABHAMMER, MOVE_MUD_SHOT, MOVE_FLAIL, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_EXEGGCUTE] = {
        .species = SPECIES_EXEGGCUTE,
        .moves = {MOVE_PSYCHIC, MOVE_ANCIENT_POWER, MOVE_LEECH_SEED, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_TOWER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_EEVEE] = {
        .species = SPECIES_EEVEE,
        .moves = {MOVE_RETURN, MOVE_SHADOW_BALL, MOVE_QUICK_ATTACK, MOVE_IRON_TAIL},
        .itemTableId = BATTLE_TOWER_ITEM_EVERSTONE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DROWZEE] = {
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_DISABLE, MOVE_BARRIER},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VOLTORB] = {
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_THUNDERBOLT, MOVE_SCREECH, MOVE_EXPLOSION, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_CHINCHOU] = {
        .species = SPECIES_CHINCHOU,
        .moves = {MOVE_SPARK, MOVE_DIVE, MOVE_CONFUSE_RAY, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TEDDIURSA] = {
        .species = SPECIES_TEDDIURSA,
        .moves = {MOVE_SECRET_POWER, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DELIBIRD] = {
        .species = SPECIES_DELIBIRD,
        .moves = {MOVE_SPIKES, MOVE_ICE_BEAM, MOVE_WATER_PULSE, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_TOWER_ITEM_BLUE_FLUTE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_HOUNDOUR] = {
        .species = SPECIES_HOUNDOUR,
        .moves = {MOVE_CRUNCH, MOVE_FIRE_BLAST, MOVE_DESTINY_BOND, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_PHANPY] = {
        .species = SPECIES_PHANPY,
        .moves = {MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_EARTHQUAKE, MOVE_SANDSTORM},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SPOINK] = {
        .species = SPECIES_SPOINK,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_MIRROR_COAT, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_ARON] = {
        .species = SPECIES_ARON,
        .moves = {MOVE_HEAD_SMASH, MOVE_IRON_HEAD, MOVE_ENDEAVOR, MOVE_REVERSAL},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
	[FRONTIER_MON_LUVDISC] = {
        .species = SPECIES_LUVDISC,
        .moves = {MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_SURF},
        .itemTableId = BATTLE_TOWER_ITEM_HEART_SCALE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TENTACOOL] = {
        .species = SPECIES_TENTACOOL,
        .moves = {MOVE_WATER_PULSE, MOVE_TOXIC, MOVE_BARRIER, MOVE_WRAP},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_CACNEA] = {
        .species = SPECIES_CACNEA,
        .moves = {MOVE_NEEDLE_ARM, MOVE_SPIKES, MOVE_COUNTER, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_UNOWN] = {
        .species = SPECIES_UNOWN,
        .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KOFFING] = {
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SMOKESCREEN, MOVE_WILL_O_WISP, MOVE_HAZE},
        .itemTableId = BATTLE_TOWER_ITEM_POISON_BARB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_STARYU] = {
        .species = SPECIES_STARYU,
        .moves = {MOVE_SURF, MOVE_MINIMIZE, MOVE_ICE_BEAM, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_TOWER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SKIPLOOM] = {
        .species = SPECIES_SKIPLOOM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_NUZLEAF] = {
        .species = SPECIES_NUZLEAF,
        .moves = {MOVE_EXTRASENSORY, MOVE_FAKE_OUT, MOVE_EXPLOSION, MOVE_DARK_PULSE},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_LOMBRE] = {
        .species = SPECIES_LOMBRE,
        .moves = {MOVE_SURF, MOVE_FAKE_OUT, MOVE_GIGA_DRAIN, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VIBRAVA] = {
        .species = SPECIES_VIBRAVA,
        .moves = {MOVE_DRAGON_BREATH, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_ROCK_TOMB},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_RHYHORN] = {
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_ROCK_BLAST, MOVE_EARTHQUAKE, MOVE_SCARY_FACE, MOVE_ROAR},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLAMPERL] = {
        .species = SPECIES_CLAMPERL,
        .moves = {MOVE_SURF, MOVE_TOXIC, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_TOWER_ITEM_DEEP_SEA_SCALE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_PIDGEOTTO] = {
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_FEATHER_DANCE, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GROWLITHE] = {
        .species = SPECIES_GROWLITHE,
        .moves = {MOVE_FLAMETHROWER, MOVE_BITE, MOVE_WILL_O_WISP, MOVE_AGILITY},
        .itemTableId = BATTLE_TOWER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FARFETCHD] = {
        .species = SPECIES_FARFETCHD,
        .moves = {MOVE_SLASH, MOVE_BRAVE_BIRD, MOVE_SWORDS_DANCE, MOVE_SUPERPOWER},
        .itemTableId = BATTLE_TOWER_ITEM_STICK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_OMANYTE] = {
        .species = SPECIES_OMANYTE,
        .moves = {MOVE_MUD_SHOT, MOVE_SURF, MOVE_ANCIENT_POWER, MOVE_TICKLE},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KABUTO] = {
        .species = SPECIES_KABUTO,
        .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_SURF, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_LILEEP] = {
        .species = SPECIES_LILEEP,
        .moves = {MOVE_ANCIENT_POWER, MOVE_TOXIC, MOVE_RECOVER, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ANORITH] = {
        .species = SPECIES_ANORITH,
        .moves = {MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_AIPOM] = {
        .species = SPECIES_AIPOM,
        .moves = {MOVE_RETURN, MOVE_SAND_ATTACK, MOVE_BATON_PASS, MOVE_AGILITY},
        .itemTableId = BATTLE_TOWER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELEKID] = {
        .species = SPECIES_ELEKID,
        .moves = {MOVE_THUNDERBOLT, MOVE_QUICK_ATTACK, MOVE_ICE_PUNCH, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_LOUDRED] = {
        .species = SPECIES_LOUDRED,
        .moves = {MOVE_COUNTER, MOVE_ENDEAVOR, MOVE_BODY_SLAM, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_SPINDA] = {
        .species = SPECIES_SPINDA,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_SHADOW_BALL, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_TOWER_ITEM_YELLOW_FLUTE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDORINA] = {
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_DOUBLE_KICK, MOVE_RETURN, MOVE_SLUDGE_BOMB, MOVE_IRON_TAIL},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDORINO] = {
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_DRILL_RUN, MOVE_HEAD_SMASH, MOVE_THRASH},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FLAAFFY] = {
        .species = SPECIES_FLAAFFY,
        .moves = {MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_COTTON_SPORE, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_TOWER_ITEM_MAGNET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAGBY] = {
        .species = SPECIES_MAGBY,
        .moves = {MOVE_MACH_PUNCH, MOVE_COUNTER, MOVE_CONFUSE_RAY, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_NOSEPASS] = {
        .species = SPECIES_NOSEPASS,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_THUNDER_WAVE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_HARD_STONE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_CORSOLA] = {
        .species = SPECIES_CORSOLA,
        .moves = {MOVE_SURF, MOVE_MIRROR_COAT, MOVE_RECOVER, MOVE_TOXIC},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MAWILE] = {
        .species = SPECIES_MAWILE,
        .moves = {MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_IRON_DEFENSE, MOVE_BATON_PASS},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
	[FRONTIER_MON_BUTTERFREE] = {
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_SILVER_WIND, MOVE_PSYCHIC, MOVE_TOXIC, MOVE_ENERGY_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
	[FRONTIER_MON_BEEDRILL] = {
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_TWINEEDLE, MOVE_BRICK_BREAK, MOVE_ENDEAVOR, MOVE_AGILITY},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_POLIWHIRL] = {
        .species = SPECIES_POLIWHIRL,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ONIX] = {
        .species = SPECIES_ONIX,
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BEAUTIFLY] = {
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_QUIVER_DANCE, MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_ELECTROWEB},
        .itemTableId = BATTLE_TOWER_ITEM_SMOKE_BALL,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DUSTOX] = {
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_TOXIC, MOVE_RECOVER, MOVE_WHIRLWIND},
        .itemTableId = BATTLE_TOWER_ITEM_SMOKE_BALL,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LEDIAN] = {
        .species = SPECIES_LEDIAN,
        .moves = {MOVE_AERIAL_ACE, MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_AGILITY},
        .itemTableId = BATTLE_TOWER_ITEM_LUCKY_PUNCH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARIADOS] = {
        .species = SPECIES_ARIADOS,
        .moves = {MOVE_LEECH_LIFE, MOVE_SPIDER_WEB, MOVE_BATON_PASS, MOVE_NIGHT_SHADE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_YANMA] = {
        .species = SPECIES_YANMA,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_REVERSAL, MOVE_ANCIENT_POWER, MOVE_ENDURE},
        .itemTableId = BATTLE_TOWER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DELCATTY_1] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_CALM_MIND, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_POKEDOLL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SABLEYE_1] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_SHADOW_SNEAK, MOVE_CONFUSE_RAY, MOVE_KNOCK_OFF, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_TOWER_ITEM_BLACK_GLASSES,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_LICKITUNG_1] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_BODY_SLAM, MOVE_BRICK_BREAK, MOVE_LICK, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WEEPINBELL_1] = {
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_RAZOR_LEAF, MOVE_SLUDGE_BOMB, MOVE_WRAP, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GRAVELER_1] = {
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GLOOM_1] = {
        .species = SPECIES_GLOOM,
        .moves = {MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB, MOVE_STUN_SPORE, MOVE_MOONLIGHT},
        .itemTableId = BATTLE_TOWER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_PORYGON_1] = {
        .species = SPECIES_PORYGON,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_RECYCLE, MOVE_AGILITY},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KADABRA_1] = {
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_DISABLE},
        .itemTableId = BATTLE_TOWER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WAILMER_1] = {
        .species = SPECIES_WAILMER,
        .moves = {MOVE_WHIRLPOOL, MOVE_BOUNCE, MOVE_TOXIC, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ROSELIA_1] = {
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_ENERGY_BALL, MOVE_SYNTHESIS, MOVE_SLEEP_POWDER, MOVE_SPIKES},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VOLBEAT_1] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_TAIL_GLOW, MOVE_BATON_PASS, MOVE_DAZZLING_GLEAM, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_RED_FLUTE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ILLUMISE_1] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_RECOVER, MOVE_WISH, MOVE_THUNDER_WAVE, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_RED_FLUTE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
	[FRONTIER_MON_IVYSAUR_1] = {
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_PETAL_DANCE, MOVE_GROWTH, MOVE_SLEEP_POWDER, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_TOWER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
	[FRONTIER_MON_CHARMELEON_1] = {
        .species = SPECIES_CHARMELEON,
        .moves = {MOVE_ANCIENT_POWER, MOVE_OVERHEAT, MOVE_SWORDS_DANCE, MOVE_DIG},
        .itemTableId = BATTLE_TOWER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_WARTORTLE_1] = {
        .species = SPECIES_WARTORTLE,
        .moves = {MOVE_WATER_PULSE, MOVE_BITE, MOVE_RAIN_DANCE, MOVE_YAWN},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PARASECT_1] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_LEECH_LIFE, MOVE_SYNTHESIS, MOVE_SPORE, MOVE_LEECH_SEED},
        .itemTableId = BATTLE_TOWER_ITEM_BIG_MUSHROOM,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MACHOKE_1] = {
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_ROCK_TOMB, MOVE_FORESIGHT, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAUNTER_1] = {
        .species = SPECIES_HAUNTER,
        .moves = {MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_SPITE, MOVE_GRUDGE},
        .itemTableId = BATTLE_TOWER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BAYLEEF_1] = {
        .species = SPECIES_BAYLEEF,
        .moves = {MOVE_RAZOR_LEAF, MOVE_TOXIC, MOVE_SAFEGUARD, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_QUILAVA_1] = {
        .species = SPECIES_QUILAVA,
        .moves = {MOVE_FLAMETHROWER, MOVE_BODY_SLAM, MOVE_EXTRASENSORY, MOVE_SMOKESCREEN},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CROCONAW_1] = {
        .species = SPECIES_CROCONAW,
        .moves = {MOVE_SLASH, MOVE_WATERFALL, MOVE_BITE, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TOGETIC_1] = {
        .species = SPECIES_TOGETIC,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_MAGICAL_LEAF, MOVE_WISH, MOVE_FOLLOW_ME},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_MURKROW_1] = {
        .species = SPECIES_MURKROW,
        .moves = {MOVE_DARK_PULSE, MOVE_BRAVE_BIRD, MOVE_HEAT_WAVE, MOVE_ICY_WIND},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_WOBBUFFET_1] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_CHARM, MOVE_ENCORE},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_PLUSLE_1] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_THUNDERBOLT, MOVE_ENCORE, MOVE_PROTECT, MOVE_HELPING_HAND},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MINUN_1] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_THUNDERBOLT, MOVE_FAKE_TEARS, MOVE_PROTECT, MOVE_HELPING_HAND},
        .itemTableId = BATTLE_TOWER_ITEM_MAGNET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GROVYLE_1] = {
        .species = SPECIES_GROVYLE,
        .moves = {MOVE_COUNTER, MOVE_ENDEAVOR, MOVE_QUICK_ATTACK, MOVE_LEAF_BLADE},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_COMBUSKEN_1] = {
        .species = SPECIES_COMBUSKEN,
        .moves = {MOVE_FLAMETHROWER, MOVE_DYNAMIC_PUNCH, MOVE_QUICK_ATTACK, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_MARSHTOMP_1] = {
        .species = SPECIES_MARSHTOMP,
        .moves = {MOVE_MUD_SHOT, MOVE_SURF, MOVE_COUNTER, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_PONYTA_1] = {
        .species = SPECIES_PONYTA,
        .moves = {MOVE_FIRE_BLAST, MOVE_BOUNCE, MOVE_QUICK_ATTACK, MOVE_LOW_KICK},
        .itemTableId = BATTLE_TOWER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_AZUMARILL_1] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_WHIRLPOOL, MOVE_PROTECT, MOVE_PERISH_SONG, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SUDOWOODO_1] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGCARGO_1] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_PUPITAR_1] = {
        .species = SPECIES_PUPITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_IRON_TAIL, MOVE_SUPERPOWER},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SEALEO_1] = {
        .species = SPECIES_SEALEO,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
	[FRONTIER_MON_RATICATE_1] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_ENDEAVOR, MOVE_SHADOW_BALL, MOVE_SCARY_FACE, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_MASQUERAIN_1] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_WHIRLWIND, MOVE_ICE_BEAM, MOVE_STUN_SPORE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_FURRET_1] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_HELPING_HAND, MOVE_FOLLOW_ME},
        .itemTableId = BATTLE_TOWER_ITEM_FLUFFY_TAIL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUNSPARCE_1] = {
        .species = SPECIES_DUNSPARCE,
        .moves = {MOVE_HEADBUTT, MOVE_GLARE, MOVE_COIL, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONAIR_1] = {
        .species = SPECIES_DRAGONAIR,
        .moves = {MOVE_DRAGON_BREATH, MOVE_REST, MOVE_SLEEP_TALK, MOVE_TOXIC},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_MIGHTYENA_1] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_CRUNCH, MOVE_POISON_FANG, MOVE_TAUNT, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_LINOONE_1] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_BELLY_DRUM, MOVE_EXTREME_SPEED, MOVE_SHADOW_BALL, MOVE_FRUSTRATION},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CASTFORM_1] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_THUNDERBOLT, MOVE_SOLAR_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHELGON_1] = {
        .species = SPECIES_SHELGON,
        .moves = {MOVE_TOXIC, MOVE_DRAGON_BREATH, MOVE_PROTECT, MOVE_WISH},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_METANG_1] = {
        .species = SPECIES_METANG,
        .moves = {MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WIGGLYTUFF_1] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_SING, MOVE_DISABLE, MOVE_WISH, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_TOWER_ITEM_SOOTHE_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SUNFLORA_1] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_MORNING_SUN},
        .itemTableId = BATTLE_TOWER_ITEM_MIRACLE_SEED,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CHIMECHO_1] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_RECOVER, MOVE_DAZZLING_GLEAM},
        .itemTableId = BATTLE_TOWER_ITEM_CLEANSE_TAG,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GLIGAR_1] = {
        .species = SPECIES_GLIGAR,
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_QWILFISH_1] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_SPIKES, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SNEASEL_1] = {
        .species = SPECIES_SNEASEL,
        .moves = {MOVE_COUNTER, MOVE_FAKE_OUT, MOVE_ICY_WIND, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PELIPPER_1] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SURF, MOVE_KNOCK_OFF, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SWELLOW_1] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_BRAVE_BIRD, MOVE_BOOMBURST, MOVE_STEEL_WING, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LAIRON_1] = {
        .species = SPECIES_LAIRON,
        .moves = {MOVE_HEAD_SMASH, MOVE_IRON_HEAD, MOVE_ENDEAVOR, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_TOWER_ITEM_HARD_STONE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_TANGELA_1] = {
        .species = SPECIES_TANGELA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SYNTHESIS, MOVE_TOXIC, MOVE_BIND},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
	[FRONTIER_MON_ARBOK_1] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_POISON_FANG, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_GLARE},
        .itemTableId = BATTLE_TOWER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PERSIAN_1] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_NASTY_PLOT, MOVE_THUNDERBOLT, MOVE_WATER_PULSE, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_TOWER_ITEM_NUGGET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SEADRA_1] = {
        .species = SPECIES_SEADRA,
        .moves = {MOVE_ICE_BEAM, MOVE_SMOKESCREEN, MOVE_SURF, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KECLEON_1] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VIGOROTH_1] = {
        .species = SPECIES_VIGOROTH,
        .moves = {MOVE_RETURN, MOVE_BULK_UP, MOVE_SLACK_OFF, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_LUNATONE_1] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_MOONLIGHT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SOLROCK_1] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NOCTOWL_1] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_NIGHT_SHADE, MOVE_TOXIC, MOVE_RECOVER, MOVE_REFLECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
	[FRONTIER_MON_SANDSLASH_1] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_CRUSH_CLAW, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SANDSTORM},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VENOMOTH_1] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_SILVER_WIND, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_SKILL_SWAP},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CHANSEY_1] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_METRONOME, MOVE_REFRESH, MOVE_DEFENSE_CURL, MOVE_MINIMIZE},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_SEAKING_1] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_KNOCK_OFF, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JUMPLUFF_1] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_BOUNCE, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_SLEEP_POWDER},
        .itemTableId = BATTLE_TOWER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PILOSWINE_1] = {
        .species = SPECIES_PILOSWINE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_HAIL, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_TOWER_ITEM_SOFT_SAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLBAT_1] = {
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_AIR_CUTTER, MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_STEEL_WING},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_PRIMEAPE_1] = {
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_SWAGGER, MOVE_SCREECH},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_HITMONLEE_1] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_HI_JUMP_KICK, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_MACH_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_BLACK_BELT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONCHAN_1] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_BULK_UP, MOVE_HI_JUMP_KICK, MOVE_ROCK_SLIDE, MOVE_MACH_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_ATTACK| F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GIRAFARIG_1] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_PSYCHIC, MOVE_AGILITY, MOVE_BATON_PASS, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HITMONTOP_1] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_TRIPLE_KICK, MOVE_EARTHQUAKE, MOVE_MACH_PUNCH, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_TOWER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BANETTE_1] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_THUNDER_WAVE, MOVE_SHADOW_BALL, MOVE_GRUDGE, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_NINJASK_1] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_BATON_PASS, MOVE_SWORDS_DANCE, MOVE_PROTECT, MOVE_LEECH_LIFE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_SEVIPER_1] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_GLARE, MOVE_COIL},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ZANGOOSE_1] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_RETURN, MOVE_SHADOW_BALL, MOVE_COUNTER, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_CAMERUPT_1] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_MAGNITUDE, MOVE_EXPLOSION, MOVE_OVERHEAT, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SHARPEDO_1] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_TAUNT, MOVE_DESTINY_BOND, MOVE_SURF, MOVE_DARK_PULSE},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_TROPIUS_1] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_SWORDS_DANCE, MOVE_RECOVER, MOVE_FLY, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_TOWER_ITEM_NANAB_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGNETON_1] = {
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_TOWER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MANTINE_1] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_SURF, MOVE_TOXIC, MOVE_PROTECT, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_STANTLER_1] = {
        .species = SPECIES_STANTLER,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_JUMP_KICK},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ABSOL_1] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_KNOCK_OFF, MOVE_COUNTER, MOVE_THUNDER_WAVE, MOVE_ICY_WIND},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_SWALOT_1] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_YAWN, MOVE_COUNTER, MOVE_PAIN_SPLIT, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_CRAWDAUNT_1] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_KNOCK_OFF, MOVE_CRABHAMMER},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PIDGEOT_1] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE, MOVE_MUD_SLAP, MOVE_HEAT_WAVE},
        .itemTableId = BATTLE_TOWER_ITEM_SHARP_BEAK,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GRUMPIG_1] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_FIRE_PUNCH, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_TORKOAL_1] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KINGLER_1] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_MUD_SHOT, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_CACTURNE_1] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_DARK_PULSE, MOVE_SPIKES, MOVE_COUNTER, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_BELLOSSOM_1] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_MOONBLAST, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_TOWER_ITEM_MIRACLE_SEED,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_OCTILLERY_1] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_ENERGY_BALL, MOVE_FIRE_BLAST},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HUNTAIL_1] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_COIL, MOVE_HYDRO_PUMP, MOVE_BODY_SLAM, MOVE_BATON_PASS},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GOREBYSS_1] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_AGILITY, MOVE_IRON_DEFENSE, MOVE_SURF, MOVE_BATON_PASS},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_RELICANTH_1] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_OMASTAR_1] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SPIKES, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_KABUTOPS_1] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_LEECH_LIFE, MOVE_MUD_SHOT, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_HARD_STONE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLIWRATH_1] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_BRICK_BREAK, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SURF},
        .itemTableId = BATTLE_TOWER_ITEM_BLACK_BELT,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SCYTHER_1] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_X_SCISSOR, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PINSIR_1] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_X_SCISSOR, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_POLITOED_2] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CLOYSTER_1] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_SPIKES, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DELCATTY_2] = {
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_NASTY_PLOT, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_BATON_PASS},
        .itemTableId = BATTLE_TOWER_ITEM_POKEDOLL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SABLEYE_2] = {
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_NIGHT_SHADE, MOVE_KNOCK_OFF, MOVE_WILL_O_WISP, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LICKITUNG_2] = {
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WEEPINBELL_2] = {
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_REFLECT},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_GRAVELER_2] = {
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GLOOM_2] = {
        .species = SPECIES_GLOOM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SLUDGE_BOMB, MOVE_MOONLIGHT},
        .itemTableId = BATTLE_TOWER_ITEM_MIRACLE_SEED,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_PORYGON_2] = {
        .species = SPECIES_PORYGON,
        .moves = {MOVE_TRI_ATTACK, MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_KADABRA_2] = {
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
     [FRONTIER_MON_WAILMER_2] = {
        .species = SPECIES_WAILMER,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_ROSELIA_2] = {
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_VOLBEAT_2] = {
        .species = SPECIES_VOLBEAT,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_TAIL_GLOW},
        .itemTableId = BATTLE_TOWER_ITEM_RED_FLUTE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ILLUMISE_2] = {
        .species = SPECIES_ILLUMISE,
        .moves = {MOVE_RECOVER, MOVE_GROWTH, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_RED_FLUTE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_IVYSAUR_2] = {
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_CHARMELEON_2] = {
        .species = SPECIES_CHARMELEON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SLASH, MOVE_ANCIENT_POWER, MOVE_DRAGON_CLAW},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_WARTORTLE_2] = {
        .species = SPECIES_WARTORTLE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAPID_SPIN, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_PARASECT_2] = {
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_DIG, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_TOWER_ITEM_BIG_MUSHROOM,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_MACHOKE_2] = {
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_CROSS_CHOP, MOVE_STONE_EDGE, MOVE_FORESIGHT, MOVE_SCARY_FACE},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HAUNTER_2] = {
        .species = SPECIES_HAUNTER,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_NIGHTMARE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BAYLEEF_2] = {
        .species = SPECIES_BAYLEEF,
        .moves = {MOVE_GIGA_DRAIN, MOVE_BODY_SLAM, MOVE_GRASS_WHISTLE, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_QUILAVA_2] = {
        .species = SPECIES_QUILAVA,
        .moves = {MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_BODY_SLAM, MOVE_SMOKESCREEN},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_CROCONAW_2] = {
        .species = SPECIES_CROCONAW,
        .moves = {MOVE_MEGA_KICK, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_DIG},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TOGETIC_2] = {
        .species = SPECIES_TOGETIC,
        .moves = {MOVE_DAZZLING_GLEAM, MOVE_SWEET_KISS, MOVE_SOFT_BOILED, MOVE_TOXIC},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MURKROW_2] = {
        .species = SPECIES_MURKROW,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_PROTECT, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_WOBBUFFET_2] = {
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PLUSLE_2] = {
        .species = SPECIES_PLUSLE,
        .moves = {MOVE_THUNDERBOLT, MOVE_NASTY_PLOT, MOVE_SUBSTITUTE, MOVE_BATON_PASS},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MINUN_2] = {
        .species = SPECIES_MINUN,
        .moves = {MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_COUNTER, MOVE_WISH},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_GROVYLE_2] = {
        .species = SPECIES_GROVYLE,
        .moves = {MOVE_LEAF_BLADE, MOVE_CRUNCH, MOVE_DRAGON_BREATH, MOVE_ROCK_TOMB},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_COMBUSKEN_2] = {
        .species = SPECIES_COMBUSKEN,
        .moves = {MOVE_FLAMETHROWER, MOVE_SKY_UPPERCUT, MOVE_SLASH, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MARSHTOMP_2] = {
        .species = SPECIES_MARSHTOMP,
        .moves = {MOVE_MUDDY_WATER, MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_PONYTA_2] = {
        .species = SPECIES_PONYTA,
        .moves = {MOVE_FLAMETHROWER, MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_AZUMARILL_2] = {
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_BOUNCE, MOVE_DIG},
        .itemTableId = BATTLE_TOWER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SUDOWOODO_2] = {
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_HEAD_SMASH, MOVE_SUBSTITUTE, MOVE_EARTHQUAKE, MOVE_FOCUS_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGCARGO_2] = {
        .species = SPECIES_MAGCARGO,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_PUPITAR_2] = {
        .species = SPECIES_PUPITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_DRAGON_DANCE, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_SOFT_SAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SEALEO_2] = {
        .species = SPECIES_SEALEO,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_SUPER_FANG, MOVE_HAIL},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
	[FRONTIER_MON_RATICATE_2] = {
        .species = SPECIES_RATICATE,
        .moves = {MOVE_SUPER_FANG, MOVE_HYPER_FANG, MOVE_SHADOW_BALL, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MASQUERAIN_2] = {
        .species = SPECIES_MASQUERAIN,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FURRET_2] = {
        .species = SPECIES_FURRET,
        .moves = {MOVE_COIL, MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_TOWER_ITEM_FLUFFY_TAIL,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUNSPARCE_2] = {
        .species = SPECIES_DUNSPARCE,
        .moves = {MOVE_BODY_SLAM, MOVE_RECOVER, MOVE_COIL, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DRAGONAIR_2] = {
        .species = SPECIES_DRAGONAIR,
        .moves = {MOVE_RETURN, MOVE_REST, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MIGHTYENA_2] = {
        .species = SPECIES_MIGHTYENA,
        .moves = {MOVE_CRUNCH, MOVE_POISON_FANG, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_LINOONE_2] = {
        .species = SPECIES_LINOONE,
        .moves = {MOVE_TRICK, MOVE_FRUSTRATION, MOVE_THUNDER_WAVE, MOVE_SAND_ATTACK},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CASTFORM_2] = {
        .species = SPECIES_CASTFORM,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_THUNDER, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SHELGON_2] = {
        .species = SPECIES_SHELGON,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_DRAGON_DANCE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_TOWER_ITEM_SILK_SCARF,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_METANG_2] = {
        .species = SPECIES_METANG,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_EXPLOSION, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_TOWER_ITEM_METAL_COAT,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_WIGGLYTUFF_2] = {
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_FAKE_TEARS, MOVE_SING, MOVE_DREAM_EATER, MOVE_DAZZLING_GLEAM},
        .itemTableId = BATTLE_TOWER_ITEM_SOOTHE_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SUNFLORA_2] = {
        .species = SPECIES_SUNFLORA,
        .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_ENDEAVOR},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_CHIMECHO_2] = {
        .species = SPECIES_CHIMECHO,
        .moves = {MOVE_PSYCHIC, MOVE_KNOCK_OFF, MOVE_CALM_MIND, MOVE_DAZZLING_GLEAM},
        .itemTableId = BATTLE_TOWER_ITEM_CLEANSE_TAG,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GLIGAR_2] = {
        .species = SPECIES_GLIGAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_GUILLOTINE, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_QWILFISH_2] = {
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_REVENGE, MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNEASEL_2] = {
        .species = SPECIES_SNEASEL,
        .moves = {MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_AERIAL_ACE, MOVE_X_SCISSOR},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PELIPPER_2] = {
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SURF, MOVE_KNOCK_OFF, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SWELLOW_2] = {
        .species = SPECIES_SWELLOW,
        .moves = {MOVE_BRAVE_BIRD, MOVE_BOOMBURST, MOVE_STEEL_WING, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_LAIRON_2] = {
        .species = SPECIES_LAIRON,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_ROAR, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TANGELA_2] = {
        .species = SPECIES_TANGELA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_REST, MOVE_AMNESIA},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
	[FRONTIER_MON_ARBOK_2] = {
        .species = SPECIES_ARBOK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PERSIAN_2] = {
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_GUNK_SHOT, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_TOWER_ITEM_NUGGET,
        .evSpread = F_EV_SPREAD_SPEED  | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SEADRA_2] = {
        .species = SPECIES_SEADRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_FRUSTRATION, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_KECLEON_2] = {
        .species = SPECIES_KECLEON,
        .moves = {MOVE_TRICK, MOVE_BRICK_BREAK, MOVE_SHADOW_BALL, MOVE_SHADOW_SNEAK},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VIGOROTH_2] = {
        .species = SPECIES_VIGOROTH,
        .moves = {MOVE_FLAIL, MOVE_REVERSAL, MOVE_ENDURE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LUNATONE_2] = {
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_BATON_PASS, MOVE_MOONLIGHT},
        .itemTableId = BATTLE_TOWER_ITEM_MENTAL_HERB,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SOLROCK_2] = {
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_NOCTOWL_2] = {
        .species = SPECIES_NOCTOWL,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_NASTY_PLOT, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
	[FRONTIER_MON_SANDSLASH_2] = {
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_LEECH_LIFE, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_SOFT_SAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VENOMOTH_2] = {
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_CHANSEY_2] = {
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SEAKING_2] = {
        .species = SPECIES_SEAKING,
        .moves = {MOVE_HORN_DRILL, MOVE_KNOCK_OFF, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_JUMPLUFF_2] = {
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_PILOSWINE_2] = {
        .species = SPECIES_PILOSWINE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM, MOVE_ROAR},
        .itemTableId = BATTLE_TOWER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLBAT_2] = {
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_AIR_CUTTER},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PRIMEAPE_2] = {
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_OVERHEAT, MOVE_BULK_UP},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_HITMONLEE_2] = {
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_HI_JUMP_KICK, MOVE_EARTHQUAKE, MOVE_FORESIGHT, MOVE_ROCK_TOMB},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HITMONCHAN_2] = {
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_HI_JUMP_KICK, MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_MACH_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GIRAFARIG_2] = {
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_BATON_PASS, MOVE_AGILITY},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HITMONTOP_2] = {
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_HI_JUMP_KICK, MOVE_MACH_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BANETTE_2] = {
        .species = SPECIES_BANETTE,
        .moves = {MOVE_SHADOW_BALL, MOVE_FRUSTRATION, MOVE_SCREECH, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NINJASK_2] = {
        .species = SPECIES_NINJASK,
        .moves = {MOVE_LEECH_LIFE, MOVE_SHADOW_BALL, MOVE_SWORDS_DANCE, MOVE_BATON_PASS},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SEVIPER_2] = {
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_ZANGOOSE_2] = {
        .species = SPECIES_ZANGOOSE,
        .moves = {MOVE_RETURN, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CAMERUPT_2] = {
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_EARTHQUAKE, MOVE_ERUPTION, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SHARPEDO_2] = {
        .species = SPECIES_SHARPEDO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_SURF},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_TROPIUS_2] = {
        .species = SPECIES_TROPIUS,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_GROWTH},
        .itemTableId = BATTLE_TOWER_ITEM_MIRACLE_SEED,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAGNETON_2] = {
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_MANTINE_2] = {
        .species = SPECIES_MANTINE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP},
        .itemTableId = BATTLE_TOWER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STANTLER_2] = {
        .species = SPECIES_STANTLER,
        .moves = {MOVE_FRUSTRATION, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_TOWER_ITEM_LAX_INCENSE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ABSOL_2] = {
        .species = SPECIES_ABSOL,
        .moves = {MOVE_STONE_EDGE, MOVE_SHADOW_BALL, MOVE_SUPERPOWER, MOVE_IRON_TAIL},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWALOT_2] = {
        .species = SPECIES_SWALOT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CRAWDAUNT_2] = {
        .species = SPECIES_CRAWDAUNT,
        .moves = {MOVE_NASTY_PLOT, MOVE_ICE_BEAM, MOVE_KNOCK_OFF, MOVE_CRABHAMMER},
        .itemTableId = BATTLE_TOWER_ITEM_BLACK_GLASSES,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_PIDGEOT_2] = {
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_RETURN, MOVE_AERIAL_ACE, MOVE_STEEL_WING, MOVE_MUD_SLAP},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRUMPIG_2] = {
        .species = SPECIES_GRUMPIG,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TORKOAL_2] = {
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_EXPLOSION, MOVE_YAWN},
        .itemTableId = BATTLE_TOWER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_KINGLER_2] = {
        .species = SPECIES_KINGLER,
        .moves = {MOVE_GUILLOTINE, MOVE_ROCK_SLIDE, MOVE_FLAIL, MOVE_ENDURE},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CACTURNE_2] = {
        .species = SPECIES_CACTURNE,
        .moves = {MOVE_DARK_PULSE, MOVE_SPIKES, MOVE_ENERGY_BALL, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_BELLOSSOM_2] = {
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_QUIVER_DANCE, MOVE_LEAF_BLADE, MOVE_MOONBLAST, MOVE_SLEEP_POWDER},
        .itemTableId = BATTLE_TOWER_ITEM_MIRACLE_SEED,
        .evSpread = F_EV_SPREAD_SP_ATTACK| F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_OCTILLERY_2] = {
        .species = SPECIES_OCTILLERY,
        .moves = {MOVE_SURF, MOVE_THUNDER_WAVE, MOVE_ENERGY_BALL, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HUNTAIL_2] = {
        .species = SPECIES_HUNTAIL,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_CRUNCH, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOREBYSS_2] = {
        .species = SPECIES_GOREBYSS,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_PSYCHIC, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RELICANTH_2] = {
        .species = SPECIES_RELICANTH,
        .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_ROCK_POLISH},
        .itemTableId = BATTLE_TOWER_ITEM_HARD_STONE,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_OMASTAR_2] = {
        .species = SPECIES_OMASTAR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_SPIKES},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_KABUTOPS_2] = {
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE, MOVE_FLAIL, MOVE_ENDURE},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_POLIWRATH_2] = {
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_BRICK_BREAK, MOVE_LOVELY_KISS, MOVE_ROCK_SLIDE, MOVE_BELLY_DRUM},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SCYTHER_2] = {
        .species = SPECIES_SCYTHER,
        .moves = {MOVE_SILVER_WIND, MOVE_AERIAL_ACE, MOVE_SWORDS_DANCE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_TOWER_ITEM_SILVER_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PINSIR_2] = {
        .species = SPECIES_PINSIR,
        .moves = {MOVE_GUILLOTINE, MOVE_X_SCISSOR, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_POLITOED_1] = {
        .species = SPECIES_POLITOED,
        .moves = {MOVE_WHIRLPOOL, MOVE_LOVELY_KISS, MOVE_PERISH_SONG, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CLOYSTER_2] = {
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_DIVE, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DUGTRIO_1] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_TRI_ATTACK, MOVE_SLASH, MOVE_SAND_TOMB},
        .itemTableId = BATTLE_TOWER_ITEM_SOFT_SAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEDICHAM_1] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_PSYCHIC, MOVE_HI_JUMP_KICK, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MISDREAVUS_1] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_PAIN_SPLIT, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_FEAROW_1] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_FACADE, MOVE_DRILL_RUN},
        .itemTableId = BATTLE_TOWER_ITEM_SHARP_BEAK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRANBULL_1] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_THUNDER_WAVE, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JYNX_1] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_ICE_BEAM, MOVE_FAKE_OUT, MOVE_LOVELY_KISS, MOVE_ATTRACT},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DUSCLOPS_1] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_WILL_O_WISP, MOVE_SEISMIC_TOSS, MOVE_PAIN_SPLIT, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DODRIO_1] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_MIME_1] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_ENERGY_BALL, MOVE_FAKE_OUT, MOVE_DAZZLING_GLEAM},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LANTURN_1] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_ATTRACT, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BRELOOM_1] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_ROCK_TOMB, MOVE_MACH_PUNCH, MOVE_SPORE, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_FORRETRESS_1] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_SIGNAL_BEAM, MOVE_SPIKES},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WHISCASH_1] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_XATU_1] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_DRILL_PECK, MOVE_PROTECT, MOVE_WISH, MOVE_PSYCHIC},
        .itemTableId = BATTLE_TOWER_ITEM_SHARP_BEAK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_SKARMORY_1] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_SPIKES, MOVE_TAUNT},
        .itemTableId = BATTLE_TOWER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAROWAK_1] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_ROCK_SLIDE, MOVE_ICY_WIND, MOVE_HEADBUTT},
        .itemTableId = BATTLE_TOWER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_QUAGSIRE_1] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_COUNTER, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLEFABLE_1] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_METRONOME, MOVE_DOUBLE_TEAM, MOVE_REFLECT, MOVE_MOONBLAST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_HARIYAMA_1] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
	[FRONTIER_MON_RAICHU_1] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDERBOLT, MOVE_SURF, MOVE_LIGHT_SCREEN, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DEWGONG_1] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_ICE_BEAM, MOVE_ICY_WIND, MOVE_SURF, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_TOWER_ITEM_NEVER_MELT_ICE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MANECTRIC_1] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_FLAMETHROWER, MOVE_OVERHEAT},
        .itemTableId = BATTLE_TOWER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VILEPLUME_1] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_AROMATHERAPY},
        .itemTableId = BATTLE_TOWER_ITEM_PERSIM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_VICTREEBEL_1] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_LEAF_BLADE, MOVE_SLEEP_POWDER, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_ELECTRODE_1] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_LIGHT_SCREEN, MOVE_REFLECT},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_EXPLOUD_1] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_BOOMBURST, MOVE_SHADOW_BALL, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHIFTRY_1] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_LEAF_STORM, MOVE_EXPLOSION, MOVE_KNOCK_OFF, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_TOWER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_GLALIE_1] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_ICY_WIND, MOVE_TAUNT, MOVE_SPIKES, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_LUDICOLO_1] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_THUNDER_PUNCH, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_TOWER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HYPNO_1] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_PSYCHIC},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GOLEM_1] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_COUNTER, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYDON_1] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_MEGAHORN},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALAKAZAM_1] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PSYCHIC},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WEEZING_1] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL, MOVE_PAIN_SPLIT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_KANGASKHAN_1] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_BODY_SLAM, MOVE_BRICK_BREAK, MOVE_COUNTER, MOVE_FAKE_OUT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTABUZZ_1] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDERBOLT, MOVE_REFLECT, MOVE_ICE_PUNCH, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_TAUROS_1] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_FACADE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SLOWBRO_1] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_PSYCHIC, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SLOWKING_1] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_CALM_MIND, MOVE_SLACK_OFF},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILTANK_1] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_COUNTER, MOVE_MILK_DRINK},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ALTARIA_1] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_OUTRAGE, MOVE_FIRE_BLAST, MOVE_MOONBLAST, MOVE_DRAGON_CLAW},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NIDOQUEEN_1] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDOKING_1] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_HORN_DRILL, MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_LOVELY_KISS},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGMAR_1] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDER_PUNCH, MOVE_CROSS_CHOP, MOVE_PSYCHIC},
        .itemTableId = BATTLE_TOWER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_CRADILY_1] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_GIGA_DRAIN, MOVE_ROCK_SLIDE, MOVE_TOXIC, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_ARMALDO_1] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_IRON_DEFENSE, MOVE_KNOCK_OFF, MOVE_ROCK_BLAST, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_GOLDUCK_1] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DIG, MOVE_CROSS_CHOP, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_TOWER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_RAPIDASH_1] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_KICK, MOVE_RETURN, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_MUK_1] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BODY_SLAM, MOVE_CURSE, MOVE_MINIMIZE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GENGAR_1] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_AMPHAROS_1] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_OUTRAGE},
        .itemTableId = BATTLE_TOWER_ITEM_MAGNET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SCIZOR_1] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_METAL_CLAW, MOVE_SUPERPOWER, MOVE_SILVER_WIND, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HERACROSS_1] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_BRICK_BREAK, MOVE_ROCK_TOMB, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_1] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_MEGA_KICK, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_HOUNDOOM_1] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_CRUNCH, MOVE_FIRE_BLAST, MOVE_DESTINY_BOND, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_DONPHAN_1] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_GUNK_SHOT, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLAYDOL_1] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WAILORD_1] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_SURF, MOVE_TOXIC, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_NINETALES_1] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_HYPNOSIS, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_TOWER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MACHAMP_1] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_STONE_EDGE, MOVE_COUNTER, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHUCKLE_1] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_ROLLOUT, MOVE_CURSE, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STEELIX_1] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_CURSE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TENTACRUEL_1] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SWORDS_DANCE, MOVE_SUBSTITUTE, MOVE_HYDRO_PUMP},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_AERODACTYL_1] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, MOVE_SKY_ATTACK, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_TOWER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_PORYGON2_1] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECYCLE, MOVE_AGILITY},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GARDEVOIR_1] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_MOONBLAST, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EXEGGUTOR_1] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_SYNTHESIS, MOVE_PSYCHIC},
        .itemTableId = BATTLE_TOWER_ITEM_MIRACLE_SEED,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_1] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLYGON_1] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BOOMBURST, MOVE_SUPERPOWER},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
	[FRONTIER_MON_VENUSAUR_1] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VAPOREON_1] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_GROWTH, MOVE_BITE, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JOLTEON_1] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_BATON_PASS, MOVE_WISH},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLAREON_1] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_BITE, MOVE_ZAP_CANNON},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MEGANIUM_1] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_OUTRAGE, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ESPEON_1] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_MORNING_SUN, MOVE_CALM_MIND, MOVE_BATON_PASS},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_UMBREON_1] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CONFUSE_RAY, MOVE_CRUNCH, MOVE_DOUBLE_TEAM, MOVE_BATON_PASS},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
	[FRONTIER_MON_BLASTOISE_1] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_CRUNCH, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FERALIGATR_1] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_CRUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AGGRON_1] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_HEAD_SMASH, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLAZIKEN_1] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_HI_JUMP_KICK, MOVE_SOLAR_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_WALREIN_1] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_BLIZZARD, MOVE_HAIL, MOVE_SURF, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SCEPTILE_1] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_LEECH_SEED, MOVE_CRUNCH, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
	[FRONTIER_MON_CHARIZARD_1] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TYPHLOSION_1] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_1] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SURF, MOVE_ATTRACT, MOVE_CONFUSE_RAY, MOVE_SING},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_CROBAT_1] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_BRAVE_BIRD, MOVE_TAUNT, MOVE_SUPER_FANG, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SWAMPERT_1] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_CURSE, MOVE_EARTHQUAKE, MOVE_REST, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GYARADOS_1] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_THUNDER_WAVE, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_1] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_SELF_DESTRUCT, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_1] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_OUTRAGE, MOVE_ICE_BEAM, MOVE_SURF},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLISSEY_1] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_TOXIC, MOVE_MINIMIZE, MOVE_SEISMIC_TOSS, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_1] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCANINE_1] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLAMETHROWER, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_TOWER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SALAMENCE_1] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_METAGROSS_1] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_REFLECT, MOVE_EXPLOSION, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLAKING_1] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_BODY_SLAM, MOVE_BULK_UP, MOVE_SLACK_OFF, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DUGTRIO_2] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEDICHAM_2] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_HI_JUMP_KICK, MOVE_COUNTER, MOVE_FAKE_OUT, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_MAROWAK_2] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_ICY_WIND},
        .itemTableId = BATTLE_TOWER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_QUAGSIRE_2] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_CURSE, MOVE_EARTHQUAKE, MOVE_RECOVER, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MISDREAVUS_2] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_PSYCHIC, MOVE_ATTRACT, MOVE_THUNDER, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
	[FRONTIER_MON_FEAROW_2] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_TRI_ATTACK, MOVE_ATTRACT, MOVE_DRILL_RUN},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GRANBULL_2] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_OVERHEAT, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_DAZZLING_GLEAM},
        .itemTableId = BATTLE_TOWER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JYNX_2] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_LOVELY_KISS, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DUSCLOPS_2] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_DODRIO_2] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_MIME_2] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_BATON_PASS, MOVE_SWAGGER, MOVE_PSYCH_UP, MOVE_PSYCHIC},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LANTURN_2] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_AGILITY, MOVE_ENDURE, MOVE_THUNDERBOLT, MOVE_SURF},
        .itemTableId = BATTLE_TOWER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BRELOOM_2] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH, MOVE_SPORE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_FORRETRESS_2] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_EXPLOSION, MOVE_SPIKES, MOVE_COUNTER, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SKARMORY_2] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_SPIKES, MOVE_WHIRLWIND, MOVE_DRILL_PECK, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_WHISCASH_2] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, MOVE_RETURN},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_XATU_2] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_FLY, MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_CLEFABLE_2] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_METEOR_MASH, MOVE_COSMIC_POWER, MOVE_SOFT_BOILED, MOVE_MOONBLAST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_HARIYAMA_2] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
	[FRONTIER_MON_RAICHU_2] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDERBOLT, MOVE_REVERSAL, MOVE_ENDURE, MOVE_AGILITY},
        .itemTableId = BATTLE_TOWER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_DEWGONG_2] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_ENCORE, MOVE_SURF},
        .itemTableId = BATTLE_TOWER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MANECTRIC_2] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_CRUNCH, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VILEPLUME_2] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_INGRAIN, MOVE_DOUBLE_TEAM, MOVE_TOXIC, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_VICTREEBEL_2] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_ATTRACT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_SERIOUS
    },
    [FRONTIER_MON_ELECTRODE_2] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_TAUNT, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXPLOUD_2] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_BOOMBURST, MOVE_FIRE_BLAST},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_SHIFTRY_2] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_NASTY_PLOT, MOVE_KNOCK_OFF, MOVE_LEAF_BLADE, MOVE_HEAT_WAVE},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GLALIE_2] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_EXPLOSION, MOVE_ENDURE, MOVE_EARTHQUAKE, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_LUDICOLO_2] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDER_PUNCH, MOVE_LEAF_STORM},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HYPNO_2] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_HYPNOSIS, MOVE_NIGHTMARE, MOVE_DREAM_EATER, MOVE_PSYCHIC},
        .itemTableId = BATTLE_TOWER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOLEM_2] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_ROCK_SLIDE, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYDON_2] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_HORN_DRILL, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALAKAZAM_2] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_DAZZLING_GLEAM, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WEEZING_2] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_MEMENTO, MOVE_SLUDGE_BOMB, MOVE_EXPLOSION, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KANGASKHAN_2] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_CRUSH_CLAW, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTABUZZ_2] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_ICE_PUNCH, MOVE_CROSS_CHOP},
        .itemTableId = BATTLE_TOWER_ITEM_MAGNET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_TAUROS_2] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLOWBRO_2] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_SLACK_OFF, MOVE_CALM_MIND, MOVE_PSYCHIC},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SLOWKING_2] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_SLACK_OFF, MOVE_THUNDER_WAVE, MOVE_SURF, MOVE_PSYCHIC},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MILTANK_2] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SHADOW_BALL, MOVE_BODY_SLAM, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALTARIA_2] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_PERISH_SONG, MOVE_DRAGON_BREATH, MOVE_PROTECT, MOVE_FIRE_SPIN},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_NIDOQUEEN_2] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDOKING_2] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_STONE_EDGE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MAGMAR_2] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUBSTITUTE, MOVE_THUNDER_PUNCH, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CRADILY_2] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARMALDO_2] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLDUCK_2] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_CROSS_CHOP, MOVE_SURF, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_RAPIDASH_2] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FIRE_BLAST, MOVE_BOUNCE, MOVE_DOUBLE_TEAM, MOVE_ATTRACT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MUK_2] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_CURSE, MOVE_REST, MOVE_SLUDGE_BOMB, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GENGAR_2] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_AMPHAROS_2] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SCIZOR_2] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_SILVER_WIND, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_MORNING_SUN},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_HERACROSS_2] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_REST, MOVE_SLEEP_TALK, MOVE_BULK_UP},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_URSARING_2] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_BODY_SLAM, MOVE_BULK_UP, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_HOUNDOOM_2] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_ROAR, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DONPHAN_2] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_EARTHQUAKE, MOVE_ENDEAVOR},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_CLAYDOL_2] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_COSMIC_POWER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_WAILORD_2] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_IRON_HEAD, MOVE_REST, MOVE_CURSE, MOVE_AMNESIA},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NINETALES_2] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_HEAT_WAVE, MOVE_SOLAR_BEAM, MOVE_GRUDGE, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MACHAMP_2] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_STONE_EDGE, MOVE_BULK_UP, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHUCKLE_2] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_SANDSTORM, MOVE_DIG, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STEELIX_2] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_ROAR, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TENTACRUEL_2] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_KNOCK_OFF, MOVE_SURF},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_AERODACTYL_2] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PORYGON2_2] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GARDEVOIR_2] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_DOUBLE_TEAM, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EXEGGUTOR_2] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_RETURN, MOVE_SWORDS_DANCE, MOVE_ANCIENT_POWER, MOVE_MOONLIGHT},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STARMIE_2] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLYGON_2] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_SOLAR_BEAM, MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW, MOVE_SUNNY_DAY},
        .itemTableId = BATTLE_TOWER_ITEM_DRAGON_FANG,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VENUSAUR_2] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_GROWTH, MOVE_GIGA_DRAIN, MOVE_KNOCK_OFF, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_TOWER_ITEM_POISON_BARB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VAPOREON_2] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_BATON_PASS, MOVE_BITE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_JOLTEON_2] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_GROWTH, MOVE_BATON_PASS, MOVE_ROAR},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLAREON_2] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_SUPERPOWER, MOVE_OVERHEAT, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEGANIUM_2] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_LEECH_SEED, MOVE_SUBSTITUTE, MOVE_DOUBLE_TEAM, MOVE_TOXIC},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_ESPEON_2] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND, MOVE_MORNING_SUN},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_UMBREON_2] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_CURSE, MOVE_BODY_SLAM, MOVE_MOONLIGHT, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLASTOISE_2] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_MEGA_KICK, MOVE_BRICK_BREAK, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_TOWER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_FERALIGATR_2] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SUPERPOWER, MOVE_CRUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_AGGRON_2] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_IRON_HEAD, MOVE_HEAD_SMASH, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLAZIKEN_2] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_BLAZE_KICK, MOVE_KNOCK_OFF, MOVE_THUNDER_PUNCH, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_WALREIN_2] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_CURSE, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SCEPTILE_2] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_THUNDER_PUNCH, MOVE_CRUNCH, MOVE_LEAF_STORM},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
	[FRONTIER_MON_CHARIZARD_2] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLY, MOVE_DRAGON_DANCE, MOVE_OVERHEAT},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYPHLOSION_2] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDER_PUNCH, MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_LAPRAS_2] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_REST, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_CROBAT_2] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_TOXIC, MOVE_FLY, MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SWAMPERT_2] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GYARADOS_2] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDERBOLT, MOVE_FIRE_BLAST, MOVE_BLIZZARD},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SNORLAX_2] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_EARTHQUAKE, MOVE_BODY_SLAM, MOVE_CURSE, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_2] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_DRAGON_BREATH, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLISSEY_2] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_SEISMIC_TOSS, MOVE_THUNDER_WAVE, MOVE_ATTRACT, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_2] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCANINE_2] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_CRUNCH, MOVE_SOLAR_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SALAMENCE_2] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_BREATH, MOVE_TOXIC, MOVE_WISH, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_METAGROSS_2] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_EXPLOSION, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLAKING_2] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_MEGA_KICK, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUGTRIO_3] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SLUDGE_BOMB, MOVE_FISSURE},
        .itemTableId = BATTLE_TOWER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MEDICHAM_3] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_HI_JUMP_KICK, MOVE_SIGNAL_BEAM, MOVE_ROCK_SLIDE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MISDREAVUS_3] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_PERISH_SONG, MOVE_MEAN_LOOK, MOVE_THUNDER_WAVE, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
	[FRONTIER_MON_FEAROW_3] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_BRAVE_BIRD, MOVE_RETURN, MOVE_DRILL_RUN, MOVE_QUICK_ATTACK},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GRANBULL_3] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_BULK_UP, MOVE_EARTHQUAKE, MOVE_REST, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JYNX_3] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_DREAM_EATER, MOVE_LOVELY_KISS, MOVE_ICE_BEAM, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DUSCLOPS_3] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_PSYCH_UP, MOVE_SWAGGER, MOVE_SHADOW_BALL, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DODRIO_3] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MR_MIME_3] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_TRICK, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LANTURN_3] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_MAGNET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BRELOOM_3] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_IRON_TAIL, MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_SPORE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FORRETRESS_3] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN, MOVE_ZAP_CANNON},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_WHISCASH_3] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_SLEEP_TALK, MOVE_REST, MOVE_SURF, MOVE_FISSURE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_XATU_3] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_HEAT_WAVE, MOVE_DAZZLING_GLEAM},
        .itemTableId = BATTLE_TOWER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SKARMORY_3] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_SLEEP_TALK, MOVE_CURSE, MOVE_REST, MOVE_BRAVE_BIRD},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_MAROWAK_3] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_TOWER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_QUAGSIRE_3] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_RECOVER, MOVE_TOXIC},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CLEFABLE_3] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_MOONBLAST},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HARIYAMA_3] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BULK_UP},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
	[FRONTIER_MON_RAICHU_3] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_SURF, MOVE_ATTRACT},
        .itemTableId = BATTLE_TOWER_ITEM_CHERI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEWGONG_3] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_HORN_DRILL, MOVE_SHEER_COLD, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MANECTRIC_3] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_FLAMETHROWER, MOVE_OVERHEAT},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_VILEPLUME_3] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_ATTRACT, MOVE_STUN_SPORE, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_VICTREEBEL_3] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_SLEEP_POWDER, MOVE_GROWTH, MOVE_LEAF_BLADE, MOVE_SLUDGE_BOMB},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_ELECTRODE_3] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ENDURE},
        .itemTableId = BATTLE_TOWER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_EXPLOUD_3] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_OVERHEAT, MOVE_ICE_BEAM, MOVE_THUNDER_PUNCH, MOVE_EXTRASENSORY},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SHIFTRY_3] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_HEAT_WAVE},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_GLALIE_3] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_BLIZZARD, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_NEVER_MELT_ICE,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_LUDICOLO_3] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_LEECH_SEED, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_SURF},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HYPNO_3] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCH_UP, MOVE_SWAGGER, MOVE_MEGA_KICK, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLEM_3] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYDON_3] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_MEGAHORN, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_HORN_DRILL},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALAKAZAM_3] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_TRICK, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WEEZING_3] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_EXPLOSION, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_KANGASKHAN_3] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_RETURN, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTABUZZ_3] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDERBOLT, MOVE_CROSS_CHOP},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_TAUROS_3] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_BLIZZARD},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAIVE
    },
    [FRONTIER_MON_SLOWBRO_3] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_FIRE_BLAST, MOVE_CALM_MIND},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SLOWKING_3] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_FIRE_BLAST, MOVE_NASTY_PLOT},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
	[FRONTIER_MON_MILTANK_3] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_HEAL_BELL, MOVE_TOXIC},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_ALTARIA_3] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_FLY},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDOQUEEN_3] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_ICE_BEAM, MOVE_CRUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NIDOKING_3] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_HORN_DRILL, MOVE_FIRE_BLAST, MOVE_BLIZZARD, MOVE_SURF},
        .itemTableId = BATTLE_TOWER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MAGMAR_3] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_OVERHEAT, MOVE_CROSS_CHOP, MOVE_IRON_TAIL, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_CRADILY_3] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ARMALDO_3] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_RAPID_SPIN, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GOLDUCK_3] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_HYDRO_PUMP, MOVE_CROSS_CHOP, MOVE_BLIZZARD, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_RAPIDASH_3] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_HYPNOSIS},
        .itemTableId = BATTLE_TOWER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MUK_3] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EXPLOSION, MOVE_FIRE_BLAST, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_GENGAR_3] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_GIGA_DRAIN, MOVE_SKILL_SWAP},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AMPHAROS_3] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_OUTRAGE, MOVE_AGILITY},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SCIZOR_3] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_REVERSAL, MOVE_ENDURE, MOVE_AGILITY, MOVE_SILVER_WIND},
        .itemTableId = BATTLE_TOWER_ITEM_LIECHI_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HERACROSS_3] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_3] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_CRUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_HOUNDOOM_3] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_CRUNCH, MOVE_FLAMETHROWER, MOVE_NASTY_PLOT, MOVE_SOLAR_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DONPHAN_3] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_FISSURE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_GUNK_SHOT},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLAYDOL_3] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY},
        .itemTableId = BATTLE_TOWER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_WAILORD_3] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_SURF, MOVE_FISSURE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_NINETALES_3] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FIRE_BLAST, MOVE_ENERGY_BALL, MOVE_CONFUSE_RAY, MOVE_ATTRACT},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MACHAMP_3] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_FIRE_BLAST, MOVE_STONE_EDGE, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SHUCKLE_3] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_SUBSTITUTE, MOVE_ATTRACT, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STEELIX_3] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TENTACRUEL_3] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_TOWER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_AERODACTYL_3] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW},
        .itemTableId = BATTLE_TOWER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_PORYGON2_3] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_TRI_ATTACK, MOVE_CURSE, MOVE_SHADOW_BALL, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_GARDEVOIR_3] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_KNOCK_OFF, MOVE_FIRE_PUNCH, MOVE_MOONBLAST},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_EXEGGUTOR_3] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_PSYCHIC},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_STARMIE_3] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLYGON_3] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTHQUAKE, MOVE_TOXIC, MOVE_FLAMETHROWER, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
	[FRONTIER_MON_VENUSAUR_3] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_SWORDS_DANCE, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SLEEP_POWDER},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_VAPOREON_3] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ACID_ARMOR, MOVE_BATON_PASS},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_JOLTEON_3] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_AGILITY, MOVE_BATON_PASS},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_FLAREON_3] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_SUPERPOWER, MOVE_OVERHEAT, MOVE_QUICK_ATTACK, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_MEGANIUM_3] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLAIL, MOVE_ENDURE, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_ESPEON_3] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND, MOVE_BITE},
        .itemTableId = BATTLE_TOWER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_UMBREON_3] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_CRUNCH, MOVE_TOXIC},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BLASTOISE_3] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_FERALIGATR_3] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_AGGRON_3] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_HEAD_SMASH, MOVE_ROCK_POLISH},
        .itemTableId = BATTLE_TOWER_ITEM_HARD_STONE,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_BLAZIKEN_3] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_ENDURE, MOVE_REVERSAL},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_WALREIN_3] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_SHEER_COLD, MOVE_FISSURE, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SCEPTILE_3] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_RASH
    },
	[FRONTIER_MON_CHARIZARD_3] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TYPHLOSION_3] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_EARTHQUAKE, MOVE_OVERHEAT, MOVE_ENDURE, MOVE_REVERSAL},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LAPRAS_3] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HYDRO_PUMP, MOVE_MEGAHORN, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CROBAT_3] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_SUBSTITUTE, MOVE_SWAGGER, MOVE_SCREECH, MOVE_BRAVE_BIRD},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_SWAMPERT_3] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GYARADOS_3] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SNORLAX_3] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_MEGA_KICK, MOVE_SHADOW_BALL, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_3] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_FLAIL, MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_ENDURE},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_BLISSEY_3] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_3] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARCANINE_3] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_MORNING_SUN, MOVE_SUPERPOWER},
        .itemTableId = BATTLE_TOWER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SALAMENCE_3] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_SUNNY_DAY, MOVE_DRAGON_CLAW, MOVE_FIRE_BLAST, MOVE_CRUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_DRAGON_FANG,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_METAGROSS_3] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_DOUBLE_TEAM, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SLAKING_3] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_RETURN, MOVE_HYPER_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DUGTRIO_4] = {
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_TOXIC, MOVE_PROTECT, MOVE_SUBSTITUTE, MOVE_FISSURE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MEDICHAM_4] = {
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_HI_JUMP_KICK, MOVE_SIGNAL_BEAM, MOVE_ROCK_SLIDE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MISDREAVUS_4] = {
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_DESTINY_BOND, MOVE_PSYCHIC, MOVE_TAUNT, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FEAROW_4] = {
        .species = SPECIES_FEAROW,
        .moves = {MOVE_BRAVE_BIRD, MOVE_DOUBLE_EDGE, MOVE_DRILL_RUN, MOVE_HEAT_WAVE},
        .itemTableId = BATTLE_TOWER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_GRANBULL_4] = {
        .species = SPECIES_GRANBULL,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_JYNX_4] = {
        .species = SPECIES_JYNX,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_LOVELY_KISS, MOVE_NASTY_PLOT},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DUSCLOPS_4] = {
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_BRICK_BREAK, MOVE_SHADOW_BALL, MOVE_CURSE, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DODRIO_4] = {
        .species = SPECIES_DODRIO,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_DRILL_PECK, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MR_MIME_4] = {
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LANTURN_4] = {
        .species = SPECIES_LANTURN,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BRELOOM_4] = {
        .species = SPECIES_BRELOOM,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SLUDGE_BOMB, MOVE_SPORE, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_FORRETRESS_4] = {
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_SPIKES, MOVE_PAIN_SPLIT, MOVE_TOXIC, MOVE_SIGNAL_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_WHISCASH_4] = {
        .species = SPECIES_WHISCASH,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, MOVE_BOUNCE},
        .itemTableId = BATTLE_TOWER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_XATU_4] = {
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_HEAT_WAVE, MOVE_DAZZLING_GLEAM, MOVE_GIGA_DRAIN},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SKARMORY_4] = {
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MAROWAK_4] = {
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_TOWER_ITEM_THICK_CLUB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_QUAGSIRE_4] = {
        .species = SPECIES_QUAGSIRE,
        .moves = {MOVE_EARTHQUAKE, MOVE_WHIRLPOOL, MOVE_RECOVER, MOVE_TOXIC},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_RELAXED
    },
    [FRONTIER_MON_CLEFABLE_4] = {
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_HARIYAMA_4] = {
        .species = SPECIES_HARIYAMA,
        .moves = {MOVE_CROSS_CHOP, MOVE_SUBSTITUTE, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
	[FRONTIER_MON_RAICHU_4] = {
        .species = SPECIES_RAICHU,
        .moves = {MOVE_VOLT_TACKLE, MOVE_NASTY_PLOT, MOVE_SURF, MOVE_KNOCK_OFF},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_DEWGONG_4] = {
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_SHEER_COLD, MOVE_ICE_BEAM, MOVE_SURF, MOVE_SIGNAL_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MANECTRIC_4] = {
        .species = SPECIES_MANECTRIC,
        .moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_FLAMETHROWER, MOVE_OVERHEAT},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_VILEPLUME_4] = {
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_VICTREEBEL_4] = {
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_LEAF_BLADE, MOVE_KNOCK_OFF, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_ELECTRODE_4] = {
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_EXPLOUD_4] = {
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_BOOMBURST, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SHIFTRY_4] = {
        .species = SPECIES_SHIFTRY,
        .moves = {MOVE_EXPLOSION, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_GLALIE_4] = {
        .species = SPECIES_GLALIE,
        .moves = {MOVE_ICY_WIND, MOVE_TAUNT, MOVE_SPIKES, MOVE_SUPER_FANG},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LUDICOLO_4] = {
        .species = SPECIES_LUDICOLO,
        .moves = {MOVE_LEECH_SEED, MOVE_RAIN_DANCE, MOVE_DOUBLE_TEAM, MOVE_TOXIC},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_HYPNO_4] = {
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GOLEM_4] = {
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_RHYDON_4] = {
        .species = SPECIES_RHYDON,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HORN_DRILL},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ALAKAZAM_4] = {
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_SUBSTITUTE, MOVE_ENCORE, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WEEZING_4] = {
        .species = SPECIES_WEEZING,
        .moves = {MOVE_EXPLOSION, MOVE_SLUDGE_BOMB, MOVE_WILL_O_WISP, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KANGASKHAN_4] = {
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ELECTABUZZ_4] = {
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_CROSS_CHOP},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_TAUROS_4] = {
        .species = SPECIES_TAUROS,
        .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_FISSURE, MOVE_HORN_DRILL},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_SLOWBRO_4] = {
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_THUNDER_WAVE, MOVE_SLACK_OFF},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_SLOWKING_4] = {
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_ICE_BEAM, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MILTANK_4] = {
        .species = SPECIES_MILTANK,
        .moves = {MOVE_BODY_SLAM, MOVE_CURSE, MOVE_DOUBLE_TEAM, MOVE_MILK_DRINK},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_ALTARIA_4] = {
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_SKY_ATTACK, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_RETURN},
        .itemTableId = BATTLE_TOWER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDOQUEEN_4] = {
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SUPERPOWER, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_NIDOKING_4] = {
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_MEGAHORN, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_THUNDER},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MAGMAR_4] = {
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_PSYCHIC, MOVE_CROSS_CHOP, MOVE_CONFUSE_RAY},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_CRADILY_4] = {
        .species = SPECIES_CRADILY,
        .moves = {MOVE_TOXIC, MOVE_RECOVER, MOVE_MIRROR_COAT, MOVE_LEECH_SEED},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ARMALDO_4] = {
        .species = SPECIES_ARMALDO,
        .moves = {MOVE_X_SCISSOR, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GOLDUCK_4] = {
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_SURF, MOVE_CALM_MIND, MOVE_ICE_BEAM, MOVE_PSYCHIC},
        .itemTableId = BATTLE_TOWER_ITEM_MYSTIC_WATER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAPIDASH_4] = {
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FLAMETHROWER, MOVE_SWORDS_DANCE, MOVE_AGILITY, MOVE_BATON_PASS},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MUK_4] = {
        .species = SPECIES_MUK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BRICK_BREAK, MOVE_GIGA_DRAIN, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_GENGAR_4] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_MEAN_LOOK, MOVE_HYPNOSIS, MOVE_PERISH_SONG, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_AMPHAROS_4] = {
        .species = SPECIES_AMPHAROS,
        .moves = {MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_THUNDER_WAVE, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SCIZOR_4] = {
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_SILVER_WIND, MOVE_SWORDS_DANCE, MOVE_AGILITY, MOVE_BATON_PASS},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_HERACROSS_4] = {
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_MEGAHORN, MOVE_SWORDS_DANCE, MOVE_REVERSAL, MOVE_ENDURE},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_URSARING_4] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_BODY_SLAM, MOVE_FOCUS_PUNCH, MOVE_ROCK_SLIDE, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_HOUNDOOM_4] = {
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_CRUNCH, MOVE_SUNNY_DAY},
        .itemTableId = BATTLE_TOWER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DONPHAN_4] = {
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_SUPERPOWER, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_GUNK_SHOT},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_CLAYDOL_4] = {
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_RAPID_SPIN, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_WAILORD_4] = {
        .species = SPECIES_WAILORD,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_WATER_SPOUT, MOVE_SELF_DESTRUCT},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_NINETALES_4] = {
        .species = SPECIES_NINETALES,
        .moves = {MOVE_OVERHEAT, MOVE_ENERGY_BALL, MOVE_EXTRASENSORY, MOVE_DARK_PULSE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MACHAMP_4] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_STONE_EDGE},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_SHUCKLE_4] = {
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_WRAP, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_STEELIX_4] = {
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_HEAD_SMASH, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TENTACRUEL_4] = {
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_TOWER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIRKY
    },
    [FRONTIER_MON_AERODACTYL_4] = {
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_PORYGON2_4] = {
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GARDEVOIR_4] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_TRICK, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_EXEGGUTOR_4] = {
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_LEAF_STORM, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_4] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_FLYGON_4] = {
        .species = SPECIES_FLYGON,
        .moves = {MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FIRE_BLAST, MOVE_BOOMBURST},
        .itemTableId = BATTLE_TOWER_ITEM_SCOPE_LENS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_VENUSAUR_4] = {
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_VAPOREON_4] = {
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_GROWTH, MOVE_ACID_ARMOR, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_JOLTEON_4] = {
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_BITE, MOVE_BATON_PASS},
        .itemTableId = BATTLE_TOWER_ITEM_KINGS_ROCK,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_FLAREON_4] = {
        .species = SPECIES_FLAREON,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SUPERPOWER, MOVE_SHADOW_BALL},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_MEGANIUM_4] = {
        .species = SPECIES_MEGANIUM,
        .moves = {MOVE_GIGA_DRAIN, MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_BODY_SLAM},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_ESPEON_4] = {
        .species = SPECIES_ESPEON,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_TRICK, MOVE_BITE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_UMBREON_4] = {
        .species = SPECIES_UMBREON,
        .moves = {MOVE_WISH, MOVE_PROTECT, MOVE_CRUNCH, MOVE_HEAL_BELL},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_BLASTOISE_4] = {
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_FERALIGATR_4] = {
        .species = SPECIES_FERALIGATR,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_AGGRON_4] = {
        .species = SPECIES_AGGRON,
        .moves = {MOVE_CURSE, MOVE_REST, MOVE_HEAD_SMASH, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_DEFENSE,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_BLAZIKEN_4] = {
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_OVERHEAT, MOVE_KNOCK_OFF, MOVE_THUNDER_PUNCH, MOVE_HI_JUMP_KICK},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_WALREIN_4] = {
        .species = SPECIES_WALREIN,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_ENCORE, MOVE_SUPER_FANG},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SCEPTILE_4] = {
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_SYNTHESIS, MOVE_CRUNCH, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_MIRACLE_SEED,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
	[FRONTIER_MON_CHARIZARD_4] = {
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_OVERHEAT, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HARDY
    },
    [FRONTIER_MON_TYPHLOSION_4] = {
        .species = SPECIES_TYPHLOSION,
        .moves = {MOVE_FIRE_BLAST, MOVE_THUNDER_PUNCH, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_LAPRAS_4] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_PSYCHIC},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_CROBAT_4] = {
        .species = SPECIES_CROBAT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BRAVE_BIRD, MOVE_SHADOW_BALL, MOVE_STEEL_WING},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SWAMPERT_4] = {
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_SUBSTITUTE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GYARADOS_4] = {
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_4] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_BODY_SLAM, MOVE_SHADOW_BALL, MOVE_SELF_DESTRUCT, MOVE_CURSE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_KINGDRA_4] = {
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_OUTRAGE, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_BLISSEY_4] = {
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_ICE_BEAM, MOVE_SEISMIC_TOSS, MOVE_COUNTER, MOVE_SOFT_BOILED},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_MILOTIC_4] = {
        .species = SPECIES_MILOTIC,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_MIRROR_COAT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARCANINE_4] = {
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_SUPERPOWER, MOVE_HOWL},
        .itemTableId = BATTLE_TOWER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_NAUGHTY
    },
    [FRONTIER_MON_SALAMENCE_4] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_METAGROSS_4] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_SLAKING_4] = {
        .species = SPECIES_SLAKING,
        .moves = {MOVE_THUNDERBOLT, MOVE_FIRE_BLAST, MOVE_ICE_BEAM, MOVE_WATER_PULSE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ARTICUNO_1] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICE_BEAM, MOVE_WATER_PULSE, MOVE_ICICLE_SPEAR, MOVE_EXTRASENSORY},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ZAPDOS_1] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_HEAT_WAVE, MOVE_THUNDER_WAVE, MOVE_WHIRLWIND},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_MOLTRES_1] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FLAMETHROWER, MOVE_BRAVE_BIRD, MOVE_MORNING_SUN, MOVE_ROAR},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_RAIKOU_1] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_TOXIC, MOVE_CALM_MIND, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ENTEI_1] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FLAMETHROWER, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
     [FRONTIER_MON_SUICUNE_1] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_REGIROCK_1] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_SUPERPOWER, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_WHITE_HERB,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGICE_1] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_AMNESIA, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGISTEEL_1] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_IRON_HEAD, MOVE_CURSE, MOVE_AMNESIA, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LATIAS_1] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYCHIC, MOVE_OUTRAGE, MOVE_ICE_BEAM, MOVE_DRAGON_CLAW},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIOS_1] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYCHIC, MOVE_OUTRAGE, MOVE_SURF, MOVE_DRAGON_CLAW},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARTICUNO_2] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_ICICLE_SPEAR, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ZAPDOS_2] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_DRILL_PECK, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MOLTRES_2] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FIRE_BLAST, MOVE_SKY_ATTACK, MOVE_ANCIENT_POWER, MOVE_SOLAR_BEAM},
        .itemTableId = BATTLE_TOWER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_RAIKOU_2] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_CALM_MIND},
        .itemTableId = BATTLE_TOWER_ITEM_MAGNET,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ENTEI_2] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_STONE_EDGE},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SUICUNE_2] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_TOXIC, MOVE_DIVE, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_REGIROCK_2] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_COUNTER, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGICE_2] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_REGISTEEL_2] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_IRON_HEAD, MOVE_SUPERPOWER, MOVE_EARTHQUAKE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread =  F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LATIAS_2] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_DRAGON_CLAW, MOVE_TRICK},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIOS_2] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_TRICK, MOVE_DRAGON_CLAW},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
     [FRONTIER_MON_ARTICUNO_3] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_SUBSTITUTE, MOVE_TOXIC, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_ZAPDOS_3] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRILL_PECK, MOVE_THUNDER_WAVE, MOVE_HEAT_WAVE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_MOLTRES_3] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_MORNING_SUN},
        .itemTableId = BATTLE_TOWER_ITEM_CHARCOAL,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_RAIKOU_3] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_EXTRASENSORY, MOVE_CRUNCH, MOVE_EXTREME_SPEED},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_SASH,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_ENTEI_3] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_STONE_EDGE, MOVE_SHADOW_BALL, MOVE_EXTREME_SPEED},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SUICUNE_3] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_CRUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGIROCK_3] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_CURSE, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_REGICE_3] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_REGISTEEL_3] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_IRON_HEAD, MOVE_THUNDER_WAVE, MOVE_COUNTER, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LATIAS_3] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_DRAGON_FANG,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIOS_3] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_SURF, MOVE_PSYCHIC, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_DRAGON_FANG,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ARTICUNO_4] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_REST, MOVE_REFLECT},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ZAPDOS_4] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_BRAVE_BIRD, MOVE_ANCIENT_POWER, MOVE_BATON_PASS},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_LONELY
    },
    [FRONTIER_MON_MOLTRES_4] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_WILL_O_WISP, MOVE_MORNING_SUN},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAIKOU_4] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_SUBSTITUTE, MOVE_CALM_MIND},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_ENTEI_4] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_FLAMETHROWER, MOVE_ERUPTION, MOVE_CRUNCH, MOVE_EXTRASENSORY},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_SUICUNE_4] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SUBSTITUTE, MOVE_CALM_MIND},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGIROCK_4] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_REGICE_4] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_REGISTEEL_4] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_ANCIENT_POWER, MOVE_IRON_HEAD, MOVE_DOUBLE_TEAM, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_LATIAS_4] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_LIGHT_SCREEN, MOVE_RECOVER, MOVE_REFLECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIOS_4] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_MEMENTO, MOVE_DRAGON_CLAW},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GENGAR_5] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_GENGAR_6] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED  | F_EV_SPREAD_ATTACK,
        .nature = NATURE_HASTY
    },
    [FRONTIER_MON_GENGAR_7] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GENGAR_8] = {
        .species = SPECIES_GENGAR,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_URSARING_5] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CROSS_CHOP},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_6] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_7] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_FACADE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BULK_UP},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_URSARING_8] = {
        .species = SPECIES_URSARING,
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_BELLY_DRUM},
        .itemTableId = BATTLE_TOWER_ITEM_SITRUS_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_HP,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_MACHAMP_5] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_STONE_EDGE, MOVE_SUBSTITUTE, MOVE_TOXIC},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_6] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_STONE_EDGE, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_7] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE, MOVE_ATTRACT, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_MACHAMP_8] = {
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_REVENGE, MOVE_ROCK_SLIDE, MOVE_FACADE, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_FOCUS_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_GARDEVOIR_5] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_ENDURE, MOVE_DESTINY_BOND},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GARDEVOIR_6] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_MOONBLAST, MOVE_CALM_MIND},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_GARDEVOIR_7] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_MOONBLAST, MOVE_PAIN_SPLIT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread =  F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_GARDEVOIR_8] = {
        .species = SPECIES_GARDEVOIR,
        .moves = {MOVE_PSYCHIC, MOVE_WISH, MOVE_MOONBLAST, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread =  F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_STARMIE_5] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_RECOVER, MOVE_LIGHT_SCREEN},
        .itemTableId = BATTLE_TOWER_ITEM_TWISTED_SPOON,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_6] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_CONFUSE_RAY, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_STARMIE_7] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_COSMIC_POWER, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_STARMIE_8] = {
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_TOXIC, MOVE_COSMIC_POWER, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LAPRAS_5] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_WHIRLPOOL, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_DEFENSE,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LAPRAS_6] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_BLIZZARD},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LAPRAS_7] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SHEER_COLD, MOVE_HORN_DRILL, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_TOWER_ITEM_LEPPA_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_LAPRAS_8] = {
        .species = SPECIES_LAPRAS,
        .moves = {MOVE_SHEER_COLD, MOVE_HORN_DRILL, MOVE_SING, MOVE_ATTRACT},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SNORLAX_5] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_6] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_BRICK_BREAK, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SNORLAX_7] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_WHIRLWIND, MOVE_BODY_SLAM, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_SNORLAX_8] = {
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_RETURN, MOVE_SLEEP_TALK, MOVE_CURSE, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SALAMENCE_5] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_FLY, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_SALAMENCE_6] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_EARTHQUAKE, MOVE_AERIAL_ACE, MOVE_FIRE_BLAST, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_SALAMENCE_7] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_HYDRO_PUMP, MOVE_BRICK_BREAK},
        .itemTableId = BATTLE_TOWER_ITEM_DRAGON_FANG,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MILD
    },
    [FRONTIER_MON_SALAMENCE_8] = {
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_CLAW, MOVE_HYDRO_PUMP, MOVE_OUTRAGE},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_METAGROSS_5] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_METEOR_MASH},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_METAGROSS_6] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_PURSUIT, MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_METAGROSS_7] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_EARTHQUAKE, MOVE_METEOR_MASH, MOVE_TRICK, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SCARF,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK,
        .nature = NATURE_JOLLY
    },
    [FRONTIER_MON_METAGROSS_8] = {
        .species = SPECIES_METAGROSS,
        .moves = {MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_PROTECT, MOVE_TOXIC},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_REGIROCK_5] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_EARTHQUAKE, MOVE_FOCUS_PUNCH, MOVE_ROCK_SLIDE, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGIROCK_6] = {
        .species = SPECIES_REGIROCK,
        .moves = {MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_EXPLOSION},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_REGICE_5] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EXPLOSION, MOVE_COUNTER},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_REGICE_6] = {
        .species = SPECIES_REGICE,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_REGISTEEL_5] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_IRON_HEAD, MOVE_REST, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_IMPISH
    },
    [FRONTIER_MON_REGISTEEL_6] = {
        .species = SPECIES_REGISTEEL,
        .moves = {MOVE_CURSE, MOVE_IRON_HEAD, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_LATIAS_5] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LATIAS_6] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_MIST_BALL, MOVE_DRAGON_CLAW, MOVE_RECOVER, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_TOWER_ITEM_SHELL_BELL,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LATIAS_7] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_WISH, MOVE_DRAGON_CLAW, MOVE_RECOVER, MOVE_ROAR},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_LATIAS_8] = {
        .species = SPECIES_LATIAS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_CALM_MIND},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIOS_5] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_DRAGON_FANG,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_LATIOS_6] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_CALM_MIND, MOVE_SURF, MOVE_DRAGON_CLAW, MOVE_PSYCHIC},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_LATIOS_7] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_DRAGON_DANCE, MOVE_RECOVER},
        .itemTableId = BATTLE_TOWER_ITEM_BRIGHT_POWDER,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_LATIOS_8] = {
        .species = SPECIES_LATIOS,
        .moves = {MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_DRAGON_DANCE, MOVE_PSYCHIC},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_RASH
    },
    [FRONTIER_MON_DRAGONITE_1] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_EARTHQUAKE, MOVE_FLY, MOVE_BRICK_BREAK, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_2] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_SUBSTITUTE, MOVE_FOCUS_PUNCH, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_BRAVE
    },
    [FRONTIER_MON_DRAGONITE_3] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_REST, MOVE_SLEEP_TALK, MOVE_HAZE, MOVE_THUNDER_WAVE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_ATTACK,
        .nature = NATURE_CALM
    },
    [FRONTIER_MON_DRAGONITE_4] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_FLY, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_5] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_OUTRAGE, MOVE_FIRE_BLAST, MOVE_THUNDER_WAVE, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_DRAGONITE_6] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDERBOLT, MOVE_SURF, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGONITE_7] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_THUNDER, MOVE_SURF, MOVE_RAIN_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_DRAGON_FANG,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_DRAGONITE_8] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_AERIAL_ACE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_EXTREME_SPEED},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_DRAGONITE_9] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_CURSE, MOVE_REST, MOVE_SLEEP_TALK, MOVE_AERIAL_ACE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_DRAGONITE_10] = {
        .species = SPECIES_DRAGONITE,
        .moves = {MOVE_FIRE_BLAST, MOVE_OUTRAGE, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_TYRANITAR_1] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE},
        .itemTableId = BATTLE_TOWER_ITEM_QUICK_CLAW,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_QUIET
    },
    [FRONTIER_MON_TYRANITAR_2] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ICE_BEAM, MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_THUNDERBOLT},
        .itemTableId = BATTLE_TOWER_ITEM_BLACK_GLASSES,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TYRANITAR_3] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_TAUNT, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_4] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_CRUNCH, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_TYRANITAR_5] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_6] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CURSE, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_CHESTO_BERRY,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_CAREFUL
    },
    [FRONTIER_MON_TYRANITAR_7] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_FOCUS_PUNCH, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_8] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_THUNDER_WAVE, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_9] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SUPERPOWER, MOVE_IRON_HEAD},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_BAND,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_ATTACK,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_TYRANITAR_10] = {
        .species = SPECIES_TYRANITAR,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_ADAMANT
    },
    [FRONTIER_MON_ARTICUNO_5] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_BLIZZARD, MOVE_DOUBLE_EDGE, MOVE_AGILITY, MOVE_SKY_ATTACK},
        .itemTableId = BATTLE_TOWER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_ATTACK,
        .nature = NATURE_DOCILE
    },
    [FRONTIER_MON_ARTICUNO_6] = {
        .species = SPECIES_ARTICUNO,
        .moves = {MOVE_ICICLE_SPEAR, MOVE_ANCIENT_POWER, MOVE_SLEEP_TALK, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_SASSY
    },
    [FRONTIER_MON_ZAPDOS_5] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_HEAT_WAVE, MOVE_AGILITY, MOVE_BATON_PASS},
        .itemTableId = BATTLE_TOWER_ITEM_PETAYA_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_HP,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ZAPDOS_6] = {
        .species = SPECIES_ZAPDOS,
        .moves = {MOVE_THUNDERBOLT, MOVE_HEAT_WAVE, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOLTRES_5] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_SUBSTITUTE, MOVE_PROTECT},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_MOLTRES_6] = {
        .species = SPECIES_MOLTRES,
        .moves = {MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_REST, MOVE_SLEEP_TALK},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_HP | F_EV_SPREAD_SPEED,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_RAIKOU_5] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_CRUNCH, MOVE_EXTRASENSORY, MOVE_THUNDER},
        .itemTableId = BATTLE_TOWER_ITEM_CHOICE_SPECS,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_RAIKOU_6] = {
        .species = SPECIES_RAIKOU,
        .moves = {MOVE_THUNDERBOLT, MOVE_CALM_MIND, MOVE_CRUNCH, MOVE_EXTRASENSORY},
        .itemTableId = BATTLE_TOWER_ITEM_LUM_BERRY,
        .evSpread = F_EV_SPREAD_SPEED | F_EV_SPREAD_SP_ATTACK,
        .nature = NATURE_TIMID
	},
    [FRONTIER_MON_ENTEI_5] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_CALM_MIND, MOVE_ENDURE, MOVE_CRUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_SALAC_BERRY,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_MODEST
    },
    [FRONTIER_MON_ENTEI_6] = {
        .species = SPECIES_ENTEI,
        .moves = {MOVE_SACRED_FIRE, MOVE_CALM_MIND, MOVE_SOLAR_BEAM, MOVE_CRUNCH},
        .itemTableId = BATTLE_TOWER_ITEM_POWER_HERB,
        .evSpread = F_EV_SPREAD_SP_ATTACK | F_EV_SPREAD_SPEED,
        .nature = NATURE_TIMID
    },
    [FRONTIER_MON_SUICUNE_5] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_SLEEP_TALK, MOVE_CALM_MIND, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    },
    [FRONTIER_MON_SUICUNE_6] = {
        .species = SPECIES_SUICUNE,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_REST},
        .itemTableId = BATTLE_TOWER_ITEM_LEFTOVERS,
        .evSpread = F_EV_SPREAD_DEFENSE | F_EV_SPREAD_HP,
        .nature = NATURE_BOLD
    }
};
