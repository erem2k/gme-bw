class gm_ge_headgear_hat_boonie_base: gm_ge_headgear_hat_base
{
    class ItemInfo;
};

class gme_bw_h_boonieHat_flke: gm_ge_headgear_hat_boonie_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";
    displayName="Boonie Hat (5-Color Early)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\headgear\data\boonieHat_flke_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]= {
            "\gme\bw\characters\headgear\data\boonieHat_flke_co.paa"
        };
    }
};