#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        units[] = {};
		weapons[] = {
			"SP_ACHHelmet_Black1",
			"SP_ACHHelmet_Blue1",
			"SP_ACHHelmet_Green1",
			"SP_ACHHelmet_Tan1",
			"SP_ACHHelmet_White1",
			"SP_ACHHelmet_Un1",
			"SP_ACHHelmet_ATacsFG1",
			"SP_ACHHelmet_NodUrban1",
			"CFP_ACHHelmet_ATacsAU",
			"CFP_ACHHelmet_IranDPM",
			"SP_Bandana_Black",
			"SP_Bandana_Green",
			"SP_Bandana_Tan",
			"SP_Bandana_Hunter",
			"SP_Bandana_Hunter2",
			"SP_Bandana_ATacsFG",
			"SP_Bandana_NodUrban",
			"SP_BaseballCap_Black",
			"SP_BaseballCap_Blue",
			"SP_BaseballCap_Green",
			"SP_BaseballCap_Red",
			"SP_BaseballCap_Tan",
			"SP_BaseballCap_White",
			"SP_BaseballCap_Yellow",
			"SP_BaseballCap_UN",
			"SP_BaseballCap_TweedCheckedBrown",
			"SP_BaseballCap_TweedCheckedGreen",
			"SP_BaseballCap_TweedCheckedGrey",
			"SP_BaseballCap_Hunter",
			"SP_BaseballCap_Hunter2",
			"SP_BaseballCap_ATacsFG",
			"SP_BaseballCap_NodUrban",
			"SP_BaseballCap_PoliceBlack1",
			"SP_BaseballCap_FBIBlack1",
			"SP_BaseballCap_SwatBlack1",
			"SP_BaseballCap_MPBlack1",
			"SP_BaseballCap_MPBlack2",
			"SP_BeanieHat_Black",
			"SP_BeanieHat_Green",
			"SP_BeanieHat_Tan",
			"SP_Beret_Black",
			"SP_Beret_Grey",
			"SP_Beret_Blue",
			"SP_Beret_Brown",
			"SP_Beret_Green",
			"SP_Beret_Red",
			"SP_Beret_Tan",
			"SP_Beret_Yellow",
			"SP_Beret_Un1",
			"SP_Beret_Un2",
			"SP_Beret2_Black",
			"SP_Beret2_Grey",
			"SP_Beret2_Blue",
			"SP_Beret2_Brown",
			"SP_Beret2_Green",
			"CFP_Beret2_GreenIran",
			"CFP_Beret2_GreenANA",
			"SP_Beret2_Red",
			"CFP_Beret2_RedIran",
			"CFP_Beret2_RedANA",
			"CFP_Beret2_GreenIranAirborne",
			"SP_Beret2_Tan",
			"SP_Beret2_Yellow",
			"CFP_Ranger_Beret",
			"CFP_Ranger_Beret_1Btn",
			"CFP_Ranger_Beret_2Btn",
			"CFP_Ranger_Beret_3Btn",
			"CFP_Ranger_Beret_Cmdr",
			"SP_BoonieHat_Black",
			"SP_BoonieHat_Green",
			"SP_BoonieHat_Tan",
			"SP_BoonieHat_UN",
			"SP_BoonieHat_ATacsFG",
			"SP_BoonieHat_NodUrban",
			"CFP_BoonieHat_AfricanWoodland",
			"CFP_BoonieHat_PolygonDesert",
			"CFP_BoonieHat_PolygonWoodland",
			"CFP_BoonieHat_M81",
			"CFP_BoonieHat_ACRDesert",
			"CFP_BoonieHat_MarpatDesert",
			"CFP_BoonieHat_Marpat",
			"CFP_BoonieHat_Tropentarn",
			"CFP_BoonieHat_Multicam",
			"SP_CVCHelmet_Black",
			"SP_CVCHelmet_Green",
			"SP_CVCHelmet_Tan",
			"SP_CVCHelmet_UN",
			"SP_ECHHelmet_Black1",
			"SP_ECHHelmet_Green1",
			"SP_ECHHelmet_Tan1",
			"SP_ECHHelmet_Grey1",
			"SP_ECHHelmet_White1",
			"SP_ECHHelmet_ATacsFG1",
			"SP_ECHHelmet_NodUrban1",
			"CFP_ECHHelmet_AtacsAU",
			"SP_GhillieHat_Forrest",
			"SP_GhillieHat_Tropical",
			"SP_GhillieHat_Summer",
			"SP_HeadSet_Black",
			"SP_HeadSet_Green",
			"SP_HeadSet_Tan",
			"SP_Hood_Black",
			"SP_Hood_Green",
			"SP_Hood_Tan",
			"SP_M1Helmet_Black",
			"SP_M1Helmet_Blue",
			"SP_M1Helmet_Green",
			"SP_M1Helmet_Tan",
			"SP_M1Helmet_Iran",
			"SP_M1Helmet_GrayDim",
			"SP_M1Helmet_White",
			"SP_M1Helmet_UN",
			"SP_M1Helmet_MPBlack",
			"SP_M1Helmet_MPWhite",
			"SP_M1Helmet_MPGreen",
			"SP_M88Helmet_Black1",
			"SP_M88Helmet_Black2",
			"SP_M88Helmet_Blue1",
			"SP_M88Helmet_Blue2",
			"SP_M88Helmet_Green1",
			"SP_M88Helmet_Green2",
			"SP_M88Helmet_Tan1",
			"SP_M88Helmet_Tan2",
			"SP_M88Helmet_Un1",
			"SP_M88Helmet_Un2",
			"SP_M88PSMHelmet_Black1",
			"SP_M88PSMHelmet_Black2",
			"SP_M88PSMHelmet_Blue1",
			"SP_M88PSMHelmet_Blue2",
			"SP_M88PSMHelmet_Green1",
			"SP_M88PSMHelmet_Green2",
			"SP_M88PSMHelmet_Tan1",
			"SP_M88PSMHelmet_Tan2",
			"SP_M88PSMHelmet_Un1",
			"SP_M88PSMHelmet_Un2",
			"SP_M96Helmet_Black1",
			"SP_M96Helmet_Black2",
			"SP_M96Helmet_Blue1",
			"SP_M96Helmet_Blue2",
			"SP_M96Helmet_Green1",
			"SP_M96Helmet_Green2",
			"SP_M96Helmet_Tan1",
			"SP_M96Helmet_Tan2",
			"SP_M96Helmet_Un1",
			"SP_M96Helmet_Un2",
			"SP_MichHelmet_Black1",
			"SP_MichHelmet_Black2",
			"SP_MichHelmet_Green1",
			"SP_MichHelmet_Green2",
			"SP_MichHelmet_Tan1",
			"SP_MichHelmet_Tan2",
			"SP_Mk7Helmet_Black1",
			"SP_Mk7Helmet_Black2",
			"SP_Mk7Helmet_Blue1",
			"SP_Mk7Helmet_Blue2",
			"SP_Mk7Helmet_Green1",
			"SP_Mk7Helmet_Green2",
			"SP_Mk7Helmet_Tan1",
			"SP_Mk7Helmet_Tan2",
			"SP_Mk7Helmet_Un1",
			"SP_Mk7Helmet_Un2",
			"SP_MkBushHelmet_Forrest",
			"SP_MkBushHelmet_Tropical",
			"SP_OfficerHat_Black",
			"SP_OfficerHat_US_Army",
			"SP_OfficerHat_US_Marine",
			"SP_OfficerHat_UK_Police",
			"SP_PASGTHelmet_Black1",
			"SP_PASGTHelmet_Black2",
			"SP_PASGTHelmet_Blue1",
			"SP_PASGTHelmet_Blue2",
			"SP_PASGTHelmet_Green1",
			"SP_PASGTHelmet_Green2",
			"SP_PASGTHelmet_Tan1",
			"SP_PASGTHelmet_Tan2",
			"SP_PASGTHelmet_Un1",
			"SP_PASGTHelmet_Un2",
			"CFP_PASGTHelmet_IranDPM1",
			"CFP_PASGTHelmet_IranDPM2",
			"CFP_PASGTHelmet_Woodland1",
			"CFP_PASGTHelmet_Woodland2",
			"CFP_PASGTHelmet_ACRDesert1",
			"CFP_PASGTHelmet_ACRDesert2",
			"CFP_PASGTHelmet_M811",
			"CFP_PASGTHelmet_M812",
			"CFP_PASGTHelmet_Marpat1",
			"CFP_PASGTHelmet_Marpat2",
			"CFP_PASGTHelmet_SFUPDF1",
			"CFP_PASGTHelmet_SFUPDF2",
			"CFP_PASGTHelmet_Flecktarn1",
			"CFP_PASGTHelmet_Flecktarn2",
			"CFP_PASGTHelmet_Tropentarn1",
			"CFP_PASGTHelmet_Tropentarn2",
			"SP_PatrolCap_Black",
			"SP_PatrolCap_Blue",
			"SP_PatrolCap_Green",
			"SP_PatrolCap_Tan",
			"SP_PatrolCap_UN",
			"SP_PatrolCap_Grey",
			"SP_PatrolCap_Yellow",
			"SP_PatrolCap_GreenOlive",
			"SP_PatrolCap_ATacsFG",
			"SP_PatrolCap_NodUrban",
			"CFP_PatrolCap_ANP",
			"CFP_PatrolCap_ANCOP",
			"CFP_PatrolCap_Woodland",
			"CFP_PatrolCap_EDRL",
			"CFP_PatrolCap_Marpat",
			"CFP_PatrolCap_IranDPM",
			"CFP_PatrolCap_AfricanWoodland",
			"CFP_PatrolCap_PolygonDesert",
			"CFP_PatrolCap_PolygonWoodland",
			"CFP_PatrolCap_M81",
			"CFP_PatrolCap_M81Hamas",
			"CFP_PatrolCap_BlackHamas",
			"CFP_PatrolCap_MarpatUganda",
			"SP_ProTecHelmet_Black",
			"SP_ProTecHelmet_Green",
			"SP_ProTecHelmet_Tan",
			"SP_Shemagh_Black",
			"SP_Shemagh_Green",
			"SP_Shemagh_Tan",
			"Shemagh_Sand",
			"SP_Shemagh_White",
			"SP_Shemagh_Grey",
			"SP_Shemagh_CheckBlack",
			"SP_Shemagh_CheckGreen",
			"SP_Shemagh_CheckTan",
			"SP_Shemagh_CheckWhite",
			"SP_Shemagh_CheckBlue",
			"SP_Shemagh_CheckRed",
			"SP_SPH4Helmet_Black",
			"SP_SPH4Helmet_Green",
			"SP_SPH4Helmet_Tan",
			"SP_SPH4Helmet_White",
			"SP_SPH4Helmet_Blue",
			"SP_SPH4Helmet_Brown",
			"SP_SPH4Helmet_Grey",
			"SP_SPH4Helmet_Orange",
			"SP_SPH4Helmet_Red",
			"SP_SPH4Helmet_Yellow",
			"SP_SPH4Helmet_UN1",
			"SP_SPH4Helmet_UN2",
			"SP_SPH4Helmet_UN3",
			"SP_SSh68CoverHelmet_Black1",
			"SP_SSh68CoverHelmet_Black2",
			"SP_SSh68CoverHelmet_Blue1",
			"SP_SSh68CoverHelmet_Blue2",
			"SP_SSh68CoverHelmet_Green1",
			"SP_SSh68CoverHelmet_Green2",
			"SP_SSh68CoverHelmet_Tan1",
			"SP_SSh68CoverHelmet_Tan2",
			"SP_SSh68CoverHelmet_White1",
			"SP_SSh68CoverHelmet_White2",
			"SP_SSh68CoverHelmet_UN1",
			"SP_SSh68CoverHelmet_UN2",
			"SP_SSh68Helmet_Black1",
			"SP_SSh68Helmet_Black2",
			"SP_SSh68Helmet_Blue1",
			"SP_SSh68Helmet_Blue2",
			"SP_SSh68Helmet_Green1",
			"SP_SSh68Helmet_Green2",
			"SP_SSh68Helmet_Tan1",
			"SP_SSh68Helmet_Tan2",
			"SP_SSh68Helmet_White1",
			"SP_SSh68Helmet_White2",
			"SP_SSh68Helmet_UN1",
			"SP_SSh68Helmet_UN2",
			"SP_SSh68NetHelmet_Black1",
			"SP_SSh68NetHelmet_Black2",
			"SP_SSh68NetHelmet_Blue1",
			"SP_SSh68NetHelmet_Blue2",
			"SP_SSh68NetHelmet_Green1",
			"SP_SSh68NetHelmet_Green2",
			"SP_SSh68NetHelmet_Tan1",
			"SP_SSh68NetHelmet_Tan2",
			"SP_SSh68NetHelmet_White1",
			"SP_SSh68NetHelmet_White2",
			"SP_SSh68NetHelmet_UN1",
			"SP_SSh68NetHelmet_UN2",
			"SP_TSH04Helmet_Black",
			"SP_ZSH1Helmet_Black1",
			"SP_ZSH1Helmet_Black2",
			"SP_ZSH1Helmet_Green1",
			"SP_ZSH1Helmet_Green2",
			"SP_ZSH1Helmet_Tan1",
			"SP_ZSH1Helmet_Tan2",
			"CFP_Basic_Helmet_Black",
			"CFP_Basic_Helmet_Light_Green",
			"CFP_Basic_Helmet_Tan",
			"CFP_Basic_Helmet_Gray_Green",
			"CFP_Basic_Helmet_PolygonDesert",
			"CFP_Basic_Helmet_PolygonWoodland",
			"CFP_Basic_Helmet_Spec4cewood",
			"CFP_Basic_Helmet_Spec4cesierra",
			"CFP_Basic_Helmet_Woodland",
			"CFP_Basic_Helmet_EDRL",
			"CFP_Basic_Helmet_ArmyGreen",
			"CFP_Basic_Helmet_M81",
			"CFP_Basic_Helmet_Marpat",
			"CFP_Lungee_Shemagh",
			"CFP_Lungee_Shemagh_Yellow",
			"CFP_Lungee_Shemagh_White",
			"CFP_Lungee_Shemagh_LightBlue",
			"CFP_Lungee_Shemagh_Green",
			"CFP_Lungee_Shemagh_Red",
			"VSM_MICH2017_Helmet_Tan",
			"VSM_OPS2017_Helmet_Tan",
			"CFP_OPS2017_Helmet_Multicam",
			"CFP_OPS2017_Helmet_Multicam2",
			"CFP_OPS2017_Helmet_M81",
			"CFP_OPS2017_Helmet_Black",
			"CFP_OPS2017_Helmet_Black2",
			"CFP_OPS2017_Helmet_OliveFabric",
			"CFP_OPS2017_Helmet_Grey",
			"CFP_OPS2017_Helmet_AOR2",
			"CFP_OPS2017_Helmet_AOR1",
			"CFP_OPS2017_Helmet_ATACS",
			"CFP_OPS2017_Helmet_ATACSAU",
			"CFP_OPS2017_Helmet_Tropentarn",
			"CFP_OPS2017_Helmet_Flecktarn",
			"CFP_Lungee_Open_Tan",
			"CFP_Lungee_Open_LightOlive",
			"CFP_Lungee_Open_Grey",
			"CFP_Lungee_Open_Creme",
			"CFP_Lungee_Open_Brown",
			"CFP_Lungee_Open_BlueGrey",
			"CFP_Lungee_Open_Blue",
			"CFP_Lungee_BlueGrey",
			"CFP_Lungee_Brown",
			"CFP_Lungee_Green",
			"CFP_Lungee_Grey",
			"CFP_Lungee_LightOlive",
			"CFP_Lungee_Tan",
			"cfp_basic_helmet_gray",
			"cfp_headband_wdl",
			"cfp_headband_basij1",
			"cfp_pasgthelmet_chocchip1",
			"cfp_pasgthelmet_chocchip2",
			"cfp_pasgthelmet_edrl1",
			"cfp_pasgthelmet_edrl2",
			"CFP_Mich2000_USArmy",
			"CFP_IDF_GOLANI",
			"CFP_IDF_GOLANI_BLACK",
			"CFP_IDF_GOLANI_GREEN2",
			"CFP_IDF_GOLANI_CAMO",
			"CFP_SOARCREW_SKULL",
			"CFP_SOARCREW_RED",
			"CFP_SOARCREW_BLUE"
			
		};
        author = MODULE_AUTHOR;
        authors[] = {"SP Craig", "Tupolov","AuburnAlumni","VanSchmoozin"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CFP_main","CFP_Models"};
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"



