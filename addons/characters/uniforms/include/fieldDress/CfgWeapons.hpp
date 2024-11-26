// Base classes
class gm_ge_uniform_soldier_80_base: gm_uniform_unarmored_base
{
    class ItemInfo;
};

class gme_bw_u_fieldDress_base: gm_ge_uniform_soldier_80_base
{
    scope=0;
    scopeArsenal=0;
};

// Content
class gme_bw_u_fieldDress_flke: gme_bw_u_fieldDress_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Field Dress (Mixed)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\fieldDress_flke_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        uniformClass="gme_bw_fieldDress_flke";

        hiddenSelectionsTextures[]= {
            "\gme\bw\characters\uniforms\data\fieldDress_flke_co.paa"
        };
    };
};

class gme_bw_u_fieldDress_flke_gloves: gme_bw_u_fieldDress_base
{
    scope=2;
    scopeArsenal=2;

    author="erem2k";

    displayName="Field Dress (Gloves, Mixed)";
    picture="\gme\bw\main\data\ui\icon_gme_bw_wip_ca.paa";

    hiddenSelectionsTextures[]= {
        "\gme\bw\characters\uniforms\data\fieldDress_flke_co.paa"
    };

    class ItemInfo: ItemInfo
    {
        uniformClass="gme_bw_fieldDress_flke_gloves";

        hiddenSelectionsTextures[]= {
            "\gme\bw\characters\uniforms\data\fieldDress_flke_co.paa"
        };
    };
};