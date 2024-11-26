class gm_xx_headgear_headwrap_01_base: gm_headgear_unarmored_base
{
    class ItemInfo;
};

class gm_xx_headgear_headwrap_crew_01_base;

// Base classes
class gme_bw_h_headWrap_base: gm_xx_headgear_headwrap_01_base
{
    scope=0;
    scopeArsenal=0;

    hiddenSelectionsMaterials[]= {
        "\gme\bw\characters\headgear\data\headwrap.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsMaterials[]= {
            "\gme\bw\characters\headgear\data\headwrap.rvmat"
        };
    };
};

class gme_bw_h_headWrap_crew_base: gme_bw_h_headWrap_base
{
    scope=0;
    scopeArsenal=0;

    model="\gm\gm_characters\gm_xx_characters\gm_xx_headgear_headwrap_crew_01";
    hiddenSelectionsMaterials[]= {
        "\gme\bw\characters\headgear\data\headwrap.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        mass=18;
        uniformModel="\gm\gm_characters\gm_xx_characters\gm_xx_headgear_headwrap_crew_01";

        hiddenSelectionsMaterials[]= {
            "\gme\bw\characters\headgear\data\headwrap.rvmat"
        };
    };
};

// Patches
class gm_xx_headgear_headwrap_crew_01_trp: gm_xx_headgear_headwrap_crew_01_base
{
    displayName="Headwrap, Crew (3-Color)";
};

class gm_xx_headgear_headwrap_crew_01_flk: gm_xx_headgear_headwrap_crew_01_base
{
    displayName="Headwrap, Crew (5-Color)";
};

class gm_xx_headgear_headwrap_crew_01_blk: gm_xx_headgear_headwrap_crew_01_base
{
    displayName="Headwrap, Crew (Black)";
};

class gm_xx_headgear_headwrap_crew_01_smp: gm_xx_headgear_headwrap_crew_01_base
{
    displayName="Headwrap, Crew (Camo)";
};

class gm_xx_headgear_headwrap_crew_01_grn: gm_xx_headgear_headwrap_crew_01_base
{
    displayName="Headwrap, Crew (Green)";
};

class gm_xx_headgear_headwrap_crew_01_m84: gm_xx_headgear_headwrap_crew_01_base
{
    displayName="Headwrap, Crew (M/84)";
};

class gm_xx_headgear_headwrap_crew_01_oli: gm_xx_headgear_headwrap_crew_01_base
{
    displayName="Headwrap, Crew (Olive)";
};

// Content
class gme_bw_h_headWrap_flke: gme_bw_h_headWrap_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";
    displayName="Headwrap (5-Color, Early)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\headgear\data\headwrap_flke_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\gme\bw\characters\headgear\data\headwrap_flke_co.paa"
        };
    }
};

class gme_bw_h_headWrap_flke_crew: gme_bw_h_headWrap_crew_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";
    displayName="Headwrap, Crew (5-Color, Early)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\headgear\data\headwrap_flke_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\gme\bw\characters\headgear\data\headwrap_flke_co.paa"
        };
    }
};

class gme_bw_h_headWrap_m81: gme_bw_h_headWrap_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";
    displayName="Headwrap (M81)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\headgear\data\headwrap_m81_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\gme\bw\characters\headgear\data\headwrap_m81_co.paa"
        };
    }
};

class gme_bw_h_headWrap_m81_crew: gme_bw_h_headWrap_crew_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";
    displayName="Headwrap, Crew (M81)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\headgear\data\headwrap_m81_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\gme\bw\characters\headgear\data\headwrap_m81_co.paa"
        };
    }
};
