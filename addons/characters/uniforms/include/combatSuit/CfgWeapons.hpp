class gm_ge_uniform_soldier_90_base: gm_uniform_unarmored_base
{
    class ItemInfo;
};

class gm_ge_uniform_soldier_tshirt_90_base: gm_uniform_unarmored_base
{
    class ItemInfo;
};

// Base classes
class gme_bw_u_combatSuit_base: gm_ge_uniform_soldier_90_base
{
    scope=0;
    scopeArsenal=0;
};

class gme_bw_u_combatSuit_tshirt_base: gm_ge_uniform_soldier_tshirt_90_base
{
    scope=0;
    scopeArsenal=0;
};

// Patches
class gm_ge_uniform_soldier_90_flk: gm_ge_uniform_soldier_90_base
{
    displayName="Combat Suit, 5-Color";
};

class gm_ge_uniform_soldier_rolled_90_flk: gm_ge_uniform_soldier_90_base
{
    displayName="Combat Suit, 5-Color (Rolled)";
};

class gm_ge_uniform_soldier_tshirt_90_flk: gm_ge_uniform_soldier_tshirt_90_base
{
    displayName="Combat Suit, 5-Color (T-Shirt)";
};

class gm_ge_uniform_soldier_90_trp: gm_ge_uniform_soldier_90_base
{
    displayName="Combat Suit, 3-Color";
};

class gm_ge_uniform_soldier_rolled_90_trp: gm_ge_uniform_soldier_90_base
{
    displayName="Combat Suit, 3-Color (Rolled)";
};

class gm_ge_uniform_soldier_tshirt_90_trp: gm_ge_uniform_soldier_tshirt_90_base
{
    displayName="Combat Suit, 3-Color (T-Shirt)";
};

class gm_ge_uniform_soldier_tshirt_90_oli: gm_ge_uniform_soldier_tshirt_90_base
{
    displayName="Combat Suit, Olive (T-Shirt)";
};

// Content
class gme_bw_u_combatSuit_flke: gme_bw_u_combatSuit_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Combat Suit, 5-Color Early";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa",
        "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        uniformClass="gme_bw_combatSuit_flke";

        hiddenSelectionsTextures[]= {
            "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa",
            "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa"
        };
    };
};

class gme_bw_u_combatSuit_flke_rolled: gme_bw_u_combatSuit_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Combat Suit, 5-Color Early (Rolled)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa",
        "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        uniformClass="gme_bw_combatSuit_flke_rolled";

        hiddenSelectionsTextures[]= {
            "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa",
            "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa"
        };
    };
};

class gme_bw_u_combatSuit_flke_tshirt: gme_bw_u_combatSuit_tshirt_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Combat Suit, 5-Color Early (T-Shirt)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\combatSuit_tshirt_flke_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        uniformClass="gme_bw_combatSuit_flke_tshirt";

        hiddenSelectionsTextures[]= {
            "\gme\bw\characters\uniforms\data\combatSuit_tshirt_flke_co.paa"
        };
    };
};

class gme_bw_u_combatSuit_mixed: gme_bw_u_combatSuit_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Combat Suit, Mixed";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa",
        "\gme\bw\characters\uniforms\data\combatSuit_olive_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        uniformClass="gme_bw_combatSuit_mixed";

        hiddenSelectionsTextures[]= {
            "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa",
            "\gme\bw\characters\uniforms\data\combatSuit_olive_co.paa"
        };
    };
};

class gme_bw_u_combatSuit_mixed_rolled: gme_bw_u_combatSuit_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Combat Suit, Mixed (Rolled)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa",
        "\gme\bw\characters\uniforms\data\combatSuit_olive_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        uniformClass="gme_bw_combatSuit_mixed_rolled";

        hiddenSelectionsTextures[]= {
            "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa",
            "\gme\bw\characters\uniforms\data\combatSuit_olive_co.paa"
        };
    };
};

class gme_bw_u_combatSuit_mixed_tshirt: gme_bw_u_combatSuit_tshirt_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Combat Suit, Mixed (T-Shirt)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\combatSuit_tshirt_olive_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        uniformClass="gme_bw_combatSuit_olive_tshirt";

        hiddenSelectionsTextures[]= {
            "\gme\bw\characters\uniforms\data\combatSuit_tshirt_olive_co.paa"
        };
    };
};
