class gm_ge_bgs_soldier_80_base;

class gme_bw_battleSuit_bgs_base: gm_ge_bgs_soldier_80_base
{
    scope=0;
    scopeCurator=0;
};

class gme_bw_battleSuit_bgs_green: gme_bw_battleSuit_bgs_base
{
    scope=1;
    scopeCurator=0;

    uniformClass="gme_bw_u_battleSuit_bgs_green";
    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\battleSuit_bgs_green_co.paa"
    };
};

class gme_bw_battleSuit_bgs_mixed: gme_bw_battleSuit_bgs_base
{
    scope=1;
    scopeCurator=0;

    uniformClass="gme_bw_u_battleSuit_bgs_mixed";
    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\battleSuit_bgs_mixed_co.paa"
    };
};