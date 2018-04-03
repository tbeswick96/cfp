//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 180.143869 on Stable branch
// Generated with ALiVE version 1.5.3.1801061
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

    class C_Truck_02_covered_F;
    class C_Truck_02_covered_F_OCimport_01 : C_Truck_02_covered_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Truck_02_covered_F_OCimport_02 : C_Truck_02_covered_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class C_Van_01_box_F;
    class C_Van_01_box_F_OCimport_01 : C_Van_01_box_F { scope = 0; class EventHandlers; };
    class C_Van_01_box_F_OCimport_02 : C_Van_01_box_F_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_C_Skoda_White_CIV;
    class CUP_C_Skoda_White_CIV_OCimport_01 : CUP_C_Skoda_White_CIV { scope = 0; class EventHandlers; };
    class CUP_C_Skoda_White_CIV_OCimport_02 : CUP_C_Skoda_White_CIV_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_C_Skoda_Blue_CIV;
    class CUP_C_Skoda_Blue_CIV_OCimport_01 : CUP_C_Skoda_Blue_CIV { scope = 0; class EventHandlers; };
    class CUP_C_Skoda_Blue_CIV_OCimport_02 : CUP_C_Skoda_Blue_CIV_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_C_Skoda_Green_CIV;
    class CUP_C_Skoda_Green_CIV_OCimport_01 : CUP_C_Skoda_Green_CIV { scope = 0; class EventHandlers; };
    class CUP_C_Skoda_Green_CIV_OCimport_02 : CUP_C_Skoda_Green_CIV_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_C_Datsun_Plain;
    class CUP_C_Datsun_Plain_OCimport_01 : CUP_C_Datsun_Plain { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_Datsun_Plain_OCimport_02 : CUP_C_Datsun_Plain_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_C_Ural_Civ_02;
    class CUP_C_Ural_Civ_02_OCimport_01 : CUP_C_Ural_Civ_02 { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_Ural_Civ_02_OCimport_02 : CUP_C_Ural_Civ_02_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_C_Ural_Civ_01;
    class CUP_C_Ural_Civ_01_OCimport_01 : CUP_C_Ural_Civ_01 { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_Ural_Civ_01_OCimport_02 : CUP_C_Ural_Civ_01_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_C_LR_Transport_CTK;
    class CUP_C_LR_Transport_CTK_OCimport_01 : CUP_C_LR_Transport_CTK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_LR_Transport_CTK_OCimport_02 : CUP_C_LR_Transport_CTK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };


    class CFP_C_AFRISLAMIC_Civ_1_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian";
        side = 3;
	genericNames = "Afromen";
        faction = "CFP_C_AFRISLAMIC";

        identityTypes[] = {"Head_African","LanguagePER_F"};
        uniformClass = "CUP_O_TKI_Khet_Partug_05";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_H_TKI_Lungee_Open_04","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_H_TKI_Lungee_Open_04","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_O_TKI_Khet_Partug_05",{}},{},{},"CUP_H_TKI_Lungee_Open_04","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	randomGearProbability = 100;

	// African Clothing
		uniformList[] = {
	"CFP_U_KhetPartug_Long_Olive", 0.2,
    "CFP_U_KhetPartug_Short_Olive", 0.2,
    "CFP_U_KhetPartug_Long_Light_Olive", 0.2,
    "CFP_U_KhetPartug_Short_Light_Olive", 0.2,
    "CFP_U_KhetPartug_Long_Black", 0.2,
    "CFP_U_KhetPartug_Short_GreenOlive", 0.2,
    "CFP_U_KhetPartug_Long_Blue", 0.2,
    "CFP_U_KhetPartug_Long_BlueGrey", 0.2,
    "CFP_U_KhetPartug_Long_Brown", 0.2,
    "CFP_U_KhetPartug_Long_Creme", 0.2,
    "CFP_U_KhetPartug_Long_Grey", 0.2,
    "CFP_U_KhetPartug_Long_Purple", 0.2,
    "CFP_U_KhetPartug_Long_Tan", 0.2,
    "CFP_U_KhetPartug_Long_White", 0.2,
    "CFP_U_KhetPartug_Short_Blue", 0.2,
    "CFP_U_KhetPartug_Short_BlueGrey", 0.2,
    "CFP_U_KhetPartug_Short_Brown", 0.2,
    "CFP_U_KhetPartug_Short_Creme", 0.2,
    "CFP_U_KhetPartug_Short_Grey", 0.2,
    "CFP_U_KhetPartug_Short_Purple", 0.2,
    "CFP_U_KhetPartug_Short_Tan", 0.2,
    "CFP_U_KhetPartug_Short_White", 0.2,
    "CFP_U_KhetPartug_Short_Black", 0.2
	    };

	// African headgear
		headgearList[] = {
	"CUP_H_TKI_SkullCap_06", 0.2,
	"CUP_H_TKI_SkullCap_04", 0.2,
	"CUP_H_C_Beanie_04", 0.2,
	"CUP_H_TKI_SkullCap_02", 0.2,
	"CUP_H_TKI_Lungee_Open_01", 0.2,
	"CUP_H_TKI_Lungee_Open_06", 0.2,
	"CUP_H_TKI_SkullCap_03", 0.2,
	"CUP_H_TKI_Lungee_Open_05", 0.2,
	"CUP_H_C_Beanie_02", 0.2,
    "CFP_Lungee_Open_Tan", 0.2,
    "CFP_Lungee_Open_LightOlive", 0.2,
    "CFP_Lungee_Open_Grey", 0.2,
    "CFP_Lungee_Open_Creme", 0.2,
    "CFP_Lungee_Open_Brown", 0.2,
    "CFP_Lungee_Open_BlueGrey", 0.2,
    "CFP_Lungee_Open_Blue", 0.2
		};

    // African Beards
        facewearList[] = {
    "", 0.7,
    "CFP_Beard", 0.3
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRISLAMIC_Civ_2_01 : CFP_C_AFRISLAMIC_Civ_1_01 {

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_H_TKI_SkullCap_06","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_H_TKI_SkullCap_06","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_O_TKI_Khet_Partug_03",{}},{},{},"CUP_H_TKI_SkullCap_06","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRISLAMIC_Civ_3_01 : CFP_C_AFRISLAMIC_Civ_1_01 {

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_H_TKI_SkullCap_04","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_H_TKI_SkullCap_04","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_C_Man_casual_2_F",{}},{},{},"CUP_H_TKI_SkullCap_04","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRISLAMIC_Civ_4_01 : CFP_C_AFRISLAMIC_Civ_1_01 {

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_H_C_Beanie_04","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_H_C_Beanie_04","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_O_TKI_Khet_Jeans_04",{{"FirstAidKit",1},{"Chemlight_red",1,1}}},{},{},"CUP_H_C_Beanie_04","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRISLAMIC_Civ_5_01 : CFP_C_AFRISLAMIC_Civ_1_01 {

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_H_TKI_SkullCap_02","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_H_TKI_SkullCap_02","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_C_Poor_1",{}},{},{},"CUP_H_TKI_SkullCap_02","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRISLAMIC_Civ_6_01 : CFP_C_AFRISLAMIC_Civ_1_01 {

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_H_TKI_Lungee_Open_01","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_H_TKI_Lungee_Open_01","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_O_TKI_Khet_Partug_07",{}},{},{},"CUP_H_TKI_Lungee_Open_01","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRISLAMIC_Civ_7_01 : CFP_C_AFRISLAMIC_Civ_1_01 {

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_H_TKI_SkullCap_03","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_H_TKI_SkullCap_03","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_O_TKI_Khet_Partug_04",{}},{},{},"CUP_H_TKI_SkullCap_03","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRISLAMIC_Civ_8_01 : CFP_C_AFRISLAMIC_Civ_1_01 {

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_H_TKI_Lungee_Open_06","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_H_TKI_Lungee_Open_06","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_O_TKI_Khet_Partug_06",{}},{},{},"CUP_H_TKI_Lungee_Open_06","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRISLAMIC_Civ_9_01 : CFP_C_AFRISLAMIC_Civ_1_01 {

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_H_TKI_Lungee_Open_05","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_H_TKI_Lungee_Open_05","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_O_TKI_Khet_Partug_01",{}},{},{},"CUP_H_TKI_Lungee_Open_05","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRISLAMIC_Civ_10_01 : CFP_C_AFRISLAMIC_Civ_1_01 {

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_H_TKI_SkullCap_04","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_H_TKI_SkullCap_04","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_O_TKI_Khet_Partug_08",{{"FirstAidKit",1},{"Chemlight_red",1,1}}},{},{},"CUP_H_TKI_SkullCap_04","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRISLAMIC_Civ_11_01 : CFP_C_AFRISLAMIC_Civ_1_01 {

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_H_C_Beanie_02","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_H_C_Beanie_02","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_U_C_Citizen_03",{}},{},{},"CUP_H_C_Beanie_02","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRISLAMIC_Civ_12_01 : CFP_C_AFRISLAMIC_Civ_1_01 {

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"CUP_H_C_Beanie_04","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"CUP_H_C_Beanie_04","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_U_C_Citizen_02",{}},{},{},"CUP_H_C_Beanie_04","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRISLAMIC_Zamak_01 : C_Truck_02_covered_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak";
        side = 3;
        faction = "CFP_C_AFRISLAMIC";
        crew = "CFP_C_AFRISLAMIC_Civ_3_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRISLAMIC_Truck_Boxer_01 : C_Van_01_box_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck Boxer";
        side = 3;
        faction = "CFP_C_AFRISLAMIC";
        crew = "CFP_C_AFRISLAMIC_Civ_1_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRISLAMIC_Skoda_White_01 : CUP_C_Skoda_White_CIV_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skoda White";
        side = 3;
        faction = "CFP_C_AFRISLAMIC";
        crew = "CFP_C_AFRISLAMIC_Civ_11_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRISLAMIC_Skoda_Blue_01 : CUP_C_Skoda_Blue_CIV_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skoda Blue";
        side = 3;
        faction = "CFP_C_AFRISLAMIC";
        crew = "CFP_C_AFRISLAMIC_Civ_10_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRISLAMIC_Skoda_Green_01 : CUP_C_Skoda_Green_CIV_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skoda Green";
        side = 3;
        faction = "CFP_C_AFRISLAMIC";
        crew = "CFP_C_AFRISLAMIC_Civ_7_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRISLAMIC_Datsun_Pickup_Old_01 : CUP_C_Datsun_Plain_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Datsun Pickup Old";
        side = 3;
        faction = "CFP_C_AFRISLAMIC";
        crew = "CFP_C_AFRISLAMIC_Civ_5_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRISLAMIC_Ural_Yellow_01 : CUP_C_Ural_Civ_02_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural Yellow";
        side = 3;
        faction = "CFP_C_AFRISLAMIC";
        crew = "CFP_C_AFRISLAMIC_Civ_4_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRISLAMIC_Ural_Blue_01 : CUP_C_Ural_Civ_01_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural Blue";
        side = 3;
        faction = "CFP_C_AFRISLAMIC";
        crew = "CFP_C_AFRISLAMIC_Civ_9_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRISLAMIC_Land_Rover_01 : CUP_C_LR_Transport_CTK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover";
        side = 3;
        faction = "CFP_C_AFRISLAMIC";
        crew = "CFP_C_AFRISLAMIC_Civ_12_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};