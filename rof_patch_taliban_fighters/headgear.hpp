#define REBELFACEWEAR allowedFacewear[] = {\
"rhsusf_shemagh_od", 0.5,\
"rhsusf_shemagh2_od", 0.5,\
"rhsusf_shemagh_white", 0.5,\
"rhsusf_shemagh2_white", 0.5,\
"rhsusf_shemagh_tan", 0.5,\
"rhsusf_shemagh2_tan", 0.5,\
"", 1\
};
#define CIVFACEWEAR allowedFacewear[] = {\
"rhsusf_shemagh_tan", 0.25,\
"rhsusf_shemagh_white", 0.25,\
"G_Spectacles", 0.3,\
"", 1\
};

class H_HelmetB;
class Afghan_01Hat: H_HelmetB {
    REBELFACEWEAR
};
class Afghan_02Hat: H_HelmetB {
    REBELFACEWEAR
};
class Afghan_03Hat: H_HelmetB {
    REBELFACEWEAR
};
class Afghan_04Hat: H_HelmetB {
    REBELFACEWEAR
};
class Afghan_05Hat: H_HelmetB {
    REBELFACEWEAR
};
class Afghan_06Hat: H_HelmetB {
    REBELFACEWEAR
};

class Afghan_01Hat_civ: Afghan_01Hat {
    scope = 1;
    CIVFACEWEAR
};
class Afghan_02Hat_civ: Afghan_02Hat {
    scope = 1;
    CIVFACEWEAR
};
class Afghan_03Hat_civ: Afghan_03Hat {
    scope = 1;
    CIVFACEWEAR
};
class Afghan_04Hat_civ: Afghan_04Hat {
    scope = 1;
    CIVFACEWEAR
};
class Afghan_05Hat_civ: Afghan_05Hat {
    scope = 1;
    CIVFACEWEAR
};
class Afghan_06Hat_civ: Afghan_06Hat {
    scope = 1;
    CIVFACEWEAR
};