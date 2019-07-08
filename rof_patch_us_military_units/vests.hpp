class VestItem;
class usm_vest_LBE_rm : ItemCore {
    class ItemInfo: VestItem {};
};
class usm_vest_lbv_mg: usm_vest_LBE_rm
{
    class ItemInfo: ItemInfo
    {
        containerClass = "Supply300";
    };
};