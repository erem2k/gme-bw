class gm_ge_army_rifleman_90_base;
class gm_ge_army_soldier_tshirt_90_base;

// Base classes
class gme_bw_combatSuit_base: gm_ge_army_rifleman_90_base
{
    scope=0;
    scopeCurator=0;
};

class gme_bw_combatSuit_rolled_base: gme_bw_combatSuit_base
{
    scope=0;
    scopeCurator=0;
    
    model="\gm\gm_characters\gm_ge_characters\gm_ge_uniform_soldier_rolled_90";
};

class gme_bw_combatSuit_tshirt_base: gm_ge_army_soldier_tshirt_90_base
{
    scope=0;
    scopeCurator=0;
};

// Content
class gme_bw_combatSuit_flke: gme_bw_combatSuit_base
{
    scope=1;
    scopeCurator=0;

    uniformClass="gme_bw_u_combatSuit_flke";
    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa",
        "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa"
    };
};

class gme_bw_combatSuit_flke_rolled: gme_bw_combatSuit_rolled_base
{
    scope=1;
    scopeCurator=0;

    uniformClass="gme_bw_u_combatSuit_flke_rolled";
    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa",
        "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa"
    };
};

class gme_bw_combatSuit_flke_tshirt: gm_ge_army_soldier_tshirt_90_base
{
    scope=1;
    scopeCurator=0;

    uniformClass="gme_bw_u_combatSuit_flke_tshirt";
    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\combatSuit_tshirt_flke_co.paa"
    };
};

class gme_bw_combatSuit_mixed: gme_bw_combatSuit_base
{
    scope=1;
    scopeCurator=0;

    uniformClass="gme_bw_u_combatSuit_mixed";
    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa",
        "\gme\bw\characters\uniforms\data\combatSuit_olive_co.paa"
    };
};

class gme_bw_combatSuit_mixed_rolled: gme_bw_combatSuit_rolled_base
{
    scope=1;
    scopeCurator=0;

    uniformClass="gme_bw_u_combatSuit_mixed_rolled";
    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\combatSuit_flke_co.paa",
        "\gme\bw\characters\uniforms\data\combatSuit_olive_co.paa"
    };
};

class gme_bw_combatSuit_mixed_tshirt: gm_ge_army_soldier_tshirt_90_base
{
    scope=1;
    scopeCurator=0;

    uniformClass="gme_bw_u_combatSuit_mixed_tshirt";
    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\combatSuit_tshirt_olive_co.paa"
    };
};