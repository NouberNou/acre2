#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "acre_main", "acre_sys_io" };
        VERSION_CONFIG;
        AUTHOR;
    };
};

#include "CfgEventHandlers.hpp"
