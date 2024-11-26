class gm_ge_bgs_uniform_soldier_80_base: gm_uniform_unarmored_base
{
    class ItemInfo;
};

// Base classes
class gme_bw_u_battleSuit_bgs_base: gm_ge_bgs_uniform_soldier_80_base
{
    scope=0;
    scopeArsenal=0;
};

// Patches
class gm_ge_bgs_uniform_soldier_80_smp: gm_ge_bgs_uniform_soldier_80_base
{
    displayName = "Battle Suit, BGS (Camo)";
};

// Content
class gme_bw_u_battleSuit_bgs_green: gme_bw_u_battleSuit_bgs_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Battle Suit, BGS (Green)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\battleSuit_bgs_green_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        uniformClass="gme_bw_battleSuit_bgs_green";

        hiddenSelectionsTextures[]= {
            "\gme\bw\characters\uniforms\data\battleSuit_bgs_green_co.paa"
        };
    };
};

class gme_bw_u_battleSuit_bgs_mixed: gme_bw_u_battleSuit_bgs_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Battle Suit, BGS (Mixed)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\battleSuit_bgs_mixed_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        uniformClass="gme_bw_battleSuit_bgs_mixed";

        hiddenSelectionsTextures[]= {
            "\gme\bw\characters\uniforms\data\battleSuit_bgs_mixed_co.paa"
        };
    };
};

