class gme_bw_f_headBandage_base: None
{
    scope=0;
    scopeArsenal=0;
    
    DLC="Orange";

    model="\A3\Characters_F_Orange\Headgear\H_HeadBandage_F.p3d";
    hiddenSelections[] = {
        "Camo"
    };

    descriptionShort="$STR_A3_SP_noarmor";

    identityTypes[]={};
    mass=2;
};

class gme_bw_f_headBandage_clean: gme_bw_f_headBandage_base
{
    scope=2;
    scopeArsenal=2;

    author="$STR_A3_Bohemia_Interactive";

    displayName="$STR_A3_CfgWeapons_H_HeadBandage_clean_F0";
    picture="\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_HeadBandage_clean_CA.paa";

    hiddenSelectionsTextures[] = {
        "\A3\Characters_F_Orange\Headgear\Data\H_HeadBandage_clean_CO.paa"
    };
};

class gme_bw_f_headBandage_stained: gme_bw_f_headBandage_base
{
    scope=2;
    scopeArsenal=2;

    author="$STR_A3_Bohemia_Interactive";

    displayName="$STR_A3_CfgWeapons_H_HeadBandage_stained_F0";
    picture="\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_HeadBandage_stained_CA.paa";

    hiddenSelectionsTextures[] = {
        "\A3\Characters_F_Orange\Headgear\Data\H_HeadBandage_stained_CO.paa"
    };
};

class gme_bw_f_headBandage_bloody: gme_bw_f_headBandage_base
{
    scope=2;
    scopeArsenal=2;

    author="$STR_A3_Bohemia_Interactive";

    displayName="$STR_A3_CfgWeapons_H_HeadBandage_bloody_F0";
    picture="\A3\Characters_F_Orange\Headgear\Data\UI\icon_H_HeadBandage_bloody_CA.paa";

    hiddenSelectionsTextures[] = {
        "\A3\Characters_F_Orange\Headgear\Data\H_HeadBandage_bloody_CO.paa"
    };
};
