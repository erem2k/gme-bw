class gm_Machinegun_base;
class gm_m2_base: gm_Machinegun_base
{
    class FullAuto;
    class ai_FullAuto_close;
    class ai_FullAuto_short;
    class ai_FullAuto_medium;
    class ai_FullAuto_far;
};

class gme_m3_base: gm_m2_base
{
    displayName="M3 12.7x99mm";
    
    magazines[]= {
        "gm_100Rnd_127x99mm_b_t_m17"
    };

    modes[]=
    {
        "Fullauto",
        "ai_FullAuto_close",
        "ai_FullAuto_short",
        "ai_FullAuto_medium",
        "ai_FullAuto_far"
    };

    class FullAuto: FullAuto
    {
        reloadTime=0.05;
    };
    class ai_FullAuto_close: ai_FullAuto_close
    {
        reloadTime=0.05;
    };
    class ai_FullAuto_short: ai_FullAuto_short
    {
        reloadTime=0.05;
    };
    class ai_FullAuto_medium: ai_FullAuto_medium
    {
        reloadTime=0.05;
    };
    class ai_FullAuto_far: ai_FullAuto_far
    {
        reloadTime=0.05;
    };
};

class gme_m3_veh_base: gme_m3_base
{
    scope=1;
    scopeCurator=2;

    author="erem2k";

    aiDispersionCoefY=1;
    aiDispersionCoefX=0.5;

    cursor="EmptyCursor";
    cursorAim="mg";
    curosAimOn="";
};

class gme_m3p_coax: gme_m3_veh_base
{
    scope=1;
    scopeCurator=2;
    
    author="erem2k";
    displayName="M3P 12.7x99mm";

    class GunParticles
    {
    };
};

class gme_m3p_MainTurret: gme_m3_veh_base
{
    scope=1;
    scopeCurator=2;
    
    author="erem2k";
    displayName="M3P 12.7x99mm";
    
    class GunParticles: GunParticles
    {
        class effect1
        {
            positionName="usti hlavne";
            directionName="konec hlavne";
            effectName="MachineGunCloud";
        };
        class smokeEffect_01: smokeEffect_01
        {
            positionName="MainTurret_Gun_dir";
            directionName="MainTurret_Gun_pos";
        };
        class cartridgeEffect_01: cartridgeEffect_01
        {
            positionName="MainTurret_Cartridge_pos";
            directionName="MainTurret_Cartridge_dir";
        };
        class beltlinkEffect_01: beltlinkEffect_01
        {
            positionName="MainTurret_Link_pos";
            directionName="MainTurret_Link_dir";
        };
    };
};