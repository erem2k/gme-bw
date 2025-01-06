class MissileLauncher;

class gme_fim92_launcher_base: MissileLauncher
{
    canLock=2;
    lockAcquire=1;
    weaponLockSystem=2;

    textureType="semi";

    reloadMagazineSound[]= {
        "A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
        0.89125091,
        1,
        10
    };
    sounds[]= {
        "StandardSound"
    };

    lockingTargetSound[]= {
        "\gm\gm_weapons\gm_launchers\gm_fim43\data\sounds\gm_fim43_locked.ogg",
        0.34999999,
        0.5
    };
    lockedTargetSound[]= {
        "\gm\gm_weapons\gm_launchers\gm_fim43\data\sounds\gm_fim43_locked.ogg",
        0.60000002,
        0.94999999
    }; 

    class StandardSound
    {
        soundSetShot[]= {
            "Static_Launcher_Titan_ATAA_Vehicle_Shot_SoundSet",
            "Static_Launcher_Titan_ATAA_Tail_SoundSet"
        };
    };    
};

class gme_fim92c_launcher_base: gme_fim92_launcher_base
{
    displayName = "FIM-92C Stinger";
    
    cmImmunity=0.5;

    weaponLockDelay=3.5;

    minRange=200;
    minRangeProbab=0.25;
    midRange=2400;
    midRangeProbab=0.8;
    maxRange=4800;
    maxRangeProbab=0.85;

    aiRateOfFire=30;
    aiRateOfFireDistance=3000;
    aiRateOfFireDispersion=-25;
};

class gme_fim92c_launcher_quad: gme_fim92c_launcher
{
    displayName = "FIM-92C Stinger";
    
    showAimCursorInternal=0;

    reloadTime=1;
    magazineReloadTime=50;

    magazines[]= {
        "gme_4Rnd_70mm_he_aim92c"
    };
};
