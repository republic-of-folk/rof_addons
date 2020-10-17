#define _ARMA_

class CfgPatches
{
    class rof_patch_chemical_warfare
    {
        name = "Republic of Folk - Chemical Warfare patch";
        units[] = {};
        requiredVersion = 1.88;
        requiredAddons[] = {"CBRN_gear"};
        author = "Republic of Folk";
        authors[] = {"Republic of Folk"};
        version = "0.0.1";
        versionStr = "0.0.1";
        versionAr[] = {0,0,1};
    };
};

class cfgVehicles
{
    class Man;
    class CAManBase: Man
    {
        class ACE_Actions
        {
            class ACE_Head
            {
                delete CBRN_putMaskOn;
            };
            delete CBRN_Head;
        };
    };
    class MineBase;
    class IEDUrbanSmall_F: MineBase
    {
        class EventHandlers
        {
            delete CBRN_handleCuratorExplosives;
        };
    };
    class CBRN_IEDUrbanSmall_Type1: IEDUrbanSmall_F {};
    class CBRN_IEDUrbanSmall_Type2: CBRN_IEDUrbanSmall_Type1
    {
        scope = 1;
    };
    class IEDLandSmall_F: MineBase
    {
        class EventHandlers
        {
            delete CBRN_handleCuratorExplosives;
        };
    };
    class CBRN_IEDLandSmall_Type1: IEDLandSmall_F {};
    class CBRN_IEDLandSmall_Type2: CBRN_IEDLandSmall_Type1
    {
        scope = 1;
    };
};

class Extended_Init_EventHandlers
{
    class CAManBase
    {
        delete CBRN_giveFactionMask;
    };
};
class Extended_Respawn_EventHandlers
{
    class CAManBase
    {
        delete CBRN_giveFactionMask;
    };
};
class Extended_PostInit_EventHandlers
{
    delete CBRN_handleACEExplosives;
};
