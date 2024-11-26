class gm_ge_headgear_hat_80_base: gm_ge_headgear_hat_base
{
    class ItemInfo;
};

class gm_ge_headgear_hat_90_base: gm_ge_headgear_hat_base
{
    class ItemInfo;
};

// Base classes
class gme_bw_h_fieldCap_early_base: gm_ge_headgear_hat_80_base
{
    scope=0;
    scopeArsenal=0;
};

class gme_bw_h_fieldCap_late_base: gm_ge_headgear_hat_90_base
{
    scope=0;
    scopeArsenal=0;
};

class gme_bw_h_fieldCap_bgs_base: gme_bw_fieldCap_early_base
{
    scope=0;
    scopeArsenal=0;
    
    hiddenSelectionsMaterials[] = {
        "\gme\bw\characters\headgear\data\fieldCap_bgs.rvmat"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsMaterials[] = {
            "\gme\bw\characters\headgear\data\fieldCap_bgs.rvmat"
        };
    };
};

// Content
class gme_bw_h_fieldCap_flke_late: gme_bw_h_fieldCap_late_base
{
    scope=2;
    scopeArsenal=2;
    
    author="erem2k";

    displayName="Field Cap (5-Color, Early)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\gme\bw\characters\headgear\data\fieldCap_flke_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\gme\bw\characters\facewear\data\fieldCap_flke_co.paa"
        };
    };
};

class gme_bw_h_fieldCap_bgs_green: gme_bw_h_fieldCap_bgs_base
{
    scope=2;
    scopeArsenal=2;
    
    author="erem2k";

    displayName="Field Cap (BGS, Green)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\gme\bw\characters\headgear\data\fieldCap_bgs_green_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\gme\bw\characters\headgear\data\fieldCap_bgs_green_co.paa"
        };
    };
};

class gme_bw_h_fieldCap_bgs_sumpf: gme_bw_h_fieldCap_bgs_base
{
    scope=2;
    scopeArsenal=2;
    
    author="erem2k";

    displayName="Field Cap (BGS, Sumpftarn)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[] = {
        "\gme\bw\characters\headgear\data\fieldCap_bgs_sumpf_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[] = {
            "\gme\bw\characters\headgear\data\fieldCap_bgs_sumpf_co.paa"
        };
    };
};