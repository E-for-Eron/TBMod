/*
    Part of the TBMod ( https://github.com/TacticalBaconDevs/TBMod )
    Developed by http://tacticalbacon.de
*/
#define SET_NAME(CLASSE,DISPNAME,GEWICHT) class CLASSE : ACE_ItemCore { \
        displayName = DISPNAME; \
        class ItemInfo: CBA_MiscItem_ItemInfo { \
            mass = GEWICHT; \
        }; \
    }

class CfgWeapons
{
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    
    class ACE_atropine: ACE_ItemCore
    {
        displayName = "Ketamin-Autoinjektor";
        descriptionShort = "Wird verwendet um leichte Schmerzen zu lindern.";
        descriptionUse = "Ein Schmerzmittel um leichte Schmerzen zu behandeln.";
    };
    
    SET_NAME(ACE_bloodIV, "Blut IV (2000ml)", 10);
    SET_NAME(ACE_bloodIV_500, "Blut IV (1000ml)", 5);
    SET_NAME(ACE_bloodIV_250, "Blut IV (500ml)", 2.5);
    
    SET_NAME(ACE_plasmaIV, "Plasma IV (1000ml)", 10);
    SET_NAME(ACE_plasmaIV_500, "Plasma IV (500ml)", 5);
    SET_NAME(ACE_plasmaIV_250, "Plasma IV (250ml)", 2.5);
    
    SET_NAME(ACE_salineIV, "Kochsalzlösung (500ml)", 10);
    SET_NAME(ACE_salineIV_500, "Kochsalzlösung (250ml)", 5);
    SET_NAME(ACE_salineIV_250, "Kochsalzlösung (125ml)", 2.5);
};
