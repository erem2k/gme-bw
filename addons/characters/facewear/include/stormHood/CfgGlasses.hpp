class gm_ge_facewear_stormhood_base;

// Patches
class gm_ge_facewear_stormhood_blk: gm_ge_facewear_stormhood_base
{
    displayName="Storm Hood, Black";
};

class gm_ge_facewear_stormhood_dustglasses_blk: gm_ge_facewear_stormhood_base
{
    displayName="Storm Hood, Black (Dust Glasses)";
};

class gm_ge_facewear_stormhood_brd: gm_ge_facewear_stormhood_base
{
    displayName="Storm Hood, Red";
};

// Content
class gme_bw_f_stormHood_base: gm_ge_facewear_stormhood_base
{
    scope=0;
    scopeArsenal=0;

    hiddenSelectionsMaterials[]= {
        "\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood_brd.rvmat"
    };
};

class gme_bw_f_stormHood_goggles_base: gme_bw_f_stormHood_base
{
    scope=0;
    scopeArsenal=0;

    model="\gm\gm_characters\gm_ge_characters\gm_ge_facewear_stormhood_dustglasses";
    hiddenSelectionsMaterials[]= {
        "\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood_brd.rvmat"
    };
};

class gme_bw_f_stormHood_red_goggles: gme_bw_f_stormHood_goggles_base
{
    scope=2;
    scopeArsenal=2;

    author="$STR_DN_GM";

    displayName="Storm Hood, Red (Dust Glasses)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood_brd_co.paa"
    };
};

class gme_bw_f_stormHood_blue: gm_ge_facewear_stormhood_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Storm Hood, Blue";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\facewear\data\stormHood_blue_co.paa"
    };
};

class gme_bw_f_stormHood_blue_goggles: gme_bw_f_stormHood_goggles_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Storm Hood, Blue (Dust Glasses)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\facewear\data\stormHood_blue_co.paa"
    };
};

class gme_bw_f_stormHood_flke: gm_ge_facewear_stormhood_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Storm Hood, 5-Color";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\facewear\data\stormHood_flke_co.paa"
    };
};

class gme_bw_f_stormHood_flke_goggles: gme_bw_f_stormHood_goggles_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Storm Hood, 5-Color (Dust Glasses)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\facewear\data\stormHood_flke_co.paa"
    };
};

class gme_bw_f_stormHood_olive: gm_ge_facewear_stormhood_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Storm Hood, Olive";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\facewear\data\stormHood_olive_co.paa"
    };
};

class gme_bw_f_stormHood_olive_goggles: gme_bw_f_stormHood_goggles_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Storm Hood, Olive (Dust Glasses)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\facewear\data\stormHood_olive_co.paa"
    };
};