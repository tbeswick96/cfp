    class CFP_Mitznefet : ItemCore
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_Mitznefet.paa;
        scope = 2;
        author = "CFP";
        displayName = "Mitznefet (Woodland Black Facewrap)";

        model = "\x\cfp\addons\models\Miznefet2.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz1_co.paa"};
        class ItemInfo: HeadgearItem
        {
            uniformModel = "\x\cfp\addons\models\Miznefet2.p3d";
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz1_co.paa"};
            mass = 30;
            modelSides[] = {3,1};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };
    class CFP_Mitznefet_Desert : CFP_Mitznefet
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_Mitznefet_Desert.paa;
        displayName = "Mitznefet (Desert Black Facewrap)";

        model = "\x\cfp\addons\models\Miznefet2.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz2_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\models\Miznefet2.p3d";
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz2_co.paa"};
            modelSides[] = {3,1};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };
    class CFP_Mitznefet_Desert_Tan : CFP_Mitznefet
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_Mitznefet_Desert_Tan.paa;
        displayName = "Mitznefet (Desert Tan Facewrap)";

        model = "\x\cfp\addons\models\Miznefet2.p3d";
        hiddenSelections[] = {"Camo","camo1"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz2_co.paa","cup\creatures\people\military\cup_creatures_people_military_pmc\data\facewrap_tan_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\models\Miznefet2.p3d";
            hiddenSelections[] = {"Camo","camo1"};
            hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz2_co.paa","cup\creatures\people\military\cup_creatures_people_military_pmc\data\facewrap_tan_co.paa"};
            modelSides[] = {3,1};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_Mitznefet_Tan : CFP_Mitznefet
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_Mitznefet_Tan.paa;
        displayName = "Mitznefet (Woodland Tan Facewrap)";

        model = "\x\cfp\addons\models\Miznefet2.p3d";
        hiddenSelections[] = {"Camo","camo1"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz1_co.paa","cup\creatures\people\military\cup_creatures_people_military_pmc\data\facewrap_tan_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\models\Miznefet2.p3d";
            hiddenSelections[] = {"Camo","camo1"};
            hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz1_co.paa","cup\creatures\people\military\cup_creatures_people_military_pmc\data\facewrap_tan_co.paa"};
            modelSides[] = {3,1};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_Mitznefet_Ranger : CFP_Mitznefet
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_Mitznefet_Ranger.paa;
        displayName = "Mitznefet (Woodland Ranger Green Facewrap)";

        model = "\x\cfp\addons\models\Miznefet2.p3d";
        hiddenSelections[] = {"Camo","camo1"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz1_co.paa","cup\creatures\people\military\cup_creatures_people_military_pmc\data\facewrap_ranger_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\models\Miznefet2.p3d";
            hiddenSelections[] = {"Camo","camo1"};
            hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz1_co.paa","cup\creatures\people\military\cup_creatures_people_military_pmc\data\facewrap_ranger_co.paa"};
            modelSides[] = {3,1};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_Mitznefet_Desert_Ranger : CFP_Mitznefet
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_Mitznefet_Desert_Ranger.paa;
        displayName = "Mitznefet (Desert Ranger Green Facewrap)";


        model = "\x\cfp\addons\models\Miznefet2.p3d";
        hiddenSelections[] = {"Camo","camo1"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz2_co.paa","cup\creatures\people\military\cup_creatures_people_military_pmc\data\facewrap_ranger_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\models\Miznefet2.p3d";
            hiddenSelections[] = {"Camo","camo1"};
            hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz2_co.paa","cup\creatures\people\military\cup_creatures_people_military_pmc\data\facewrap_ranger_co.paa"};
            modelSides[] = {3,1};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_Mitznefet_Desert_Tropical : CFP_Mitznefet
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_Mitznefet_Desert_Tropical.paa;
        displayName = "Mitznefet (Desert Tropical Green Facewrap)";

        model = "\x\cfp\addons\models\Miznefet2.p3d";
        hiddenSelections[] = {"Camo","camo1"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz2_co.paa","cup\creatures\people\military\cup_creatures_people_military_pmc\data\facewrap_tropical_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\models\Miznefet2.p3d";
            hiddenSelections[] = {"Camo","camo1"};
            hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz2_co.paa","cup\creatures\people\military\cup_creatures_people_military_pmc\data\facewrap_tropical_co.paa"};
            modelSides[] = {3,1};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_Mitznefet_Tropical : CFP_Mitznefet
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_Mitznefet_Tropical.paa;
        displayName = "Mitznefet (Woodland Tropical Green Facewrap)";

        model = "\x\cfp\addons\models\Miznefet2.p3d";
        hiddenSelections[] = {"Camo","camo1"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz1_co.paa","cup\creatures\people\military\cup_creatures_people_military_pmc\data\facewrap_tropical_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\x\cfp\addons\models\Miznefet2.p3d";
            hiddenSelections[] = {"Camo","camo1"};
            hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz1_co.paa","cup\creatures\people\military\cup_creatures_people_military_pmc\data\facewrap_tropical_co.paa"};
            modelSides[] = {3,1};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_MitzHelm1_Wdl  : ItemCore
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_MitzHelm1_Wdl.paa;
        scope = 2;
        weaponPoolAvailable = 1;
        author = "CFP";
        displayName = "Mitznefet v1 (Woodland Base)";

        model = "x\cfp\addons\models\MitzHelmet1.p3d";
        hiddenSelections[] = {"Camo","camo1","camo2","camo3","_helmBase","_leftear","_rightear","_velcro","_VSMz110T"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz1_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "x\cfp\addons\models\MitzHelmet1.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","camo1","camo2","camo3","_leftear","_rightear","_velcro","_VSMz110T"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_MitzHelm1_Des  : CFP_MitzHelm1_Wdl
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_MitzHelm1_Des.paa;
        author = "CFP";
        displayName = "Mitznefet v1 (Desert Base)";
        hiddenSelections[] = {"Camo","Camo1","Camo2","_leftear","_rightear","_velcro","_VSMz110T"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz2_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "x\cfp\addons\models\MitzHelmet1.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","camo1","camo2","camo3","_leftear","_rightear","_velcro","_VSMz110T"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_MitzHelm1_Des2  : CFP_MitzHelm1_Wdl
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_MitzHelm1_Des2.paa;
        author = "CFP";
        displayName = "Mitznefet v1 (Desert Comms)";
        hiddenSelections[] = {"Camo","camo1","camo2","camo3","_velcro"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz2_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "x\cfp\addons\models\MitzHelmet1.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","camo1","camo2","camo3","_velcro"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };
    class CFP_MitzHelm1_Wdl2  : CFP_MitzHelm1_Wdl
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_MitzHelm1_Wdl2.paa;
        author = "CFP";
        displayName = "Mitznefet v1 (Woodland Comms)";
        hiddenSelections[] = {"Camo","camo1","camo2","camo3","_velcro"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz1_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "x\cfp\addons\models\MitzHelmet1.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","camo1","camo2","camo3","_velcro"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_MitzHelm2_Wdl  : ItemCore
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_MitzHelm2_Wdl.paa;
        scope = 2;
        weaponPoolAvailable = 1;
        author = "CFP";
        displayName = "Mitznefet v2 (Woodland Base)";

        model = "x\cfp\addons\models\MitzHelmet2.p3d";
        hiddenSelections[] = {"Camo","camo1","camo2","camo3","_helmBase","_leftear","_rightear","_velcro","_VSMz110T"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz1_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "x\cfp\addons\models\MitzHelmet2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","camo1","camo2","camo3","_leftear","_rightear","_velcro","_VSMz110T"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_MitzHelm2_Des  : CFP_MitzHelm2_Wdl
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_MitzHelm2_Des.paa;
        author = "CFP";
        displayName = "Mitznefet v2 (Desert Base)";
        hiddenSelections[] = {"Camo","camo1","camo2","camo3","_leftear","_rightear","_velcro","_VSMz110T"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz2_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "x\cfp\addons\models\MitzHelmet2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","camo1","camo2","camo3","_leftear","_rightear","_velcro","_VSMz110T"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_MitzHelm2_Des2  : CFP_MitzHelm2_Wdl
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_MitzHelm2_Des2.paa;
        author = "CFP";
        displayName = "Mitznefet v2 (Desert Comms)";
        hiddenSelections[] = {"Camo","camo1","camo2","camo3","_velcro"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz2_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "x\cfp\addons\models\MitzHelmet2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","camo1","camo2","camo3","_velcro"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_MitzHelm2_Wdl2  : CFP_MitzHelm2_Wdl
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_MitzHelm2_Wdl2.paa;
        author = "CFP";
        displayName = "Mitznefet v2 (Woodland Comms)";
        hiddenSelections[] = {"Camo","camo1","camo2","camo3","_velcro"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz1_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "x\cfp\addons\models\MitzHelmet2.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","camo1","camo2","camo3","_velcro"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_MitzHelm3_Wdl  : ItemCore
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_MitzHelm3_Wdl.paa;
        scope = 2;
        weaponPoolAvailable = 1;
        author = "CFP";
        displayName = "Mitznefet v3 (Woodland Base)";

        model = "x\cfp\addons\models\MitzHelmet3.p3d";
        hiddenSelections[] = {"Camo","camo1","camo2","camo3","_helmBase","_leftear","_rightear","_velcro","_VSMz110T"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz1_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "x\cfp\addons\models\MitzHelmet3.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","camo1","camo2","camo3","_leftear","_rightear","_velcro","_VSMz110T"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_MitzHelm3_Des  : CFP_MitzHelm3_Wdl
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_MitzHelm3_Des.paa;
        author = "CFP";
        displayName = "Mitznefet v3 (Desert Base)";
        hiddenSelections[] = {"Camo","camo1","camo2","camo3","_leftear","_rightear","_velcro","_VSMz110T"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz2_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "x\cfp\addons\models\MitzHelmet3.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","camo1","camo2","camo3","_leftear","_rightear","_velcro","_VSMz110T"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_MitzHelm3_Des2  : CFP_MitzHelm3_Wdl
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_MitzHelm3_Des2.paa;
        author = "CFP";
        displayName = "Mitznefet v3 (Desert Comms)";
        hiddenSelections[] = {"Camo","camo1","camo2","camo3","_velcro"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz2_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "x\cfp\addons\models\MitzHelmet3.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","camo1","camo2","camo3","_velcro"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_MitzHelm3_Wdl2  : CFP_MitzHelm3_Wdl
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_MitzHelm3_Wdl2.paa;
        author = "CFP";
        displayName = "Mitznefet v3 (Woodland Comms)";
        hiddenSelections[] = {"Camo","camo1","camo2","camo3","_velcro"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz1_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "x\cfp\addons\models\MitzHelmet3.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","camo1","camo2","camo3","_velcro"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_MitzHelm4_Wdl  : ItemCore
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_MitzHelm4_Wdl.paa;
        scope = 2;
        weaponPoolAvailable = 1;
        author = "CFP";
        displayName = "Mitznefet v4 (Woodland Base)";

        model = "x\cfp\addons\models\MitzHelmet4.p3d";
        hiddenSelections[] = {"Camo","camo1","camo2","camo3","_helmBase","_leftear","_rightear","_velcro","_VSMz110T"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz1_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "x\cfp\addons\models\MitzHelmet4.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","camo1","camo2","camo3","_leftear","_rightear","_velcro","_VSMz110T"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_MitzHelm4_Des  : CFP_MitzHelm2_Wdl
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_MitzHelm4_Des.paa;
        author = "CFP";
        displayName = "Mitznefet v4 (Desert Base)";
        hiddenSelections[] = {"Camo","camo1","camo2","camo3","_leftear","_rightear","_velcro","_VSMz110T"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz2_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "x\cfp\addons\models\MitzHelmet4.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","camo1","camo2","camo3","_leftear","_rightear","_velcro","_VSMz110T"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_MitzHelm4_Des2  : CFP_MitzHelm2_Wdl
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_MitzHelm4_Des2.paa;
        author = "CFP";
        displayName = "Mitznefet v4 (Desert Comms)";
        hiddenSelections[] = {"Camo","camo1","camo2","camo3","_velcro"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz2_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "x\cfp\addons\models\MitzHelmet4.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","camo1","camo2","camo3","_velcro"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };

    class CFP_MitzHelm4_Wdl2  : CFP_MitzHelm2_Wdl
    {
        picture = \x\cfp\addons\headgear\data\ui\icon_CFP_MitzHelm4_Wdl2.paa;
        author = "CFP";
        displayName = "Mitznefet v4 (Woodland Comms)";
        hiddenSelections[] = {"Camo","camo1","camo2","camo3","_velcro"};
        hiddenSelectionsTextures[] = {"\x\cfp\addons\headgear\MitzHelmet\data\miz1_co.paa","\x\cfp\addons\headgear\VSM_Helms\textures\rr_ops_olivefabric.paa","\x\cfp\addons\headgear\VSM_Helms\textures\vsm_z110t.paa","\x\cfp\addons\headgear\VSM_Helms\textures\velcro_co.paa"};
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "x\cfp\addons\models\MitzHelmet4.p3d";
            modelSides[] = {3,1};
            hiddenSelections[] = {"Camo","camo1","camo2","camo3","_velcro"};
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 6;
                    passThrough = 0.500000;
                };
            };
        };
    };



