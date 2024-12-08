class gm_u1300l_base: gm_wheeled_truck_base
{
    class TextureSources;
};

class gm_u1300l_container_base: gm_u1300l_base
{
    class AnimationSources;
    class Turrets;
    class UserActions;
    class Eventhandlers;
}

// Patches
class gm_u1300l_medic_base: gm_u1300l_base
{
    class TextureSources: TextureSources
    {
        class gme_bw_des
        {
            author="erem2k";
            factions[]= {
                "gm_fc_ge"
            };

            displayname="West Germany (Desert)";
            textures[]= {
                "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\oli\gm_ge_army_u1300l_rim_01_oli_co.paa",
                "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\oli\gm_ge_army_u1300l_ext_01_oli_rc_co.paa",
                "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\oli\gm_ge_army_u1300l_ext_02_oli_co.paa",
                "\gme\bw\soft\unimog\data\unimog_medic_ext_03_des_co.paa"
            };
        };
        class gme_bw_grn
        {
            author="erem2k";
            factions[]= {
                "gm_fc_ge"
            };

            displayname="West Germany (Green)";
            textures[]= {
                "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\oli\gm_ge_army_u1300l_rim_01_oli_co.paa",
                "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\oli\gm_ge_army_u1300l_ext_01_oli_rc_co.paa",
                "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\oli\gm_ge_army_u1300l_ext_02_oli_co.paa",
                "\gme\bw\soft\unimog\data\unimog_medic_ext_03_grn_co.paa"
            };
        };
        class gme_bw_oli
        {
            author="erem2k";
            factions[]= {
                "gm_fc_ge"
            };

            displayname="West Germany (Olive)";
            textures[]= {
                "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\oli\gm_ge_army_u1300l_rim_01_oli_co.paa",
                "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\oli\gm_ge_army_u1300l_ext_01_oli_rc_co.paa",
                "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\oli\gm_ge_army_u1300l_ext_02_oli_co.paa",
                "\gme\bw\soft\unimog\data\unimog_medic_ext_03_oli_co.paa"
            };
        };
        class gme_bw_trp
        {
            author="erem2k";
            factions[]= {
                "gm_fc_ge"
            };

            displayname="West Germany (Tropical)";
            textures[]= {
                "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\oli\gm_ge_army_u1300l_rim_01_oli_co.paa",
                "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\oli\gm_ge_army_u1300l_ext_01_oli_rc_co.paa",
                "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\oli\gm_ge_army_u1300l_ext_02_oli_co.paa",
                "\gme\bw\soft\unimog\data\unimog_medic_ext_03_trp_co.paa"
            };
        };
        class gme_bw_wdl
        {
            author="erem2k";
            factions[]= {
                "gm_fc_ge"
            };

            displayname="West Germany (Woodland)";
            textures[]= {
                "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\oli\gm_ge_army_u1300l_rim_01_oli_co.paa",
                "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\oli\gm_ge_army_u1300l_ext_01_oli_rc_co.paa",
                "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\oli\gm_ge_army_u1300l_ext_02_oli_co.paa",
                "\gme\bw\soft\unimog\data\unimog_medic_ext_03_wdl_co.paa"
            };
        };
    };
};

// Content
class gme_u1300l_container_unarmed_base: gm_u1300l_container_base
{
    scope=0;
    
    model="\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_u1300l_container_civ";

    class AnimationSources: AnimationSources
    {
        class BoardWall_2_1_unhide: BoardWall_2_1_unhide
        {
            initPhase=1;
        };
        class cover_hoops_unhide: cover_hoops_unhide
        {
            initPhase=0;
        };
        class cover_unhide: cover_unhide
        {
            initPhase=0;
        };
        class cover_down_unhide: cover_down_unhide
        {
            initPhase=0;
        };
        class cover_up_unhide: cover_up_unhide
        {
            initPhase=0;
        };
        class BoardWall_1_1_extension_unhide: BoardWall_1_1_extension_unhide
        {
            displayname="";
        };
        class camonetpoles_1_1_unhide: camonetpoles_1_1_unhide
        {
            displayname="";
        };
        class CamoNet_01_rack_unhide: CamoNet_01_rack_unhide
        {
            displayname="";
        };
        class CamoNet_01_unhide: CamoNet_01_unhide
        {
            displayname="";
        };
        class generator_unhide: generator_unhide
        {
            displayname="";
        };
        class sign_mlc_unhide: sign_mlc_unhide
        {
            displayname="";
        };
        class sign_medic_unhide: sign_medic_unhide
        {
            displayname="";
        };
        class machinegunturret_01_trav_source: gm_source_user_base
        {
        };
        class machinegunturret_01_elev_source: gm_source_user_base
        {
        };
    };
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
        };
        class CargoTurret_01: CargoTurret_01
        {
        };
        class CargoTurret_02: CargoTurret_02
        {
        };
        class CargoTurret_03: CargoTurret_03
        {
        };
        class CargoTurret_04: CargoTurret_04
        {
        };
        class CargoTurret_05: CargoTurret_05
        {
        };
        class CargoTurret_06: CargoTurret_06
        {
        };
        class CargoTurret_07: CargoTurret_07
        {
        };
        class CargoTurret_08: CargoTurret_08
        {
        };
        class CargoTurret_09: CargoTurret_09
        {
        };
        class CargoTurret_10: CargoTurret_10
        {
        };
        class CargoTurret_11: CargoTurret_11
        {
        };
    };
    class UserActions: UserActions
    {
        class gm_take_turret_weapon_01: gm_take_turret_weapon_01
        {
            condition="false";
        };
        class gm_store_turret_weapon_01: gm_store_turret_weapon_01
        {
            condition="false";
        };
    };
    class Eventhandlers: Eventhandlers
    {
        class gm_core_vehicles_advancedTurrets
        {
        };
    };
};

class gme_bw_u1300l_container_unarmed_base: gme_u1300l_container_unarmed_base
{
    displayName="Truck 2t mil gl Flatbed (Unarmed)";
    displayNameShort="Truck 2t mil gl Flatbed (Unarmed)";

    editorPreview="gme\bw\soft\unimod\data\ui\preview_gm_ge_army_u1300l_container.paa";

    side=1;
    faction="gm_fc_ge";
    crew="gm_ge_army_rifleman_g3a3_80_ols";

    hiddenSelectionsTextures[]= {
        "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\wdl\gm_ge_army_u1300l_rim_01_wdl_co.paa",
        "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\wdl\gm_ge_army_u1300l_ext_01_wdl_co.paa",
        "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\wdl\gm_ge_army_u1300l_ext_02_wdl_co.paa",
        "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\wdl\gm_ge_army_u1300l_cargo_ext_03_wdl_co.paa",
        "\gm\gm_vehicles\gm_land\gm_wheeled\gm_u1300l\gm_ge_army_u1300l\data\wdl\gm_ge_army_u1300l_cargo_ext_04_wdl_co.paa"
    };

    class TransportWeapons
    {
    };
    class TransportMagazines
    {
        class _xx_gm_smokeshell_wht_dm25
        {
            magazine="gm_smokeshell_wht_dm25";
            count=2;
        };
        class _xx_gm_smokeshell_grn_dm21
        {
            magazine="gm_smokeshell_grn_dm21";
            count=2;
        };
        class _xx_gm_smokeshell_red_dm23
        {
            magazine="gm_smokeshell_red_dm23";
            count=2;
        };
    };
    class TransportItems
    {
        class _xx_gm_ge_army_firstaidkit_vehicle
        {
            name="gm_ge_army_firstaidkit_vehicle";
            count=2;
        };
        class _xx_gm_repairkit_01
        {
            name="gm_repairkit_01";
            count=1;
        };
        class _xx_gm_boltcutter
        {
            name="gm_boltcutter";
            count=1;
        };
    };

    gm_InsigniasDefaultNation="gm_insignia_ge_army_01";
    gm_LicensePlate="gm_ge_army_blk";
    gm_LicensePlateDefaultDigits="Y-######";
    gm_LicensePlateSelectionsDigits[]= {
        "LicensePlate_01",
        "LicensePlate_02",
        "LicensePlate_03",
        "LicensePlate_04",
        "LicensePlate_05",
        "LicensePlate_06",
        "LicensePlate_07",
        "LicensePlate_08"
    };
    gm_TacticalSignsDefaultIcon="gm_tacticalSign_nato_infantry";
};

class gme_bw_u1300l_container_unarmed: gme_bw_u1300l_container_unarmed_base
{
    scope=2;
    scopeCurator=2;
    isgmContent=1;
    dlc="gm";
    author="$STR_DN_GM";
};
