
class gm_ge_headgear_m62_base;
class gm_ge_headgear_m62_cover_base: gm_ge_headgear_m62_base
{
    class ItemInfo;
};

// Base classes
class gme_bw_h_m62_cover_base: gm_ge_headgear_m62_cover_base
{
    scope=0;
    scopeArsenal=0;

    hiddenSelectionsMaterials[] = {
        "\gm\gm_characters\gm_ge_characters\data\headgear\gm_ge_headgear_m62",
        "\gme\bw\characters\headgear\data\m62_cover.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsMaterials[] = {
            "\gm\gm_characters\gm_ge_characters\data\headgear\gm_ge_headgear_m62",
            "\gme\bw\characters\headgear\data\m62_cover.rvmat"
        };
    };
};

// Patches
class gm_ge_headgear_m62_cover_blu: gm_ge_headgear_m62_cover_base
{
    displayName="Helmet M62, Covered (Blue)";
};

class gm_ge_headgear_m62_cover_win: gm_ge_headgear_m62_cover_base
{
    displayName="Helmet M62, Covered (Winter)";
};

class gm_ge_headgear_m62_cover_wdl: gm_ge_headgear_m62_cover_base
{
    displayName="Helmet M62, Covered (Woodland)";
};

// Content
class gme_bw_h_m62_cover_flke: gme_bw_h_m62_cover_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";
    displayName="Helmet M62, Covered (5-Color Early)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gm\gm_characters\gm_ge_characters\data\headgear\gm_ge_headgear_m62_co",
        "\gme\bw\characters\headgear\data\m62_cover_flke_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\gm\gm_characters\gm_ge_characters\data\headgear\gm_ge_headgear_m62_co",
            "\gme\bw\characters\headgear\data\m62_cover_flke_co.paa"
        };
    }
};

class gme_bw_h_m62_cover_m81: gme_bw_h_m62_cover_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";
    displayName="Helmet M62, Covered (M81)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gm\gm_characters\gm_ge_characters\data\headgear\gm_ge_headgear_m62_co",
        "\gme\bw\characters\headgear\data\m62_cover_m81_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\gm\gm_characters\gm_ge_characters\data\headgear\gm_ge_headgear_m62_co",
            "\gme\bw\characters\headgear\data\m62_cover_m81_co.paa"
        };
    }
};
