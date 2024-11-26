// Base classes
class gme_bw_h_stormHood_base: gm_ge_headgear_hat_base
{
    scope=0;
    scopeArsenal=0;
    
    model="\gm\gm_characters\gm_ge_characters\gm_ge_facewear_stormhood";
    hiddenSelectionsMaterials[] = {
        "\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood_brd.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        uniformModel="\gm\gm_characters\gm_ge_characters\gm_ge_facewear_stormhood";

        hiddenSelectionsMaterials[] = {
			"\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood_brd.rvmat"
        };
    };
};

class gme_bw_h_stormHood_plain_base: gme_bw_h_stormHood_base
{
    scope=0;
    scopeArsenal=0;
    
    hiddenSelectionsMaterials[] = {
        "\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsMaterials[] = {
			"\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood.rvmat"
        };
    };
};

class gme_bw_h_stormHood_goggles_base: gme_bw_h_stormHood_base
{
    scope=0;
    scopeArsenal=0;
    
    model="\gm\gm_characters\gm_ge_characters\gm_ge_facewear_stormhood_dustglasses";
    hiddenSelectionsMaterials[] = {
        "\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood_brd.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        uniformModel="\gm\gm_characters\gm_ge_characters\gm_ge_facewear_stormhood_dustglasses";

        hiddenSelectionsMaterials[] = {
			"\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood_brd.rvmat"
        };
    };
};

class gme_bw_h_stormHood_plain_goggles_base: gme_bw_h_stormHood_goggles_base
{
    scope=0;
    scopeArsenal=0;
    
    hiddenSelectionsMaterials[] = {
        "\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsMaterials[] = {
            "\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood.rvmat"
        };
    };
};

// Base CDLC
class gme_bw_h_stormHood_black: gme_bw_h_stormHood_plain_base
{
    scope=2;
    scopeArsenal=2;
    
    author="$STR_DN_GM";
    dlc="gm";

    displayName="Storm Hood, Black";
    picture="\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_facewear_stormhood_blk_ca";

    hiddenSelectionsTextures[] = {
        "\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood_blk_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood_blk_co.paa"
        };
    };
};

class gme_bw_h_stormHood_black_goggles: gme_bw_h_stormHood_plain_goggles_base
{
    scope=2;
    scopeArsenal=2;
    
    author="$STR_DN_GM";
    dlc="gm";

    displayName="Storm Hood, Black (Dust Glasses)";
    picture="\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_facewear_stormhood_dustglasses_blk_ca";

    hiddenSelectionsTextures[] = {
        "\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood_blk_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood_blk_co.paa"
        };
    };
};

class gme_bw_h_stormHood_red: gme_bw_h_stormHood_base
{
    scope=2;
    scopeArsenal=2;
    
    author="$STR_DN_GM";
    dlc="gm";

    displayName="Storm Hood, Red";
    picture="\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_facewear_stormhood_brd_ca";

    hiddenSelectionsTextures[] = {
        "\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood_brd_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood_brd_co.paa"
        };
    };
};

class gme_bw_h_stormHood_red_goggles: gme_bw_h_stormHood_goggles_base
{
    scope=2;
    scopeArsenal=2;
    
    author="$STR_DN_GM";
    dlc="gm";

    displayName="Storm Hood, Red (Dust Glasses)";
    picture="\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_ge_facewear_stormhood_brd_ca";

    hiddenSelectionsTextures[] = {
        "\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood_brd_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
			"\gm\gm_characters\gm_ge_characters\data\facewear\gm_ge_facewear_stormhood_brd_co.paa"
        };
    };
};

// Content
class gme_bw_h_stormHood_blue: gme_bw_h_stormHood_base
{
    scope=2;
    scopeArsenal=2;
    
    author="erem2k";

    displayName="Storm Hood, Blue";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\gme\bw\characters\facewear\data\stormHood_blue_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\gme\bw\characters\facewear\data\stormHood_blue_co.paa"
        };
    };
};

class gme_bw_h_stormHood_blue_goggles: gme_bw_h_stormHood_goggles_base
{
    scope=2;
    scopeArsenal=2;
    
    author="erem2k";

    displayName="Storm Hood, Blue (Dust Glasses)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\gme\bw\characters\facewear\data\stormHood_blue_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\gme\bw\characters\facewear\data\stormHood_blue_co.paa"
        };
    };
};

class gme_bw_h_stormHood_flke: gme_bw_h_stormHood_base
{
    scope=2;
    scopeArsenal=2;
    
    author="erem2k";

    displayName="Storm Hood, 5-Color";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\gme\bw\characters\facewear\data\stormHood_flke_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\gme\bw\characters\facewear\data\stormHood_flke_co.paa"
        };
    };
};

class gme_bw_h_stormHood_flke_goggles: gme_bw_h_stormHood_goggles_base
{
    scope=2;
    scopeArsenal=2;
    
    author="erem2k";

    displayName="Storm Hood, 5-Color (Dust Glasses)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\gme\bw\characters\facewear\data\stormHood_flke_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\gme\bw\characters\facewear\data\stormHood_flke_co.paa"
        };
    };
};

class gme_bw_h_stormHood_olive: gme_bw_h_stormHood_base
{
    scope=2;
    scopeArsenal=2;
    
    author="erem2k";

    displayName="Storm Hood, Olive";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\gme\bw\characters\facewear\data\stormHood_olive_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\gme\bw\characters\facewear\data\stormHood_olive_co.paa"
        };
    };
};

class gme_bw_h_stormHood_olive_goggles: gme_bw_h_stormHood_goggles_base
{
    scope=2;
    scopeArsenal=2;
    
    author="erem2k";

    displayName="Storm Hood, Olive (Dust Glasses)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\gme\bw\characters\facewear\data\stormHood_olive_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\gme\bw\characters\facewear\data\stormHood_olive_co.paa"
        };
    };
};
