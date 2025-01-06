class MissileCore;
class MissileBase: MissileCore
{
    class Components;
};

class gme_rocket_70mm_he_aim92_base: MissileBase
{
    model="\A3\Weapons_F_Tank\Ammo\Missile_SAAMI_AA_01_fly_F.p3d";

    explosive=1;
    warheadName="HE";
    timeToLive=20;

    aiAmmoUsageFlags=256;
    cost=1000;
    
    airLock=2;
    irLock=1;
    lockType=0;
    weaponLockSystem="2 + 16";

    CraterEffects="AAMissileCrater";
    explosionEffects="AAMissileExplosion";
    effectsMissileInit="RocketBackEffectsRPG";
    effectsMissile="missile3";

    class CamShakeExplode
    {
        power=22;
        duration=2;
        frequency=20;
        distance=147.905;
    };
    class CamShakeHit
    {
        power=110;
        duration=0.60000002;
        frequency=20;
        distance=1;
    };
    class CamShakeFire
    {
        power=2.78316;
        duration=1.6;
        frequency=20;
        distance=61.967701;
    };
    class CamShakePlayerFire
    {
        power=3;
        duration=0.1;
        frequency=20;
        distance=1;
    };
};

class gme_rocket_70mm_he_aim92c: gme_rocket_70mm_he_aim92_base
{
    hit=80;
    indirectHit=50;
    indirectHitRange=7;
    proximityExplosionDistance=8;
    deflecting=5;

    maxSpeed=750;
    simulationStep=0.0015;
    trackOversteer=1;
    trackLead=0.975;
    maneuvrability=15;
    airFriction=0.155;
    sideAirFriction=0.1;

    initTime=0.25;
    thrustTime=3;
    thrust=333;
    fuseDistance=50;

    missileLockCone=5;
    missileKeepLockedCone=90;
    missileLockMaxDistance=6500;
    missileLockMinDistance=200;
    missileLockMaxSpeed=750;

    cmImmunity=0.75;

    class Components
    {
        class SensorsManagerComponent
        {
            class Components
            {
                class IRSensorComponent: SensorTemplateIR
                {
                    class AirTarget
                    {
                        minRange=200;
                        maxRange=5500;
                        objectDistanceLimitCoef=-1;
                        viewDistanceLimitCoef=-1;
                    };

                    maxTrackableSpeed=750;
                    angleRangeHorizontal=30;
                    angleRangeVertical=30;
                    groundNoiseDistanceCoef=0.15;
                    maxGroundNoiseDistance=30;
                };
            };
        };
    };

};

// FIM-92B / 92C