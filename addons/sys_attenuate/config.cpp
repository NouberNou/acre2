#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"acre_main", "acre_sys_core"};
        AUTHOR;
        version = VERSION;
    };
};

#include "cfgEventhandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgSoundEffects.hpp"
