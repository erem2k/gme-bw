// ATGMs
class gm_1Rnd_hot_heat_dm72;

class gme_2Rnd_hot_heat_dm72: gm_1Rnd_hot_heat_dm72
{
    scope=2;
    descriptionShort = "HEAT DM102<br />Rounds: 2<br />Used in: HATGM 2";

    count=2;

    pylonWeapon="";
    hardpoints[]= {};
};

// Autocannons
class gm_425Rnd_20x139mm_he_t_dm51;
class gm_425Rnd_20x139mm_hei_t_dm81;
class gm_425Rnd_20x139mm_hei_t_dm111;
class gm_75Rnd_20x139mm_ap_t_dm43;
class gm_75Rnd_20x139mm_apds_t_dm63;

class gme_100Rnd_20x139mm_he_t_dm51: gm_425Rnd_20x139mm_he_t_dm51
{
    scope=2;
    descriptionShort = "Caliber: 20x139 mm HE-T DM51<br />Rounds: 100<br />Used in: RH202";
    displayName = "20 mm 100Rnd HE-T DM51";
    
    count=100;
};

class gme_100Rnd_20x139mm_hei_t_dm81: gm_425Rnd_20x139mm_hei_t_dm81
{
    scope=2;
    descriptionShort = "Caliber: 20x139 mm HEI-T DM81<br />Rounds: 100<br />Used in: RH202";
    displayName = "20 mm 100Rnd HEI-T DM81";
    
    count=100;
};

class gme_100Rnd_20x139mm_hei_t_dm111: gm_425Rnd_20x139mm_hei_t_dm111
{
    scope=2;
    descriptionShort = "Caliber: 20x139 mm HE-T DM111<br />Rounds: 100<br />Used in: RH202";
    displayName = "20 mm 425Rnd HE-T DM111";

    count=100;
};

class gme_60Rnd_20x139mm_ap_t_dm43: gm_75Rnd_20x139mm_ap_t_dm43
{
    scope=2;
    descriptionShort = "Caliber: 20x139 mm AP-T DM43<br />Rounds: 60<br />Used in: RH202";
    displayName = "20 mm 60Rnd AP-T DM43";

    count=60;
};

class gme_60Rnd_20x139mm_apds_t_dm63: gm_75Rnd_20x139mm_apds_t_dm63
{
    scope=2;
    descriptionShort = "Caliber: 20x139 mm APDS-T DM63<br />Rounds: 60<br />Used in: RH202";
    displayName = "20 mm 60Rnd HE-T DM63";

    count=60;
};

// AAMs
class gme_1Rnd_70mm_he_aim92c: VehicleMagazine
{
    scope=2;
    author="erem2k";

    displayName="AIM92C";
    displayNameShort="AA HE";
    descriptionShort = "HE AIM-92C<br />Rounds: 1<br />Used in: FIM-92C";

    count=1;
    ammo="gme_rocket_70mm_he_aim92c";
    tracersEvery=1;
    lastRoundsTracer=1;

    initspeed=120;
    maxLeadSpeed=750;
    nameSound="missiles";
};

class gme_4Rnd_70mm_he_aim92c: gme_1Rnd_70mm_he_aim92c
{
    scope=2;
    author="erem2k";

    descriptionShort = "HE AIM-92C<br />Rounds: 4<br />Used in: FIM-92C";

    count=4;
};
