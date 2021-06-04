#include "_macros.hpp"

class CfgLoadouts
{
    class EVENT_VDV {
        displayName = "VDV";
        #include "event_vdv.hpp"
    };
    class EVENT_RESERVE {
        displayName = "Reserve";
        #include "event_reserve.hpp"
    };
    class EVENT_US {
        displayName = "US";
        #include "event_us.hpp"
    };
};
