#define FTL_MACRO(WEAPON, MAGAZINE) \
    weapons[] = {WEAPON};\
    respawnWeapons[] = {WEAPON};\
    magazines[] = {LIST_6(MAGAZINE), "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_an_m8hc", "rhs_mag_m18_yellow", "rhs_mag_m18_green", "rhs_mag_m18_red"};\
    respawnMagazines[] = {LIST_6(MAGAZINE), "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_an_m8hc", "rhs_mag_m18_yellow", "rhs_mag_m18_green", "rhs_mag_m18_red"};\
    Items[] = {"FirstAidKit", "rhsusf_ANPVS_14"};\
    RespawnItems[] = {"FirstAidKit", "rhsusf_ANPVS_14"};

#define GR_MACRO(WEAPON, MAGAZINE, GRENADE1, GRENADE2) \
    weapons[] = {WEAPON};\
    respawnWeapons[] = {WEAPON};\
    magazines[] = {LIST_5(MAGAZINE), LIST_6(GRENADE1), LIST_2(GRENADE2)};\
    respawnMagazines[] = {LIST_5(MAGAZINE), LIST_6(GRENADE1), LIST_2(GRENADE2)};\
    Items[] = {"FirstAidKit", "rhsusf_ANPVS_14"};\
    RespawnItems[] = {"FirstAidKit", "rhsusf_ANPVS_14"};

#define AR_MACRO(WEAPON, MAGAZINE) \
    weapons[] = {WEAPON};\
    respawnWeapons[] = {WEAPON};\
    magazines[] = {LIST_3(MAGAZINE)};\
    respawnMagazines[] = {LIST_3(MAGAZINE)};\
    Items[] = {"FirstAidKit", "rhsusf_ANPVS_14"};\
    RespawnItems[] = {"FirstAidKit", "rhsusf_ANPVS_14"};

#define R_MACRO(WEAPON, MAGAZINE) \
    weapons[] = {WEAPON};\
    respawnWeapons[] = {WEAPON};\
    magazines[] = {LIST_6(MAGAZINE), "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_an_m8hc", "rhs_mag_m18_yellow"};\
    respawnMagazines[] = {LIST_6(MAGAZINE), "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_an_m8hc", "rhs_mag_m18_yellow"};\
    Items[] = {"FirstAidKit", "rhsusf_ANPVS_14"};\
    RespawnItems[] = {"FirstAidKit", "rhsusf_ANPVS_14"};

#define LAUNCHER_MACRO(WEAPON, MAGAZINE, LAUNCHER, ROCKET) \
    weapons[] = {WEAPON, LAUNCHER};\
    respawnWeapons[] = {WEAPON, LAUNCHER};\
    magazines[] = {ROCKET, LIST_5(MAGAZINE), "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_an_m8hc", "rhs_mag_m18_yellow"};\
    respawnMagazines[] = {ROCKET, LIST_5(MAGAZINE), "rhs_mag_m67", "rhs_mag_m67", "rhs_mag_an_m8hc", "rhs_mag_m18_yellow"};\
    Items[] = {"FirstAidKit", "rhsusf_ANPVS_14"};\
    RespawnItems[] = {"FirstAidKit", "rhsusf_ANPVS_14"};
