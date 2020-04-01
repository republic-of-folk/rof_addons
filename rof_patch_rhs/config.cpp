class CfgPatches
{
    class rof_patch_rhs
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.32;
        requiredAddons[] = {
            "rhsgref_c_troops",
            "rhssaf_c_gear"
        };
        name = "Republic of Folk patch to RHS";
        author = "Republic of Folk";
        url = "";
    };
};

class CfgVehicles {
    class Bag_Base;
    class rhsgref_hidf_alicepack: Bag_Base {
        maximumLoad = 538;
    };
    class rhssaf_alice_md2camo: Bag_Base {
        maximumLoad = 538;
    }
    class rhssaf_alice_smb: Bag_Base {
        maximumLoad = 538;
    };
};