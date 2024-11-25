class gm_ge_bgs_vest_80_rifleman: gm_ge_vest_80_base
{
    class ItemInfo;
};

class gme_bw_v_gear80s_rifleman_light: gm_ge_bgs_vest_80_rifleman
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";
    displayName="Gear, Rifleman (Light)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
    	"\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_80_co"
    };

    class ItemInfo: ItemInfo
    {
        containerClass="Supply100";
        mass=40;

        hiddenSelectionsTextures[]= {
    	    "\gm\gm_characters\gm_ge_characters\data\vest\gm_ge_vest_80_co"
        };
    }
};
