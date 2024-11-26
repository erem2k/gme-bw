class gm_ge_army_rifleman_80_base;

// Base classes
class gme_bw_fieldDress_base: gm_ge_army_rifleman_80_base
{
    scope=0;
    scopeCurator=0;
};

class gme_bw_fieldDress_gloves_base: gme_bw_fieldDress_base
{
    scope=0;
    scopeCurator=0;

    model="\gm\gm_characters\gm_ge_characters\gm_ge_uniform_soldier_gloves_80";
};

// Content
class gme_bw_fieldDress_flke: gme_bw_fieldDress_base
{
    scope=1;
    scopeCurator=0;

    uniformClass="gme_bw_u_fieldDress_flke";
    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\fieldDress_flke_co.paa"
    };
};

class gme_bw_fieldDress_flke_gloves: gme_bw_fieldDress_gloves_base
{
    scope=1;
    scopeCurator=0;

    uniformClass="gme_bw_u_fieldDress_flke_gloves";
    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\fieldDress_flke_co.paa"
    };
};