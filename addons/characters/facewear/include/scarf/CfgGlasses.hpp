class gm_ge_facewear_scarf_01_base;
class gm_ge_facewear_scarf_02_base;

// Base classes
class gme_bw_f_scarf_base: gm_ge_facewear_scarf_01_base
{
    scope=0;
    scopeArsenal=0;

    descriptionShort="$STR_DSS_gm_xx_facewear_scarf_01";

    model="\gm\gm_characters\gm_xx_characters\gm_xx_facewear_scarf_01";
    hiddenSelectionsMaterials[] = {
        "\gm\gm_characters\gm_xx_characters\data\facewear\gm_xx_facewear_scarf_01.rvmat"
    };
};

class gme_bw_f_scarf_mesh_base: gme_bw_f_scarf_base
{
    scope=0;
    scopeArsenal=0;

    descriptionShort="$STR_DSS_gm_xx_facewear_scarf_02";

    hiddenSelectionsMaterials[] = {
        "\gm\gm_characters\gm_xx_characters\data\facewear\gm_xx_facewear_scarf_02.rvmat"
    };
};

class gme_bw_scarf_low_base: gme_bw_f_scarf_base
{
    scope=0;
    scopeArsenal=0;

    descriptionShort="$STR_DSS_gm_xx_facewear_scarf_01";

    model="\gm\gm_characters\gm_xx_characters\gm_xx_facewear_scarf_02";
    hiddenSelectionsMaterials[] = {
        "\gm\gm_characters\gm_xx_characters\data\facewear\gm_xx_facewear_scarf_01.rvmat"
    };
};

class gme_bw_scarf_low_mesh_base: gme_bw_scarf_low_base
{
    scope=0;
    scopeArsenal=0;

    descriptionShort="$STR_DSS_gm_xx_facewear_scarf_02";

    hiddenSelectionsMaterials[] = {
        "\gm\gm_characters\gm_xx_characters\data\facewear\gm_xx_facewear_scarf_02.rvmat"
    };
};

// Patches
class gm_xx_facewear_scarf_02_blk: gm_ge_facewear_scarf_02_base
{
    displayName="Scarf, Mesh (Black)";
};

class gm_xx_facewear_scarf_02_grn: gm_ge_facewear_scarf_02_base
{
    displayName="Scarf, Mesh (Green)";
};

class gm_xx_facewear_scarf_02_oli: gm_ge_facewear_scarf_02_base
{
    displayName="Scarf, Mesh (Olive)";
};

class gm_xx_facewear_scarf_02_wht: gm_ge_facewear_scarf_02_base
{
    displayName="Scarf, Mesh (White)";
};

// Base content
class gme_bw_f_scarf_flk_low: gme_bw_scarf_low_base
{
    scope=2;
    scopeArsenal=2;

    author="$STR_DN_GM";

    displayName="Scarf, Low (5-Color)";
    picture="\gm\gm_characters\gm_xx_characters\data\ui\picture_gm_xx_facewear_scarf_01_flk_ca";

    hiddenSelectionsTextures[]= {
        "\gm\gm_characters\gm_xx_characters\data\facewear\gm_xx_facewear_scarf_01_flk_co.paa"
    };
};

class gme_bw_f_scarf_trp_low: gme_bw_scarf_low_base
{
    scope=2;
    scopeArsenal=2;

    author="$STR_DN_GM";

    displayName="Scarf, Low (3-Color)";
    picture="\gm\gm_characters\gm_xx_characters\data\ui\picture_gm_xx_facewear_scarf_01_trp_ca";
    
    hiddenSelectionsTextures[]= {
        "\gm\gm_characters\gm_xx_characters\data\facewear\gm_xx_facewear_scarf_01_trp_co.paa"
    };
};

class gme_bw_f_scarf_gry_low_mesh: gme_bw_scarf_low_mesh_base
{
    scope=2;
    scopeArsenal=2;

    author="$STR_DN_GM";

    displayName="Scarf, Mesh (Grey)";
    picture="\gm\gm_characters\gm_xx_characters\data\ui\picture_gm_xx_facewear_scarf_01_gry_ca";
    
    hiddenSelectionsTextures[]= {
        "\gm\gm_characters\gm_xx_characters\data\facewear\gm_xx_facewear_scarf_01_gry_co.paa"
    };
};

// Mod content
class gme_bw_f_scarf_flke: gme_bw_f_scarf_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Scarf (5-Color Early)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";
    
    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\facewear\data\scarf_flke_co.paa"
    };
};

class gme_bw_f_scarf_flke_low: gme_bw_scarf_low_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Scarf, Low (5-Color Early)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";
    
    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\facewear\data\scarf_flke_co.paa"
    };
};
