// Normally, INCBIN_COMP acts like INCBIN_U32, but appends `.lz` to the file, compressing it;
// If not compressing overworld gfx, make this an alias to INCBIN_32, so gfx will *not* be compressed
#if !(OW_GFX_COMPRESS)
#define INCBIN_COMP INCBIN_U32
#endif

const u32 gMonFrontPic_CircledQuestionMark[] = INCBIN_U32("graphics/pokemon/question_mark/circled/anim_front.4bpp.smol");
const u32 gMonBackPic_CircledQuestionMark[] = INCBIN_U32("graphics/pokemon/question_mark/circled/back.4bpp.smol");
const u16 gMonPalette_CircledQuestionMark[] = INCBIN_U16("graphics/pokemon/question_mark/circled/normal.gbapal");
const u16 gMonShinyPalette_CircledQuestionMark[] = INCBIN_U16("graphics/pokemon/question_mark/circled/shiny.gbapal");
const u8 gMonIcon_QuestionMark[] = INCBIN_U8("graphics/pokemon/question_mark/icon.4bpp");
#if P_FOOTPRINTS
#if !P_GBA_STYLE_SPECIES_FOOTPRINTS
	const u8 gMonFootprint_QuestionMark[] = INCBIN_U8("graphics/pokemon/question_mark/footprint.1bpp");
#else
	const u8 gMonFootprint_QuestionMark[] = INCBIN_U8("graphics/pokemon/question_mark/footprint_gba.1bpp");
#endif //P_GBA_STYLE_SPECIES_FOOTPRINTS
#endif //P_FOOTPRINTS
const u32 gObjectEventPic_Substitute[] = INCBIN_COMP("graphics/pokemon/question_mark/overworld.4bpp");

#if P_FAMILY_BULBASAUR
	 const u32 gMonFrontPic_Bulbasaur[] = INCBIN_U32("graphics/pokemon/bulbasaur/front.4bpp.smol");
	 const u32 gMonBackPic_Bulbasaur[] = INCBIN_U32("graphics/pokemon/bulbasaur/back.4bpp.smol");
	 const u16 gMonPalette_Bulbasaur[] = INCBIN_U16("graphics/pokemon/bulbasaur/front.gbapal");
	 const u16 gMonShinyPalette_Bulbasaur[] = INCBIN_U16("graphics/pokemon/bulbasaur/back.gbapal");
	 const u8 gMonIcon_Bulbasaur[] = INCBIN_U8("graphics/pokemon/bulbasaur/icon_gba.4bpp");

	 const u32 gMonFrontPic_Ivysaur[] = INCBIN_U32("graphics/pokemon/ivysaur/front.4bpp.smol");
	 const u32 gMonBackPic_Ivysaur[] = INCBIN_U32("graphics/pokemon/ivysaur/back.4bpp.smol");
	 const u16 gMonPalette_Ivysaur[] = INCBIN_U16("graphics/pokemon/ivysaur/front.gbapal");
	 const u16 gMonShinyPalette_Ivysaur[] = INCBIN_U16("graphics/pokemon/ivysaur/back.gbapal");
	 const u8 gMonIcon_Ivysaur[] = INCBIN_U8("graphics/pokemon/ivysaur/icon.4bpp");

	 const u32 gMonFrontPic_Venusaur[] = INCBIN_U32("graphics/pokemon/venusaur/front.4bpp.smol");
	 const u32 gMonBackPic_Venusaur[] = INCBIN_U32("graphics/pokemon/venusaur/back.4bpp.smol");
	 const u16 gMonPalette_Venusaur[] = INCBIN_U16("graphics/pokemon/venusaur/front.gbapal");
	 const u16 gMonShinyPalette_Venusaur[] = INCBIN_U16("graphics/pokemon/venusaur/back.gbapal");
	 const u8 gMonIcon_Venusaur[] = INCBIN_U8("graphics/pokemon/venusaur/icon.4bpp");

	 const u32 gMonFrontPic_Ecosaur[] = INCBIN_U32("graphics/pokemon/ecosaur/front.4bpp.smol");
	 const u32 gMonBackPic_Ecosaur[] = INCBIN_U32("graphics/pokemon/ecosaur/back.4bpp.smol");
	 const u16 gMonPalette_Ecosaur[] = INCBIN_U16("graphics/pokemon/ecosaur/front.gbapal");
	 const u16 gMonShinyPalette_Ecosaur[] = INCBIN_U16("graphics/pokemon/ecosaur/back.gbapal");
	 const u8 gMonIcon_Ecosaur[] = INCBIN_U8("graphics/pokemon/ecosaur/icon.4bpp");

	 const u32 gMonFrontPic_Terarisaur[] = INCBIN_U32("graphics/pokemon/terarisaur/front.4bpp.smol");
	 const u32 gMonBackPic_Terarisaur[] = INCBIN_U32("graphics/pokemon/terarisaur/back.4bpp.smol");
	 const u16 gMonPalette_Terarisaur[] = INCBIN_U16("graphics/pokemon/terarisaur/front.gbapal");
	 const u16 gMonShinyPalette_Terarisaur[] = INCBIN_U16("graphics/pokemon/terarisaur/back.gbapal");
	 const u8 gMonIcon_Terarisaur[] = INCBIN_U8("graphics/pokemon/terarisaur/icon.4bpp");

	 const u32 gMonFrontPic_Symbisaur[] = INCBIN_U32("graphics/pokemon/symbisaur/front.4bpp.smol");
	 const u32 gMonBackPic_Symbisaur[] = INCBIN_U32("graphics/pokemon/symbisaur/back.4bpp.smol");
	 const u16 gMonPalette_Symbisaur[] = INCBIN_U16("graphics/pokemon/symbisaur/front.gbapal");
	 const u16 gMonShinyPalette_Symbisaur[] = INCBIN_U16("graphics/pokemon/symbisaur/back.gbapal");
	 const u8 gMonIcon_Symbisaur[] = INCBIN_U8("graphics/pokemon/symbisaur/icon.4bpp");

#endif //P_FAMILY_BULBASAUR

#if P_FAMILY_CHARMANDER
	 const u32 gMonFrontPic_Charmander[] = INCBIN_U32("graphics/pokemon/charmander/front.4bpp.smol");
	 const u32 gMonBackPic_Charmander[] = INCBIN_U32("graphics/pokemon/charmander/back.4bpp.smol");
	 const u16 gMonPalette_Charmander[] = INCBIN_U16("graphics/pokemon/charmander/front.gbapal");
	 const u16 gMonShinyPalette_Charmander[] = INCBIN_U16("graphics/pokemon/charmander/back.gbapal");
	 const u8 gMonIcon_Charmander[] = INCBIN_U8("graphics/pokemon/charmander/icon.4bpp");

	 const u32 gMonFrontPic_Charmeleon[] = INCBIN_U32("graphics/pokemon/charmeleon/front.4bpp.smol");
	 const u32 gMonBackPic_Charmeleon[] = INCBIN_U32("graphics/pokemon/charmeleon/back.4bpp.smol");
	 const u16 gMonPalette_Charmeleon[] = INCBIN_U16("graphics/pokemon/charmeleon/front.gbapal");
	 const u16 gMonShinyPalette_Charmeleon[] = INCBIN_U16("graphics/pokemon/charmeleon/back.gbapal");
	 const u8 gMonIcon_Charmeleon[] = INCBIN_U8("graphics/pokemon/charmeleon/icon.4bpp");

	 const u32 gMonFrontPic_Charizard[] = INCBIN_U32("graphics/pokemon/charizard/front.4bpp.smol");
	 const u32 gMonBackPic_Charizard[] = INCBIN_U32("graphics/pokemon/charizard/back.4bpp.smol");
	 const u16 gMonPalette_Charizard[] = INCBIN_U16("graphics/pokemon/charizard/front.gbapal");
	 const u16 gMonShinyPalette_Charizard[] = INCBIN_U16("graphics/pokemon/charizard/back.gbapal");
	 const u8 gMonIcon_Charizard[] = INCBIN_U8("graphics/pokemon/charizard/icon.4bpp");

	 const u32 gMonFrontPic_Chariguana[] = INCBIN_U32("graphics/pokemon/chariguana/front.4bpp.smol");
	 const u32 gMonBackPic_Chariguana[] = INCBIN_U32("graphics/pokemon/chariguana/back.4bpp.smol");
	 const u16 gMonPalette_Chariguana[] = INCBIN_U16("graphics/pokemon/chariguana/front.gbapal");
	 const u16 gMonShinyPalette_Chariguana[] = INCBIN_U16("graphics/pokemon/chariguana/back.gbapal");
	 const u8 gMonIcon_Chariguana[] = INCBIN_U8("graphics/pokemon/chariguana/icon.4bpp");

	 const u32 gMonFrontPic_Chariana[] = INCBIN_U32("graphics/pokemon/chariana/front.4bpp.smol");
	 const u32 gMonBackPic_Chariana[] = INCBIN_U32("graphics/pokemon/chariana/back.4bpp.smol");
	 const u16 gMonPalette_Chariana[] = INCBIN_U16("graphics/pokemon/chariana/front.gbapal");
	 const u16 gMonShinyPalette_Chariana[] = INCBIN_U16("graphics/pokemon/chariana/back.gbapal");
	 const u8 gMonIcon_Chariana[] = INCBIN_U8("graphics/pokemon/chariana/icon.4bpp");

	 const u32 gMonFrontPic_Chariathan[] = INCBIN_U32("graphics/pokemon/chariathan/front.4bpp.smol");
	 const u32 gMonBackPic_Chariathan[] = INCBIN_U32("graphics/pokemon/chariathan/back.4bpp.smol");
	 const u16 gMonPalette_Chariathan[] = INCBIN_U16("graphics/pokemon/chariathan/front.gbapal");
	 const u16 gMonShinyPalette_Chariathan[] = INCBIN_U16("graphics/pokemon/chariathan/back.gbapal");
	 const u8 gMonIcon_Chariathan[] = INCBIN_U8("graphics/pokemon/chariathan/icon.4bpp");

#endif //P_FAMILY_CHARMANDER

#if P_FAMILY_SQUIRTLE
	 const u32 gMonFrontPic_Squirtle[] = INCBIN_U32("graphics/pokemon/squirtle/front.4bpp.smol");
	 const u32 gMonBackPic_Squirtle[] = INCBIN_U32("graphics/pokemon/squirtle/back.4bpp.smol");
	 const u16 gMonPalette_Squirtle[] = INCBIN_U16("graphics/pokemon/squirtle/front.gbapal");
	 const u16 gMonShinyPalette_Squirtle[] = INCBIN_U16("graphics/pokemon/squirtle/back.gbapal");
	 const u8 gMonIcon_Squirtle[] = INCBIN_U8("graphics/pokemon/squirtle/icon.4bpp");

	 const u32 gMonFrontPic_Wartortle[] = INCBIN_U32("graphics/pokemon/wartortle/front.4bpp.smol");
	 const u32 gMonBackPic_Wartortle[] = INCBIN_U32("graphics/pokemon/wartortle/back.4bpp.smol");
	 const u16 gMonPalette_Wartortle[] = INCBIN_U16("graphics/pokemon/wartortle/front.gbapal");
	 const u16 gMonShinyPalette_Wartortle[] = INCBIN_U16("graphics/pokemon/wartortle/back.gbapal");
	 const u8 gMonIcon_Wartortle[] = INCBIN_U8("graphics/pokemon/wartortle/icon.4bpp");

	 const u32 gMonFrontPic_Blastoise[] = INCBIN_U32("graphics/pokemon/blastoise/front.4bpp.smol");
	 const u32 gMonBackPic_Blastoise[] = INCBIN_U32("graphics/pokemon/blastoise/back.4bpp.smol");
	 const u16 gMonPalette_Blastoise[] = INCBIN_U16("graphics/pokemon/blastoise/front.gbapal");
	 const u16 gMonShinyPalette_Blastoise[] = INCBIN_U16("graphics/pokemon/blastoise/back.gbapal");
	 const u8 gMonIcon_Blastoise[] = INCBIN_U8("graphics/pokemon/blastoise/icon.4bpp");

	 const u32 gMonFrontPic_Ferrapin[] = INCBIN_U32("graphics/pokemon/ferrapin/front.4bpp.smol");
	 const u32 gMonBackPic_Ferrapin[] = INCBIN_U32("graphics/pokemon/ferrapin/back.4bpp.smol");
	 const u16 gMonPalette_Ferrapin[] = INCBIN_U16("graphics/pokemon/ferrapin/front.gbapal");
	 const u16 gMonShinyPalette_Ferrapin[] = INCBIN_U16("graphics/pokemon/ferrapin/back.gbapal");
	 const u8 gMonIcon_Ferrapin[] = INCBIN_U8("graphics/pokemon/ferrapin/icon.4bpp");

	 const u32 gMonFrontPic_Fortoise[] = INCBIN_U32("graphics/pokemon/fortoise/front.4bpp.smol");
	 const u32 gMonBackPic_Fortoise[] = INCBIN_U32("graphics/pokemon/fortoise/back.4bpp.smol");
	 const u16 gMonPalette_Fortoise[] = INCBIN_U16("graphics/pokemon/fortoise/front.gbapal");
	 const u16 gMonShinyPalette_Fortoise[] = INCBIN_U16("graphics/pokemon/fortoise/back.gbapal");
	 const u8 gMonIcon_Fortoise[] = INCBIN_U8("graphics/pokemon/fortoise/icon.4bpp");

	 const u32 gMonFrontPic_Turtillery[] = INCBIN_U32("graphics/pokemon/turtillery/front.4bpp.smol");
	 const u32 gMonBackPic_Turtillery[] = INCBIN_U32("graphics/pokemon/turtillery/back.4bpp.smol");
	 const u16 gMonPalette_Turtillery[] = INCBIN_U16("graphics/pokemon/turtillery/front.gbapal");
	 const u16 gMonShinyPalette_Turtillery[] = INCBIN_U16("graphics/pokemon/turtillery/back.gbapal");
	 const u8 gMonIcon_Turtillery[] = INCBIN_U8("graphics/pokemon/turtillery/icon.4bpp");

#endif //P_FAMILY_SQUIRTLE

#if P_FAMILY_CATERPIE
	 const u32 gMonFrontPic_Caterpie[] = INCBIN_U32("graphics/pokemon/caterpie/front.4bpp.smol");
	 const u32 gMonBackPic_Caterpie[] = INCBIN_U32("graphics/pokemon/caterpie/back.4bpp.smol");
	 const u16 gMonPalette_Caterpie[] = INCBIN_U16("graphics/pokemon/caterpie/front.gbapal");
	 const u16 gMonShinyPalette_Caterpie[] = INCBIN_U16("graphics/pokemon/caterpie/back.gbapal");
	 const u8 gMonIcon_Caterpie[] = INCBIN_U8("graphics/pokemon/caterpie/icon.4bpp");

	 const u32 gMonFrontPic_Metapod[] = INCBIN_U32("graphics/pokemon/metapod/front.4bpp.smol");
	 const u32 gMonBackPic_Metapod[] = INCBIN_U32("graphics/pokemon/metapod/back.4bpp.smol");
	 const u16 gMonPalette_Metapod[] = INCBIN_U16("graphics/pokemon/metapod/front.gbapal");
	 const u16 gMonShinyPalette_Metapod[] = INCBIN_U16("graphics/pokemon/metapod/back.gbapal");
	 const u8 gMonIcon_Metapod[] = INCBIN_U8("graphics/pokemon/metapod/icon.4bpp");

	 const u32 gMonFrontPic_Butterfree[] = INCBIN_U32("graphics/pokemon/butterfree/front.4bpp.smol");
	 const u32 gMonBackPic_Butterfree[] = INCBIN_U32("graphics/pokemon/butterfree/back.4bpp.smol");
	 const u16 gMonPalette_Butterfree[] = INCBIN_U16("graphics/pokemon/butterfree/front.gbapal");
	 const u16 gMonShinyPalette_Butterfree[] = INCBIN_U16("graphics/pokemon/butterfree/back.gbapal");
	 const u8 gMonIcon_Butterfree[] = INCBIN_U8("graphics/pokemon/butterfree/icon.4bpp");

	 const u32 gMonFrontPic_Butteflare[] = INCBIN_U32("graphics/pokemon/butteflare/front.4bpp.smol");
	 const u32 gMonBackPic_Butteflare[] = INCBIN_U32("graphics/pokemon/butteflare/back.4bpp.smol");
	 const u16 gMonPalette_Butteflare[] = INCBIN_U16("graphics/pokemon/butteflare/front.gbapal");
	 const u16 gMonShinyPalette_Butteflare[] = INCBIN_U16("graphics/pokemon/butteflare/back.gbapal");
	 const u8 gMonIcon_Butteflare[] = INCBIN_U8("graphics/pokemon/butteflare/icon.4bpp");

	 const u32 gMonFrontPic_Pyrefree[] = INCBIN_U32("graphics/pokemon/pyrefree/front.4bpp.smol");
	 const u32 gMonBackPic_Pyrefree[] = INCBIN_U32("graphics/pokemon/pyrefree/back.4bpp.smol");
	 const u16 gMonPalette_Pyrefree[] = INCBIN_U16("graphics/pokemon/pyrefree/front.gbapal");
	 const u16 gMonShinyPalette_Pyrefree[] = INCBIN_U16("graphics/pokemon/pyrefree/back.gbapal");
	 const u8 gMonIcon_Pyrefree[] = INCBIN_U8("graphics/pokemon/pyrefree/icon.4bpp");

	 const u32 gMonFrontPic_Impsect[] = INCBIN_U32("graphics/pokemon/impsect/front.4bpp.smol");
	 const u32 gMonBackPic_Impsect[] = INCBIN_U32("graphics/pokemon/impsect/back.4bpp.smol");
	 const u16 gMonPalette_Impsect[] = INCBIN_U16("graphics/pokemon/impsect/front.gbapal");
	 const u16 gMonShinyPalette_Impsect[] = INCBIN_U16("graphics/pokemon/impsect/back.gbapal");
	 const u8 gMonIcon_Impsect[] = INCBIN_U8("graphics/pokemon/impsect/icon.4bpp");

#endif //P_FAMILY_CATERPIE

#if P_FAMILY_WEEDLE
	 const u32 gMonFrontPic_Weedle[] = INCBIN_U32("graphics/pokemon/weedle/front.4bpp.smol");
	 const u32 gMonBackPic_Weedle[] = INCBIN_U32("graphics/pokemon/weedle/back.4bpp.smol");
	 const u16 gMonPalette_Weedle[] = INCBIN_U16("graphics/pokemon/weedle/front.gbapal");
	 const u16 gMonShinyPalette_Weedle[] = INCBIN_U16("graphics/pokemon/weedle/back.gbapal");
	 const u8 gMonIcon_Weedle[] = INCBIN_U8("graphics/pokemon/weedle/icon.4bpp");

	 const u32 gMonFrontPic_Kakuna[] = INCBIN_U32("graphics/pokemon/kakuna/front.4bpp.smol");
	 const u32 gMonBackPic_Kakuna[] = INCBIN_U32("graphics/pokemon/kakuna/back.4bpp.smol");
	 const u16 gMonPalette_Kakuna[] = INCBIN_U16("graphics/pokemon/kakuna/front.gbapal");
	 const u16 gMonShinyPalette_Kakuna[] = INCBIN_U16("graphics/pokemon/kakuna/back.gbapal");
	 const u8 gMonIcon_Kakuna[] = INCBIN_U8("graphics/pokemon/kakuna/icon.4bpp");

	 const u32 gMonFrontPic_Beedrill[] = INCBIN_U32("graphics/pokemon/beedrill/front.4bpp.smol");
	 const u32 gMonBackPic_Beedrill[] = INCBIN_U32("graphics/pokemon/beedrill/back.4bpp.smol");
	 const u16 gMonPalette_Beedrill[] = INCBIN_U16("graphics/pokemon/beedrill/front.gbapal");
	 const u16 gMonShinyPalette_Beedrill[] = INCBIN_U16("graphics/pokemon/beedrill/back.gbapal");
	 const u8 gMonIcon_Beedrill[] = INCBIN_U8("graphics/pokemon/beedrill/icon.4bpp");

	 const u32 gMonFrontPic_Beebrute[] = INCBIN_U32("graphics/pokemon/beebrute/front.4bpp.smol");
	 const u32 gMonBackPic_Beebrute[] = INCBIN_U32("graphics/pokemon/beebrute/back.4bpp.smol");
	 const u16 gMonPalette_Beebrute[] = INCBIN_U16("graphics/pokemon/beebrute/front.gbapal");
	 const u16 gMonShinyPalette_Beebrute[] = INCBIN_U16("graphics/pokemon/beebrute/back.gbapal");
	 const u8 gMonIcon_Beebrute[] = INCBIN_U8("graphics/pokemon/beebrute/icon.4bpp");

	 const u32 gMonFrontPic_Dronarch[] = INCBIN_U32("graphics/pokemon/dronarch/front.4bpp.smol");
	 const u32 gMonBackPic_Dronarch[] = INCBIN_U32("graphics/pokemon/dronarch/back.4bpp.smol");
	 const u16 gMonPalette_Dronarch[] = INCBIN_U16("graphics/pokemon/dronarch/front.gbapal");
	 const u16 gMonShinyPalette_Dronarch[] = INCBIN_U16("graphics/pokemon/dronarch/back.gbapal");
	 const u8 gMonIcon_Dronarch[] = INCBIN_U8("graphics/pokemon/dronarch/icon.4bpp");

	 const u32 gMonFrontPic_Sepistrike[] = INCBIN_U32("graphics/pokemon/sepistrike/front.4bpp.smol");
	 const u32 gMonBackPic_Sepistrike[] = INCBIN_U32("graphics/pokemon/sepistrike/back.4bpp.smol");
	 const u16 gMonPalette_Sepistrike[] = INCBIN_U16("graphics/pokemon/sepistrike/front.gbapal");
	 const u16 gMonShinyPalette_Sepistrike[] = INCBIN_U16("graphics/pokemon/sepistrike/back.gbapal");
	 const u8 gMonIcon_Sepistrike[] = INCBIN_U8("graphics/pokemon/sepistrike/icon.4bpp");

#endif //P_FAMILY_WEEDLE

#if P_FAMILY_PIDGEY
	 const u32 gMonFrontPic_Pidgey[] = INCBIN_U32("graphics/pokemon/pidgey/front.4bpp.smol");
	 const u32 gMonBackPic_Pidgey[] = INCBIN_U32("graphics/pokemon/pidgey/back.4bpp.smol");
	 const u16 gMonPalette_Pidgey[] = INCBIN_U16("graphics/pokemon/pidgey/front.gbapal");
	 const u16 gMonShinyPalette_Pidgey[] = INCBIN_U16("graphics/pokemon/pidgey/back.gbapal");
	 const u8 gMonIcon_Pidgey[] = INCBIN_U8("graphics/pokemon/pidgey/icon.4bpp");

	 const u32 gMonFrontPic_Pidgeotto[] = INCBIN_U32("graphics/pokemon/pidgeotto/front.4bpp.smol");
	 const u32 gMonBackPic_Pidgeotto[] = INCBIN_U32("graphics/pokemon/pidgeotto/back.4bpp.smol");
	 const u16 gMonPalette_Pidgeotto[] = INCBIN_U16("graphics/pokemon/pidgeotto/front.gbapal");
	 const u16 gMonShinyPalette_Pidgeotto[] = INCBIN_U16("graphics/pokemon/pidgeotto/back.gbapal");
	 const u8 gMonIcon_Pidgeotto[] = INCBIN_U8("graphics/pokemon/pidgeotto/icon.4bpp");

	 const u32 gMonFrontPic_Pidgeot[] = INCBIN_U32("graphics/pokemon/pidgeot/front.4bpp.smol");
	 const u32 gMonBackPic_Pidgeot[] = INCBIN_U32("graphics/pokemon/pidgeot/back.4bpp.smol");
	 const u16 gMonPalette_Pidgeot[] = INCBIN_U16("graphics/pokemon/pidgeot/front.gbapal");
	 const u16 gMonShinyPalette_Pidgeot[] = INCBIN_U16("graphics/pokemon/pidgeot/back.gbapal");
	 const u8 gMonIcon_Pidgeot[] = INCBIN_U8("graphics/pokemon/pidgeot/icon.4bpp");

	 const u32 gMonFrontPic_Pidgaero[] = INCBIN_U32("graphics/pokemon/pidgaero/front.4bpp.smol");
	 const u32 gMonBackPic_Pidgaero[] = INCBIN_U32("graphics/pokemon/pidgaero/back.4bpp.smol");
	 const u16 gMonPalette_Pidgaero[] = INCBIN_U16("graphics/pokemon/pidgaero/front.gbapal");
	 const u16 gMonShinyPalette_Pidgaero[] = INCBIN_U16("graphics/pokemon/pidgaero/back.gbapal");
	 const u8 gMonIcon_Pidgaero[] = INCBIN_U8("graphics/pokemon/pidgaero/icon.4bpp");

	 const u32 gMonFrontPic_Pidgeozone[] = INCBIN_U32("graphics/pokemon/pidgeozone/front.4bpp.smol");
	 const u32 gMonBackPic_Pidgeozone[] = INCBIN_U32("graphics/pokemon/pidgeozone/back.4bpp.smol");
	 const u16 gMonPalette_Pidgeozone[] = INCBIN_U16("graphics/pokemon/pidgeozone/front.gbapal");
	 const u16 gMonShinyPalette_Pidgeozone[] = INCBIN_U16("graphics/pokemon/pidgeozone/back.gbapal");
	 const u8 gMonIcon_Pidgeozone[] = INCBIN_U8("graphics/pokemon/pidgeozone/icon.4bpp");

	 const u32 gMonFrontPic_Pidgephyr[] = INCBIN_U32("graphics/pokemon/pidgephyr/front.4bpp.smol");
	 const u32 gMonBackPic_Pidgephyr[] = INCBIN_U32("graphics/pokemon/pidgephyr/back.4bpp.smol");
	 const u16 gMonPalette_Pidgephyr[] = INCBIN_U16("graphics/pokemon/pidgephyr/front.gbapal");
	 const u16 gMonShinyPalette_Pidgephyr[] = INCBIN_U16("graphics/pokemon/pidgephyr/back.gbapal");
	 const u8 gMonIcon_Pidgephyr[] = INCBIN_U8("graphics/pokemon/pidgephyr/icon.4bpp");

#endif //P_FAMILY_PIDGEY

#if P_FAMILY_RATTATA
	 const u32 gMonFrontPic_Rattata[] = INCBIN_U32("graphics/pokemon/rattata/front.4bpp.smol");
	 const u32 gMonBackPic_Rattata[] = INCBIN_U32("graphics/pokemon/rattata/back.4bpp.smol");
	 const u16 gMonPalette_Rattata[] = INCBIN_U16("graphics/pokemon/rattata/front.gbapal");
	 const u16 gMonShinyPalette_Rattata[] = INCBIN_U16("graphics/pokemon/rattata/back.gbapal");
	 const u8 gMonIcon_Rattata[] = INCBIN_U8("graphics/pokemon/rattata/icon.4bpp");

	 const u32 gMonFrontPic_Raticate[] = INCBIN_U32("graphics/pokemon/raticate/front.4bpp.smol");
	 const u32 gMonBackPic_Raticate[] = INCBIN_U32("graphics/pokemon/raticate/back.4bpp.smol");
	 const u16 gMonPalette_Raticate[] = INCBIN_U16("graphics/pokemon/raticate/front.gbapal");
	 const u16 gMonShinyPalette_Raticate[] = INCBIN_U16("graphics/pokemon/raticate/back.gbapal");
	 const u8 gMonIcon_Raticate[] = INCBIN_U8("graphics/pokemon/raticate/icon.4bpp");

	 const u32 gMonFrontPic_Rattchet[] = INCBIN_U32("graphics/pokemon/rattchet/front.4bpp.smol");
	 const u32 gMonBackPic_Rattchet[] = INCBIN_U32("graphics/pokemon/rattchet/back.4bpp.smol");
	 const u16 gMonPalette_Rattchet[] = INCBIN_U16("graphics/pokemon/rattchet/front.gbapal");
	 const u16 gMonShinyPalette_Rattchet[] = INCBIN_U16("graphics/pokemon/rattchet/back.gbapal");
	 const u8 gMonIcon_Rattchet[] = INCBIN_U8("graphics/pokemon/rattchet/icon.4bpp");

	 const u32 gMonFrontPic_Rattarule[] = INCBIN_U32("graphics/pokemon/rattarule/front.4bpp.smol");
	 const u32 gMonBackPic_Rattarule[] = INCBIN_U32("graphics/pokemon/rattarule/back.4bpp.smol");
	 const u16 gMonPalette_Rattarule[] = INCBIN_U16("graphics/pokemon/rattarule/front.gbapal");
	 const u16 gMonShinyPalette_Rattarule[] = INCBIN_U16("graphics/pokemon/rattarule/back.gbapal");
	 const u8 gMonIcon_Rattarule[] = INCBIN_U8("graphics/pokemon/rattarule/icon.4bpp");

#endif //P_FAMILY_RATTATA

#if P_FAMILY_SPEAROW
	 const u32 gMonFrontPic_Spearow[] = INCBIN_U32("graphics/pokemon/spearow/front.4bpp.smol");
	 const u32 gMonBackPic_Spearow[] = INCBIN_U32("graphics/pokemon/spearow/back.4bpp.smol");
	 const u16 gMonPalette_Spearow[] = INCBIN_U16("graphics/pokemon/spearow/front.gbapal");
	 const u16 gMonShinyPalette_Spearow[] = INCBIN_U16("graphics/pokemon/spearow/back.gbapal");
	 const u8 gMonIcon_Spearow[] = INCBIN_U8("graphics/pokemon/spearow/icon.4bpp");

	 const u32 gMonFrontPic_Fearow[] = INCBIN_U32("graphics/pokemon/fearow/front.4bpp.smol");
	 const u32 gMonBackPic_Fearow[] = INCBIN_U32("graphics/pokemon/fearow/back.4bpp.smol");
	 const u16 gMonPalette_Fearow[] = INCBIN_U16("graphics/pokemon/fearow/front.gbapal");
	 const u16 gMonShinyPalette_Fearow[] = INCBIN_U16("graphics/pokemon/fearow/back.gbapal");
	 const u8 gMonIcon_Fearow[] = INCBIN_U8("graphics/pokemon/fearow/icon.4bpp");

	 const u32 gMonFrontPic_Sneerow[] = INCBIN_U32("graphics/pokemon/sneerow/front.4bpp.smol");
	 const u32 gMonBackPic_Sneerow[] = INCBIN_U32("graphics/pokemon/sneerow/back.4bpp.smol");
	 const u16 gMonPalette_Sneerow[] = INCBIN_U16("graphics/pokemon/sneerow/front.gbapal");
	 const u16 gMonShinyPalette_Sneerow[] = INCBIN_U16("graphics/pokemon/sneerow/back.gbapal");
	 const u8 gMonIcon_Sneerow[] = INCBIN_U8("graphics/pokemon/sneerow/icon.4bpp");

	 const u32 gMonFrontPic_Ornithow[] = INCBIN_U32("graphics/pokemon/ornithow/front.4bpp.smol");
	 const u32 gMonBackPic_Ornithow[] = INCBIN_U32("graphics/pokemon/ornithow/back.4bpp.smol");
	 const u16 gMonPalette_Ornithow[] = INCBIN_U16("graphics/pokemon/ornithow/front.gbapal");
	 const u16 gMonShinyPalette_Ornithow[] = INCBIN_U16("graphics/pokemon/ornithow/back.gbapal");
	 const u8 gMonIcon_Ornithow[] = INCBIN_U8("graphics/pokemon/ornithow/icon.4bpp");

#endif //P_FAMILY_SPEAROW

#if P_FAMILY_EKANS
	 const u32 gMonFrontPic_Ekans[] = INCBIN_U32("graphics/pokemon/ekans/front.4bpp.smol");
	 const u32 gMonBackPic_Ekans[] = INCBIN_U32("graphics/pokemon/ekans/back.4bpp.smol");
	 const u16 gMonPalette_Ekans[] = INCBIN_U16("graphics/pokemon/ekans/front.gbapal");
	 const u16 gMonShinyPalette_Ekans[] = INCBIN_U16("graphics/pokemon/ekans/back.gbapal");
	 const u8 gMonIcon_Ekans[] = INCBIN_U8("graphics/pokemon/ekans/icon.4bpp");

	 const u32 gMonFrontPic_Arbok[] = INCBIN_U32("graphics/pokemon/arbok/front.4bpp.smol");
	 const u32 gMonBackPic_Arbok[] = INCBIN_U32("graphics/pokemon/arbok/back.4bpp.smol");
	 const u16 gMonPalette_Arbok[] = INCBIN_U16("graphics/pokemon/arbok/front.gbapal");
	 const u16 gMonShinyPalette_Arbok[] = INCBIN_U16("graphics/pokemon/arbok/back.gbapal");
	 const u8 gMonIcon_Arbok[] = INCBIN_U8("graphics/pokemon/arbok/icon.4bpp");

	 const u32 gMonFrontPic_Nohtyp[] = INCBIN_U32("graphics/pokemon/nohtyp/front.4bpp.smol");
	 const u32 gMonBackPic_Nohtyp[] = INCBIN_U32("graphics/pokemon/nohtyp/back.4bpp.smol");
	 const u16 gMonPalette_Nohtyp[] = INCBIN_U16("graphics/pokemon/nohtyp/front.gbapal");
	 const u16 gMonShinyPalette_Nohtyp[] = INCBIN_U16("graphics/pokemon/nohtyp/back.gbapal");
	 const u8 gMonIcon_Nohtyp[] = INCBIN_U8("graphics/pokemon/nohtyp/icon.4bpp");

	 const u32 gMonFrontPic_Adnokana[] = INCBIN_U32("graphics/pokemon/adnokana/front.4bpp.smol");
	 const u32 gMonBackPic_Adnokana[] = INCBIN_U32("graphics/pokemon/adnokana/back.4bpp.smol");
	 const u16 gMonPalette_Adnokana[] = INCBIN_U16("graphics/pokemon/adnokana/front.gbapal");
	 const u16 gMonShinyPalette_Adnokana[] = INCBIN_U16("graphics/pokemon/adnokana/back.gbapal");
	 const u8 gMonIcon_Adnokana[] = INCBIN_U8("graphics/pokemon/adnokana/icon.4bpp");

#endif //P_FAMILY_EKANS

#if P_FAMILY_PIKACHU
	 const u32 gMonFrontPic_Pikachu[] = INCBIN_U32("graphics/pokemon/pikachu/front.4bpp.smol");
	 const u32 gMonBackPic_Pikachu[] = INCBIN_U32("graphics/pokemon/pikachu/back.4bpp.smol");
	 const u16 gMonPalette_Pikachu[] = INCBIN_U16("graphics/pokemon/pikachu/front.gbapal");
	 const u16 gMonShinyPalette_Pikachu[] = INCBIN_U16("graphics/pokemon/pikachu/back.gbapal");
	 const u8 gMonIcon_Pikachu[] = INCBIN_U8("graphics/pokemon/pikachu/icon.4bpp");

	 const u32 gMonFrontPic_Raichu[] = INCBIN_U32("graphics/pokemon/raichu/front.4bpp.smol");
	 const u32 gMonBackPic_Raichu[] = INCBIN_U32("graphics/pokemon/raichu/back.4bpp.smol");
	 const u16 gMonPalette_Raichu[] = INCBIN_U16("graphics/pokemon/raichu/front.gbapal");
	 const u16 gMonShinyPalette_Raichu[] = INCBIN_U16("graphics/pokemon/raichu/back.gbapal");
	 const u8 gMonIcon_Raichu[] = INCBIN_U8("graphics/pokemon/raichu/icon.4bpp");

	 const u32 gMonFrontPic_Gorochu[] = INCBIN_U32("graphics/pokemon/gorochu/front.4bpp.smol");
	 const u32 gMonBackPic_Gorochu[] = INCBIN_U32("graphics/pokemon/gorochu/back.4bpp.smol");
	 const u16 gMonPalette_Gorochu[] = INCBIN_U16("graphics/pokemon/gorochu/front.gbapal");
	 const u16 gMonShinyPalette_Gorochu[] = INCBIN_U16("graphics/pokemon/gorochu/back.gbapal");
	 const u8 gMonIcon_Gorochu[] = INCBIN_U8("graphics/pokemon/gorochu/icon.4bpp");

	 const u32 gMonFrontPic_Stromachu[] = INCBIN_U32("graphics/pokemon/stromachu/front.4bpp.smol");
	 const u32 gMonBackPic_Stromachu[] = INCBIN_U32("graphics/pokemon/stromachu/back.4bpp.smol");
	 const u16 gMonPalette_Stromachu[] = INCBIN_U16("graphics/pokemon/stromachu/front.gbapal");
	 const u16 gMonShinyPalette_Stromachu[] = INCBIN_U16("graphics/pokemon/stromachu/back.gbapal");
	 const u8 gMonIcon_Stromachu[] = INCBIN_U8("graphics/pokemon/stromachu/icon.4bpp");

#endif //P_FAMILY_PIKACHU

#if P_FAMILY_SANDSHREW
	 const u32 gMonFrontPic_Sandshrew[] = INCBIN_U32("graphics/pokemon/sandshrew/front.4bpp.smol");
	 const u32 gMonBackPic_Sandshrew[] = INCBIN_U32("graphics/pokemon/sandshrew/back.4bpp.smol");
	 const u16 gMonPalette_Sandshrew[] = INCBIN_U16("graphics/pokemon/sandshrew/front.gbapal");
	 const u16 gMonShinyPalette_Sandshrew[] = INCBIN_U16("graphics/pokemon/sandshrew/back.gbapal");
	 const u8 gMonIcon_Sandshrew[] = INCBIN_U8("graphics/pokemon/sandshrew/icon.4bpp");

	 const u32 gMonFrontPic_Sandslash[] = INCBIN_U32("graphics/pokemon/sandslash/front.4bpp.smol");
	 const u32 gMonBackPic_Sandslash[] = INCBIN_U32("graphics/pokemon/sandslash/back.4bpp.smol");
	 const u16 gMonPalette_Sandslash[] = INCBIN_U16("graphics/pokemon/sandslash/front.gbapal");
	 const u16 gMonShinyPalette_Sandslash[] = INCBIN_U16("graphics/pokemon/sandslash/back.gbapal");
	 const u8 gMonIcon_Sandslash[] = INCBIN_U8("graphics/pokemon/sandslash/icon.4bpp");

	 const u32 gMonFrontPic_Sandslam[] = INCBIN_U32("graphics/pokemon/sandslam/front.4bpp.smol");
	 const u32 gMonBackPic_Sandslam[] = INCBIN_U32("graphics/pokemon/sandslam/back.4bpp.smol");
	 const u16 gMonPalette_Sandslam[] = INCBIN_U16("graphics/pokemon/sandslam/front.gbapal");
	 const u16 gMonShinyPalette_Sandslam[] = INCBIN_U16("graphics/pokemon/sandslam/back.gbapal");
	 const u8 gMonIcon_Sandslam[] = INCBIN_U8("graphics/pokemon/sandslam/icon.4bpp");

	 const u32 gMonFrontPic_Ferodillo[] = INCBIN_U32("graphics/pokemon/ferodillo/front.4bpp.smol");
	 const u32 gMonBackPic_Ferodillo[] = INCBIN_U32("graphics/pokemon/ferodillo/back.4bpp.smol");
	 const u16 gMonPalette_Ferodillo[] = INCBIN_U16("graphics/pokemon/ferodillo/front.gbapal");
	 const u16 gMonShinyPalette_Ferodillo[] = INCBIN_U16("graphics/pokemon/ferodillo/back.gbapal");
	 const u8 gMonIcon_Ferodillo[] = INCBIN_U8("graphics/pokemon/ferodillo/icon.4bpp");

#endif //P_FAMILY_SANDSHREW

#if P_FAMILY_NIDORAN
	 const u32 gMonFrontPic_Nidoran_f[] = INCBIN_U32("graphics/pokemon/nidoran_f/front.4bpp.smol");
	 const u32 gMonBackPic_Nidoran_f[] = INCBIN_U32("graphics/pokemon/nidoran_f/back.4bpp.smol");
	 const u16 gMonPalette_Nidoran_f[] = INCBIN_U16("graphics/pokemon/nidoran_f/front.gbapal");
	 const u16 gMonShinyPalette_Nidoran_f[] = INCBIN_U16("graphics/pokemon/nidoran_f/back.gbapal");
	 const u8 gMonIcon_Nidoran_f[] = INCBIN_U8("graphics/pokemon/nidoran_f/icon.4bpp");

	 const u32 gMonFrontPic_Nidorina[] = INCBIN_U32("graphics/pokemon/nidorina/front.4bpp.smol");
	 const u32 gMonBackPic_Nidorina[] = INCBIN_U32("graphics/pokemon/nidorina/back.4bpp.smol");
	 const u16 gMonPalette_Nidorina[] = INCBIN_U16("graphics/pokemon/nidorina/front.gbapal");
	 const u16 gMonShinyPalette_Nidorina[] = INCBIN_U16("graphics/pokemon/nidorina/back.gbapal");
	 const u8 gMonIcon_Nidorina[] = INCBIN_U8("graphics/pokemon/nidorina/icon.4bpp");

	 const u32 gMonFrontPic_Nidoqueen[] = INCBIN_U32("graphics/pokemon/nidoqueen/front.4bpp.smol");
	 const u32 gMonBackPic_Nidoqueen[] = INCBIN_U32("graphics/pokemon/nidoqueen/back.4bpp.smol");
	 const u16 gMonPalette_Nidoqueen[] = INCBIN_U16("graphics/pokemon/nidoqueen/front.gbapal");
	 const u16 gMonShinyPalette_Nidoqueen[] = INCBIN_U16("graphics/pokemon/nidoqueen/back.gbapal");
	 const u8 gMonIcon_Nidoqueen[] = INCBIN_U8("graphics/pokemon/nidoqueen/icon.4bpp");

	 const u32 gMonFrontPic_Nidoregal[] = INCBIN_U32("graphics/pokemon/nidoregal/front.4bpp.smol");
	 const u32 gMonBackPic_Nidoregal[] = INCBIN_U32("graphics/pokemon/nidoregal/back.4bpp.smol");
	 const u16 gMonPalette_Nidoregal[] = INCBIN_U16("graphics/pokemon/nidoregal/front.gbapal");
	 const u16 gMonShinyPalette_Nidoregal[] = INCBIN_U16("graphics/pokemon/nidoregal/back.gbapal");
	 const u8 gMonIcon_Nidoregal[] = INCBIN_U8("graphics/pokemon/nidoregal/icon.4bpp");

	 const u32 gMonFrontPic_Nidoarchy[] = INCBIN_U32("graphics/pokemon/nidoarchy/front.4bpp.smol");
	 const u32 gMonBackPic_Nidoarchy[] = INCBIN_U32("graphics/pokemon/nidoarchy/back.4bpp.smol");
	 const u16 gMonPalette_Nidoarchy[] = INCBIN_U16("graphics/pokemon/nidoarchy/front.gbapal");
	 const u16 gMonShinyPalette_Nidoarchy[] = INCBIN_U16("graphics/pokemon/nidoarchy/back.gbapal");
	 const u8 gMonIcon_Nidoarchy[] = INCBIN_U8("graphics/pokemon/nidoarchy/icon.4bpp");

	 const u32 gMonFrontPic_Nidoran_m[] = INCBIN_U32("graphics/pokemon/nidoran_m/front.4bpp.smol");
	 const u32 gMonBackPic_Nidoran_m[] = INCBIN_U32("graphics/pokemon/nidoran_m/back.4bpp.smol");
	 const u16 gMonPalette_Nidoran_m[] = INCBIN_U16("graphics/pokemon/nidoran_m/front.gbapal");
	 const u16 gMonShinyPalette_Nidoran_m[] = INCBIN_U16("graphics/pokemon/nidoran_m/back.gbapal");
	 const u8 gMonIcon_Nidoran_m[] = INCBIN_U8("graphics/pokemon/nidoran_m/icon.4bpp");

	 const u32 gMonFrontPic_Nidorino[] = INCBIN_U32("graphics/pokemon/nidorino/front.4bpp.smol");
	 const u32 gMonBackPic_Nidorino[] = INCBIN_U32("graphics/pokemon/nidorino/back.4bpp.smol");
	 const u16 gMonPalette_Nidorino[] = INCBIN_U16("graphics/pokemon/nidorino/front.gbapal");
	 const u16 gMonShinyPalette_Nidorino[] = INCBIN_U16("graphics/pokemon/nidorino/back.gbapal");
	 const u8 gMonIcon_Nidorino[] = INCBIN_U8("graphics/pokemon/nidorino/icon.4bpp");

	 const u32 gMonFrontPic_Nidoking[] = INCBIN_U32("graphics/pokemon/nidoking/front.4bpp.smol");
	 const u32 gMonBackPic_Nidoking[] = INCBIN_U32("graphics/pokemon/nidoking/back.4bpp.smol");
	 const u16 gMonPalette_Nidoking[] = INCBIN_U16("graphics/pokemon/nidoking/front.gbapal");
	 const u16 gMonShinyPalette_Nidoking[] = INCBIN_U16("graphics/pokemon/nidoking/back.gbapal");
	 const u8 gMonIcon_Nidoking[] = INCBIN_U8("graphics/pokemon/nidoking/icon.4bpp");

	 const u32 gMonFrontPic_Nidoruly[] = INCBIN_U32("graphics/pokemon/nidoruly/front.4bpp.smol");
	 const u32 gMonBackPic_Nidoruly[] = INCBIN_U32("graphics/pokemon/nidoruly/back.4bpp.smol");
	 const u16 gMonPalette_Nidoruly[] = INCBIN_U16("graphics/pokemon/nidoruly/front.gbapal");
	 const u16 gMonShinyPalette_Nidoruly[] = INCBIN_U16("graphics/pokemon/nidoruly/back.gbapal");
	 const u8 gMonIcon_Nidoruly[] = INCBIN_U8("graphics/pokemon/nidoruly/icon.4bpp");

	 const u32 gMonFrontPic_Nidominate[] = INCBIN_U32("graphics/pokemon/nidominate/front.4bpp.smol");
	 const u32 gMonBackPic_Nidominate[] = INCBIN_U32("graphics/pokemon/nidominate/back.4bpp.smol");
	 const u16 gMonPalette_Nidominate[] = INCBIN_U16("graphics/pokemon/nidominate/front.gbapal");
	 const u16 gMonShinyPalette_Nidominate[] = INCBIN_U16("graphics/pokemon/nidominate/back.gbapal");
	 const u8 gMonIcon_Nidominate[] = INCBIN_U8("graphics/pokemon/nidominate/icon.4bpp");

#endif //P_FAMILY_NIDORAN

#if P_FAMILY_CLEFAIRY
	 const u32 gMonFrontPic_Clefairy[] = INCBIN_U32("graphics/pokemon/clefairy/front.4bpp.smol");
	 const u32 gMonBackPic_Clefairy[] = INCBIN_U32("graphics/pokemon/clefairy/back.4bpp.smol");
	 const u16 gMonPalette_Clefairy[] = INCBIN_U16("graphics/pokemon/clefairy/front.gbapal");
	 const u16 gMonShinyPalette_Clefairy[] = INCBIN_U16("graphics/pokemon/clefairy/back.gbapal");
	 const u8 gMonIcon_Clefairy[] = INCBIN_U8("graphics/pokemon/clefairy/icon.4bpp");

	 const u32 gMonFrontPic_Clefable[] = INCBIN_U32("graphics/pokemon/clefable/front.4bpp.smol");
	 const u32 gMonBackPic_Clefable[] = INCBIN_U32("graphics/pokemon/clefable/back.4bpp.smol");
	 const u16 gMonPalette_Clefable[] = INCBIN_U16("graphics/pokemon/clefable/front.gbapal");
	 const u16 gMonShinyPalette_Clefable[] = INCBIN_U16("graphics/pokemon/clefable/back.gbapal");
	 const u8 gMonIcon_Clefable[] = INCBIN_U8("graphics/pokemon/clefable/icon.4bpp");

	 const u32 gMonFrontPic_Clefaefae[] = INCBIN_U32("graphics/pokemon/clefaefae/front.4bpp.smol");
	 const u32 gMonBackPic_Clefaefae[] = INCBIN_U32("graphics/pokemon/clefaefae/back.4bpp.smol");
	 const u16 gMonPalette_Clefaefae[] = INCBIN_U16("graphics/pokemon/clefaefae/front.gbapal");
	 const u16 gMonShinyPalette_Clefaefae[] = INCBIN_U16("graphics/pokemon/clefaefae/back.gbapal");
	 const u8 gMonIcon_Clefaefae[] = INCBIN_U8("graphics/pokemon/clefaefae/icon.4bpp");

	 const u32 gMonFrontPic_Clefanaut[] = INCBIN_U32("graphics/pokemon/clefanaut/front.4bpp.smol");
	 const u32 gMonBackPic_Clefanaut[] = INCBIN_U32("graphics/pokemon/clefanaut/back.4bpp.smol");
	 const u16 gMonPalette_Clefanaut[] = INCBIN_U16("graphics/pokemon/clefanaut/front.gbapal");
	 const u16 gMonShinyPalette_Clefanaut[] = INCBIN_U16("graphics/pokemon/clefanaut/back.gbapal");
	 const u8 gMonIcon_Clefanaut[] = INCBIN_U8("graphics/pokemon/clefanaut/icon.4bpp");

#endif //P_FAMILY_CLEFAIRY

#if P_FAMILY_VULPIX
	 const u32 gMonFrontPic_Vulpix[] = INCBIN_U32("graphics/pokemon/vulpix/front.4bpp.smol");
	 const u32 gMonBackPic_Vulpix[] = INCBIN_U32("graphics/pokemon/vulpix/back.4bpp.smol");
	 const u16 gMonPalette_Vulpix[] = INCBIN_U16("graphics/pokemon/vulpix/front.gbapal");
	 const u16 gMonShinyPalette_Vulpix[] = INCBIN_U16("graphics/pokemon/vulpix/back.gbapal");
	 const u8 gMonIcon_Vulpix[] = INCBIN_U8("graphics/pokemon/vulpix/icon.4bpp");

	 const u32 gMonFrontPic_Ninetales[] = INCBIN_U32("graphics/pokemon/ninetales/front.4bpp.smol");
	 const u32 gMonBackPic_Ninetales[] = INCBIN_U32("graphics/pokemon/ninetales/back.4bpp.smol");
	 const u16 gMonPalette_Ninetales[] = INCBIN_U16("graphics/pokemon/ninetales/front.gbapal");
	 const u16 gMonShinyPalette_Ninetales[] = INCBIN_U16("graphics/pokemon/ninetales/back.gbapal");
	 const u8 gMonIcon_Ninetales[] = INCBIN_U8("graphics/pokemon/ninetales/icon.4bpp");

	 const u32 gMonFrontPic_Spiritales[] = INCBIN_U32("graphics/pokemon/spiritales/front.4bpp.smol");
	 const u32 gMonBackPic_Spiritales[] = INCBIN_U32("graphics/pokemon/spiritales/back.4bpp.smol");
	 const u16 gMonPalette_Spiritales[] = INCBIN_U16("graphics/pokemon/spiritales/front.gbapal");
	 const u16 gMonShinyPalette_Spiritales[] = INCBIN_U16("graphics/pokemon/spiritales/back.gbapal");
	 const u8 gMonIcon_Spiritales[] = INCBIN_U8("graphics/pokemon/spiritales/icon.4bpp");

	 const u32 gMonFrontPic_Yokayubi[] = INCBIN_U32("graphics/pokemon/yokayubi/front.4bpp.smol");
	 const u32 gMonBackPic_Yokayubi[] = INCBIN_U32("graphics/pokemon/yokayubi/back.4bpp.smol");
	 const u16 gMonPalette_Yokayubi[] = INCBIN_U16("graphics/pokemon/yokayubi/front.gbapal");
	 const u16 gMonShinyPalette_Yokayubi[] = INCBIN_U16("graphics/pokemon/yokayubi/back.gbapal");
	 const u8 gMonIcon_Yokayubi[] = INCBIN_U8("graphics/pokemon/yokayubi/icon.4bpp");

#endif //P_FAMILY_VULPIX

#if P_FAMILY_JIGGLYPUFF
	 const u32 gMonFrontPic_Jigglypuff[] = INCBIN_U32("graphics/pokemon/jigglypuff/front.4bpp.smol");
	 const u32 gMonBackPic_Jigglypuff[] = INCBIN_U32("graphics/pokemon/jigglypuff/back.4bpp.smol");
	 const u16 gMonPalette_Jigglypuff[] = INCBIN_U16("graphics/pokemon/jigglypuff/front.gbapal");
	 const u16 gMonShinyPalette_Jigglypuff[] = INCBIN_U16("graphics/pokemon/jigglypuff/back.gbapal");
	 const u8 gMonIcon_Jigglypuff[] = INCBIN_U8("graphics/pokemon/jigglypuff/icon.4bpp");

	 const u32 gMonFrontPic_Wigglytuff[] = INCBIN_U32("graphics/pokemon/wigglytuff/front.4bpp.smol");
	 const u32 gMonBackPic_Wigglytuff[] = INCBIN_U32("graphics/pokemon/wigglytuff/back.4bpp.smol");
	 const u16 gMonPalette_Wigglytuff[] = INCBIN_U16("graphics/pokemon/wigglytuff/front.gbapal");
	 const u16 gMonShinyPalette_Wigglytuff[] = INCBIN_U16("graphics/pokemon/wigglytuff/back.gbapal");
	 const u8 gMonIcon_Wigglytuff[] = INCBIN_U8("graphics/pokemon/wigglytuff/icon.4bpp");

	 const u32 gMonFrontPic_Gigglyhuff[] = INCBIN_U32("graphics/pokemon/gigglyhuff/front.4bpp.smol");
	 const u32 gMonBackPic_Gigglyhuff[] = INCBIN_U32("graphics/pokemon/gigglyhuff/back.4bpp.smol");
	 const u16 gMonPalette_Gigglyhuff[] = INCBIN_U16("graphics/pokemon/gigglyhuff/front.gbapal");
	 const u16 gMonShinyPalette_Gigglyhuff[] = INCBIN_U16("graphics/pokemon/gigglyhuff/back.gbapal");
	 const u8 gMonIcon_Gigglyhuff[] = INCBIN_U8("graphics/pokemon/gigglyhuff/icon.4bpp");

	 const u32 gMonFrontPic_Bogglyfuff[] = INCBIN_U32("graphics/pokemon/bogglyfuff/front.4bpp.smol");
	 const u32 gMonBackPic_Bogglyfuff[] = INCBIN_U32("graphics/pokemon/bogglyfuff/back.4bpp.smol");
	 const u16 gMonPalette_Bogglyfuff[] = INCBIN_U16("graphics/pokemon/bogglyfuff/front.gbapal");
	 const u16 gMonShinyPalette_Bogglyfuff[] = INCBIN_U16("graphics/pokemon/bogglyfuff/back.gbapal");
	 const u8 gMonIcon_Bogglyfuff[] = INCBIN_U8("graphics/pokemon/bogglyfuff/icon.4bpp");

#endif //P_FAMILY_JIGGLYPUFF

#if P_FAMILY_ZUBAT
	 const u32 gMonFrontPic_Zubat[] = INCBIN_U32("graphics/pokemon/zubat/front.4bpp.smol");
	 const u32 gMonBackPic_Zubat[] = INCBIN_U32("graphics/pokemon/zubat/back.4bpp.smol");
	 const u16 gMonPalette_Zubat[] = INCBIN_U16("graphics/pokemon/zubat/front.gbapal");
	 const u16 gMonShinyPalette_Zubat[] = INCBIN_U16("graphics/pokemon/zubat/back.gbapal");
	 const u8 gMonIcon_Zubat[] = INCBIN_U8("graphics/pokemon/zubat/icon.4bpp");

	 const u32 gMonFrontPic_Golbat[] = INCBIN_U32("graphics/pokemon/golbat/front.4bpp.smol");
	 const u32 gMonBackPic_Golbat[] = INCBIN_U32("graphics/pokemon/golbat/back.4bpp.smol");
	 const u16 gMonPalette_Golbat[] = INCBIN_U16("graphics/pokemon/golbat/front.gbapal");
	 const u16 gMonShinyPalette_Golbat[] = INCBIN_U16("graphics/pokemon/golbat/back.gbapal");
	 const u8 gMonIcon_Golbat[] = INCBIN_U8("graphics/pokemon/golbat/icon.4bpp");

	 const u32 gMonFrontPic_Crobat[] = INCBIN_U32("graphics/pokemon/crobat/front.4bpp.smol");
	 const u32 gMonBackPic_Crobat[] = INCBIN_U32("graphics/pokemon/crobat/back.4bpp.smol");
	 const u16 gMonPalette_Crobat[] = INCBIN_U16("graphics/pokemon/crobat/front.gbapal");
	 const u16 gMonShinyPalette_Crobat[] = INCBIN_U16("graphics/pokemon/crobat/back.gbapal");
	 const u8 gMonIcon_Crobat[] = INCBIN_U8("graphics/pokemon/crobat/icon.4bpp");

	 const u32 gMonFrontPic_Polabat[] = INCBIN_U32("graphics/pokemon/polabat/front.4bpp.smol");
	 const u32 gMonBackPic_Polabat[] = INCBIN_U32("graphics/pokemon/polabat/back.4bpp.smol");
	 const u16 gMonPalette_Polabat[] = INCBIN_U16("graphics/pokemon/polabat/front.gbapal");
	 const u16 gMonShinyPalette_Polabat[] = INCBIN_U16("graphics/pokemon/polabat/back.gbapal");
	 const u8 gMonIcon_Polabat[] = INCBIN_U8("graphics/pokemon/polabat/icon.4bpp");

	 const u32 gMonFrontPic_Visibat[] = INCBIN_U32("graphics/pokemon/visibat/front.4bpp.smol");
	 const u32 gMonBackPic_Visibat[] = INCBIN_U32("graphics/pokemon/visibat/back.4bpp.smol");
	 const u16 gMonPalette_Visibat[] = INCBIN_U16("graphics/pokemon/visibat/front.gbapal");
	 const u16 gMonShinyPalette_Visibat[] = INCBIN_U16("graphics/pokemon/visibat/back.gbapal");
	 const u8 gMonIcon_Visibat[] = INCBIN_U8("graphics/pokemon/visibat/icon.4bpp");

	 const u32 gMonFrontPic_Horribat[] = INCBIN_U32("graphics/pokemon/horribat/front.4bpp.smol");
	 const u32 gMonBackPic_Horribat[] = INCBIN_U32("graphics/pokemon/horribat/back.4bpp.smol");
	 const u16 gMonPalette_Horribat[] = INCBIN_U16("graphics/pokemon/horribat/front.gbapal");
	 const u16 gMonShinyPalette_Horribat[] = INCBIN_U16("graphics/pokemon/horribat/back.gbapal");
	 const u8 gMonIcon_Horribat[] = INCBIN_U8("graphics/pokemon/horribat/icon.4bpp");

#endif //P_FAMILY_ZUBAT

#if P_FAMILY_ODDISH
	 const u32 gMonFrontPic_Oddish[] = INCBIN_U32("graphics/pokemon/oddish/front.4bpp.smol");
	 const u32 gMonBackPic_Oddish[] = INCBIN_U32("graphics/pokemon/oddish/back.4bpp.smol");
	 const u16 gMonPalette_Oddish[] = INCBIN_U16("graphics/pokemon/oddish/front.gbapal");
	 const u16 gMonShinyPalette_Oddish[] = INCBIN_U16("graphics/pokemon/oddish/back.gbapal");
	 const u8 gMonIcon_Oddish[] = INCBIN_U8("graphics/pokemon/oddish/icon.4bpp");

	 const u32 gMonFrontPic_Gloom[] = INCBIN_U32("graphics/pokemon/gloom/front.4bpp.smol");
	 const u32 gMonBackPic_Gloom[] = INCBIN_U32("graphics/pokemon/gloom/back.4bpp.smol");
	 const u16 gMonPalette_Gloom[] = INCBIN_U16("graphics/pokemon/gloom/front.gbapal");
	 const u16 gMonShinyPalette_Gloom[] = INCBIN_U16("graphics/pokemon/gloom/back.gbapal");
	 const u8 gMonIcon_Gloom[] = INCBIN_U8("graphics/pokemon/gloom/icon.4bpp");

	 const u32 gMonFrontPic_Vileplume[] = INCBIN_U32("graphics/pokemon/vileplume/front.4bpp.smol");
	 const u32 gMonBackPic_Vileplume[] = INCBIN_U32("graphics/pokemon/vileplume/back.4bpp.smol");
	 const u16 gMonPalette_Vileplume[] = INCBIN_U16("graphics/pokemon/vileplume/front.gbapal");
	 const u16 gMonShinyPalette_Vileplume[] = INCBIN_U16("graphics/pokemon/vileplume/back.gbapal");
	 const u8 gMonIcon_Vileplume[] = INCBIN_U8("graphics/pokemon/vileplume/icon.4bpp");

	 const u32 gMonFrontPic_Rafflurk[] = INCBIN_U32("graphics/pokemon/rafflurk/front.4bpp.smol");
	 const u32 gMonBackPic_Rafflurk[] = INCBIN_U32("graphics/pokemon/rafflurk/back.4bpp.smol");
	 const u16 gMonPalette_Rafflurk[] = INCBIN_U16("graphics/pokemon/rafflurk/front.gbapal");
	 const u16 gMonShinyPalette_Rafflurk[] = INCBIN_U16("graphics/pokemon/rafflurk/back.gbapal");
	 const u8 gMonIcon_Rafflurk[] = INCBIN_U8("graphics/pokemon/rafflurk/icon.4bpp");

	 const u32 gMonFrontPic_Concorpsia[] = INCBIN_U32("graphics/pokemon/concorpsia/front.4bpp.smol");
	 const u32 gMonBackPic_Concorpsia[] = INCBIN_U32("graphics/pokemon/concorpsia/back.4bpp.smol");
	 const u16 gMonPalette_Concorpsia[] = INCBIN_U16("graphics/pokemon/concorpsia/front.gbapal");
	 const u16 gMonShinyPalette_Concorpsia[] = INCBIN_U16("graphics/pokemon/concorpsia/back.gbapal");
	 const u8 gMonIcon_Concorpsia[] = INCBIN_U8("graphics/pokemon/concorpsia/icon.4bpp");

#endif //P_FAMILY_ODDISH

#if P_FAMILY_PARAS
	 const u32 gMonFrontPic_Paras[] = INCBIN_U32("graphics/pokemon/paras/front.4bpp.smol");
	 const u32 gMonBackPic_Paras[] = INCBIN_U32("graphics/pokemon/paras/back.4bpp.smol");
	 const u16 gMonPalette_Paras[] = INCBIN_U16("graphics/pokemon/paras/front.gbapal");
	 const u16 gMonShinyPalette_Paras[] = INCBIN_U16("graphics/pokemon/paras/back.gbapal");
	 const u8 gMonIcon_Paras[] = INCBIN_U8("graphics/pokemon/paras/icon.4bpp");

	 const u32 gMonFrontPic_Parasect[] = INCBIN_U32("graphics/pokemon/parasect/front.4bpp.smol");
	 const u32 gMonBackPic_Parasect[] = INCBIN_U32("graphics/pokemon/parasect/back.4bpp.smol");
	 const u16 gMonPalette_Parasect[] = INCBIN_U16("graphics/pokemon/parasect/front.gbapal");
	 const u16 gMonShinyPalette_Parasect[] = INCBIN_U16("graphics/pokemon/parasect/back.gbapal");
	 const u8 gMonIcon_Parasect[] = INCBIN_U8("graphics/pokemon/parasect/icon.4bpp");

	 const u32 gMonFrontPic_Sectasite[] = INCBIN_U32("graphics/pokemon/sectasite/front.4bpp.smol");
	 const u32 gMonBackPic_Sectasite[] = INCBIN_U32("graphics/pokemon/sectasite/back.4bpp.smol");
	 const u16 gMonPalette_Sectasite[] = INCBIN_U16("graphics/pokemon/sectasite/front.gbapal");
	 const u16 gMonShinyPalette_Sectasite[] = INCBIN_U16("graphics/pokemon/sectasite/back.gbapal");
	 const u8 gMonIcon_Sectasite[] = INCBIN_U8("graphics/pokemon/sectasite/icon.4bpp");

	 const u32 gMonFrontPic_Fungalith[] = INCBIN_U32("graphics/pokemon/fungalith/front.4bpp.smol");
	 const u32 gMonBackPic_Fungalith[] = INCBIN_U32("graphics/pokemon/fungalith/back.4bpp.smol");
	 const u16 gMonPalette_Fungalith[] = INCBIN_U16("graphics/pokemon/fungalith/front.gbapal");
	 const u16 gMonShinyPalette_Fungalith[] = INCBIN_U16("graphics/pokemon/fungalith/back.gbapal");
	 const u8 gMonIcon_Fungalith[] = INCBIN_U8("graphics/pokemon/fungalith/icon.4bpp");

#endif //P_FAMILY_PARAS

#if P_FAMILY_VENONAT
	 const u32 gMonFrontPic_Venonat[] = INCBIN_U32("graphics/pokemon/venonat/front.4bpp.smol");
	 const u32 gMonBackPic_Venonat[] = INCBIN_U32("graphics/pokemon/venonat/back.4bpp.smol");
	 const u16 gMonPalette_Venonat[] = INCBIN_U16("graphics/pokemon/venonat/front.gbapal");
	 const u16 gMonShinyPalette_Venonat[] = INCBIN_U16("graphics/pokemon/venonat/back.gbapal");
	 const u8 gMonIcon_Venonat[] = INCBIN_U8("graphics/pokemon/venonat/icon.4bpp");

	 const u32 gMonFrontPic_Venomoth[] = INCBIN_U32("graphics/pokemon/venomoth/front.4bpp.smol");
	 const u32 gMonBackPic_Venomoth[] = INCBIN_U32("graphics/pokemon/venomoth/back.4bpp.smol");
	 const u16 gMonPalette_Venomoth[] = INCBIN_U16("graphics/pokemon/venomoth/front.gbapal");
	 const u16 gMonShinyPalette_Venomoth[] = INCBIN_U16("graphics/pokemon/venomoth/back.gbapal");
	 const u8 gMonIcon_Venomoth[] = INCBIN_U8("graphics/pokemon/venomoth/icon.4bpp");

	 const u32 gMonFrontPic_Venomena[] = INCBIN_U32("graphics/pokemon/venomena/front.4bpp.smol");
	 const u32 gMonBackPic_Venomena[] = INCBIN_U32("graphics/pokemon/venomena/back.4bpp.smol");
	 const u16 gMonPalette_Venomena[] = INCBIN_U16("graphics/pokemon/venomena/front.gbapal");
	 const u16 gMonShinyPalette_Venomena[] = INCBIN_U16("graphics/pokemon/venomena/back.gbapal");
	 const u8 gMonIcon_Venomena[] = INCBIN_U8("graphics/pokemon/venomena/icon.4bpp");

	 const u32 gMonFrontPic_Venomenon[] = INCBIN_U32("graphics/pokemon/venomenon/front.4bpp.smol");
	 const u32 gMonBackPic_Venomenon[] = INCBIN_U32("graphics/pokemon/venomenon/back.4bpp.smol");
	 const u16 gMonPalette_Venomenon[] = INCBIN_U16("graphics/pokemon/venomenon/front.gbapal");
	 const u16 gMonShinyPalette_Venomenon[] = INCBIN_U16("graphics/pokemon/venomenon/back.gbapal");
	 const u8 gMonIcon_Venomenon[] = INCBIN_U8("graphics/pokemon/venomenon/icon.4bpp");

#endif //P_FAMILY_VENONAT

#if P_FAMILY_DIGLETT
	 const u32 gMonFrontPic_Diglett[] = INCBIN_U32("graphics/pokemon/diglett/front.4bpp.smol");
	 const u32 gMonBackPic_Diglett[] = INCBIN_U32("graphics/pokemon/diglett/back.4bpp.smol");
	 const u16 gMonPalette_Diglett[] = INCBIN_U16("graphics/pokemon/diglett/front.gbapal");
	 const u16 gMonShinyPalette_Diglett[] = INCBIN_U16("graphics/pokemon/diglett/back.gbapal");
	 const u8 gMonIcon_Diglett[] = INCBIN_U8("graphics/pokemon/diglett/icon.4bpp");

	 const u32 gMonFrontPic_Dugtrio[] = INCBIN_U32("graphics/pokemon/dugtrio/front.4bpp.smol");
	 const u32 gMonBackPic_Dugtrio[] = INCBIN_U32("graphics/pokemon/dugtrio/back.4bpp.smol");
	 const u16 gMonPalette_Dugtrio[] = INCBIN_U16("graphics/pokemon/dugtrio/front.gbapal");
	 const u16 gMonShinyPalette_Dugtrio[] = INCBIN_U16("graphics/pokemon/dugtrio/back.gbapal");
	 const u8 gMonIcon_Dugtrio[] = INCBIN_U8("graphics/pokemon/dugtrio/icon.4bpp");

	 const u32 gMonFrontPic_Dugrouple[] = INCBIN_U32("graphics/pokemon/dugrouple/front.4bpp.smol");
	 const u32 gMonBackPic_Dugrouple[] = INCBIN_U32("graphics/pokemon/dugrouple/back.4bpp.smol");
	 const u16 gMonPalette_Dugrouple[] = INCBIN_U16("graphics/pokemon/dugrouple/front.gbapal");
	 const u16 gMonShinyPalette_Dugrouple[] = INCBIN_U16("graphics/pokemon/dugrouple/back.gbapal");
	 const u8 gMonIcon_Dugrouple[] = INCBIN_U8("graphics/pokemon/dugrouple/icon.4bpp");

	 const u32 gMonFrontPic_Unearthlet[] = INCBIN_U32("graphics/pokemon/unearthlet/front.4bpp.smol");
	 const u32 gMonBackPic_Unearthlet[] = INCBIN_U32("graphics/pokemon/unearthlet/back.4bpp.smol");
	 const u16 gMonPalette_Unearthlet[] = INCBIN_U16("graphics/pokemon/unearthlet/front.gbapal");
	 const u16 gMonShinyPalette_Unearthlet[] = INCBIN_U16("graphics/pokemon/unearthlet/back.gbapal");
	 const u8 gMonIcon_Unearthlet[] = INCBIN_U8("graphics/pokemon/unearthlet/icon.4bpp");

	 const u32 gMonFrontPic_Diglenoid[] = INCBIN_U32("graphics/pokemon/diglenoid/front.4bpp.smol");
	 const u32 gMonBackPic_Diglenoid[] = INCBIN_U32("graphics/pokemon/diglenoid/back.4bpp.smol");
	 const u16 gMonPalette_Diglenoid[] = INCBIN_U16("graphics/pokemon/diglenoid/front.gbapal");
	 const u16 gMonShinyPalette_Diglenoid[] = INCBIN_U16("graphics/pokemon/diglenoid/back.gbapal");
	 const u8 gMonIcon_Diglenoid[] = INCBIN_U8("graphics/pokemon/diglenoid/icon.4bpp");

#endif //P_FAMILY_DIGLETT

#if P_FAMILY_MEOWTH
	 const u32 gMonFrontPic_Meowth[] = INCBIN_U32("graphics/pokemon/meowth/front.4bpp.smol");
	 const u32 gMonBackPic_Meowth[] = INCBIN_U32("graphics/pokemon/meowth/back.4bpp.smol");
	 const u16 gMonPalette_Meowth[] = INCBIN_U16("graphics/pokemon/meowth/front.gbapal");
	 const u16 gMonShinyPalette_Meowth[] = INCBIN_U16("graphics/pokemon/meowth/back.gbapal");
	 const u8 gMonIcon_Meowth[] = INCBIN_U8("graphics/pokemon/meowth/icon.4bpp");

	 const u32 gMonFrontPic_Persian[] = INCBIN_U32("graphics/pokemon/persian/front.4bpp.smol");
	 const u32 gMonBackPic_Persian[] = INCBIN_U32("graphics/pokemon/persian/back.4bpp.smol");
	 const u16 gMonPalette_Persian[] = INCBIN_U16("graphics/pokemon/persian/front.gbapal");
	 const u16 gMonShinyPalette_Persian[] = INCBIN_U16("graphics/pokemon/persian/back.gbapal");
	 const u8 gMonIcon_Persian[] = INCBIN_U8("graphics/pokemon/persian/icon.4bpp");

	 const u32 gMonFrontPic_Felankh[] = INCBIN_U32("graphics/pokemon/felankh/front.4bpp.smol");
	 const u32 gMonBackPic_Felankh[] = INCBIN_U32("graphics/pokemon/felankh/back.4bpp.smol");
	 const u16 gMonPalette_Felankh[] = INCBIN_U16("graphics/pokemon/felankh/front.gbapal");
	 const u16 gMonShinyPalette_Felankh[] = INCBIN_U16("graphics/pokemon/felankh/back.gbapal");
	 const u8 gMonIcon_Felankh[] = INCBIN_U8("graphics/pokemon/felankh/icon.4bpp");

	 const u32 gMonFrontPic_Patraphinx[] = INCBIN_U32("graphics/pokemon/patraphinx/front.4bpp.smol");
	 const u32 gMonBackPic_Patraphinx[] = INCBIN_U32("graphics/pokemon/patraphinx/back.4bpp.smol");
	 const u16 gMonPalette_Patraphinx[] = INCBIN_U16("graphics/pokemon/patraphinx/front.gbapal");
	 const u16 gMonShinyPalette_Patraphinx[] = INCBIN_U16("graphics/pokemon/patraphinx/back.gbapal");
	 const u8 gMonIcon_Patraphinx[] = INCBIN_U8("graphics/pokemon/patraphinx/icon.4bpp");

#endif //P_FAMILY_MEOWTH

#if P_FAMILY_PSYDUCK
	 const u32 gMonFrontPic_Psyduck[] = INCBIN_U32("graphics/pokemon/psyduck/front.4bpp.smol");
	 const u32 gMonBackPic_Psyduck[] = INCBIN_U32("graphics/pokemon/psyduck/back.4bpp.smol");
	 const u16 gMonPalette_Psyduck[] = INCBIN_U16("graphics/pokemon/psyduck/front.gbapal");
	 const u16 gMonShinyPalette_Psyduck[] = INCBIN_U16("graphics/pokemon/psyduck/back.gbapal");
	 const u8 gMonIcon_Psyduck[] = INCBIN_U8("graphics/pokemon/psyduck/icon.4bpp");

	 const u32 gMonFrontPic_Golduck[] = INCBIN_U32("graphics/pokemon/golduck/front.4bpp.smol");
	 const u32 gMonBackPic_Golduck[] = INCBIN_U32("graphics/pokemon/golduck/back.4bpp.smol");
	 const u16 gMonPalette_Golduck[] = INCBIN_U16("graphics/pokemon/golduck/front.gbapal");
	 const u16 gMonShinyPalette_Golduck[] = INCBIN_U16("graphics/pokemon/golduck/back.gbapal");
	 const u8 gMonIcon_Golduck[] = INCBIN_U8("graphics/pokemon/golduck/icon.4bpp");

	 const u32 gMonFrontPic_Gilduck[] = INCBIN_U32("graphics/pokemon/gilduck/front.4bpp.smol");
	 const u32 gMonBackPic_Gilduck[] = INCBIN_U32("graphics/pokemon/gilduck/back.4bpp.smol");
	 const u16 gMonPalette_Gilduck[] = INCBIN_U16("graphics/pokemon/gilduck/front.gbapal");
	 const u16 gMonShinyPalette_Gilduck[] = INCBIN_U16("graphics/pokemon/gilduck/back.gbapal");
	 const u8 gMonIcon_Gilduck[] = INCBIN_U8("graphics/pokemon/gilduck/icon.4bpp");

	 const u32 gMonFrontPic_Platinupus[] = INCBIN_U32("graphics/pokemon/platinupus/front.4bpp.smol");
	 const u32 gMonBackPic_Platinupus[] = INCBIN_U32("graphics/pokemon/platinupus/back.4bpp.smol");
	 const u16 gMonPalette_Platinupus[] = INCBIN_U16("graphics/pokemon/platinupus/front.gbapal");
	 const u16 gMonShinyPalette_Platinupus[] = INCBIN_U16("graphics/pokemon/platinupus/back.gbapal");
	 const u8 gMonIcon_Platinupus[] = INCBIN_U8("graphics/pokemon/platinupus/icon.4bpp");

#endif //P_FAMILY_PSYDUCK

#if P_FAMILY_MANKEY
	 const u32 gMonFrontPic_Mankey[] = INCBIN_U32("graphics/pokemon/mankey/front.4bpp.smol");
	 const u32 gMonBackPic_Mankey[] = INCBIN_U32("graphics/pokemon/mankey/back.4bpp.smol");
	 const u16 gMonPalette_Mankey[] = INCBIN_U16("graphics/pokemon/mankey/front.gbapal");
	 const u16 gMonShinyPalette_Mankey[] = INCBIN_U16("graphics/pokemon/mankey/back.gbapal");
	 const u8 gMonIcon_Mankey[] = INCBIN_U8("graphics/pokemon/mankey/icon.4bpp");

	 const u32 gMonFrontPic_Primeape[] = INCBIN_U32("graphics/pokemon/primeape/front.4bpp.smol");
	 const u32 gMonBackPic_Primeape[] = INCBIN_U32("graphics/pokemon/primeape/back.4bpp.smol");
	 const u16 gMonPalette_Primeape[] = INCBIN_U16("graphics/pokemon/primeape/front.gbapal");
	 const u16 gMonShinyPalette_Primeape[] = INCBIN_U16("graphics/pokemon/primeape/back.gbapal");
	 const u8 gMonIcon_Primeape[] = INCBIN_U8("graphics/pokemon/primeape/icon.4bpp");

	 const u32 gMonFrontPic_Gorillash[] = INCBIN_U32("graphics/pokemon/gorillash/front.4bpp.smol");
	 const u32 gMonBackPic_Gorillash[] = INCBIN_U32("graphics/pokemon/gorillash/back.4bpp.smol");
	 const u16 gMonPalette_Gorillash[] = INCBIN_U16("graphics/pokemon/gorillash/front.gbapal");
	 const u16 gMonShinyPalette_Gorillash[] = INCBIN_U16("graphics/pokemon/gorillash/back.gbapal");
	 const u8 gMonIcon_Gorillash[] = INCBIN_U8("graphics/pokemon/gorillash/icon.4bpp");

	 const u32 gMonFrontPic_Bonumbell[] = INCBIN_U32("graphics/pokemon/bonumbell/front.4bpp.smol");
	 const u32 gMonBackPic_Bonumbell[] = INCBIN_U32("graphics/pokemon/bonumbell/back.4bpp.smol");
	 const u16 gMonPalette_Bonumbell[] = INCBIN_U16("graphics/pokemon/bonumbell/front.gbapal");
	 const u16 gMonShinyPalette_Bonumbell[] = INCBIN_U16("graphics/pokemon/bonumbell/back.gbapal");
	 const u8 gMonIcon_Bonumbell[] = INCBIN_U8("graphics/pokemon/bonumbell/icon.4bpp");

#endif //P_FAMILY_MANKEY

#if P_FAMILY_GROWLITHE
	 const u32 gMonFrontPic_Growlithe[] = INCBIN_U32("graphics/pokemon/growlithe/front.4bpp.smol");
	 const u32 gMonBackPic_Growlithe[] = INCBIN_U32("graphics/pokemon/growlithe/back.4bpp.smol");
	 const u16 gMonPalette_Growlithe[] = INCBIN_U16("graphics/pokemon/growlithe/front.gbapal");
	 const u16 gMonShinyPalette_Growlithe[] = INCBIN_U16("graphics/pokemon/growlithe/back.gbapal");
	 const u8 gMonIcon_Growlithe[] = INCBIN_U8("graphics/pokemon/growlithe/icon.4bpp");

	 const u32 gMonFrontPic_Arcanine[] = INCBIN_U32("graphics/pokemon/arcanine/front.4bpp.smol");
	 const u32 gMonBackPic_Arcanine[] = INCBIN_U32("graphics/pokemon/arcanine/back.4bpp.smol");
	 const u16 gMonPalette_Arcanine[] = INCBIN_U16("graphics/pokemon/arcanine/front.gbapal");
	 const u16 gMonShinyPalette_Arcanine[] = INCBIN_U16("graphics/pokemon/arcanine/back.gbapal");
	 const u8 gMonIcon_Arcanine[] = INCBIN_U8("graphics/pokemon/arcanine/icon.4bpp");

	 const u32 gMonFrontPic_Singesha[] = INCBIN_U32("graphics/pokemon/singesha/front.4bpp.smol");
	 const u32 gMonBackPic_Singesha[] = INCBIN_U32("graphics/pokemon/singesha/back.4bpp.smol");
	 const u16 gMonPalette_Singesha[] = INCBIN_U16("graphics/pokemon/singesha/front.gbapal");
	 const u16 gMonShinyPalette_Singesha[] = INCBIN_U16("graphics/pokemon/singesha/back.gbapal");
	 const u8 gMonIcon_Singesha[] = INCBIN_U8("graphics/pokemon/singesha/icon.4bpp");

	 const u32 gMonFrontPic_Guardiance[] = INCBIN_U32("graphics/pokemon/guardiance/front.4bpp.smol");
	 const u32 gMonBackPic_Guardiance[] = INCBIN_U32("graphics/pokemon/guardiance/back.4bpp.smol");
	 const u16 gMonPalette_Guardiance[] = INCBIN_U16("graphics/pokemon/guardiance/front.gbapal");
	 const u16 gMonShinyPalette_Guardiance[] = INCBIN_U16("graphics/pokemon/guardiance/back.gbapal");
	 const u8 gMonIcon_Guardiance[] = INCBIN_U8("graphics/pokemon/guardiance/icon.4bpp");

#endif //P_FAMILY_GROWLITHE

#if P_FAMILY_POLIWAG
	 const u32 gMonFrontPic_Poliwag[] = INCBIN_U32("graphics/pokemon/poliwag/front.4bpp.smol");
	 const u32 gMonBackPic_Poliwag[] = INCBIN_U32("graphics/pokemon/poliwag/back.4bpp.smol");
	 const u16 gMonPalette_Poliwag[] = INCBIN_U16("graphics/pokemon/poliwag/front.gbapal");
	 const u16 gMonShinyPalette_Poliwag[] = INCBIN_U16("graphics/pokemon/poliwag/back.gbapal");
	 const u8 gMonIcon_Poliwag[] = INCBIN_U8("graphics/pokemon/poliwag/icon.4bpp");

	 const u32 gMonFrontPic_Poliwhirl[] = INCBIN_U32("graphics/pokemon/poliwhirl/front.4bpp.smol");
	 const u32 gMonBackPic_Poliwhirl[] = INCBIN_U32("graphics/pokemon/poliwhirl/back.4bpp.smol");
	 const u16 gMonPalette_Poliwhirl[] = INCBIN_U16("graphics/pokemon/poliwhirl/front.gbapal");
	 const u16 gMonShinyPalette_Poliwhirl[] = INCBIN_U16("graphics/pokemon/poliwhirl/back.gbapal");
	 const u8 gMonIcon_Poliwhirl[] = INCBIN_U8("graphics/pokemon/poliwhirl/icon.4bpp");

	 const u32 gMonFrontPic_Poliwrath[] = INCBIN_U32("graphics/pokemon/poliwrath/front.4bpp.smol");
	 const u32 gMonBackPic_Poliwrath[] = INCBIN_U32("graphics/pokemon/poliwrath/back.4bpp.smol");
	 const u16 gMonPalette_Poliwrath[] = INCBIN_U16("graphics/pokemon/poliwrath/front.gbapal");
	 const u16 gMonShinyPalette_Poliwrath[] = INCBIN_U16("graphics/pokemon/poliwrath/back.gbapal");
	 const u8 gMonIcon_Poliwrath[] = INCBIN_U8("graphics/pokemon/poliwrath/icon.4bpp");

	 const u32 gMonFrontPic_Politoes[] = INCBIN_U32("graphics/pokemon/politoes/front.4bpp.smol");
	 const u32 gMonBackPic_Politoes[] = INCBIN_U32("graphics/pokemon/politoes/back.4bpp.smol");
	 const u16 gMonPalette_Politoes[] = INCBIN_U16("graphics/pokemon/politoes/front.gbapal");
	 const u16 gMonShinyPalette_Politoes[] = INCBIN_U16("graphics/pokemon/politoes/back.gbapal");
	 const u8 gMonIcon_Politoes[] = INCBIN_U8("graphics/pokemon/politoes/icon.4bpp");

	 const u32 gMonFrontPic_Poliwise[] = INCBIN_U32("graphics/pokemon/poliwise/front.4bpp.smol");
	 const u32 gMonBackPic_Poliwise[] = INCBIN_U32("graphics/pokemon/poliwise/back.4bpp.smol");
	 const u16 gMonPalette_Poliwise[] = INCBIN_U16("graphics/pokemon/poliwise/front.gbapal");
	 const u16 gMonShinyPalette_Poliwise[] = INCBIN_U16("graphics/pokemon/poliwise/back.gbapal");
	 const u8 gMonIcon_Poliwise[] = INCBIN_U8("graphics/pokemon/poliwise/icon.4bpp");

	 const u32 gMonFrontPic_Poliath[] = INCBIN_U32("graphics/pokemon/poliath/front.4bpp.smol");
	 const u32 gMonBackPic_Poliath[] = INCBIN_U32("graphics/pokemon/poliath/back.4bpp.smol");
	 const u16 gMonPalette_Poliath[] = INCBIN_U16("graphics/pokemon/poliath/front.gbapal");
	 const u16 gMonShinyPalette_Poliath[] = INCBIN_U16("graphics/pokemon/poliath/back.gbapal");
	 const u8 gMonIcon_Poliath[] = INCBIN_U8("graphics/pokemon/poliath/icon.4bpp");

#endif //P_FAMILY_POLIWAG

#if P_FAMILY_ABRA
	 const u32 gMonFrontPic_Abra[] = INCBIN_U32("graphics/pokemon/abra/front.4bpp.smol");
	 const u32 gMonBackPic_Abra[] = INCBIN_U32("graphics/pokemon/abra/back.4bpp.smol");
	 const u16 gMonPalette_Abra[] = INCBIN_U16("graphics/pokemon/abra/front.gbapal");
	 const u16 gMonShinyPalette_Abra[] = INCBIN_U16("graphics/pokemon/abra/back.gbapal");
	 const u8 gMonIcon_Abra[] = INCBIN_U8("graphics/pokemon/abra/icon.4bpp");

	 const u32 gMonFrontPic_Kadabra[] = INCBIN_U32("graphics/pokemon/kadabra/front.4bpp.smol");
	 const u32 gMonBackPic_Kadabra[] = INCBIN_U32("graphics/pokemon/kadabra/back.4bpp.smol");
	 const u16 gMonPalette_Kadabra[] = INCBIN_U16("graphics/pokemon/kadabra/front.gbapal");
	 const u16 gMonShinyPalette_Kadabra[] = INCBIN_U16("graphics/pokemon/kadabra/back.gbapal");
	 const u8 gMonIcon_Kadabra[] = INCBIN_U8("graphics/pokemon/kadabra/icon.4bpp");

	 const u32 gMonFrontPic_Alakazam[] = INCBIN_U32("graphics/pokemon/alakazam/front.4bpp.smol");
	 const u32 gMonBackPic_Alakazam[] = INCBIN_U32("graphics/pokemon/alakazam/back.4bpp.smol");
	 const u16 gMonPalette_Alakazam[] = INCBIN_U16("graphics/pokemon/alakazam/front.gbapal");
	 const u16 gMonShinyPalette_Alakazam[] = INCBIN_U16("graphics/pokemon/alakazam/back.gbapal");
	 const u8 gMonIcon_Alakazam[] = INCBIN_U8("graphics/pokemon/alakazam/icon.4bpp");

	 const u32 gMonFrontPic_Simsalabim[] = INCBIN_U32("graphics/pokemon/simsalabim/front.4bpp.smol");
	 const u32 gMonBackPic_Simsalabim[] = INCBIN_U32("graphics/pokemon/simsalabim/back.4bpp.smol");
	 const u16 gMonPalette_Simsalabim[] = INCBIN_U16("graphics/pokemon/simsalabim/front.gbapal");
	 const u16 gMonShinyPalette_Simsalabim[] = INCBIN_U16("graphics/pokemon/simsalabim/back.gbapal");
	 const u8 gMonIcon_Simsalabim[] = INCBIN_U8("graphics/pokemon/simsalabim/icon.4bpp");

	 const u32 gMonFrontPic_Vohoodu[] = INCBIN_U32("graphics/pokemon/vohoodu/front.4bpp.smol");
	 const u32 gMonBackPic_Vohoodu[] = INCBIN_U32("graphics/pokemon/vohoodu/back.4bpp.smol");
	 const u16 gMonPalette_Vohoodu[] = INCBIN_U16("graphics/pokemon/vohoodu/front.gbapal");
	 const u16 gMonShinyPalette_Vohoodu[] = INCBIN_U16("graphics/pokemon/vohoodu/back.gbapal");
	 const u8 gMonIcon_Vohoodu[] = INCBIN_U8("graphics/pokemon/vohoodu/icon.4bpp");

	 const u32 gMonFrontPic_Tzarkartz[] = INCBIN_U32("graphics/pokemon/tzarkartz/front.4bpp.smol");
	 const u32 gMonBackPic_Tzarkartz[] = INCBIN_U32("graphics/pokemon/tzarkartz/back.4bpp.smol");
	 const u16 gMonPalette_Tzarkartz[] = INCBIN_U16("graphics/pokemon/tzarkartz/front.gbapal");
	 const u16 gMonShinyPalette_Tzarkartz[] = INCBIN_U16("graphics/pokemon/tzarkartz/back.gbapal");
	 const u8 gMonIcon_Tzarkartz[] = INCBIN_U8("graphics/pokemon/tzarkartz/icon.4bpp");

#endif //P_FAMILY_ABRA

#if P_FAMILY_MACHOP
	 const u32 gMonFrontPic_Machop[] = INCBIN_U32("graphics/pokemon/machop/front.4bpp.smol");
	 const u32 gMonBackPic_Machop[] = INCBIN_U32("graphics/pokemon/machop/back.4bpp.smol");
	 const u16 gMonPalette_Machop[] = INCBIN_U16("graphics/pokemon/machop/front.gbapal");
	 const u16 gMonShinyPalette_Machop[] = INCBIN_U16("graphics/pokemon/machop/back.gbapal");
	 const u8 gMonIcon_Machop[] = INCBIN_U8("graphics/pokemon/machop/icon.4bpp");

	 const u32 gMonFrontPic_Machoke[] = INCBIN_U32("graphics/pokemon/machoke/front.4bpp.smol");
	 const u32 gMonBackPic_Machoke[] = INCBIN_U32("graphics/pokemon/machoke/back.4bpp.smol");
	 const u16 gMonPalette_Machoke[] = INCBIN_U16("graphics/pokemon/machoke/front.gbapal");
	 const u16 gMonShinyPalette_Machoke[] = INCBIN_U16("graphics/pokemon/machoke/back.gbapal");
	 const u8 gMonIcon_Machoke[] = INCBIN_U8("graphics/pokemon/machoke/icon.4bpp");

	 const u32 gMonFrontPic_Machamp[] = INCBIN_U32("graphics/pokemon/machamp/front.4bpp.smol");
	 const u32 gMonBackPic_Machamp[] = INCBIN_U32("graphics/pokemon/machamp/back.4bpp.smol");
	 const u16 gMonPalette_Machamp[] = INCBIN_U16("graphics/pokemon/machamp/front.gbapal");
	 const u16 gMonShinyPalette_Machamp[] = INCBIN_U16("graphics/pokemon/machamp/back.gbapal");
	 const u8 gMonIcon_Machamp[] = INCBIN_U8("graphics/pokemon/machamp/icon.4bpp");

	 const u32 gMonFrontPic_Machulk[] = INCBIN_U32("graphics/pokemon/machulk/front.4bpp.smol");
	 const u32 gMonBackPic_Machulk[] = INCBIN_U32("graphics/pokemon/machulk/back.4bpp.smol");
	 const u16 gMonPalette_Machulk[] = INCBIN_U16("graphics/pokemon/machulk/front.gbapal");
	 const u16 gMonShinyPalette_Machulk[] = INCBIN_U16("graphics/pokemon/machulk/back.gbapal");
	 const u8 gMonIcon_Machulk[] = INCBIN_U8("graphics/pokemon/machulk/icon.4bpp");

	 const u32 gMonFrontPic_Abomachulk[] = INCBIN_U32("graphics/pokemon/abomachulk/front.4bpp.smol");
	 const u32 gMonBackPic_Abomachulk[] = INCBIN_U32("graphics/pokemon/abomachulk/back.4bpp.smol");
	 const u16 gMonPalette_Abomachulk[] = INCBIN_U16("graphics/pokemon/abomachulk/front.gbapal");
	 const u16 gMonShinyPalette_Abomachulk[] = INCBIN_U16("graphics/pokemon/abomachulk/back.gbapal");
	 const u8 gMonIcon_Abomachulk[] = INCBIN_U8("graphics/pokemon/abomachulk/icon.4bpp");

	 const u32 gMonFrontPic_Machitan[] = INCBIN_U32("graphics/pokemon/machitan/front.4bpp.smol");
	 const u32 gMonBackPic_Machitan[] = INCBIN_U32("graphics/pokemon/machitan/back.4bpp.smol");
	 const u16 gMonPalette_Machitan[] = INCBIN_U16("graphics/pokemon/machitan/front.gbapal");
	 const u16 gMonShinyPalette_Machitan[] = INCBIN_U16("graphics/pokemon/machitan/back.gbapal");
	 const u8 gMonIcon_Machitan[] = INCBIN_U8("graphics/pokemon/machitan/icon.4bpp");

#endif //P_FAMILY_MACHOP

#if P_FAMILY_BELLSPROUT
	 const u32 gMonFrontPic_Bellsprout[] = INCBIN_U32("graphics/pokemon/bellsprout/front.4bpp.smol");
	 const u32 gMonBackPic_Bellsprout[] = INCBIN_U32("graphics/pokemon/bellsprout/back.4bpp.smol");
	 const u16 gMonPalette_Bellsprout[] = INCBIN_U16("graphics/pokemon/bellsprout/front.gbapal");
	 const u16 gMonShinyPalette_Bellsprout[] = INCBIN_U16("graphics/pokemon/bellsprout/back.gbapal");
	 const u8 gMonIcon_Bellsprout[] = INCBIN_U8("graphics/pokemon/bellsprout/icon.4bpp");

	 const u32 gMonFrontPic_Weepinbell[] = INCBIN_U32("graphics/pokemon/weepinbell/front.4bpp.smol");
	 const u32 gMonBackPic_Weepinbell[] = INCBIN_U32("graphics/pokemon/weepinbell/back.4bpp.smol");
	 const u16 gMonPalette_Weepinbell[] = INCBIN_U16("graphics/pokemon/weepinbell/front.gbapal");
	 const u16 gMonShinyPalette_Weepinbell[] = INCBIN_U16("graphics/pokemon/weepinbell/back.gbapal");
	 const u8 gMonIcon_Weepinbell[] = INCBIN_U8("graphics/pokemon/weepinbell/icon.4bpp");

	 const u32 gMonFrontPic_Victreebel[] = INCBIN_U32("graphics/pokemon/victreebel/front.4bpp.smol");
	 const u32 gMonBackPic_Victreebel[] = INCBIN_U32("graphics/pokemon/victreebel/back.4bpp.smol");
	 const u16 gMonPalette_Victreebel[] = INCBIN_U16("graphics/pokemon/victreebel/front.gbapal");
	 const u16 gMonShinyPalette_Victreebel[] = INCBIN_U16("graphics/pokemon/victreebel/back.gbapal");
	 const u8 gMonIcon_Victreebel[] = INCBIN_U8("graphics/pokemon/victreebel/icon.4bpp");

	 const u32 gMonFrontPic_Mucktribel[] = INCBIN_U32("graphics/pokemon/mucktribel/front.4bpp.smol");
	 const u32 gMonBackPic_Mucktribel[] = INCBIN_U32("graphics/pokemon/mucktribel/back.4bpp.smol");
	 const u16 gMonPalette_Mucktribel[] = INCBIN_U16("graphics/pokemon/mucktribel/front.gbapal");
	 const u16 gMonShinyPalette_Mucktribel[] = INCBIN_U16("graphics/pokemon/mucktribel/back.gbapal");
	 const u8 gMonIcon_Mucktribel[] = INCBIN_U8("graphics/pokemon/mucktribel/icon.4bpp");

	 const u32 gMonFrontPic_Carnabell[] = INCBIN_U32("graphics/pokemon/carnabell/front.4bpp.smol");
	 const u32 gMonBackPic_Carnabell[] = INCBIN_U32("graphics/pokemon/carnabell/back.4bpp.smol");
	 const u16 gMonPalette_Carnabell[] = INCBIN_U16("graphics/pokemon/carnabell/front.gbapal");
	 const u16 gMonShinyPalette_Carnabell[] = INCBIN_U16("graphics/pokemon/carnabell/back.gbapal");
	 const u8 gMonIcon_Carnabell[] = INCBIN_U8("graphics/pokemon/carnabell/icon.4bpp");

	 const u32 gMonFrontPic_Devlora[] = INCBIN_U32("graphics/pokemon/devlora/front.4bpp.smol");
	 const u32 gMonBackPic_Devlora[] = INCBIN_U32("graphics/pokemon/devlora/back.4bpp.smol");
	 const u16 gMonPalette_Devlora[] = INCBIN_U16("graphics/pokemon/devlora/front.gbapal");
	 const u16 gMonShinyPalette_Devlora[] = INCBIN_U16("graphics/pokemon/devlora/back.gbapal");
	 const u8 gMonIcon_Devlora[] = INCBIN_U8("graphics/pokemon/devlora/icon.4bpp");

#endif //P_FAMILY_BELLSPROUT

#if P_FAMILY_TENTACOOL
	 const u32 gMonFrontPic_Tentacool[] = INCBIN_U32("graphics/pokemon/tentacool/front.4bpp.smol");
	 const u32 gMonBackPic_Tentacool[] = INCBIN_U32("graphics/pokemon/tentacool/back.4bpp.smol");
	 const u16 gMonPalette_Tentacool[] = INCBIN_U16("graphics/pokemon/tentacool/front.gbapal");
	 const u16 gMonShinyPalette_Tentacool[] = INCBIN_U16("graphics/pokemon/tentacool/back.gbapal");
	 const u8 gMonIcon_Tentacool[] = INCBIN_U8("graphics/pokemon/tentacool/icon.4bpp");

	 const u32 gMonFrontPic_Tentacruel[] = INCBIN_U32("graphics/pokemon/tentacruel/front.4bpp.smol");
	 const u32 gMonBackPic_Tentacruel[] = INCBIN_U32("graphics/pokemon/tentacruel/back.4bpp.smol");
	 const u16 gMonPalette_Tentacruel[] = INCBIN_U16("graphics/pokemon/tentacruel/front.gbapal");
	 const u16 gMonShinyPalette_Tentacruel[] = INCBIN_U16("graphics/pokemon/tentacruel/back.gbapal");
	 const u8 gMonIcon_Tentacruel[] = INCBIN_U8("graphics/pokemon/tentacruel/icon.4bpp");

	 const u32 gMonFrontPic_Tentacate[] = INCBIN_U32("graphics/pokemon/tentacate/front.4bpp.smol");
	 const u32 gMonBackPic_Tentacate[] = INCBIN_U32("graphics/pokemon/tentacate/back.4bpp.smol");
	 const u16 gMonPalette_Tentacate[] = INCBIN_U16("graphics/pokemon/tentacate/front.gbapal");
	 const u16 gMonShinyPalette_Tentacate[] = INCBIN_U16("graphics/pokemon/tentacate/back.gbapal");
	 const u8 gMonIcon_Tentacate[] = INCBIN_U8("graphics/pokemon/tentacate/icon.4bpp");

	 const u32 gMonFrontPic_Tentaboma[] = INCBIN_U32("graphics/pokemon/tentaboma/front.4bpp.smol");
	 const u32 gMonBackPic_Tentaboma[] = INCBIN_U32("graphics/pokemon/tentaboma/back.4bpp.smol");
	 const u16 gMonPalette_Tentaboma[] = INCBIN_U16("graphics/pokemon/tentaboma/front.gbapal");
	 const u16 gMonShinyPalette_Tentaboma[] = INCBIN_U16("graphics/pokemon/tentaboma/back.gbapal");
	 const u8 gMonIcon_Tentaboma[] = INCBIN_U8("graphics/pokemon/tentaboma/icon.4bpp");

#endif //P_FAMILY_TENTACOOL

#if P_FAMILY_GEODUDE
	 const u32 gMonFrontPic_Geodude[] = INCBIN_U32("graphics/pokemon/geodude/front.4bpp.smol");
	 const u32 gMonBackPic_Geodude[] = INCBIN_U32("graphics/pokemon/geodude/back.4bpp.smol");
	 const u16 gMonPalette_Geodude[] = INCBIN_U16("graphics/pokemon/geodude/front.gbapal");
	 const u16 gMonShinyPalette_Geodude[] = INCBIN_U16("graphics/pokemon/geodude/back.gbapal");
	 const u8 gMonIcon_Geodude[] = INCBIN_U8("graphics/pokemon/geodude/icon.4bpp");

	 const u32 gMonFrontPic_Graveler[] = INCBIN_U32("graphics/pokemon/graveler/front.4bpp.smol");
	 const u32 gMonBackPic_Graveler[] = INCBIN_U32("graphics/pokemon/graveler/back.4bpp.smol");
	 const u16 gMonPalette_Graveler[] = INCBIN_U16("graphics/pokemon/graveler/front.gbapal");
	 const u16 gMonShinyPalette_Graveler[] = INCBIN_U16("graphics/pokemon/graveler/back.gbapal");
	 const u8 gMonIcon_Graveler[] = INCBIN_U8("graphics/pokemon/graveler/icon.4bpp");

	 const u32 gMonFrontPic_Golem[] = INCBIN_U32("graphics/pokemon/golem/front.4bpp.smol");
	 const u32 gMonBackPic_Golem[] = INCBIN_U32("graphics/pokemon/golem/back.4bpp.smol");
	 const u16 gMonPalette_Golem[] = INCBIN_U16("graphics/pokemon/golem/front.gbapal");
	 const u16 gMonShinyPalette_Golem[] = INCBIN_U16("graphics/pokemon/golem/back.gbapal");
	 const u8 gMonIcon_Golem[] = INCBIN_U8("graphics/pokemon/golem/icon.4bpp");

	 const u32 gMonFrontPic_Slagolem[] = INCBIN_U32("graphics/pokemon/slagolem/front.4bpp.smol");
	 const u32 gMonBackPic_Slagolem[] = INCBIN_U32("graphics/pokemon/slagolem/back.4bpp.smol");
	 const u16 gMonPalette_Slagolem[] = INCBIN_U16("graphics/pokemon/slagolem/front.gbapal");
	 const u16 gMonShinyPalette_Slagolem[] = INCBIN_U16("graphics/pokemon/slagolem/back.gbapal");
	 const u8 gMonIcon_Slagolem[] = INCBIN_U8("graphics/pokemon/slagolem/icon.4bpp");

	 const u32 gMonFrontPic_Moltrem[] = INCBIN_U32("graphics/pokemon/moltrem/front.4bpp.smol");
	 const u32 gMonBackPic_Moltrem[] = INCBIN_U32("graphics/pokemon/moltrem/back.4bpp.smol");
	 const u16 gMonPalette_Moltrem[] = INCBIN_U16("graphics/pokemon/moltrem/front.gbapal");
	 const u16 gMonShinyPalette_Moltrem[] = INCBIN_U16("graphics/pokemon/moltrem/back.gbapal");
	 const u8 gMonIcon_Moltrem[] = INCBIN_U8("graphics/pokemon/moltrem/icon.4bpp");

	 const u32 gMonFrontPic_Volcanicol[] = INCBIN_U32("graphics/pokemon/volcanicol/front.4bpp.smol");
	 const u32 gMonBackPic_Volcanicol[] = INCBIN_U32("graphics/pokemon/volcanicol/back.4bpp.smol");
	 const u16 gMonPalette_Volcanicol[] = INCBIN_U16("graphics/pokemon/volcanicol/front.gbapal");
	 const u16 gMonShinyPalette_Volcanicol[] = INCBIN_U16("graphics/pokemon/volcanicol/back.gbapal");
	 const u8 gMonIcon_Volcanicol[] = INCBIN_U8("graphics/pokemon/volcanicol/icon.4bpp");

#endif //P_FAMILY_GEODUDE

#if P_FAMILY_PONYTA
	 const u32 gMonFrontPic_Ponyta[] = INCBIN_U32("graphics/pokemon/ponyta/front.4bpp.smol");
	 const u32 gMonBackPic_Ponyta[] = INCBIN_U32("graphics/pokemon/ponyta/back.4bpp.smol");
	 const u16 gMonPalette_Ponyta[] = INCBIN_U16("graphics/pokemon/ponyta/front.gbapal");
	 const u16 gMonShinyPalette_Ponyta[] = INCBIN_U16("graphics/pokemon/ponyta/back.gbapal");
	 const u8 gMonIcon_Ponyta[] = INCBIN_U8("graphics/pokemon/ponyta/icon.4bpp");

	 const u32 gMonFrontPic_Rapidash[] = INCBIN_U32("graphics/pokemon/rapidash/front.4bpp.smol");
	 const u32 gMonBackPic_Rapidash[] = INCBIN_U32("graphics/pokemon/rapidash/back.4bpp.smol");
	 const u16 gMonPalette_Rapidash[] = INCBIN_U16("graphics/pokemon/rapidash/front.gbapal");
	 const u16 gMonShinyPalette_Rapidash[] = INCBIN_U16("graphics/pokemon/rapidash/back.gbapal");
	 const u8 gMonIcon_Rapidash[] = INCBIN_U8("graphics/pokemon/rapidash/icon.4bpp");

	 const u32 gMonFrontPic_Combustang[] = INCBIN_U32("graphics/pokemon/combustang/front.4bpp.smol");
	 const u32 gMonBackPic_Combustang[] = INCBIN_U32("graphics/pokemon/combustang/back.4bpp.smol");
	 const u16 gMonPalette_Combustang[] = INCBIN_U16("graphics/pokemon/combustang/front.gbapal");
	 const u16 gMonShinyPalette_Combustang[] = INCBIN_U16("graphics/pokemon/combustang/back.gbapal");
	 const u8 gMonIcon_Combustang[] = INCBIN_U8("graphics/pokemon/combustang/icon.4bpp");

	 const u32 gMonFrontPic_Knightmare[] = INCBIN_U32("graphics/pokemon/knightmare/front.4bpp.smol");
	 const u32 gMonBackPic_Knightmare[] = INCBIN_U32("graphics/pokemon/knightmare/back.4bpp.smol");
	 const u16 gMonPalette_Knightmare[] = INCBIN_U16("graphics/pokemon/knightmare/front.gbapal");
	 const u16 gMonShinyPalette_Knightmare[] = INCBIN_U16("graphics/pokemon/knightmare/back.gbapal");
	 const u8 gMonIcon_Knightmare[] = INCBIN_U8("graphics/pokemon/knightmare/icon.4bpp");

#endif //P_FAMILY_PONYTA

#if P_FAMILY_SLOWPOKE
	 const u32 gMonFrontPic_Slowpoke[] = INCBIN_U32("graphics/pokemon/slowpoke/front.4bpp.smol");
	 const u32 gMonBackPic_Slowpoke[] = INCBIN_U32("graphics/pokemon/slowpoke/back.4bpp.smol");
	 const u16 gMonPalette_Slowpoke[] = INCBIN_U16("graphics/pokemon/slowpoke/front.gbapal");
	 const u16 gMonShinyPalette_Slowpoke[] = INCBIN_U16("graphics/pokemon/slowpoke/back.gbapal");
	 const u8 gMonIcon_Slowpoke[] = INCBIN_U8("graphics/pokemon/slowpoke/icon.4bpp");

	 const u32 gMonFrontPic_Slowbro[] = INCBIN_U32("graphics/pokemon/slowbro/front.4bpp.smol");
	 const u32 gMonBackPic_Slowbro[] = INCBIN_U32("graphics/pokemon/slowbro/back.4bpp.smol");
	 const u16 gMonPalette_Slowbro[] = INCBIN_U16("graphics/pokemon/slowbro/front.gbapal");
	 const u16 gMonShinyPalette_Slowbro[] = INCBIN_U16("graphics/pokemon/slowbro/back.gbapal");
	 const u8 gMonIcon_Slowbro[] = INCBIN_U8("graphics/pokemon/slowbro/icon.4bpp");

	 const u32 gMonFrontPic_Slowmate[] = INCBIN_U32("graphics/pokemon/slowmate/front.4bpp.smol");
	 const u32 gMonBackPic_Slowmate[] = INCBIN_U32("graphics/pokemon/slowmate/back.4bpp.smol");
	 const u16 gMonPalette_Slowmate[] = INCBIN_U16("graphics/pokemon/slowmate/front.gbapal");
	 const u16 gMonShinyPalette_Slowmate[] = INCBIN_U16("graphics/pokemon/slowmate/back.gbapal");
	 const u8 gMonIcon_Slowmate[] = INCBIN_U8("graphics/pokemon/slowmate/icon.4bpp");

	 const u32 gMonFrontPic_Slowchum[] = INCBIN_U32("graphics/pokemon/slowchum/front.4bpp.smol");
	 const u32 gMonBackPic_Slowchum[] = INCBIN_U32("graphics/pokemon/slowchum/back.4bpp.smol");
	 const u16 gMonPalette_Slowchum[] = INCBIN_U16("graphics/pokemon/slowchum/front.gbapal");
	 const u16 gMonShinyPalette_Slowchum[] = INCBIN_U16("graphics/pokemon/slowchum/back.gbapal");
	 const u8 gMonIcon_Slowchum[] = INCBIN_U8("graphics/pokemon/slowchum/icon.4bpp");

#endif //P_FAMILY_SLOWPOKE

#if P_FAMILY_MAGNEMITE
	 const u32 gMonFrontPic_Magnemite[] = INCBIN_U32("graphics/pokemon/magnemite/front.4bpp.smol");
	 const u32 gMonBackPic_Magnemite[] = INCBIN_U32("graphics/pokemon/magnemite/back.4bpp.smol");
	 const u16 gMonPalette_Magnemite[] = INCBIN_U16("graphics/pokemon/magnemite/front.gbapal");
	 const u16 gMonShinyPalette_Magnemite[] = INCBIN_U16("graphics/pokemon/magnemite/back.gbapal");
	 const u8 gMonIcon_Magnemite[] = INCBIN_U8("graphics/pokemon/magnemite/icon.4bpp");

	 const u32 gMonFrontPic_Magneton[] = INCBIN_U32("graphics/pokemon/magneton/front.4bpp.smol");
	 const u32 gMonBackPic_Magneton[] = INCBIN_U32("graphics/pokemon/magneton/back.4bpp.smol");
	 const u16 gMonPalette_Magneton[] = INCBIN_U16("graphics/pokemon/magneton/front.gbapal");
	 const u16 gMonShinyPalette_Magneton[] = INCBIN_U16("graphics/pokemon/magneton/back.gbapal");
	 const u8 gMonIcon_Magneton[] = INCBIN_U8("graphics/pokemon/magneton/icon.4bpp");

	 const u32 gMonFrontPic_Magnezone[] = INCBIN_U32("graphics/pokemon/magnezone/front.4bpp.smol");
	 const u32 gMonBackPic_Magnezone[] = INCBIN_U32("graphics/pokemon/magnezone/back.4bpp.smol");
	 const u16 gMonPalette_Magnezone[] = INCBIN_U16("graphics/pokemon/magnezone/front.gbapal");
	 const u16 gMonShinyPalette_Magnezone[] = INCBIN_U16("graphics/pokemon/magnezone/back.gbapal");
	 const u8 gMonIcon_Magnezone[] = INCBIN_U8("graphics/pokemon/magnezone/icon.4bpp");

	 const u32 gMonFrontPic_Magnemeld[] = INCBIN_U32("graphics/pokemon/magnemeld/front.4bpp.smol");
	 const u32 gMonBackPic_Magnemeld[] = INCBIN_U32("graphics/pokemon/magnemeld/back.4bpp.smol");
	 const u16 gMonPalette_Magnemeld[] = INCBIN_U16("graphics/pokemon/magnemeld/front.gbapal");
	 const u16 gMonShinyPalette_Magnemeld[] = INCBIN_U16("graphics/pokemon/magnemeld/back.gbapal");
	 const u8 gMonIcon_Magnemeld[] = INCBIN_U8("graphics/pokemon/magnemeld/icon.4bpp");

	 const u32 gMonFrontPic_Magnemastr[] = INCBIN_U32("graphics/pokemon/magnemastr/front.4bpp.smol");
	 const u32 gMonBackPic_Magnemastr[] = INCBIN_U32("graphics/pokemon/magnemastr/back.4bpp.smol");
	 const u16 gMonPalette_Magnemastr[] = INCBIN_U16("graphics/pokemon/magnemastr/front.gbapal");
	 const u16 gMonShinyPalette_Magnemastr[] = INCBIN_U16("graphics/pokemon/magnemastr/back.gbapal");
	 const u8 gMonIcon_Magnemastr[] = INCBIN_U8("graphics/pokemon/magnemastr/icon.4bpp");

#endif //P_FAMILY_MAGNEMITE

#if P_FAMILY_FARFETCHD
	 const u32 gMonFrontPic_Farfetchd[] = INCBIN_U32("graphics/pokemon/farfetchd/front.4bpp.smol");
	 const u32 gMonBackPic_Farfetchd[] = INCBIN_U32("graphics/pokemon/farfetchd/back.4bpp.smol");
	 const u16 gMonPalette_Farfetchd[] = INCBIN_U16("graphics/pokemon/farfetchd/front.gbapal");
	 const u16 gMonShinyPalette_Farfetchd[] = INCBIN_U16("graphics/pokemon/farfetchd/back.gbapal");
	 const u8 gMonIcon_Farfetchd[] = INCBIN_U8("graphics/pokemon/farfetchd/icon.4bpp");

	 const u32 gMonFrontPic_Forfowld[] = INCBIN_U32("graphics/pokemon/forfowld/front.4bpp.smol");
	 const u32 gMonBackPic_Forfowld[] = INCBIN_U32("graphics/pokemon/forfowld/back.4bpp.smol");
	 const u16 gMonPalette_Forfowld[] = INCBIN_U16("graphics/pokemon/forfowld/front.gbapal");
	 const u16 gMonShinyPalette_Forfowld[] = INCBIN_U16("graphics/pokemon/forfowld/back.gbapal");
	 const u8 gMonIcon_Forfowld[] = INCBIN_U8("graphics/pokemon/forfowld/icon.4bpp");

	 const u32 gMonFrontPic_Fowlntom[] = INCBIN_U32("graphics/pokemon/fowlntom/front.4bpp.smol");
	 const u32 gMonBackPic_Fowlntom[] = INCBIN_U32("graphics/pokemon/fowlntom/back.4bpp.smol");
	 const u16 gMonPalette_Fowlntom[] = INCBIN_U16("graphics/pokemon/fowlntom/front.gbapal");
	 const u16 gMonShinyPalette_Fowlntom[] = INCBIN_U16("graphics/pokemon/fowlntom/back.gbapal");
	 const u8 gMonIcon_Fowlntom[] = INCBIN_U8("graphics/pokemon/fowlntom/icon.4bpp");

#endif //P_FAMILY_FARFETCHD

#if P_FAMILY_DODUO
	 const u32 gMonFrontPic_Doduo[] = INCBIN_U32("graphics/pokemon/doduo/front.4bpp.smol");
	 const u32 gMonBackPic_Doduo[] = INCBIN_U32("graphics/pokemon/doduo/back.4bpp.smol");
	 const u16 gMonPalette_Doduo[] = INCBIN_U16("graphics/pokemon/doduo/front.gbapal");
	 const u16 gMonShinyPalette_Doduo[] = INCBIN_U16("graphics/pokemon/doduo/back.gbapal");
	 const u8 gMonIcon_Doduo[] = INCBIN_U8("graphics/pokemon/doduo/icon.4bpp");

	 const u32 gMonFrontPic_Dodrio[] = INCBIN_U32("graphics/pokemon/dodrio/front.4bpp.smol");
	 const u32 gMonBackPic_Dodrio[] = INCBIN_U32("graphics/pokemon/dodrio/back.4bpp.smol");
	 const u16 gMonPalette_Dodrio[] = INCBIN_U16("graphics/pokemon/dodrio/front.gbapal");
	 const u16 gMonShinyPalette_Dodrio[] = INCBIN_U16("graphics/pokemon/dodrio/back.gbapal");
	 const u8 gMonIcon_Dodrio[] = INCBIN_U8("graphics/pokemon/dodrio/icon.4bpp");

	 const u32 gMonFrontPic_Quadodo[] = INCBIN_U32("graphics/pokemon/quadodo/front.4bpp.smol");
	 const u32 gMonBackPic_Quadodo[] = INCBIN_U32("graphics/pokemon/quadodo/back.4bpp.smol");
	 const u16 gMonPalette_Quadodo[] = INCBIN_U16("graphics/pokemon/quadodo/front.gbapal");
	 const u16 gMonShinyPalette_Quadodo[] = INCBIN_U16("graphics/pokemon/quadodo/back.gbapal");
	 const u8 gMonIcon_Quadodo[] = INCBIN_U8("graphics/pokemon/quadodo/icon.4bpp");

	 const u32 gMonFrontPic_Dodozen[] = INCBIN_U32("graphics/pokemon/dodozen/front.4bpp.smol");
	 const u32 gMonBackPic_Dodozen[] = INCBIN_U32("graphics/pokemon/dodozen/back.4bpp.smol");
	 const u16 gMonPalette_Dodozen[] = INCBIN_U16("graphics/pokemon/dodozen/front.gbapal");
	 const u16 gMonShinyPalette_Dodozen[] = INCBIN_U16("graphics/pokemon/dodozen/back.gbapal");
	 const u8 gMonIcon_Dodozen[] = INCBIN_U8("graphics/pokemon/dodozen/icon.4bpp");

#endif //P_FAMILY_DODUO

#if P_FAMILY_SEEL
	 const u32 gMonFrontPic_Seel[] = INCBIN_U32("graphics/pokemon/seel/front.4bpp.smol");
	 const u32 gMonBackPic_Seel[] = INCBIN_U32("graphics/pokemon/seel/back.4bpp.smol");
	 const u16 gMonPalette_Seel[] = INCBIN_U16("graphics/pokemon/seel/front.gbapal");
	 const u16 gMonShinyPalette_Seel[] = INCBIN_U16("graphics/pokemon/seel/back.gbapal");
	 const u8 gMonIcon_Seel[] = INCBIN_U8("graphics/pokemon/seel/icon.4bpp");

	 const u32 gMonFrontPic_Dewgong[] = INCBIN_U32("graphics/pokemon/dewgong/front.4bpp.smol");
	 const u32 gMonBackPic_Dewgong[] = INCBIN_U32("graphics/pokemon/dewgong/back.4bpp.smol");
	 const u16 gMonPalette_Dewgong[] = INCBIN_U16("graphics/pokemon/dewgong/front.gbapal");
	 const u16 gMonShinyPalette_Dewgong[] = INCBIN_U16("graphics/pokemon/dewgong/back.gbapal");
	 const u8 gMonIcon_Dewgong[] = INCBIN_U8("graphics/pokemon/dewgong/icon.4bpp");

	 const u32 gMonFrontPic_Preciped[] = INCBIN_U32("graphics/pokemon/preciped/front.4bpp.smol");
	 const u32 gMonBackPic_Preciped[] = INCBIN_U32("graphics/pokemon/preciped/back.4bpp.smol");
	 const u16 gMonPalette_Preciped[] = INCBIN_U16("graphics/pokemon/preciped/front.gbapal");
	 const u16 gMonShinyPalette_Preciped[] = INCBIN_U16("graphics/pokemon/preciped/back.gbapal");
	 const u8 gMonIcon_Preciped[] = INCBIN_U8("graphics/pokemon/preciped/icon.4bpp");

	 const u32 gMonFrontPic_Manatii[] = INCBIN_U32("graphics/pokemon/manatii/front.4bpp.smol");
	 const u32 gMonBackPic_Manatii[] = INCBIN_U32("graphics/pokemon/manatii/back.4bpp.smol");
	 const u16 gMonPalette_Manatii[] = INCBIN_U16("graphics/pokemon/manatii/front.gbapal");
	 const u16 gMonShinyPalette_Manatii[] = INCBIN_U16("graphics/pokemon/manatii/back.gbapal");
	 const u8 gMonIcon_Manatii[] = INCBIN_U8("graphics/pokemon/manatii/icon.4bpp");

#endif //P_FAMILY_SEEL

#if P_FAMILY_GRIMER
	 const u32 gMonFrontPic_Grimer[] = INCBIN_U32("graphics/pokemon/grimer/front.4bpp.smol");
	 const u32 gMonBackPic_Grimer[] = INCBIN_U32("graphics/pokemon/grimer/back.4bpp.smol");
	 const u16 gMonPalette_Grimer[] = INCBIN_U16("graphics/pokemon/grimer/front.gbapal");
	 const u16 gMonShinyPalette_Grimer[] = INCBIN_U16("graphics/pokemon/grimer/back.gbapal");
	 const u8 gMonIcon_Grimer[] = INCBIN_U8("graphics/pokemon/grimer/icon.4bpp");

	 const u32 gMonFrontPic_Muk[] = INCBIN_U32("graphics/pokemon/muk/front.4bpp.smol");
	 const u32 gMonBackPic_Muk[] = INCBIN_U32("graphics/pokemon/muk/back.4bpp.smol");
	 const u16 gMonPalette_Muk[] = INCBIN_U16("graphics/pokemon/muk/front.gbapal");
	 const u16 gMonShinyPalette_Muk[] = INCBIN_U16("graphics/pokemon/muk/back.gbapal");
	 const u8 gMonIcon_Muk[] = INCBIN_U8("graphics/pokemon/muk/icon.4bpp");

	 const u32 gMonFrontPic_Gunk[] = INCBIN_U32("graphics/pokemon/gunk/front.4bpp.smol");
	 const u32 gMonBackPic_Gunk[] = INCBIN_U32("graphics/pokemon/gunk/back.4bpp.smol");
	 const u16 gMonPalette_Gunk[] = INCBIN_U16("graphics/pokemon/gunk/front.gbapal");
	 const u16 gMonShinyPalette_Gunk[] = INCBIN_U16("graphics/pokemon/gunk/back.gbapal");
	 const u8 gMonIcon_Gunk[] = INCBIN_U8("graphics/pokemon/gunk/icon.4bpp");

	 const u32 gMonFrontPic_Skum[] = INCBIN_U32("graphics/pokemon/skum/front.4bpp.smol");
	 const u32 gMonBackPic_Skum[] = INCBIN_U32("graphics/pokemon/skum/back.4bpp.smol");
	 const u16 gMonPalette_Skum[] = INCBIN_U16("graphics/pokemon/skum/front.gbapal");
	 const u16 gMonShinyPalette_Skum[] = INCBIN_U16("graphics/pokemon/skum/back.gbapal");
	 const u8 gMonIcon_Skum[] = INCBIN_U8("graphics/pokemon/skum/icon.4bpp");

#endif //P_FAMILY_GRIMER

#if P_FAMILY_SHELLDER
	 const u32 gMonFrontPic_Shellder[] = INCBIN_U32("graphics/pokemon/shellder/front.4bpp.smol");
	 const u32 gMonBackPic_Shellder[] = INCBIN_U32("graphics/pokemon/shellder/back.4bpp.smol");
	 const u16 gMonPalette_Shellder[] = INCBIN_U16("graphics/pokemon/shellder/front.gbapal");
	 const u16 gMonShinyPalette_Shellder[] = INCBIN_U16("graphics/pokemon/shellder/back.gbapal");
	 const u8 gMonIcon_Shellder[] = INCBIN_U8("graphics/pokemon/shellder/icon.4bpp");

	 const u32 gMonFrontPic_Cloyster[] = INCBIN_U32("graphics/pokemon/cloyster/front.4bpp.smol");
	 const u32 gMonBackPic_Cloyster[] = INCBIN_U32("graphics/pokemon/cloyster/back.4bpp.smol");
	 const u16 gMonPalette_Cloyster[] = INCBIN_U16("graphics/pokemon/cloyster/front.gbapal");
	 const u16 gMonShinyPalette_Cloyster[] = INCBIN_U16("graphics/pokemon/cloyster/back.gbapal");
	 const u8 gMonIcon_Cloyster[] = INCBIN_U8("graphics/pokemon/cloyster/icon.4bpp");

	 const u32 gMonFrontPic_Anenemy[] = INCBIN_U32("graphics/pokemon/anenemy/front.4bpp.smol");
	 const u32 gMonBackPic_Anenemy[] = INCBIN_U32("graphics/pokemon/anenemy/back.4bpp.smol");
	 const u16 gMonPalette_Anenemy[] = INCBIN_U16("graphics/pokemon/anenemy/front.gbapal");
	 const u16 gMonShinyPalette_Anenemy[] = INCBIN_U16("graphics/pokemon/anenemy/back.gbapal");
	 const u8 gMonIcon_Anenemy[] = INCBIN_U8("graphics/pokemon/anenemy/icon.4bpp");

	 const u32 gMonFrontPic_Glaishell[] = INCBIN_U32("graphics/pokemon/glaishell/front.4bpp.smol");
	 const u32 gMonBackPic_Glaishell[] = INCBIN_U32("graphics/pokemon/glaishell/back.4bpp.smol");
	 const u16 gMonPalette_Glaishell[] = INCBIN_U16("graphics/pokemon/glaishell/front.gbapal");
	 const u16 gMonShinyPalette_Glaishell[] = INCBIN_U16("graphics/pokemon/glaishell/back.gbapal");
	 const u8 gMonIcon_Glaishell[] = INCBIN_U8("graphics/pokemon/glaishell/icon.4bpp");

#endif //P_FAMILY_SHELLDER

#if P_FAMILY_GASTLY
	 const u32 gMonFrontPic_Gastly[] = INCBIN_U32("graphics/pokemon/gastly/front.4bpp.smol");
	 const u32 gMonBackPic_Gastly[] = INCBIN_U32("graphics/pokemon/gastly/back.4bpp.smol");
	 const u16 gMonPalette_Gastly[] = INCBIN_U16("graphics/pokemon/gastly/front.gbapal");
	 const u16 gMonShinyPalette_Gastly[] = INCBIN_U16("graphics/pokemon/gastly/back.gbapal");
	 const u8 gMonIcon_Gastly[] = INCBIN_U8("graphics/pokemon/gastly/icon.4bpp");

	 const u32 gMonFrontPic_Haunter[] = INCBIN_U32("graphics/pokemon/haunter/front.4bpp.smol");
	 const u32 gMonBackPic_Haunter[] = INCBIN_U32("graphics/pokemon/haunter/back.4bpp.smol");
	 const u16 gMonPalette_Haunter[] = INCBIN_U16("graphics/pokemon/haunter/front.gbapal");
	 const u16 gMonShinyPalette_Haunter[] = INCBIN_U16("graphics/pokemon/haunter/back.gbapal");
	 const u8 gMonIcon_Haunter[] = INCBIN_U8("graphics/pokemon/haunter/icon.4bpp");

	 const u32 gMonFrontPic_Gengar[] = INCBIN_U32("graphics/pokemon/gengar/front.4bpp.smol");
	 const u32 gMonBackPic_Gengar[] = INCBIN_U32("graphics/pokemon/gengar/back.4bpp.smol");
	 const u16 gMonPalette_Gengar[] = INCBIN_U16("graphics/pokemon/gengar/front.gbapal");
	 const u16 gMonShinyPalette_Gengar[] = INCBIN_U16("graphics/pokemon/gengar/back.gbapal");
	 const u8 gMonIcon_Gengar[] = INCBIN_U8("graphics/pokemon/gengar/icon.4bpp");

	 const u32 gMonFrontPic_Gengone[] = INCBIN_U32("graphics/pokemon/gengone/front.4bpp.smol");
	 const u32 gMonBackPic_Gengone[] = INCBIN_U32("graphics/pokemon/gengone/back.4bpp.smol");
	 const u16 gMonPalette_Gengone[] = INCBIN_U16("graphics/pokemon/gengone/front.gbapal");
	 const u16 gMonShinyPalette_Gengone[] = INCBIN_U16("graphics/pokemon/gengone/back.gbapal");
	 const u8 gMonIcon_Gengone[] = INCBIN_U8("graphics/pokemon/gengone/icon.4bpp");

	 const u32 gMonFrontPic_Poltergast[] = INCBIN_U32("graphics/pokemon/poltergast/front.4bpp.smol");
	 const u32 gMonBackPic_Poltergast[] = INCBIN_U32("graphics/pokemon/poltergast/back.4bpp.smol");
	 const u16 gMonPalette_Poltergast[] = INCBIN_U16("graphics/pokemon/poltergast/front.gbapal");
	 const u16 gMonShinyPalette_Poltergast[] = INCBIN_U16("graphics/pokemon/poltergast/back.gbapal");
	 const u8 gMonIcon_Poltergast[] = INCBIN_U8("graphics/pokemon/poltergast/icon.4bpp");

	 const u32 gMonFrontPic_Grimm[] = INCBIN_U32("graphics/pokemon/grimm/front.4bpp.smol");
	 const u32 gMonBackPic_Grimm[] = INCBIN_U32("graphics/pokemon/grimm/back.4bpp.smol");
	 const u16 gMonPalette_Grimm[] = INCBIN_U16("graphics/pokemon/grimm/front.gbapal");
	 const u16 gMonShinyPalette_Grimm[] = INCBIN_U16("graphics/pokemon/grimm/back.gbapal");
	 const u8 gMonIcon_Grimm[] = INCBIN_U8("graphics/pokemon/grimm/icon.4bpp");

#endif //P_FAMILY_GASTLY

#if P_FAMILY_ONIX
	 const u32 gMonFrontPic_Onix[] = INCBIN_U32("graphics/pokemon/onix/front.4bpp.smol");
	 const u32 gMonBackPic_Onix[] = INCBIN_U32("graphics/pokemon/onix/back.4bpp.smol");
	 const u16 gMonPalette_Onix[] = INCBIN_U16("graphics/pokemon/onix/front.gbapal");
	 const u16 gMonShinyPalette_Onix[] = INCBIN_U16("graphics/pokemon/onix/back.gbapal");
	 const u8 gMonIcon_Onix[] = INCBIN_U8("graphics/pokemon/onix/icon.4bpp");

	 const u32 gMonFrontPic_Steelix[] = INCBIN_U32("graphics/pokemon/steelix/front.4bpp.smol");
	 const u32 gMonBackPic_Steelix[] = INCBIN_U32("graphics/pokemon/steelix/back.4bpp.smol");
	 const u16 gMonPalette_Steelix[] = INCBIN_U16("graphics/pokemon/steelix/front.gbapal");
	 const u16 gMonShinyPalette_Steelix[] = INCBIN_U16("graphics/pokemon/steelix/back.gbapal");
	 const u8 gMonIcon_Steelix[] = INCBIN_U8("graphics/pokemon/steelix/icon.4bpp");

	 const u32 gMonFrontPic_Platnix[] = INCBIN_U32("graphics/pokemon/platnix/front.4bpp.smol");
	 const u32 gMonBackPic_Platnix[] = INCBIN_U32("graphics/pokemon/platnix/back.4bpp.smol");
	 const u16 gMonPalette_Platnix[] = INCBIN_U16("graphics/pokemon/platnix/front.gbapal");
	 const u16 gMonShinyPalette_Platnix[] = INCBIN_U16("graphics/pokemon/platnix/back.gbapal");
	 const u8 gMonIcon_Platnix[] = INCBIN_U8("graphics/pokemon/platnix/icon.4bpp");

	 const u32 gMonFrontPic_Obsidianix[] = INCBIN_U32("graphics/pokemon/obsidianix/front.4bpp.smol");
	 const u32 gMonBackPic_Obsidianix[] = INCBIN_U32("graphics/pokemon/obsidianix/back.4bpp.smol");
	 const u16 gMonPalette_Obsidianix[] = INCBIN_U16("graphics/pokemon/obsidianix/front.gbapal");
	 const u16 gMonShinyPalette_Obsidianix[] = INCBIN_U16("graphics/pokemon/obsidianix/back.gbapal");
	 const u8 gMonIcon_Obsidianix[] = INCBIN_U8("graphics/pokemon/obsidianix/icon.4bpp");

	 const u32 gMonFrontPic_Stalagmix[] = INCBIN_U32("graphics/pokemon/stalagmix/front.4bpp.smol");
	 const u32 gMonBackPic_Stalagmix[] = INCBIN_U32("graphics/pokemon/stalagmix/back.4bpp.smol");
	 const u16 gMonPalette_Stalagmix[] = INCBIN_U16("graphics/pokemon/stalagmix/front.gbapal");
	 const u16 gMonShinyPalette_Stalagmix[] = INCBIN_U16("graphics/pokemon/stalagmix/back.gbapal");
	 const u8 gMonIcon_Stalagmix[] = INCBIN_U8("graphics/pokemon/stalagmix/icon.4bpp");

#endif //P_FAMILY_ONIX

#if P_FAMILY_DROWZEE
	 const u32 gMonFrontPic_Drowzee[] = INCBIN_U32("graphics/pokemon/drowzee/front.4bpp.smol");
	 const u32 gMonBackPic_Drowzee[] = INCBIN_U32("graphics/pokemon/drowzee/back.4bpp.smol");
	 const u16 gMonPalette_Drowzee[] = INCBIN_U16("graphics/pokemon/drowzee/front.gbapal");
	 const u16 gMonShinyPalette_Drowzee[] = INCBIN_U16("graphics/pokemon/drowzee/back.gbapal");
	 const u8 gMonIcon_Drowzee[] = INCBIN_U8("graphics/pokemon/drowzee/icon.4bpp");

	 const u32 gMonFrontPic_Hypno[] = INCBIN_U32("graphics/pokemon/hypno/front.4bpp.smol");
	 const u32 gMonBackPic_Hypno[] = INCBIN_U32("graphics/pokemon/hypno/back.4bpp.smol");
	 const u16 gMonPalette_Hypno[] = INCBIN_U16("graphics/pokemon/hypno/front.gbapal");
	 const u16 gMonShinyPalette_Hypno[] = INCBIN_U16("graphics/pokemon/hypno/back.gbapal");
	 const u8 gMonIcon_Hypno[] = INCBIN_U8("graphics/pokemon/hypno/icon.4bpp");

	 const u32 gMonFrontPic_Lulloo[] = INCBIN_U32("graphics/pokemon/lulloo/front.4bpp.smol");
	 const u32 gMonBackPic_Lulloo[] = INCBIN_U32("graphics/pokemon/lulloo/back.4bpp.smol");
	 const u16 gMonPalette_Lulloo[] = INCBIN_U16("graphics/pokemon/lulloo/front.gbapal");
	 const u16 gMonShinyPalette_Lulloo[] = INCBIN_U16("graphics/pokemon/lulloo/back.gbapal");
	 const u8 gMonIcon_Lulloo[] = INCBIN_U8("graphics/pokemon/lulloo/icon.4bpp");

	 const u32 gMonFrontPic_Somnisooth[] = INCBIN_U32("graphics/pokemon/somnisooth/front.4bpp.smol");
	 const u32 gMonBackPic_Somnisooth[] = INCBIN_U32("graphics/pokemon/somnisooth/back.4bpp.smol");
	 const u16 gMonPalette_Somnisooth[] = INCBIN_U16("graphics/pokemon/somnisooth/front.gbapal");
	 const u16 gMonShinyPalette_Somnisooth[] = INCBIN_U16("graphics/pokemon/somnisooth/back.gbapal");
	 const u8 gMonIcon_Somnisooth[] = INCBIN_U8("graphics/pokemon/somnisooth/icon.4bpp");

#endif //P_FAMILY_DROWZEE

#if P_FAMILY_KRABBY
	 const u32 gMonFrontPic_Krabby[] = INCBIN_U32("graphics/pokemon/krabby/front.4bpp.smol");
	 const u32 gMonBackPic_Krabby[] = INCBIN_U32("graphics/pokemon/krabby/back.4bpp.smol");
	 const u16 gMonPalette_Krabby[] = INCBIN_U16("graphics/pokemon/krabby/front.gbapal");
	 const u16 gMonShinyPalette_Krabby[] = INCBIN_U16("graphics/pokemon/krabby/back.gbapal");
	 const u8 gMonIcon_Krabby[] = INCBIN_U8("graphics/pokemon/krabby/icon.4bpp");

	 const u32 gMonFrontPic_Kingler[] = INCBIN_U32("graphics/pokemon/kingler/front.4bpp.smol");
	 const u32 gMonBackPic_Kingler[] = INCBIN_U32("graphics/pokemon/kingler/back.4bpp.smol");
	 const u16 gMonPalette_Kingler[] = INCBIN_U16("graphics/pokemon/kingler/front.gbapal");
	 const u16 gMonShinyPalette_Kingler[] = INCBIN_U16("graphics/pokemon/kingler/back.gbapal");
	 const u8 gMonIcon_Kingler[] = INCBIN_U8("graphics/pokemon/kingler/icon.4bpp");

	 const u32 gMonFrontPic_Kraklaw[] = INCBIN_U32("graphics/pokemon/kraklaw/front.4bpp.smol");
	 const u32 gMonBackPic_Kraklaw[] = INCBIN_U32("graphics/pokemon/kraklaw/back.4bpp.smol");
	 const u16 gMonPalette_Kraklaw[] = INCBIN_U16("graphics/pokemon/kraklaw/front.gbapal");
	 const u16 gMonShinyPalette_Kraklaw[] = INCBIN_U16("graphics/pokemon/kraklaw/back.gbapal");
	 const u8 gMonIcon_Kraklaw[] = INCBIN_U8("graphics/pokemon/kraklaw/icon.4bpp");

	 const u32 gMonFrontPic_Teklawno[] = INCBIN_U32("graphics/pokemon/teklawno/front.4bpp.smol");
	 const u32 gMonBackPic_Teklawno[] = INCBIN_U32("graphics/pokemon/teklawno/back.4bpp.smol");
	 const u16 gMonPalette_Teklawno[] = INCBIN_U16("graphics/pokemon/teklawno/front.gbapal");
	 const u16 gMonShinyPalette_Teklawno[] = INCBIN_U16("graphics/pokemon/teklawno/back.gbapal");
	 const u8 gMonIcon_Teklawno[] = INCBIN_U8("graphics/pokemon/teklawno/icon.4bpp");

#endif //P_FAMILY_KRABBY

#if P_FAMILY_VOLTORB
	 const u32 gMonFrontPic_Voltorb[] = INCBIN_U32("graphics/pokemon/voltorb/front.4bpp.smol");
	 const u32 gMonBackPic_Voltorb[] = INCBIN_U32("graphics/pokemon/voltorb/back.4bpp.smol");
	 const u16 gMonPalette_Voltorb[] = INCBIN_U16("graphics/pokemon/voltorb/front.gbapal");
	 const u16 gMonShinyPalette_Voltorb[] = INCBIN_U16("graphics/pokemon/voltorb/back.gbapal");
	 const u8 gMonIcon_Voltorb[] = INCBIN_U8("graphics/pokemon/voltorb/icon.4bpp");

	 const u32 gMonFrontPic_Electrode[] = INCBIN_U32("graphics/pokemon/electrode/front.4bpp.smol");
	 const u32 gMonBackPic_Electrode[] = INCBIN_U32("graphics/pokemon/electrode/back.4bpp.smol");
	 const u16 gMonPalette_Electrode[] = INCBIN_U16("graphics/pokemon/electrode/front.gbapal");
	 const u16 gMonShinyPalette_Electrode[] = INCBIN_U16("graphics/pokemon/electrode/back.gbapal");
	 const u8 gMonIcon_Electrode[] = INCBIN_U8("graphics/pokemon/electrode/icon.4bpp");

	 const u32 gMonFrontPic_Electrodes[] = INCBIN_U32("graphics/pokemon/electrodes/front.4bpp.smol");
	 const u32 gMonBackPic_Electrodes[] = INCBIN_U32("graphics/pokemon/electrodes/back.4bpp.smol");
	 const u16 gMonPalette_Electrodes[] = INCBIN_U16("graphics/pokemon/electrodes/front.gbapal");
	 const u16 gMonShinyPalette_Electrodes[] = INCBIN_U16("graphics/pokemon/electrodes/back.gbapal");
	 const u8 gMonIcon_Electrodes[] = INCBIN_U8("graphics/pokemon/electrodes/icon.4bpp");

	 const u32 gMonFrontPic_Electrodex[] = INCBIN_U32("graphics/pokemon/electrodex/front.4bpp.smol");
	 const u32 gMonBackPic_Electrodex[] = INCBIN_U32("graphics/pokemon/electrodex/back.4bpp.smol");
	 const u16 gMonPalette_Electrodex[] = INCBIN_U16("graphics/pokemon/electrodex/front.gbapal");
	 const u16 gMonShinyPalette_Electrodex[] = INCBIN_U16("graphics/pokemon/electrodex/back.gbapal");
	 const u8 gMonIcon_Electrodex[] = INCBIN_U8("graphics/pokemon/electrodex/icon.4bpp");

	 const u32 gMonFrontPic_Electrodem[] = INCBIN_U32("graphics/pokemon/electrodem/front.4bpp.smol");
	 const u32 gMonBackPic_Electrodem[] = INCBIN_U32("graphics/pokemon/electrodem/back.4bpp.smol");
	 const u16 gMonPalette_Electrodem[] = INCBIN_U16("graphics/pokemon/electrodem/front.gbapal");
	 const u16 gMonShinyPalette_Electrodem[] = INCBIN_U16("graphics/pokemon/electrodem/back.gbapal");
	 const u8 gMonIcon_Electrodem[] = INCBIN_U8("graphics/pokemon/electrodem/icon.4bpp");

#endif //P_FAMILY_VOLTORB

#if P_FAMILY_EXEGGCUTE
	 const u32 gMonFrontPic_Exeggcute[] = INCBIN_U32("graphics/pokemon/exeggcute/front.4bpp.smol");
	 const u32 gMonBackPic_Exeggcute[] = INCBIN_U32("graphics/pokemon/exeggcute/back.4bpp.smol");
	 const u16 gMonPalette_Exeggcute[] = INCBIN_U16("graphics/pokemon/exeggcute/front.gbapal");
	 const u16 gMonShinyPalette_Exeggcute[] = INCBIN_U16("graphics/pokemon/exeggcute/back.gbapal");
	 const u8 gMonIcon_Exeggcute[] = INCBIN_U8("graphics/pokemon/exeggcute/icon.4bpp");

	 const u32 gMonFrontPic_Exeggutor[] = INCBIN_U32("graphics/pokemon/exeggutor/front.4bpp.smol");
	 const u32 gMonBackPic_Exeggutor[] = INCBIN_U32("graphics/pokemon/exeggutor/back.4bpp.smol");
	 const u16 gMonPalette_Exeggutor[] = INCBIN_U16("graphics/pokemon/exeggutor/front.gbapal");
	 const u16 gMonShinyPalette_Exeggutor[] = INCBIN_U16("graphics/pokemon/exeggutor/back.gbapal");
	 const u8 gMonIcon_Exeggutor[] = INCBIN_U8("graphics/pokemon/exeggutor/icon.4bpp");

	 const u32 gMonFrontPic_Exeggity[] = INCBIN_U32("graphics/pokemon/exeggity/front.4bpp.smol");
	 const u32 gMonBackPic_Exeggity[] = INCBIN_U32("graphics/pokemon/exeggity/back.4bpp.smol");
	 const u16 gMonPalette_Exeggity[] = INCBIN_U16("graphics/pokemon/exeggity/front.gbapal");
	 const u16 gMonShinyPalette_Exeggity[] = INCBIN_U16("graphics/pokemon/exeggity/back.gbapal");
	 const u8 gMonIcon_Exeggity[] = INCBIN_U8("graphics/pokemon/exeggity/icon.4bpp");

	 const u32 gMonFrontPic_Exeggtric[] = INCBIN_U32("graphics/pokemon/exeggtric/front.4bpp.smol");
	 const u32 gMonBackPic_Exeggtric[] = INCBIN_U32("graphics/pokemon/exeggtric/back.4bpp.smol");
	 const u16 gMonPalette_Exeggtric[] = INCBIN_U16("graphics/pokemon/exeggtric/front.gbapal");
	 const u16 gMonShinyPalette_Exeggtric[] = INCBIN_U16("graphics/pokemon/exeggtric/back.gbapal");
	 const u8 gMonIcon_Exeggtric[] = INCBIN_U8("graphics/pokemon/exeggtric/icon.4bpp");

#endif //P_FAMILY_EXEGGCUTE

#if P_FAMILY_CUBONE
	 const u32 gMonFrontPic_Cubone[] = INCBIN_U32("graphics/pokemon/cubone/front.4bpp.smol");
	 const u32 gMonBackPic_Cubone[] = INCBIN_U32("graphics/pokemon/cubone/back.4bpp.smol");
	 const u16 gMonPalette_Cubone[] = INCBIN_U16("graphics/pokemon/cubone/front.gbapal");
	 const u16 gMonShinyPalette_Cubone[] = INCBIN_U16("graphics/pokemon/cubone/back.gbapal");
	 const u8 gMonIcon_Cubone[] = INCBIN_U8("graphics/pokemon/cubone/icon.4bpp");

	 const u32 gMonFrontPic_Marowak[] = INCBIN_U32("graphics/pokemon/marowak/front.4bpp.smol");
	 const u32 gMonBackPic_Marowak[] = INCBIN_U32("graphics/pokemon/marowak/back.4bpp.smol");
	 const u16 gMonPalette_Marowak[] = INCBIN_U16("graphics/pokemon/marowak/front.gbapal");
	 const u16 gMonShinyPalette_Marowak[] = INCBIN_U16("graphics/pokemon/marowak/back.gbapal");
	 const u8 gMonIcon_Marowak[] = INCBIN_U8("graphics/pokemon/marowak/icon.4bpp");

	 const u32 gMonFrontPic_Osselobber[] = INCBIN_U32("graphics/pokemon/osselobber/front.4bpp.smol");
	 const u32 gMonBackPic_Osselobber[] = INCBIN_U32("graphics/pokemon/osselobber/back.4bpp.smol");
	 const u16 gMonPalette_Osselobber[] = INCBIN_U16("graphics/pokemon/osselobber/front.gbapal");
	 const u16 gMonShinyPalette_Osselobber[] = INCBIN_U16("graphics/pokemon/osselobber/back.gbapal");
	 const u8 gMonIcon_Osselobber[] = INCBIN_U8("graphics/pokemon/osselobber/icon.4bpp");

	 const u32 gMonFrontPic_Wraiwrath[] = INCBIN_U32("graphics/pokemon/wraiwrath/front.4bpp.smol");
	 const u32 gMonBackPic_Wraiwrath[] = INCBIN_U32("graphics/pokemon/wraiwrath/back.4bpp.smol");
	 const u16 gMonPalette_Wraiwrath[] = INCBIN_U16("graphics/pokemon/wraiwrath/front.gbapal");
	 const u16 gMonShinyPalette_Wraiwrath[] = INCBIN_U16("graphics/pokemon/wraiwrath/back.gbapal");
	 const u8 gMonIcon_Wraiwrath[] = INCBIN_U8("graphics/pokemon/wraiwrath/icon.4bpp");

#endif //P_FAMILY_CUBONE

#if P_FAMILY_HITMONS
	 const u32 gMonFrontPic_Hitmonlee[] = INCBIN_U32("graphics/pokemon/hitmonlee/front.4bpp.smol");
	 const u32 gMonBackPic_Hitmonlee[] = INCBIN_U32("graphics/pokemon/hitmonlee/back.4bpp.smol");
	 const u16 gMonPalette_Hitmonlee[] = INCBIN_U16("graphics/pokemon/hitmonlee/front.gbapal");
	 const u16 gMonShinyPalette_Hitmonlee[] = INCBIN_U16("graphics/pokemon/hitmonlee/back.gbapal");
	 const u8 gMonIcon_Hitmonlee[] = INCBIN_U8("graphics/pokemon/hitmonlee/icon.4bpp");

	 const u32 gMonFrontPic_Cleevoyant[] = INCBIN_U32("graphics/pokemon/cleevoyant/front.4bpp.smol");
	 const u32 gMonBackPic_Cleevoyant[] = INCBIN_U32("graphics/pokemon/cleevoyant/back.4bpp.smol");
	 const u16 gMonPalette_Cleevoyant[] = INCBIN_U16("graphics/pokemon/cleevoyant/front.gbapal");
	 const u16 gMonShinyPalette_Cleevoyant[] = INCBIN_U16("graphics/pokemon/cleevoyant/back.gbapal");
	 const u8 gMonIcon_Cleevoyant[] = INCBIN_U8("graphics/pokemon/cleevoyant/icon.4bpp");

	 const u32 gMonFrontPic_Spiritulee[] = INCBIN_U32("graphics/pokemon/spiritulee/front.4bpp.smol");
	 const u32 gMonBackPic_Spiritulee[] = INCBIN_U32("graphics/pokemon/spiritulee/back.4bpp.smol");
	 const u16 gMonPalette_Spiritulee[] = INCBIN_U16("graphics/pokemon/spiritulee/front.gbapal");
	 const u16 gMonShinyPalette_Spiritulee[] = INCBIN_U16("graphics/pokemon/spiritulee/back.gbapal");
	 const u8 gMonIcon_Spiritulee[] = INCBIN_U8("graphics/pokemon/spiritulee/icon.4bpp");

	 const u32 gMonFrontPic_Hitmonchan[] = INCBIN_U32("graphics/pokemon/hitmonchan/front.4bpp.smol");
	 const u32 gMonBackPic_Hitmonchan[] = INCBIN_U32("graphics/pokemon/hitmonchan/back.4bpp.smol");
	 const u16 gMonPalette_Hitmonchan[] = INCBIN_U16("graphics/pokemon/hitmonchan/front.gbapal");
	 const u16 gMonShinyPalette_Hitmonchan[] = INCBIN_U16("graphics/pokemon/hitmonchan/back.gbapal");
	 const u8 gMonIcon_Hitmonchan[] = INCBIN_U8("graphics/pokemon/hitmonchan/icon.4bpp");

	 const u32 gMonFrontPic_Enchanced[] = INCBIN_U32("graphics/pokemon/enchanced/front.4bpp.smol");
	 const u32 gMonBackPic_Enchanced[] = INCBIN_U32("graphics/pokemon/enchanced/back.4bpp.smol");
	 const u16 gMonPalette_Enchanced[] = INCBIN_U16("graphics/pokemon/enchanced/front.gbapal");
	 const u16 gMonShinyPalette_Enchanced[] = INCBIN_U16("graphics/pokemon/enchanced/back.gbapal");
	 const u8 gMonIcon_Enchanced[] = INCBIN_U8("graphics/pokemon/enchanced/icon.4bpp");

	 const u32 gMonFrontPic_Radiachan[] = INCBIN_U32("graphics/pokemon/radiachan/front.4bpp.smol");
	 const u32 gMonBackPic_Radiachan[] = INCBIN_U32("graphics/pokemon/radiachan/back.4bpp.smol");
	 const u16 gMonPalette_Radiachan[] = INCBIN_U16("graphics/pokemon/radiachan/front.gbapal");
	 const u16 gMonShinyPalette_Radiachan[] = INCBIN_U16("graphics/pokemon/radiachan/back.gbapal");
	 const u8 gMonIcon_Radiachan[] = INCBIN_U8("graphics/pokemon/radiachan/icon.4bpp");

#endif //P_FAMILY_HITMONS

#if P_FAMILY_LICKITUNG
	 const u32 gMonFrontPic_Lickitung[] = INCBIN_U32("graphics/pokemon/lickitung/front.4bpp.smol");
	 const u32 gMonBackPic_Lickitung[] = INCBIN_U32("graphics/pokemon/lickitung/back.4bpp.smol");
	 const u16 gMonPalette_Lickitung[] = INCBIN_U16("graphics/pokemon/lickitung/front.gbapal");
	 const u16 gMonShinyPalette_Lickitung[] = INCBIN_U16("graphics/pokemon/lickitung/back.gbapal");
	 const u8 gMonIcon_Lickitung[] = INCBIN_U8("graphics/pokemon/lickitung/icon.4bpp");

	 const u32 gMonFrontPic_Lickilicky[] = INCBIN_U32("graphics/pokemon/lickilicky/front.4bpp.smol");
	 const u32 gMonBackPic_Lickilicky[] = INCBIN_U32("graphics/pokemon/lickilicky/back.4bpp.smol");
	 const u16 gMonPalette_Lickilicky[] = INCBIN_U16("graphics/pokemon/lickilicky/front.gbapal");
	 const u16 gMonShinyPalette_Lickilicky[] = INCBIN_U16("graphics/pokemon/lickilicky/back.gbapal");
	 const u8 gMonIcon_Lickilicky[] = INCBIN_U8("graphics/pokemon/lickilicky/icon.4bpp");

	 const u32 gMonFrontPic_Lickilolly[] = INCBIN_U32("graphics/pokemon/lickilolly/front.4bpp.smol");
	 const u32 gMonBackPic_Lickilolly[] = INCBIN_U32("graphics/pokemon/lickilolly/back.4bpp.smol");
	 const u16 gMonPalette_Lickilolly[] = INCBIN_U16("graphics/pokemon/lickilolly/front.gbapal");
	 const u16 gMonShinyPalette_Lickilolly[] = INCBIN_U16("graphics/pokemon/lickilolly/back.gbapal");
	 const u8 gMonIcon_Lickilolly[] = INCBIN_U8("graphics/pokemon/lickilolly/icon.4bpp");

	 const u32 gMonFrontPic_Lickilato[] = INCBIN_U32("graphics/pokemon/lickilato/front.4bpp.smol");
	 const u32 gMonBackPic_Lickilato[] = INCBIN_U32("graphics/pokemon/lickilato/back.4bpp.smol");
	 const u16 gMonPalette_Lickilato[] = INCBIN_U16("graphics/pokemon/lickilato/front.gbapal");
	 const u16 gMonShinyPalette_Lickilato[] = INCBIN_U16("graphics/pokemon/lickilato/back.gbapal");
	 const u8 gMonIcon_Lickilato[] = INCBIN_U8("graphics/pokemon/lickilato/icon.4bpp");

#endif //P_FAMILY_LICKITUNG

#if P_FAMILY_KOFFING
	 const u32 gMonFrontPic_Koffing[] = INCBIN_U32("graphics/pokemon/koffing/front.4bpp.smol");
	 const u32 gMonBackPic_Koffing[] = INCBIN_U32("graphics/pokemon/koffing/back.4bpp.smol");
	 const u16 gMonPalette_Koffing[] = INCBIN_U16("graphics/pokemon/koffing/front.gbapal");
	 const u16 gMonShinyPalette_Koffing[] = INCBIN_U16("graphics/pokemon/koffing/back.gbapal");
	 const u8 gMonIcon_Koffing[] = INCBIN_U8("graphics/pokemon/koffing/icon.4bpp");

	 const u32 gMonFrontPic_Weezing[] = INCBIN_U32("graphics/pokemon/weezing/front.4bpp.smol");
	 const u32 gMonBackPic_Weezing[] = INCBIN_U32("graphics/pokemon/weezing/back.4bpp.smol");
	 const u16 gMonPalette_Weezing[] = INCBIN_U16("graphics/pokemon/weezing/front.gbapal");
	 const u16 gMonShinyPalette_Weezing[] = INCBIN_U16("graphics/pokemon/weezing/back.gbapal");
	 const u8 gMonIcon_Weezing[] = INCBIN_U8("graphics/pokemon/weezing/icon.4bpp");

	 const u32 gMonFrontPic_Heeving[] = INCBIN_U32("graphics/pokemon/heeving/front.4bpp.smol");
	 const u32 gMonBackPic_Heeving[] = INCBIN_U32("graphics/pokemon/heeving/back.4bpp.smol");
	 const u16 gMonPalette_Heeving[] = INCBIN_U16("graphics/pokemon/heeving/front.gbapal");
	 const u16 gMonShinyPalette_Heeving[] = INCBIN_U16("graphics/pokemon/heeving/back.gbapal");
	 const u8 gMonIcon_Heeving[] = INCBIN_U8("graphics/pokemon/heeving/icon.4bpp");

	 const u32 gMonFrontPic_Chohking[] = INCBIN_U32("graphics/pokemon/chohking/front.4bpp.smol");
	 const u32 gMonBackPic_Chohking[] = INCBIN_U32("graphics/pokemon/chohking/back.4bpp.smol");
	 const u16 gMonPalette_Chohking[] = INCBIN_U16("graphics/pokemon/chohking/front.gbapal");
	 const u16 gMonShinyPalette_Chohking[] = INCBIN_U16("graphics/pokemon/chohking/back.gbapal");
	 const u8 gMonIcon_Chohking[] = INCBIN_U8("graphics/pokemon/chohking/icon.4bpp");

#endif //P_FAMILY_KOFFING

#if P_FAMILY_RHYHORN
	 const u32 gMonFrontPic_Rhyhorn[] = INCBIN_U32("graphics/pokemon/rhyhorn/front.4bpp.smol");
	 const u32 gMonBackPic_Rhyhorn[] = INCBIN_U32("graphics/pokemon/rhyhorn/back.4bpp.smol");
	 const u16 gMonPalette_Rhyhorn[] = INCBIN_U16("graphics/pokemon/rhyhorn/front.gbapal");
	 const u16 gMonShinyPalette_Rhyhorn[] = INCBIN_U16("graphics/pokemon/rhyhorn/back.gbapal");
	 const u8 gMonIcon_Rhyhorn[] = INCBIN_U8("graphics/pokemon/rhyhorn/icon.4bpp");

	 const u32 gMonFrontPic_Rhydon[] = INCBIN_U32("graphics/pokemon/rhydon/front.4bpp.smol");
	 const u32 gMonBackPic_Rhydon[] = INCBIN_U32("graphics/pokemon/rhydon/back.4bpp.smol");
	 const u16 gMonPalette_Rhydon[] = INCBIN_U16("graphics/pokemon/rhydon/front.gbapal");
	 const u16 gMonShinyPalette_Rhydon[] = INCBIN_U16("graphics/pokemon/rhydon/back.gbapal");
	 const u8 gMonIcon_Rhydon[] = INCBIN_U8("graphics/pokemon/rhydon/icon.4bpp");

	 const u32 gMonFrontPic_Rhyperior[] = INCBIN_U32("graphics/pokemon/rhyperior/front.4bpp.smol");
	 const u32 gMonBackPic_Rhyperior[] = INCBIN_U32("graphics/pokemon/rhyperior/back.4bpp.smol");
	 const u16 gMonPalette_Rhyperior[] = INCBIN_U16("graphics/pokemon/rhyperior/front.gbapal");
	 const u16 gMonShinyPalette_Rhyperior[] = INCBIN_U16("graphics/pokemon/rhyperior/back.gbapal");
	 const u8 gMonIcon_Rhyperior[] = INCBIN_U8("graphics/pokemon/rhyperior/icon.4bpp");

	 const u32 gMonFrontPic_Rhymarkabl[] = INCBIN_U32("graphics/pokemon/rhymarkabl/front.4bpp.smol");
	 const u32 gMonBackPic_Rhymarkabl[] = INCBIN_U32("graphics/pokemon/rhymarkabl/back.4bpp.smol");
	 const u16 gMonPalette_Rhymarkabl[] = INCBIN_U16("graphics/pokemon/rhymarkabl/front.gbapal");
	 const u16 gMonShinyPalette_Rhymarkabl[] = INCBIN_U16("graphics/pokemon/rhymarkabl/back.gbapal");
	 const u8 gMonIcon_Rhymarkabl[] = INCBIN_U8("graphics/pokemon/rhymarkabl/icon.4bpp");

	 const u32 gMonFrontPic_Rhylic[] = INCBIN_U32("graphics/pokemon/rhylic/front.4bpp.smol");
	 const u32 gMonBackPic_Rhylic[] = INCBIN_U32("graphics/pokemon/rhylic/back.4bpp.smol");
	 const u16 gMonPalette_Rhylic[] = INCBIN_U16("graphics/pokemon/rhylic/front.gbapal");
	 const u16 gMonShinyPalette_Rhylic[] = INCBIN_U16("graphics/pokemon/rhylic/back.gbapal");
	 const u8 gMonIcon_Rhylic[] = INCBIN_U8("graphics/pokemon/rhylic/icon.4bpp");

	 const u32 gMonFrontPic_Rhyborn[] = INCBIN_U32("graphics/pokemon/rhyborn/front.4bpp.smol");
	 const u32 gMonBackPic_Rhyborn[] = INCBIN_U32("graphics/pokemon/rhyborn/back.4bpp.smol");
	 const u16 gMonPalette_Rhyborn[] = INCBIN_U16("graphics/pokemon/rhyborn/front.gbapal");
	 const u16 gMonShinyPalette_Rhyborn[] = INCBIN_U16("graphics/pokemon/rhyborn/back.gbapal");
	 const u8 gMonIcon_Rhyborn[] = INCBIN_U8("graphics/pokemon/rhyborn/icon.4bpp");

#endif //P_FAMILY_RHYHORN

#if P_FAMILY_CHANSEY
	 const u32 gMonFrontPic_Chansey[] = INCBIN_U32("graphics/pokemon/chansey/front.4bpp.smol");
	 const u32 gMonBackPic_Chansey[] = INCBIN_U32("graphics/pokemon/chansey/back.4bpp.smol");
	 const u16 gMonPalette_Chansey[] = INCBIN_U16("graphics/pokemon/chansey/front.gbapal");
	 const u16 gMonShinyPalette_Chansey[] = INCBIN_U16("graphics/pokemon/chansey/back.gbapal");
	 const u8 gMonIcon_Chansey[] = INCBIN_U8("graphics/pokemon/chansey/icon.4bpp");

	 const u32 gMonFrontPic_Blissey[] = INCBIN_U32("graphics/pokemon/blissey/front.4bpp.smol");
	 const u32 gMonBackPic_Blissey[] = INCBIN_U32("graphics/pokemon/blissey/back.4bpp.smol");
	 const u16 gMonPalette_Blissey[] = INCBIN_U16("graphics/pokemon/blissey/front.gbapal");
	 const u16 gMonShinyPalette_Blissey[] = INCBIN_U16("graphics/pokemon/blissey/back.gbapal");
	 const u8 gMonIcon_Blissey[] = INCBIN_U8("graphics/pokemon/blissey/icon.4bpp");

	 const u32 gMonFrontPic_Gogettey[] = INCBIN_U32("graphics/pokemon/gogettey/front.4bpp.smol");
	 const u32 gMonBackPic_Gogettey[] = INCBIN_U32("graphics/pokemon/gogettey/back.4bpp.smol");
	 const u16 gMonPalette_Gogettey[] = INCBIN_U16("graphics/pokemon/gogettey/front.gbapal");
	 const u16 gMonShinyPalette_Gogettey[] = INCBIN_U16("graphics/pokemon/gogettey/back.gbapal");
	 const u8 gMonIcon_Gogettey[] = INCBIN_U8("graphics/pokemon/gogettey/icon.4bpp");

	 const u32 gMonFrontPic_Lukkey[] = INCBIN_U32("graphics/pokemon/lukkey/front.4bpp.smol");
	 const u32 gMonBackPic_Lukkey[] = INCBIN_U32("graphics/pokemon/lukkey/back.4bpp.smol");
	 const u16 gMonPalette_Lukkey[] = INCBIN_U16("graphics/pokemon/lukkey/front.gbapal");
	 const u16 gMonShinyPalette_Lukkey[] = INCBIN_U16("graphics/pokemon/lukkey/back.gbapal");
	 const u8 gMonIcon_Lukkey[] = INCBIN_U8("graphics/pokemon/lukkey/icon.4bpp");

	 const u32 gMonFrontPic_Fortunitey[] = INCBIN_U32("graphics/pokemon/fortunitey/front.4bpp.smol");
	 const u32 gMonBackPic_Fortunitey[] = INCBIN_U32("graphics/pokemon/fortunitey/back.4bpp.smol");
	 const u16 gMonPalette_Fortunitey[] = INCBIN_U16("graphics/pokemon/fortunitey/front.gbapal");
	 const u16 gMonShinyPalette_Fortunitey[] = INCBIN_U16("graphics/pokemon/fortunitey/back.gbapal");
	 const u8 gMonIcon_Fortunitey[] = INCBIN_U8("graphics/pokemon/fortunitey/icon.4bpp");

#endif //P_FAMILY_CHANSEY

#if P_FAMILY_TANGELA
	 const u32 gMonFrontPic_Tangela[] = INCBIN_U32("graphics/pokemon/tangela/front.4bpp.smol");
	 const u32 gMonBackPic_Tangela[] = INCBIN_U32("graphics/pokemon/tangela/back.4bpp.smol");
	 const u16 gMonPalette_Tangela[] = INCBIN_U16("graphics/pokemon/tangela/front.gbapal");
	 const u16 gMonShinyPalette_Tangela[] = INCBIN_U16("graphics/pokemon/tangela/back.gbapal");
	 const u8 gMonIcon_Tangela[] = INCBIN_U8("graphics/pokemon/tangela/icon.4bpp");

	 const u32 gMonFrontPic_Tangrowth[] = INCBIN_U32("graphics/pokemon/tangrowth/front.4bpp.smol");
	 const u32 gMonBackPic_Tangrowth[] = INCBIN_U32("graphics/pokemon/tangrowth/back.4bpp.smol");
	 const u16 gMonPalette_Tangrowth[] = INCBIN_U16("graphics/pokemon/tangrowth/front.gbapal");
	 const u16 gMonShinyPalette_Tangrowth[] = INCBIN_U16("graphics/pokemon/tangrowth/back.gbapal");
	 const u8 gMonIcon_Tangrowth[] = INCBIN_U8("graphics/pokemon/tangrowth/icon.4bpp");

	 const u32 gMonFrontPic_Tangather[] = INCBIN_U32("graphics/pokemon/tangather/front.4bpp.smol");
	 const u32 gMonBackPic_Tangather[] = INCBIN_U32("graphics/pokemon/tangather/back.4bpp.smol");
	 const u16 gMonPalette_Tangather[] = INCBIN_U16("graphics/pokemon/tangather/front.gbapal");
	 const u16 gMonShinyPalette_Tangather[] = INCBIN_U16("graphics/pokemon/tangather/back.gbapal");
	 const u8 gMonIcon_Tangather[] = INCBIN_U8("graphics/pokemon/tangather/icon.4bpp");

	 const u32 gMonFrontPic_Tangoliath[] = INCBIN_U32("graphics/pokemon/tangoliath/front.4bpp.smol");
	 const u32 gMonBackPic_Tangoliath[] = INCBIN_U32("graphics/pokemon/tangoliath/back.4bpp.smol");
	 const u16 gMonPalette_Tangoliath[] = INCBIN_U16("graphics/pokemon/tangoliath/front.gbapal");
	 const u16 gMonShinyPalette_Tangoliath[] = INCBIN_U16("graphics/pokemon/tangoliath/back.gbapal");
	 const u8 gMonIcon_Tangoliath[] = INCBIN_U8("graphics/pokemon/tangoliath/icon.4bpp");

	 const u32 gMonFrontPic_Tangrapple[] = INCBIN_U32("graphics/pokemon/tangrapple/front.4bpp.smol");
	 const u32 gMonBackPic_Tangrapple[] = INCBIN_U32("graphics/pokemon/tangrapple/back.4bpp.smol");
	 const u16 gMonPalette_Tangrapple[] = INCBIN_U16("graphics/pokemon/tangrapple/front.gbapal");
	 const u16 gMonShinyPalette_Tangrapple[] = INCBIN_U16("graphics/pokemon/tangrapple/back.gbapal");
	 const u8 gMonIcon_Tangrapple[] = INCBIN_U8("graphics/pokemon/tangrapple/icon.4bpp");

#endif //P_FAMILY_TANGELA

#if P_FAMILY_KANGASKHAN
	 const u32 gMonFrontPic_Kangakid[] = INCBIN_U32("graphics/pokemon/kangakid/front.4bpp.smol");
	 const u32 gMonBackPic_Kangakid[] = INCBIN_U32("graphics/pokemon/kangakid/back.4bpp.smol");
	 const u16 gMonPalette_Kangakid[] = INCBIN_U16("graphics/pokemon/kangakid/front.gbapal");
	 const u16 gMonShinyPalette_Kangakid[] = INCBIN_U16("graphics/pokemon/kangakid/back.gbapal");
	 const u8 gMonIcon_Kangakid[] = INCBIN_U8("graphics/pokemon/kangakid/icon.4bpp");

	 const u32 gMonFrontPic_Kangaskhan[] = INCBIN_U32("graphics/pokemon/kangaskhan/front.4bpp.smol");
	 const u32 gMonBackPic_Kangaskhan[] = INCBIN_U32("graphics/pokemon/kangaskhan/back.4bpp.smol");
	 const u16 gMonPalette_Kangaskhan[] = INCBIN_U16("graphics/pokemon/kangaskhan/front.gbapal");
	 const u16 gMonShinyPalette_Kangaskhan[] = INCBIN_U16("graphics/pokemon/kangaskhan/back.gbapal");
	 const u8 gMonIcon_Kangaskhan[] = INCBIN_U8("graphics/pokemon/kangaskhan/icon.4bpp");

	 const u32 gMonFrontPic_Kangallous[] = INCBIN_U32("graphics/pokemon/kangallous/front.4bpp.smol");
	 const u32 gMonBackPic_Kangallous[] = INCBIN_U32("graphics/pokemon/kangallous/back.4bpp.smol");
	 const u16 gMonPalette_Kangallous[] = INCBIN_U16("graphics/pokemon/kangallous/front.gbapal");
	 const u16 gMonShinyPalette_Kangallous[] = INCBIN_U16("graphics/pokemon/kangallous/back.gbapal");
	 const u8 gMonIcon_Kangallous[] = INCBIN_U8("graphics/pokemon/kangallous/icon.4bpp");

	 const u32 gMonFrontPic_Kangarutal[] = INCBIN_U32("graphics/pokemon/kangarutal/front.4bpp.smol");
	 const u32 gMonBackPic_Kangarutal[] = INCBIN_U32("graphics/pokemon/kangarutal/back.4bpp.smol");
	 const u16 gMonPalette_Kangarutal[] = INCBIN_U16("graphics/pokemon/kangarutal/front.gbapal");
	 const u16 gMonShinyPalette_Kangarutal[] = INCBIN_U16("graphics/pokemon/kangarutal/back.gbapal");
	 const u8 gMonIcon_Kangarutal[] = INCBIN_U8("graphics/pokemon/kangarutal/icon.4bpp");

#endif //P_FAMILY_KANGASKHAN

#if P_FAMILY_HORSEA
	 const u32 gMonFrontPic_Horsea[] = INCBIN_U32("graphics/pokemon/horsea/front.4bpp.smol");
	 const u32 gMonBackPic_Horsea[] = INCBIN_U32("graphics/pokemon/horsea/back.4bpp.smol");
	 const u16 gMonPalette_Horsea[] = INCBIN_U16("graphics/pokemon/horsea/front.gbapal");
	 const u16 gMonShinyPalette_Horsea[] = INCBIN_U16("graphics/pokemon/horsea/back.gbapal");
	 const u8 gMonIcon_Horsea[] = INCBIN_U8("graphics/pokemon/horsea/icon.4bpp");

	 const u32 gMonFrontPic_Seadra[] = INCBIN_U32("graphics/pokemon/seadra/front.4bpp.smol");
	 const u32 gMonBackPic_Seadra[] = INCBIN_U32("graphics/pokemon/seadra/back.4bpp.smol");
	 const u16 gMonPalette_Seadra[] = INCBIN_U16("graphics/pokemon/seadra/front.gbapal");
	 const u16 gMonShinyPalette_Seadra[] = INCBIN_U16("graphics/pokemon/seadra/back.gbapal");
	 const u8 gMonIcon_Seadra[] = INCBIN_U8("graphics/pokemon/seadra/icon.4bpp");

	 const u32 gMonFrontPic_Kingdra[] = INCBIN_U32("graphics/pokemon/kingdra/front.4bpp.smol");
	 const u32 gMonBackPic_Kingdra[] = INCBIN_U32("graphics/pokemon/kingdra/back.4bpp.smol");
	 const u16 gMonPalette_Kingdra[] = INCBIN_U16("graphics/pokemon/kingdra/front.gbapal");
	 const u16 gMonShinyPalette_Kingdra[] = INCBIN_U16("graphics/pokemon/kingdra/back.gbapal");
	 const u8 gMonIcon_Kingdra[] = INCBIN_U8("graphics/pokemon/kingdra/icon.4bpp");

	 const u32 gMonFrontPic_Lordra[] = INCBIN_U32("graphics/pokemon/lordra/front.4bpp.smol");
	 const u32 gMonBackPic_Lordra[] = INCBIN_U32("graphics/pokemon/lordra/back.4bpp.smol");
	 const u16 gMonPalette_Lordra[] = INCBIN_U16("graphics/pokemon/lordra/front.gbapal");
	 const u16 gMonShinyPalette_Lordra[] = INCBIN_U16("graphics/pokemon/lordra/back.gbapal");
	 const u8 gMonIcon_Lordra[] = INCBIN_U8("graphics/pokemon/lordra/icon.4bpp");

	 const u32 gMonFrontPic_Pinnadra[] = INCBIN_U32("graphics/pokemon/pinnadra/front.4bpp.smol");
	 const u32 gMonBackPic_Pinnadra[] = INCBIN_U32("graphics/pokemon/pinnadra/back.4bpp.smol");
	 const u16 gMonPalette_Pinnadra[] = INCBIN_U16("graphics/pokemon/pinnadra/front.gbapal");
	 const u16 gMonShinyPalette_Pinnadra[] = INCBIN_U16("graphics/pokemon/pinnadra/back.gbapal");
	 const u8 gMonIcon_Pinnadra[] = INCBIN_U8("graphics/pokemon/pinnadra/icon.4bpp");

#endif //P_FAMILY_HORSEA

#if P_FAMILY_GOLDEEN
	 const u32 gMonFrontPic_Goldeen[] = INCBIN_U32("graphics/pokemon/goldeen/front.4bpp.smol");
	 const u32 gMonBackPic_Goldeen[] = INCBIN_U32("graphics/pokemon/goldeen/back.4bpp.smol");
	 const u16 gMonPalette_Goldeen[] = INCBIN_U16("graphics/pokemon/goldeen/front.gbapal");
	 const u16 gMonShinyPalette_Goldeen[] = INCBIN_U16("graphics/pokemon/goldeen/back.gbapal");
	 const u8 gMonIcon_Goldeen[] = INCBIN_U8("graphics/pokemon/goldeen/icon.4bpp");

	 const u32 gMonFrontPic_Seaking[] = INCBIN_U32("graphics/pokemon/seaking/front.4bpp.smol");
	 const u32 gMonBackPic_Seaking[] = INCBIN_U32("graphics/pokemon/seaking/back.4bpp.smol");
	 const u16 gMonPalette_Seaking[] = INCBIN_U16("graphics/pokemon/seaking/front.gbapal");
	 const u16 gMonShinyPalette_Seaking[] = INCBIN_U16("graphics/pokemon/seaking/back.gbapal");
	 const u8 gMonIcon_Seaking[] = INCBIN_U8("graphics/pokemon/seaking/icon.4bpp");

	 const u32 gMonFrontPic_Searex[] = INCBIN_U32("graphics/pokemon/searex/front.4bpp.smol");
	 const u32 gMonBackPic_Searex[] = INCBIN_U32("graphics/pokemon/searex/back.4bpp.smol");
	 const u16 gMonPalette_Searex[] = INCBIN_U16("graphics/pokemon/searex/front.gbapal");
	 const u16 gMonShinyPalette_Searex[] = INCBIN_U16("graphics/pokemon/searex/back.gbapal");
	 const u8 gMonIcon_Searex[] = INCBIN_U8("graphics/pokemon/searex/icon.4bpp");

	 const u32 gMonFrontPic_Caprisea[] = INCBIN_U32("graphics/pokemon/caprisea/front.4bpp.smol");
	 const u32 gMonBackPic_Caprisea[] = INCBIN_U32("graphics/pokemon/caprisea/back.4bpp.smol");
	 const u16 gMonPalette_Caprisea[] = INCBIN_U16("graphics/pokemon/caprisea/front.gbapal");
	 const u16 gMonShinyPalette_Caprisea[] = INCBIN_U16("graphics/pokemon/caprisea/back.gbapal");
	 const u8 gMonIcon_Caprisea[] = INCBIN_U8("graphics/pokemon/caprisea/icon.4bpp");

#endif //P_FAMILY_GOLDEEN

#if P_FAMILY_STARYU
	 const u32 gMonFrontPic_Staryu[] = INCBIN_U32("graphics/pokemon/staryu/front.4bpp.smol");
	 const u32 gMonBackPic_Staryu[] = INCBIN_U32("graphics/pokemon/staryu/back.4bpp.smol");
	 const u16 gMonPalette_Staryu[] = INCBIN_U16("graphics/pokemon/staryu/front.gbapal");
	 const u16 gMonShinyPalette_Staryu[] = INCBIN_U16("graphics/pokemon/staryu/back.gbapal");
	 const u8 gMonIcon_Staryu[] = INCBIN_U8("graphics/pokemon/staryu/icon.4bpp");

	 const u32 gMonFrontPic_Starmie[] = INCBIN_U32("graphics/pokemon/starmie/front.4bpp.smol");
	 const u32 gMonBackPic_Starmie[] = INCBIN_U32("graphics/pokemon/starmie/back.4bpp.smol");
	 const u16 gMonPalette_Starmie[] = INCBIN_U16("graphics/pokemon/starmie/front.gbapal");
	 const u16 gMonShinyPalette_Starmie[] = INCBIN_U16("graphics/pokemon/starmie/back.gbapal");
	 const u8 gMonIcon_Starmie[] = INCBIN_U8("graphics/pokemon/starmie/icon.4bpp");

	 const u32 gMonFrontPic_Starus[] = INCBIN_U32("graphics/pokemon/starus/front.4bpp.smol");
	 const u32 gMonBackPic_Starus[] = INCBIN_U32("graphics/pokemon/starus/back.4bpp.smol");
	 const u16 gMonPalette_Starus[] = INCBIN_U16("graphics/pokemon/starus/front.gbapal");
	 const u16 gMonShinyPalette_Starus[] = INCBIN_U16("graphics/pokemon/starus/back.gbapal");
	 const u8 gMonIcon_Starus[] = INCBIN_U8("graphics/pokemon/starus/icon.4bpp");

	 const u32 gMonFrontPic_Starwe[] = INCBIN_U32("graphics/pokemon/starwe/front.4bpp.smol");
	 const u32 gMonBackPic_Starwe[] = INCBIN_U32("graphics/pokemon/starwe/back.4bpp.smol");
	 const u16 gMonPalette_Starwe[] = INCBIN_U16("graphics/pokemon/starwe/front.gbapal");
	 const u16 gMonShinyPalette_Starwe[] = INCBIN_U16("graphics/pokemon/starwe/back.gbapal");
	 const u8 gMonIcon_Starwe[] = INCBIN_U8("graphics/pokemon/starwe/icon.4bpp");

#endif //P_FAMILY_STARYU

#if P_FAMILY_MR_MIME
	 const u32 gMonFrontPic_Mr_mime[] = INCBIN_U32("graphics/pokemon/mr_mime/front.4bpp.smol");
	 const u32 gMonBackPic_Mr_mime[] = INCBIN_U32("graphics/pokemon/mr_mime/back.4bpp.smol");
	 const u16 gMonPalette_Mr_mime[] = INCBIN_U16("graphics/pokemon/mr_mime/front.gbapal");
	 const u16 gMonShinyPalette_Mr_mime[] = INCBIN_U16("graphics/pokemon/mr_mime/back.gbapal");
	 const u8 gMonIcon_Mr_mime[] = INCBIN_U8("graphics/pokemon/mr_mime/icon.4bpp");

	 const u32 gMonFrontPic_Mr_jest[] = INCBIN_U32("graphics/pokemon/mr_jest/front.4bpp.smol");
	 const u32 gMonBackPic_Mr_jest[] = INCBIN_U32("graphics/pokemon/mr_jest/back.4bpp.smol");
	 const u16 gMonPalette_Mr_jest[] = INCBIN_U16("graphics/pokemon/mr_jest/front.gbapal");
	 const u16 gMonShinyPalette_Mr_jest[] = INCBIN_U16("graphics/pokemon/mr_jest/back.gbapal");
	 const u8 gMonIcon_Mr_jest[] = INCBIN_U8("graphics/pokemon/mr_jest/icon.4bpp");

	 const u32 gMonFrontPic_Mr_fool[] = INCBIN_U32("graphics/pokemon/mr_fool/front.4bpp.smol");
	 const u32 gMonBackPic_Mr_fool[] = INCBIN_U32("graphics/pokemon/mr_fool/back.4bpp.smol");
	 const u16 gMonPalette_Mr_fool[] = INCBIN_U16("graphics/pokemon/mr_fool/front.gbapal");
	 const u16 gMonShinyPalette_Mr_fool[] = INCBIN_U16("graphics/pokemon/mr_fool/back.gbapal");
	 const u8 gMonIcon_Mr_fool[] = INCBIN_U8("graphics/pokemon/mr_fool/icon.4bpp");

#endif //P_FAMILY_MR_MIME

#if P_FAMILY_SCYTHER
	 const u32 gMonFrontPic_Scyther[] = INCBIN_U32("graphics/pokemon/scyther/front.4bpp.smol");
	 const u32 gMonBackPic_Scyther[] = INCBIN_U32("graphics/pokemon/scyther/back.4bpp.smol");
	 const u16 gMonPalette_Scyther[] = INCBIN_U16("graphics/pokemon/scyther/front.gbapal");
	 const u16 gMonShinyPalette_Scyther[] = INCBIN_U16("graphics/pokemon/scyther/back.gbapal");
	 const u8 gMonIcon_Scyther[] = INCBIN_U8("graphics/pokemon/scyther/icon.4bpp");

	 const u32 gMonFrontPic_Scizor[] = INCBIN_U32("graphics/pokemon/scizor/front.4bpp.smol");
	 const u32 gMonBackPic_Scizor[] = INCBIN_U32("graphics/pokemon/scizor/back.4bpp.smol");
	 const u16 gMonPalette_Scizor[] = INCBIN_U16("graphics/pokemon/scizor/front.gbapal");
	 const u16 gMonShinyPalette_Scizor[] = INCBIN_U16("graphics/pokemon/scizor/back.gbapal");
	 const u8 gMonIcon_Scizor[] = INCBIN_U8("graphics/pokemon/scizor/icon.4bpp");

	 const u32 gMonFrontPic_Razer[] = INCBIN_U32("graphics/pokemon/razer/front.4bpp.smol");
	 const u32 gMonBackPic_Razer[] = INCBIN_U32("graphics/pokemon/razer/back.4bpp.smol");
	 const u16 gMonPalette_Razer[] = INCBIN_U16("graphics/pokemon/razer/front.gbapal");
	 const u16 gMonShinyPalette_Razer[] = INCBIN_U16("graphics/pokemon/razer/back.gbapal");
	 const u8 gMonIcon_Razer[] = INCBIN_U8("graphics/pokemon/razer/icon.4bpp");

	 const u32 gMonFrontPic_Claymor[] = INCBIN_U32("graphics/pokemon/claymor/front.4bpp.smol");
	 const u32 gMonBackPic_Claymor[] = INCBIN_U32("graphics/pokemon/claymor/back.4bpp.smol");
	 const u16 gMonPalette_Claymor[] = INCBIN_U16("graphics/pokemon/claymor/front.gbapal");
	 const u16 gMonShinyPalette_Claymor[] = INCBIN_U16("graphics/pokemon/claymor/back.gbapal");
	 const u8 gMonIcon_Claymor[] = INCBIN_U8("graphics/pokemon/claymor/icon.4bpp");

#endif //P_FAMILY_SCYTHER

#if P_FAMILY_JYNX
	 const u32 gMonFrontPic_Jynx[] = INCBIN_U32("graphics/pokemon/jynx/front.4bpp.smol");
	 const u32 gMonBackPic_Jynx[] = INCBIN_U32("graphics/pokemon/jynx/back.4bpp.smol");
	 const u16 gMonPalette_Jynx[] = INCBIN_U16("graphics/pokemon/jynx/front.gbapal");
	 const u16 gMonShinyPalette_Jynx[] = INCBIN_U16("graphics/pokemon/jynx/back.gbapal");
	 const u8 gMonIcon_Jynx[] = INCBIN_U8("graphics/pokemon/jynx/icon.4bpp");

	 const u32 gMonFrontPic_Jynkies[] = INCBIN_U32("graphics/pokemon/jynkies/front.4bpp.smol");
	 const u32 gMonBackPic_Jynkies[] = INCBIN_U32("graphics/pokemon/jynkies/back.4bpp.smol");
	 const u16 gMonPalette_Jynkies[] = INCBIN_U16("graphics/pokemon/jynkies/front.gbapal");
	 const u16 gMonShinyPalette_Jynkies[] = INCBIN_U16("graphics/pokemon/jynkies/back.gbapal");
	 const u8 gMonIcon_Jynkies[] = INCBIN_U8("graphics/pokemon/jynkies/icon.4bpp");

	 const u32 gMonFrontPic_Jeepers[] = INCBIN_U32("graphics/pokemon/jeepers/front.4bpp.smol");
	 const u32 gMonBackPic_Jeepers[] = INCBIN_U32("graphics/pokemon/jeepers/back.4bpp.smol");
	 const u16 gMonPalette_Jeepers[] = INCBIN_U16("graphics/pokemon/jeepers/front.gbapal");
	 const u16 gMonShinyPalette_Jeepers[] = INCBIN_U16("graphics/pokemon/jeepers/back.gbapal");
	 const u8 gMonIcon_Jeepers[] = INCBIN_U8("graphics/pokemon/jeepers/icon.4bpp");

#endif //P_FAMILY_JYNX

#if P_FAMILY_ELECTABUZZ
	 const u32 gMonFrontPic_Electabuzz[] = INCBIN_U32("graphics/pokemon/electabuzz/front.4bpp.smol");
	 const u32 gMonBackPic_Electabuzz[] = INCBIN_U32("graphics/pokemon/electabuzz/back.4bpp.smol");
	 const u16 gMonPalette_Electabuzz[] = INCBIN_U16("graphics/pokemon/electabuzz/front.gbapal");
	 const u16 gMonShinyPalette_Electabuzz[] = INCBIN_U16("graphics/pokemon/electabuzz/back.gbapal");
	 const u8 gMonIcon_Electabuzz[] = INCBIN_U8("graphics/pokemon/electabuzz/icon.4bpp");

	 const u32 gMonFrontPic_Electivire[] = INCBIN_U32("graphics/pokemon/electivire/front.4bpp.smol");
	 const u32 gMonBackPic_Electivire[] = INCBIN_U32("graphics/pokemon/electivire/back.4bpp.smol");
	 const u16 gMonPalette_Electivire[] = INCBIN_U16("graphics/pokemon/electivire/front.gbapal");
	 const u16 gMonShinyPalette_Electivire[] = INCBIN_U16("graphics/pokemon/electivire/back.gbapal");
	 const u8 gMonIcon_Electivire[] = INCBIN_U8("graphics/pokemon/electivire/icon.4bpp");

	 const u32 gMonFrontPic_Electivine[] = INCBIN_U32("graphics/pokemon/electivine/front.4bpp.smol");
	 const u32 gMonBackPic_Electivine[] = INCBIN_U32("graphics/pokemon/electivine/back.4bpp.smol");
	 const u16 gMonPalette_Electivine[] = INCBIN_U16("graphics/pokemon/electivine/front.gbapal");
	 const u16 gMonShinyPalette_Electivine[] = INCBIN_U16("graphics/pokemon/electivine/back.gbapal");
	 const u8 gMonIcon_Electivine[] = INCBIN_U8("graphics/pokemon/electivine/icon.4bpp");

	 const u32 gMonFrontPic_Electiwizz[] = INCBIN_U32("graphics/pokemon/electiwizz/front.4bpp.smol");
	 const u32 gMonBackPic_Electiwizz[] = INCBIN_U32("graphics/pokemon/electiwizz/back.4bpp.smol");
	 const u16 gMonPalette_Electiwizz[] = INCBIN_U16("graphics/pokemon/electiwizz/front.gbapal");
	 const u16 gMonShinyPalette_Electiwizz[] = INCBIN_U16("graphics/pokemon/electiwizz/back.gbapal");
	 const u8 gMonIcon_Electiwizz[] = INCBIN_U8("graphics/pokemon/electiwizz/icon.4bpp");

#endif //P_FAMILY_ELECTABUZZ

#if P_FAMILY_MAGMAR
	 const u32 gMonFrontPic_Magmar[] = INCBIN_U32("graphics/pokemon/magmar/front.4bpp.smol");
	 const u32 gMonBackPic_Magmar[] = INCBIN_U32("graphics/pokemon/magmar/back.4bpp.smol");
	 const u16 gMonPalette_Magmar[] = INCBIN_U16("graphics/pokemon/magmar/front.gbapal");
	 const u16 gMonShinyPalette_Magmar[] = INCBIN_U16("graphics/pokemon/magmar/back.gbapal");
	 const u8 gMonIcon_Magmar[] = INCBIN_U8("graphics/pokemon/magmar/icon.4bpp");

	 const u32 gMonFrontPic_Magmortar[] = INCBIN_U32("graphics/pokemon/magmortar/front.4bpp.smol");
	 const u32 gMonBackPic_Magmortar[] = INCBIN_U32("graphics/pokemon/magmortar/back.4bpp.smol");
	 const u16 gMonPalette_Magmortar[] = INCBIN_U16("graphics/pokemon/magmortar/front.gbapal");
	 const u16 gMonShinyPalette_Magmortar[] = INCBIN_U16("graphics/pokemon/magmortar/back.gbapal");
	 const u8 gMonIcon_Magmortar[] = INCBIN_U8("graphics/pokemon/magmortar/icon.4bpp");

	 const u32 gMonFrontPic_Magmore[] = INCBIN_U32("graphics/pokemon/magmore/front.4bpp.smol");
	 const u32 gMonBackPic_Magmore[] = INCBIN_U32("graphics/pokemon/magmore/back.4bpp.smol");
	 const u16 gMonPalette_Magmore[] = INCBIN_U16("graphics/pokemon/magmore/front.gbapal");
	 const u16 gMonShinyPalette_Magmore[] = INCBIN_U16("graphics/pokemon/magmore/back.gbapal");
	 const u8 gMonIcon_Magmore[] = INCBIN_U8("graphics/pokemon/magmore/icon.4bpp");

	 const u32 gMonFrontPic_Magmolten[] = INCBIN_U32("graphics/pokemon/magmolten/front.4bpp.smol");
	 const u32 gMonBackPic_Magmolten[] = INCBIN_U32("graphics/pokemon/magmolten/back.4bpp.smol");
	 const u16 gMonPalette_Magmolten[] = INCBIN_U16("graphics/pokemon/magmolten/front.gbapal");
	 const u16 gMonShinyPalette_Magmolten[] = INCBIN_U16("graphics/pokemon/magmolten/back.gbapal");
	 const u8 gMonIcon_Magmolten[] = INCBIN_U8("graphics/pokemon/magmolten/icon.4bpp");

#endif //P_FAMILY_MAGMAR

#if P_FAMILY_PINSIR
	 const u32 gMonFrontPic_Pinsir[] = INCBIN_U32("graphics/pokemon/pinsir/front.4bpp.smol");
	 const u32 gMonBackPic_Pinsir[] = INCBIN_U32("graphics/pokemon/pinsir/back.4bpp.smol");
	 const u16 gMonPalette_Pinsir[] = INCBIN_U16("graphics/pokemon/pinsir/front.gbapal");
	 const u16 gMonShinyPalette_Pinsir[] = INCBIN_U16("graphics/pokemon/pinsir/back.gbapal");
	 const u8 gMonIcon_Pinsir[] = INCBIN_U8("graphics/pokemon/pinsir/icon.4bpp");

	 const u32 gMonFrontPic_Pinsirior[] = INCBIN_U32("graphics/pokemon/pinsirior/front.4bpp.smol");
	 const u32 gMonBackPic_Pinsirior[] = INCBIN_U32("graphics/pokemon/pinsirior/back.4bpp.smol");
	 const u16 gMonPalette_Pinsirior[] = INCBIN_U16("graphics/pokemon/pinsirior/front.gbapal");
	 const u16 gMonShinyPalette_Pinsirior[] = INCBIN_U16("graphics/pokemon/pinsirior/back.gbapal");
	 const u8 gMonIcon_Pinsirior[] = INCBIN_U8("graphics/pokemon/pinsirior/icon.4bpp");

	 const u32 gMonFrontPic_Abyssir[] = INCBIN_U32("graphics/pokemon/abyssir/front.4bpp.smol");
	 const u32 gMonBackPic_Abyssir[] = INCBIN_U32("graphics/pokemon/abyssir/back.4bpp.smol");
	 const u16 gMonPalette_Abyssir[] = INCBIN_U16("graphics/pokemon/abyssir/front.gbapal");
	 const u16 gMonShinyPalette_Abyssir[] = INCBIN_U16("graphics/pokemon/abyssir/back.gbapal");
	 const u8 gMonIcon_Abyssir[] = INCBIN_U8("graphics/pokemon/abyssir/icon.4bpp");

#endif //P_FAMILY_PINSIR

#if P_FAMILY_TAUROS
	 const u32 gMonFrontPic_Tauros[] = INCBIN_U32("graphics/pokemon/tauros/front.4bpp.smol");
	 const u32 gMonBackPic_Tauros[] = INCBIN_U32("graphics/pokemon/tauros/back.4bpp.smol");
	 const u16 gMonPalette_Tauros[] = INCBIN_U16("graphics/pokemon/tauros/front.gbapal");
	 const u16 gMonShinyPalette_Tauros[] = INCBIN_U16("graphics/pokemon/tauros/back.gbapal");
	 const u8 gMonIcon_Tauros[] = INCBIN_U8("graphics/pokemon/tauros/icon.4bpp");

	 const u32 gMonFrontPic_Taurox[] = INCBIN_U32("graphics/pokemon/taurox/front.4bpp.smol");
	 const u32 gMonBackPic_Taurox[] = INCBIN_U32("graphics/pokemon/taurox/back.4bpp.smol");
	 const u16 gMonPalette_Taurox[] = INCBIN_U16("graphics/pokemon/taurox/front.gbapal");
	 const u16 gMonShinyPalette_Taurox[] = INCBIN_U16("graphics/pokemon/taurox/back.gbapal");
	 const u8 gMonIcon_Taurox[] = INCBIN_U8("graphics/pokemon/taurox/icon.4bpp");

	 const u32 gMonFrontPic_Oxenfree[] = INCBIN_U32("graphics/pokemon/oxenfree/front.4bpp.smol");
	 const u32 gMonBackPic_Oxenfree[] = INCBIN_U32("graphics/pokemon/oxenfree/back.4bpp.smol");
	 const u16 gMonPalette_Oxenfree[] = INCBIN_U16("graphics/pokemon/oxenfree/front.gbapal");
	 const u16 gMonShinyPalette_Oxenfree[] = INCBIN_U16("graphics/pokemon/oxenfree/back.gbapal");
	 const u8 gMonIcon_Oxenfree[] = INCBIN_U8("graphics/pokemon/oxenfree/icon.4bpp");

#endif //P_FAMILY_TAUROS

#if P_FAMILY_MAGIKARP
	 const u32 gMonFrontPic_Magikarp[] = INCBIN_U32("graphics/pokemon/magikarp/front.4bpp.smol");
	 const u32 gMonBackPic_Magikarp[] = INCBIN_U32("graphics/pokemon/magikarp/back.4bpp.smol");
	 const u16 gMonPalette_Magikarp[] = INCBIN_U16("graphics/pokemon/magikarp/front.gbapal");
	 const u16 gMonShinyPalette_Magikarp[] = INCBIN_U16("graphics/pokemon/magikarp/back.gbapal");
	 const u8 gMonIcon_Magikarp[] = INCBIN_U8("graphics/pokemon/magikarp/icon.4bpp");

	 const u32 gMonFrontPic_Gyarados[] = INCBIN_U32("graphics/pokemon/gyarados/front.4bpp.smol");
	 const u32 gMonBackPic_Gyarados[] = INCBIN_U32("graphics/pokemon/gyarados/back.4bpp.smol");
	 const u16 gMonPalette_Gyarados[] = INCBIN_U16("graphics/pokemon/gyarados/front.gbapal");
	 const u16 gMonShinyPalette_Gyarados[] = INCBIN_U16("graphics/pokemon/gyarados/back.gbapal");
	 const u8 gMonIcon_Gyarados[] = INCBIN_U8("graphics/pokemon/gyarados/icon.4bpp");

	 const u32 gMonFrontPic_Hydrados[] = INCBIN_U32("graphics/pokemon/hydrados/front.4bpp.smol");
	 const u32 gMonBackPic_Hydrados[] = INCBIN_U32("graphics/pokemon/hydrados/back.4bpp.smol");
	 const u16 gMonPalette_Hydrados[] = INCBIN_U16("graphics/pokemon/hydrados/front.gbapal");
	 const u16 gMonShinyPalette_Hydrados[] = INCBIN_U16("graphics/pokemon/hydrados/back.gbapal");
	 const u8 gMonIcon_Hydrados[] = INCBIN_U8("graphics/pokemon/hydrados/icon.4bpp");

	 const u32 gMonFrontPic_Dracosmic[] = INCBIN_U32("graphics/pokemon/dracosmic/front.4bpp.smol");
	 const u32 gMonBackPic_Dracosmic[] = INCBIN_U32("graphics/pokemon/dracosmic/back.4bpp.smol");
	 const u16 gMonPalette_Dracosmic[] = INCBIN_U16("graphics/pokemon/dracosmic/front.gbapal");
	 const u16 gMonShinyPalette_Dracosmic[] = INCBIN_U16("graphics/pokemon/dracosmic/back.gbapal");
	 const u8 gMonIcon_Dracosmic[] = INCBIN_U8("graphics/pokemon/dracosmic/icon.4bpp");

	 const u32 gMonFrontPic_Quazar[] = INCBIN_U32("graphics/pokemon/quazar/front.4bpp.smol");
	 const u32 gMonBackPic_Quazar[] = INCBIN_U32("graphics/pokemon/quazar/back.4bpp.smol");
	 const u16 gMonPalette_Quazar[] = INCBIN_U16("graphics/pokemon/quazar/front.gbapal");
	 const u16 gMonShinyPalette_Quazar[] = INCBIN_U16("graphics/pokemon/quazar/back.gbapal");
	 const u8 gMonIcon_Quazar[] = INCBIN_U8("graphics/pokemon/quazar/icon.4bpp");

#endif //P_FAMILY_MAGIKARP

#if P_FAMILY_LAPRAS
	 const u32 gMonFrontPic_Lapras[] = INCBIN_U32("graphics/pokemon/lapras/front.4bpp.smol");
	 const u32 gMonBackPic_Lapras[] = INCBIN_U32("graphics/pokemon/lapras/back.4bpp.smol");
	 const u16 gMonPalette_Lapras[] = INCBIN_U16("graphics/pokemon/lapras/front.gbapal");
	 const u16 gMonShinyPalette_Lapras[] = INCBIN_U16("graphics/pokemon/lapras/back.gbapal");
	 const u8 gMonIcon_Lapras[] = INCBIN_U8("graphics/pokemon/lapras/icon.4bpp");

	 const u32 gMonFrontPic_Lochlass[] = INCBIN_U32("graphics/pokemon/lochlass/front.4bpp.smol");
	 const u32 gMonBackPic_Lochlass[] = INCBIN_U32("graphics/pokemon/lochlass/back.4bpp.smol");
	 const u16 gMonPalette_Lochlass[] = INCBIN_U16("graphics/pokemon/lochlass/front.gbapal");
	 const u16 gMonShinyPalette_Lochlass[] = INCBIN_U16("graphics/pokemon/lochlass/back.gbapal");
	 const u8 gMonIcon_Lochlass[] = INCBIN_U8("graphics/pokemon/lochlass/icon.4bpp");

	 const u32 gMonFrontPic_Nessea[] = INCBIN_U32("graphics/pokemon/nessea/front.4bpp.smol");
	 const u32 gMonBackPic_Nessea[] = INCBIN_U32("graphics/pokemon/nessea/back.4bpp.smol");
	 const u16 gMonPalette_Nessea[] = INCBIN_U16("graphics/pokemon/nessea/front.gbapal");
	 const u16 gMonShinyPalette_Nessea[] = INCBIN_U16("graphics/pokemon/nessea/back.gbapal");
	 const u8 gMonIcon_Nessea[] = INCBIN_U8("graphics/pokemon/nessea/icon.4bpp");

#endif //P_FAMILY_LAPRAS

#if P_FAMILY_DITTO
	 const u32 gMonFrontPic_Ditto[] = INCBIN_U32("graphics/pokemon/ditto/front.4bpp.smol");
	 const u32 gMonBackPic_Ditto[] = INCBIN_U32("graphics/pokemon/ditto/back.4bpp.smol");
	 const u16 gMonPalette_Ditto[] = INCBIN_U16("graphics/pokemon/ditto/front.gbapal");
	 const u16 gMonShinyPalette_Ditto[] = INCBIN_U16("graphics/pokemon/ditto/back.gbapal");
	 const u8 gMonIcon_Ditto[] = INCBIN_U8("graphics/pokemon/ditto/icon.4bpp");

	 const u32 gMonFrontPic_Morpho[] = INCBIN_U32("graphics/pokemon/morpho/front.4bpp.smol");
	 const u32 gMonBackPic_Morpho[] = INCBIN_U32("graphics/pokemon/morpho/back.4bpp.smol");
	 const u16 gMonPalette_Morpho[] = INCBIN_U16("graphics/pokemon/morpho/front.gbapal");
	 const u16 gMonShinyPalette_Morpho[] = INCBIN_U16("graphics/pokemon/morpho/back.gbapal");
	 const u8 gMonIcon_Morpho[] = INCBIN_U8("graphics/pokemon/morpho/icon.4bpp");

	 const u32 gMonFrontPic_Metamorpho[] = INCBIN_U32("graphics/pokemon/metamorpho/front.4bpp.smol");
	 const u32 gMonBackPic_Metamorpho[] = INCBIN_U32("graphics/pokemon/metamorpho/back.4bpp.smol");
	 const u16 gMonPalette_Metamorpho[] = INCBIN_U16("graphics/pokemon/metamorpho/front.gbapal");
	 const u16 gMonShinyPalette_Metamorpho[] = INCBIN_U16("graphics/pokemon/metamorpho/back.gbapal");
	 const u8 gMonIcon_Metamorpho[] = INCBIN_U8("graphics/pokemon/metamorpho/icon.4bpp");

#endif //P_FAMILY_DITTO

#if P_FAMILY_EEVEE
	 const u32 gMonFrontPic_Eevee[] = INCBIN_U32("graphics/pokemon/eevee/front.4bpp.smol");
	 const u32 gMonBackPic_Eevee[] = INCBIN_U32("graphics/pokemon/eevee/back.4bpp.smol");
	 const u16 gMonPalette_Eevee[] = INCBIN_U16("graphics/pokemon/eevee/front.gbapal");
	 const u16 gMonShinyPalette_Eevee[] = INCBIN_U16("graphics/pokemon/eevee/back.gbapal");
	 const u8 gMonIcon_Eevee[] = INCBIN_U8("graphics/pokemon/eevee/icon.4bpp");

	 const u32 gMonFrontPic_Vaporeon[] = INCBIN_U32("graphics/pokemon/vaporeon/front.4bpp.smol");
	 const u32 gMonBackPic_Vaporeon[] = INCBIN_U32("graphics/pokemon/vaporeon/back.4bpp.smol");
	 const u16 gMonPalette_Vaporeon[] = INCBIN_U16("graphics/pokemon/vaporeon/front.gbapal");
	 const u16 gMonShinyPalette_Vaporeon[] = INCBIN_U16("graphics/pokemon/vaporeon/back.gbapal");
	 const u8 gMonIcon_Vaporeon[] = INCBIN_U8("graphics/pokemon/vaporeon/icon.4bpp");

	 const u32 gMonFrontPic_Riveon[] = INCBIN_U32("graphics/pokemon/riveon/front.4bpp.smol");
	 const u32 gMonBackPic_Riveon[] = INCBIN_U32("graphics/pokemon/riveon/back.4bpp.smol");
	 const u16 gMonPalette_Riveon[] = INCBIN_U16("graphics/pokemon/riveon/front.gbapal");
	 const u16 gMonShinyPalette_Riveon[] = INCBIN_U16("graphics/pokemon/riveon/back.gbapal");
	 const u8 gMonIcon_Riveon[] = INCBIN_U8("graphics/pokemon/riveon/icon.4bpp");

	 const u32 gMonFrontPic_Brineon[] = INCBIN_U32("graphics/pokemon/brineon/front.4bpp.smol");
	 const u32 gMonBackPic_Brineon[] = INCBIN_U32("graphics/pokemon/brineon/back.4bpp.smol");
	 const u16 gMonPalette_Brineon[] = INCBIN_U16("graphics/pokemon/brineon/front.gbapal");
	 const u16 gMonShinyPalette_Brineon[] = INCBIN_U16("graphics/pokemon/brineon/back.gbapal");
	 const u8 gMonIcon_Brineon[] = INCBIN_U8("graphics/pokemon/brineon/icon.4bpp");

	 const u32 gMonFrontPic_Jolteon[] = INCBIN_U32("graphics/pokemon/jolteon/front.4bpp.smol");
	 const u32 gMonBackPic_Jolteon[] = INCBIN_U32("graphics/pokemon/jolteon/back.4bpp.smol");
	 const u16 gMonPalette_Jolteon[] = INCBIN_U16("graphics/pokemon/jolteon/front.gbapal");
	 const u16 gMonShinyPalette_Jolteon[] = INCBIN_U16("graphics/pokemon/jolteon/back.gbapal");
	 const u8 gMonIcon_Jolteon[] = INCBIN_U8("graphics/pokemon/jolteon/icon.4bpp");

	 const u32 gMonFrontPic_Plasmeon[] = INCBIN_U32("graphics/pokemon/plasmeon/front.4bpp.smol");
	 const u32 gMonBackPic_Plasmeon[] = INCBIN_U32("graphics/pokemon/plasmeon/back.4bpp.smol");
	 const u16 gMonPalette_Plasmeon[] = INCBIN_U16("graphics/pokemon/plasmeon/front.gbapal");
	 const u16 gMonShinyPalette_Plasmeon[] = INCBIN_U16("graphics/pokemon/plasmeon/back.gbapal");
	 const u8 gMonIcon_Plasmeon[] = INCBIN_U8("graphics/pokemon/plasmeon/icon.4bpp");

	 const u32 gMonFrontPic_Galveon[] = INCBIN_U32("graphics/pokemon/galveon/front.4bpp.smol");
	 const u32 gMonBackPic_Galveon[] = INCBIN_U32("graphics/pokemon/galveon/back.4bpp.smol");
	 const u16 gMonPalette_Galveon[] = INCBIN_U16("graphics/pokemon/galveon/front.gbapal");
	 const u16 gMonShinyPalette_Galveon[] = INCBIN_U16("graphics/pokemon/galveon/back.gbapal");
	 const u8 gMonIcon_Galveon[] = INCBIN_U8("graphics/pokemon/galveon/icon.4bpp");

	 const u32 gMonFrontPic_Flareon[] = INCBIN_U32("graphics/pokemon/flareon/front.4bpp.smol");
	 const u32 gMonBackPic_Flareon[] = INCBIN_U32("graphics/pokemon/flareon/back.4bpp.smol");
	 const u16 gMonPalette_Flareon[] = INCBIN_U16("graphics/pokemon/flareon/front.gbapal");
	 const u16 gMonShinyPalette_Flareon[] = INCBIN_U16("graphics/pokemon/flareon/back.gbapal");
	 const u8 gMonIcon_Flareon[] = INCBIN_U8("graphics/pokemon/flareon/icon.4bpp");

	 const u32 gMonFrontPic_Smoldeon[] = INCBIN_U32("graphics/pokemon/smoldeon/front.4bpp.smol");
	 const u32 gMonBackPic_Smoldeon[] = INCBIN_U32("graphics/pokemon/smoldeon/back.4bpp.smol");
	 const u16 gMonPalette_Smoldeon[] = INCBIN_U16("graphics/pokemon/smoldeon/front.gbapal");
	 const u16 gMonShinyPalette_Smoldeon[] = INCBIN_U16("graphics/pokemon/smoldeon/back.gbapal");
	 const u8 gMonIcon_Smoldeon[] = INCBIN_U8("graphics/pokemon/smoldeon/icon.4bpp");

	 const u32 gMonFrontPic_Inferneon[] = INCBIN_U32("graphics/pokemon/inferneon/front.4bpp.smol");
	 const u32 gMonBackPic_Inferneon[] = INCBIN_U32("graphics/pokemon/inferneon/back.4bpp.smol");
	 const u16 gMonPalette_Inferneon[] = INCBIN_U16("graphics/pokemon/inferneon/front.gbapal");
	 const u16 gMonShinyPalette_Inferneon[] = INCBIN_U16("graphics/pokemon/inferneon/back.gbapal");
	 const u8 gMonIcon_Inferneon[] = INCBIN_U8("graphics/pokemon/inferneon/icon.4bpp");

#endif //P_FAMILY_EEVEE

#if P_FAMILY_PORYGON
	 const u32 gMonFrontPic_Porygon[] = INCBIN_U32("graphics/pokemon/porygon/front.4bpp.smol");
	 const u32 gMonBackPic_Porygon[] = INCBIN_U32("graphics/pokemon/porygon/back.4bpp.smol");
	 const u16 gMonPalette_Porygon[] = INCBIN_U16("graphics/pokemon/porygon/front.gbapal");
	 const u16 gMonShinyPalette_Porygon[] = INCBIN_U16("graphics/pokemon/porygon/back.gbapal");
	 const u8 gMonIcon_Porygon[] = INCBIN_U8("graphics/pokemon/porygon/icon.4bpp");

	 const u32 gMonFrontPic_Porygon2[] = INCBIN_U32("graphics/pokemon/porygon2/front.4bpp.smol");
	 const u32 gMonBackPic_Porygon2[] = INCBIN_U32("graphics/pokemon/porygon2/back.4bpp.smol");
	 const u16 gMonPalette_Porygon2[] = INCBIN_U16("graphics/pokemon/porygon2/front.gbapal");
	 const u16 gMonShinyPalette_Porygon2[] = INCBIN_U16("graphics/pokemon/porygon2/back.gbapal");
	 const u8 gMonIcon_Porygon2[] = INCBIN_U8("graphics/pokemon/porygon2/icon.4bpp");

	 const u32 gMonFrontPic_Porygonz[] = INCBIN_U32("graphics/pokemon/porygonz/front.4bpp.smol");
	 const u32 gMonBackPic_Porygonz[] = INCBIN_U32("graphics/pokemon/porygonz/back.4bpp.smol");
	 const u16 gMonPalette_Porygonz[] = INCBIN_U16("graphics/pokemon/porygonz/front.gbapal");
	 const u16 gMonShinyPalette_Porygonz[] = INCBIN_U16("graphics/pokemon/porygonz/back.gbapal");
	 const u8 gMonIcon_Porygonz[] = INCBIN_U8("graphics/pokemon/porygonz/icon.4bpp");

	 const u32 gMonFrontPic_Porygonx[] = INCBIN_U32("graphics/pokemon/porygonx/front.4bpp.smol");
	 const u32 gMonBackPic_Porygonx[] = INCBIN_U32("graphics/pokemon/porygonx/back.4bpp.smol");
	 const u16 gMonPalette_Porygonx[] = INCBIN_U16("graphics/pokemon/porygonx/front.gbapal");
	 const u16 gMonShinyPalette_Porygonx[] = INCBIN_U16("graphics/pokemon/porygonx/back.gbapal");
	 const u8 gMonIcon_Porygonx[] = INCBIN_U8("graphics/pokemon/porygonx/icon.4bpp");

	 const u32 gMonFrontPic_Porygonq[] = INCBIN_U32("graphics/pokemon/porygonq/front.4bpp.smol");
	 const u32 gMonBackPic_Porygonq[] = INCBIN_U32("graphics/pokemon/porygonq/back.4bpp.smol");
	 const u16 gMonPalette_Porygonq[] = INCBIN_U16("graphics/pokemon/porygonq/front.gbapal");
	 const u16 gMonShinyPalette_Porygonq[] = INCBIN_U16("graphics/pokemon/porygonq/back.gbapal");
	 const u8 gMonIcon_Porygonq[] = INCBIN_U8("graphics/pokemon/porygonq/icon.4bpp");

	 const u32 gMonFrontPic_Porygon2a4[] = INCBIN_U32("graphics/pokemon/porygon2a4/front.4bpp.smol");
	 const u32 gMonBackPic_Porygon2a4[] = INCBIN_U32("graphics/pokemon/porygon2a4/back.4bpp.smol");
	 const u16 gMonPalette_Porygon2a4[] = INCBIN_U16("graphics/pokemon/porygon2a4/front.gbapal");
	 const u16 gMonShinyPalette_Porygon2a4[] = INCBIN_U16("graphics/pokemon/porygon2a4/back.gbapal");
	 const u8 gMonIcon_Porygon2a4[] = INCBIN_U8("graphics/pokemon/porygon2a4/icon.4bpp");

#endif //P_FAMILY_PORYGON

#if P_FAMILY_OMANYTE
	 const u32 gMonFrontPic_Omanyte[] = INCBIN_U32("graphics/pokemon/omanyte/front.4bpp.smol");
	 const u32 gMonBackPic_Omanyte[] = INCBIN_U32("graphics/pokemon/omanyte/back.4bpp.smol");
	 const u16 gMonPalette_Omanyte[] = INCBIN_U16("graphics/pokemon/omanyte/front.gbapal");
	 const u16 gMonShinyPalette_Omanyte[] = INCBIN_U16("graphics/pokemon/omanyte/back.gbapal");
	 const u8 gMonIcon_Omanyte[] = INCBIN_U8("graphics/pokemon/omanyte/icon.4bpp");

	 const u32 gMonFrontPic_Omastar[] = INCBIN_U32("graphics/pokemon/omastar/front.4bpp.smol");
	 const u32 gMonBackPic_Omastar[] = INCBIN_U32("graphics/pokemon/omastar/back.4bpp.smol");
	 const u16 gMonPalette_Omastar[] = INCBIN_U16("graphics/pokemon/omastar/front.gbapal");
	 const u16 gMonShinyPalette_Omastar[] = INCBIN_U16("graphics/pokemon/omastar/back.gbapal");
	 const u8 gMonIcon_Omastar[] = INCBIN_U8("graphics/pokemon/omastar/icon.4bpp");

	 const u32 gMonFrontPic_Omapal[] = INCBIN_U32("graphics/pokemon/omapal/front.4bpp.smol");
	 const u32 gMonBackPic_Omapal[] = INCBIN_U32("graphics/pokemon/omapal/back.4bpp.smol");
	 const u16 gMonPalette_Omapal[] = INCBIN_U16("graphics/pokemon/omapal/front.gbapal");
	 const u16 gMonShinyPalette_Omapal[] = INCBIN_U16("graphics/pokemon/omapal/back.gbapal");
	 const u8 gMonIcon_Omapal[] = INCBIN_U8("graphics/pokemon/omapal/icon.4bpp");

	 const u32 gMonFrontPic_Omagus[] = INCBIN_U32("graphics/pokemon/omagus/front.4bpp.smol");
	 const u32 gMonBackPic_Omagus[] = INCBIN_U32("graphics/pokemon/omagus/back.4bpp.smol");
	 const u16 gMonPalette_Omagus[] = INCBIN_U16("graphics/pokemon/omagus/front.gbapal");
	 const u16 gMonShinyPalette_Omagus[] = INCBIN_U16("graphics/pokemon/omagus/back.gbapal");
	 const u8 gMonIcon_Omagus[] = INCBIN_U8("graphics/pokemon/omagus/icon.4bpp");

#endif //P_FAMILY_OMANYTE

#if P_FAMILY_KABUTO
	 const u32 gMonFrontPic_Kabuto[] = INCBIN_U32("graphics/pokemon/kabuto/front.4bpp.smol");
	 const u32 gMonBackPic_Kabuto[] = INCBIN_U32("graphics/pokemon/kabuto/back.4bpp.smol");
	 const u16 gMonPalette_Kabuto[] = INCBIN_U16("graphics/pokemon/kabuto/front.gbapal");
	 const u16 gMonShinyPalette_Kabuto[] = INCBIN_U16("graphics/pokemon/kabuto/back.gbapal");
	 const u8 gMonIcon_Kabuto[] = INCBIN_U8("graphics/pokemon/kabuto/icon.4bpp");

	 const u32 gMonFrontPic_Kabutops[] = INCBIN_U32("graphics/pokemon/kabutops/front.4bpp.smol");
	 const u32 gMonBackPic_Kabutops[] = INCBIN_U32("graphics/pokemon/kabutops/back.4bpp.smol");
	 const u16 gMonPalette_Kabutops[] = INCBIN_U16("graphics/pokemon/kabutops/front.gbapal");
	 const u16 gMonShinyPalette_Kabutops[] = INCBIN_U16("graphics/pokemon/kabutops/back.gbapal");
	 const u8 gMonIcon_Kabutops[] = INCBIN_U8("graphics/pokemon/kabutops/icon.4bpp");

	 const u32 gMonFrontPic_Kabutak[] = INCBIN_U32("graphics/pokemon/kabutak/front.4bpp.smol");
	 const u32 gMonBackPic_Kabutak[] = INCBIN_U32("graphics/pokemon/kabutak/back.4bpp.smol");
	 const u16 gMonPalette_Kabutak[] = INCBIN_U16("graphics/pokemon/kabutak/front.gbapal");
	 const u16 gMonShinyPalette_Kabutak[] = INCBIN_U16("graphics/pokemon/kabutak/back.gbapal");
	 const u8 gMonIcon_Kabutak[] = INCBIN_U8("graphics/pokemon/kabutak/icon.4bpp");

	 const u32 gMonFrontPic_Kabustion[] = INCBIN_U32("graphics/pokemon/kabustion/front.4bpp.smol");
	 const u32 gMonBackPic_Kabustion[] = INCBIN_U32("graphics/pokemon/kabustion/back.4bpp.smol");
	 const u16 gMonPalette_Kabustion[] = INCBIN_U16("graphics/pokemon/kabustion/front.gbapal");
	 const u16 gMonShinyPalette_Kabustion[] = INCBIN_U16("graphics/pokemon/kabustion/back.gbapal");
	 const u8 gMonIcon_Kabustion[] = INCBIN_U8("graphics/pokemon/kabustion/icon.4bpp");

#endif //P_FAMILY_KABUTO

#if P_FAMILY_AERODACTYL
	 const u32 gMonFrontPic_Aerodactyl[] = INCBIN_U32("graphics/pokemon/aerodactyl/front.4bpp.smol");
	 const u32 gMonBackPic_Aerodactyl[] = INCBIN_U32("graphics/pokemon/aerodactyl/back.4bpp.smol");
	 const u16 gMonPalette_Aerodactyl[] = INCBIN_U16("graphics/pokemon/aerodactyl/front.gbapal");
	 const u16 gMonShinyPalette_Aerodactyl[] = INCBIN_U16("graphics/pokemon/aerodactyl/back.gbapal");
	 const u8 gMonIcon_Aerodactyl[] = INCBIN_U8("graphics/pokemon/aerodactyl/icon.4bpp");

	 const u32 gMonFrontPic_Mandiluft[] = INCBIN_U32("graphics/pokemon/mandiluft/front.4bpp.smol");
	 const u32 gMonBackPic_Mandiluft[] = INCBIN_U32("graphics/pokemon/mandiluft/back.4bpp.smol");
	 const u16 gMonPalette_Mandiluft[] = INCBIN_U16("graphics/pokemon/mandiluft/front.gbapal");
	 const u16 gMonShinyPalette_Mandiluft[] = INCBIN_U16("graphics/pokemon/mandiluft/back.gbapal");
	 const u8 gMonIcon_Mandiluft[] = INCBIN_U8("graphics/pokemon/mandiluft/icon.4bpp");

	 const u32 gMonFrontPic_Ambalithic[] = INCBIN_U32("graphics/pokemon/ambalithic/front.4bpp.smol");
	 const u32 gMonBackPic_Ambalithic[] = INCBIN_U32("graphics/pokemon/ambalithic/back.4bpp.smol");
	 const u16 gMonPalette_Ambalithic[] = INCBIN_U16("graphics/pokemon/ambalithic/front.gbapal");
	 const u16 gMonShinyPalette_Ambalithic[] = INCBIN_U16("graphics/pokemon/ambalithic/back.gbapal");
	 const u8 gMonIcon_Ambalithic[] = INCBIN_U8("graphics/pokemon/ambalithic/icon.4bpp");

#endif //P_FAMILY_AERODACTYL

#if P_FAMILY_SNORLAX
	 const u32 gMonFrontPic_Snorlax[] = INCBIN_U32("graphics/pokemon/snorlax/front.4bpp.smol");
	 const u32 gMonBackPic_Snorlax[] = INCBIN_U32("graphics/pokemon/snorlax/back.4bpp.smol");
	 const u16 gMonPalette_Snorlax[] = INCBIN_U16("graphics/pokemon/snorlax/front.gbapal");
	 const u16 gMonShinyPalette_Snorlax[] = INCBIN_U16("graphics/pokemon/snorlax/back.gbapal");
	 const u8 gMonIcon_Snorlax[] = INCBIN_U8("graphics/pokemon/snorlax/icon.4bpp");

	 const u32 gMonFrontPic_Actlax[] = INCBIN_U32("graphics/pokemon/actlax/front.4bpp.smol");
	 const u32 gMonBackPic_Actlax[] = INCBIN_U32("graphics/pokemon/actlax/back.4bpp.smol");
	 const u16 gMonPalette_Actlax[] = INCBIN_U16("graphics/pokemon/actlax/front.gbapal");
	 const u16 gMonShinyPalette_Actlax[] = INCBIN_U16("graphics/pokemon/actlax/back.gbapal");
	 const u8 gMonIcon_Actlax[] = INCBIN_U8("graphics/pokemon/actlax/icon.4bpp");

	 const u32 gMonFrontPic_Grizzlax[] = INCBIN_U32("graphics/pokemon/grizzlax/front.4bpp.smol");
	 const u32 gMonBackPic_Grizzlax[] = INCBIN_U32("graphics/pokemon/grizzlax/back.4bpp.smol");
	 const u16 gMonPalette_Grizzlax[] = INCBIN_U16("graphics/pokemon/grizzlax/front.gbapal");
	 const u16 gMonShinyPalette_Grizzlax[] = INCBIN_U16("graphics/pokemon/grizzlax/back.gbapal");
	 const u8 gMonIcon_Grizzlax[] = INCBIN_U8("graphics/pokemon/grizzlax/icon.4bpp");

#endif //P_FAMILY_SNORLAX

#if P_FAMILY_ARTICUNO
	 const u32 gMonFrontPic_Articuno[] = INCBIN_U32("graphics/pokemon/articuno/front.4bpp.smol");
	 const u32 gMonBackPic_Articuno[] = INCBIN_U32("graphics/pokemon/articuno/back.4bpp.smol");
	 const u16 gMonPalette_Articuno[] = INCBIN_U16("graphics/pokemon/articuno/front.gbapal");
	 const u16 gMonShinyPalette_Articuno[] = INCBIN_U16("graphics/pokemon/articuno/back.gbapal");
	 const u8 gMonIcon_Articuno[] = INCBIN_U8("graphics/pokemon/articuno/icon.4bpp");

	 const u32 gMonFrontPic_Snowone[] = INCBIN_U32("graphics/pokemon/snowone/front.4bpp.smol");
	 const u32 gMonBackPic_Snowone[] = INCBIN_U32("graphics/pokemon/snowone/back.4bpp.smol");
	 const u16 gMonPalette_Snowone[] = INCBIN_U16("graphics/pokemon/snowone/front.gbapal");
	 const u16 gMonShinyPalette_Snowone[] = INCBIN_U16("graphics/pokemon/snowone/back.gbapal");
	 const u8 gMonIcon_Snowone[] = INCBIN_U8("graphics/pokemon/snowone/icon.4bpp");

	 const u32 gMonFrontPic_Frostunus[] = INCBIN_U32("graphics/pokemon/frostunus/front.4bpp.smol");
	 const u32 gMonBackPic_Frostunus[] = INCBIN_U32("graphics/pokemon/frostunus/back.4bpp.smol");
	 const u16 gMonPalette_Frostunus[] = INCBIN_U16("graphics/pokemon/frostunus/front.gbapal");
	 const u16 gMonShinyPalette_Frostunus[] = INCBIN_U16("graphics/pokemon/frostunus/back.gbapal");
	 const u8 gMonIcon_Frostunus[] = INCBIN_U8("graphics/pokemon/frostunus/icon.4bpp");

#endif //P_FAMILY_ARTICUNO

#if P_FAMILY_ZAPDOS
	 const u32 gMonFrontPic_Zapdos[] = INCBIN_U32("graphics/pokemon/zapdos/front.4bpp.smol");
	 const u32 gMonBackPic_Zapdos[] = INCBIN_U32("graphics/pokemon/zapdos/back.4bpp.smol");
	 const u16 gMonPalette_Zapdos[] = INCBIN_U16("graphics/pokemon/zapdos/front.gbapal");
	 const u16 gMonShinyPalette_Zapdos[] = INCBIN_U16("graphics/pokemon/zapdos/back.gbapal");
	 const u8 gMonIcon_Zapdos[] = INCBIN_U8("graphics/pokemon/zapdos/icon.4bpp");

	 const u32 gMonFrontPic_Shockatoo[] = INCBIN_U32("graphics/pokemon/shockatoo/front.4bpp.smol");
	 const u32 gMonBackPic_Shockatoo[] = INCBIN_U32("graphics/pokemon/shockatoo/back.4bpp.smol");
	 const u16 gMonPalette_Shockatoo[] = INCBIN_U16("graphics/pokemon/shockatoo/front.gbapal");
	 const u16 gMonShinyPalette_Shockatoo[] = INCBIN_U16("graphics/pokemon/shockatoo/back.gbapal");
	 const u8 gMonIcon_Shockatoo[] = INCBIN_U8("graphics/pokemon/shockatoo/icon.4bpp");

	 const u32 gMonFrontPic_Voltduo[] = INCBIN_U32("graphics/pokemon/voltduo/front.4bpp.smol");
	 const u32 gMonBackPic_Voltduo[] = INCBIN_U32("graphics/pokemon/voltduo/back.4bpp.smol");
	 const u16 gMonPalette_Voltduo[] = INCBIN_U16("graphics/pokemon/voltduo/front.gbapal");
	 const u16 gMonShinyPalette_Voltduo[] = INCBIN_U16("graphics/pokemon/voltduo/back.gbapal");
	 const u8 gMonIcon_Voltduo[] = INCBIN_U8("graphics/pokemon/voltduo/icon.4bpp");

#endif //P_FAMILY_ZAPDOS

#if P_FAMILY_MOLTRES
	 const u32 gMonFrontPic_Moltres[] = INCBIN_U32("graphics/pokemon/moltres/front.4bpp.smol");
	 const u32 gMonBackPic_Moltres[] = INCBIN_U32("graphics/pokemon/moltres/back.4bpp.smol");
	 const u16 gMonPalette_Moltres[] = INCBIN_U16("graphics/pokemon/moltres/front.gbapal");
	 const u16 gMonShinyPalette_Moltres[] = INCBIN_U16("graphics/pokemon/moltres/back.gbapal");
	 const u8 gMonIcon_Moltres[] = INCBIN_U8("graphics/pokemon/moltres/icon.4bpp");

	 const u32 gMonFrontPic_Ignithree[] = INCBIN_U32("graphics/pokemon/ignithree/front.4bpp.smol");
	 const u32 gMonBackPic_Ignithree[] = INCBIN_U32("graphics/pokemon/ignithree/back.4bpp.smol");
	 const u16 gMonPalette_Ignithree[] = INCBIN_U16("graphics/pokemon/ignithree/front.gbapal");
	 const u16 gMonShinyPalette_Ignithree[] = INCBIN_U16("graphics/pokemon/ignithree/back.gbapal");
	 const u8 gMonIcon_Ignithree[] = INCBIN_U8("graphics/pokemon/ignithree/icon.4bpp");

	 const u32 gMonFrontPic_Inferntri[] = INCBIN_U32("graphics/pokemon/inferntri/front.4bpp.smol");
	 const u32 gMonBackPic_Inferntri[] = INCBIN_U32("graphics/pokemon/inferntri/back.4bpp.smol");
	 const u16 gMonPalette_Inferntri[] = INCBIN_U16("graphics/pokemon/inferntri/front.gbapal");
	 const u16 gMonShinyPalette_Inferntri[] = INCBIN_U16("graphics/pokemon/inferntri/back.gbapal");
	 const u8 gMonIcon_Inferntri[] = INCBIN_U8("graphics/pokemon/inferntri/icon.4bpp");

#endif //P_FAMILY_MOLTRES

#if P_FAMILY_DRATINI
	 const u32 gMonFrontPic_Dratini[] = INCBIN_U32("graphics/pokemon/dratini/front.4bpp.smol");
	 const u32 gMonBackPic_Dratini[] = INCBIN_U32("graphics/pokemon/dratini/back.4bpp.smol");
	 const u16 gMonPalette_Dratini[] = INCBIN_U16("graphics/pokemon/dratini/front.gbapal");
	 const u16 gMonShinyPalette_Dratini[] = INCBIN_U16("graphics/pokemon/dratini/back.gbapal");
	 const u8 gMonIcon_Dratini[] = INCBIN_U8("graphics/pokemon/dratini/icon.4bpp");

	 const u32 gMonFrontPic_Dragonair[] = INCBIN_U32("graphics/pokemon/dragonair/front.4bpp.smol");
	 const u32 gMonBackPic_Dragonair[] = INCBIN_U32("graphics/pokemon/dragonair/back.4bpp.smol");
	 const u16 gMonPalette_Dragonair[] = INCBIN_U16("graphics/pokemon/dragonair/front.gbapal");
	 const u16 gMonShinyPalette_Dragonair[] = INCBIN_U16("graphics/pokemon/dragonair/back.gbapal");
	 const u8 gMonIcon_Dragonair[] = INCBIN_U8("graphics/pokemon/dragonair/icon.4bpp");

	 const u32 gMonFrontPic_Dragonite[] = INCBIN_U32("graphics/pokemon/dragonite/front.4bpp.smol");
	 const u32 gMonBackPic_Dragonite[] = INCBIN_U32("graphics/pokemon/dragonite/back.4bpp.smol");
	 const u16 gMonPalette_Dragonite[] = INCBIN_U16("graphics/pokemon/dragonite/front.gbapal");
	 const u16 gMonShinyPalette_Dragonite[] = INCBIN_U16("graphics/pokemon/dragonite/back.gbapal");
	 const u8 gMonIcon_Dragonite[] = INCBIN_U8("graphics/pokemon/dragonite/icon.4bpp");

	 const u32 gMonFrontPic_Dragonier[] = INCBIN_U32("graphics/pokemon/dragonier/front.4bpp.smol");
	 const u32 gMonBackPic_Dragonier[] = INCBIN_U32("graphics/pokemon/dragonier/back.4bpp.smol");
	 const u16 gMonPalette_Dragonier[] = INCBIN_U16("graphics/pokemon/dragonier/front.gbapal");
	 const u16 gMonShinyPalette_Dragonier[] = INCBIN_U16("graphics/pokemon/dragonier/back.gbapal");
	 const u8 gMonIcon_Dragonier[] = INCBIN_U8("graphics/pokemon/dragonier/icon.4bpp");

	 const u32 gMonFrontPic_Dragonace[] = INCBIN_U32("graphics/pokemon/dragonace/front.4bpp.smol");
	 const u32 gMonBackPic_Dragonace[] = INCBIN_U32("graphics/pokemon/dragonace/back.4bpp.smol");
	 const u16 gMonPalette_Dragonace[] = INCBIN_U16("graphics/pokemon/dragonace/front.gbapal");
	 const u16 gMonShinyPalette_Dragonace[] = INCBIN_U16("graphics/pokemon/dragonace/back.gbapal");
	 const u8 gMonIcon_Dragonace[] = INCBIN_U8("graphics/pokemon/dragonace/icon.4bpp");

	 const u32 gMonFrontPic_Dragontale[] = INCBIN_U32("graphics/pokemon/dragontale/front.4bpp.smol");
	 const u32 gMonBackPic_Dragontale[] = INCBIN_U32("graphics/pokemon/dragontale/back.4bpp.smol");
	 const u16 gMonPalette_Dragontale[] = INCBIN_U16("graphics/pokemon/dragontale/front.gbapal");
	 const u16 gMonShinyPalette_Dragontale[] = INCBIN_U16("graphics/pokemon/dragontale/back.gbapal");
	 const u8 gMonIcon_Dragontale[] = INCBIN_U8("graphics/pokemon/dragontale/icon.4bpp");

#endif //P_FAMILY_DRATINI

#if P_FAMILY_MEWTWO
	 const u32 gMonFrontPic_Mewtwo[] = INCBIN_U32("graphics/pokemon/mewtwo/front.4bpp.smol");
	 const u32 gMonBackPic_Mewtwo[] = INCBIN_U32("graphics/pokemon/mewtwo/back.4bpp.smol");
	 const u16 gMonPalette_Mewtwo[] = INCBIN_U16("graphics/pokemon/mewtwo/front.gbapal");
	 const u16 gMonShinyPalette_Mewtwo[] = INCBIN_U16("graphics/pokemon/mewtwo/back.gbapal");
	 const u8 gMonIcon_Mewtwo[] = INCBIN_U8("graphics/pokemon/mewtwo/icon.4bpp");

	 const u32 gMonFrontPic_Mewthree[] = INCBIN_U32("graphics/pokemon/mewthree/front.4bpp.smol");
	 const u32 gMonBackPic_Mewthree[] = INCBIN_U32("graphics/pokemon/mewthree/back.4bpp.smol");
	 const u16 gMonPalette_Mewthree[] = INCBIN_U16("graphics/pokemon/mewthree/front.gbapal");
	 const u16 gMonShinyPalette_Mewthree[] = INCBIN_U16("graphics/pokemon/mewthree/back.gbapal");
	 const u8 gMonIcon_Mewthree[] = INCBIN_U8("graphics/pokemon/mewthree/icon.4bpp");

	 const u32 gMonFrontPic_Mewfour[] = INCBIN_U32("graphics/pokemon/mewfour/front.4bpp.smol");
	 const u32 gMonBackPic_Mewfour[] = INCBIN_U32("graphics/pokemon/mewfour/back.4bpp.smol");
	 const u16 gMonPalette_Mewfour[] = INCBIN_U16("graphics/pokemon/mewfour/front.gbapal");
	 const u16 gMonShinyPalette_Mewfour[] = INCBIN_U16("graphics/pokemon/mewfour/back.gbapal");
	 const u8 gMonIcon_Mewfour[] = INCBIN_U8("graphics/pokemon/mewfour/icon.4bpp");

#endif //P_FAMILY_MEWTWO

#if P_FAMILY_MEW
	 const u32 gMonFrontPic_Mew[] = INCBIN_U32("graphics/pokemon/mew/front.4bpp.smol");
	 const u32 gMonBackPic_Mew[] = INCBIN_U32("graphics/pokemon/mew/back.4bpp.smol");
	 const u16 gMonPalette_Mew[] = INCBIN_U16("graphics/pokemon/mew/front.gbapal");
	 const u16 gMonShinyPalette_Mew[] = INCBIN_U16("graphics/pokemon/mew/back.gbapal");
	 const u8 gMonIcon_Mew[] = INCBIN_U8("graphics/pokemon/mew/icon.4bpp");

	 const u32 gMonFrontPic_Nyu[] = INCBIN_U32("graphics/pokemon/nyu/front.4bpp.smol");
	 const u32 gMonBackPic_Nyu[] = INCBIN_U32("graphics/pokemon/nyu/back.4bpp.smol");
	 const u16 gMonPalette_Nyu[] = INCBIN_U16("graphics/pokemon/nyu/front.gbapal");
	 const u16 gMonShinyPalette_Nyu[] = INCBIN_U16("graphics/pokemon/nyu/back.gbapal");
	 const u8 gMonIcon_Nyu[] = INCBIN_U8("graphics/pokemon/nyu/icon.4bpp");

	 const u32 gMonFrontPic_Iota[] = INCBIN_U32("graphics/pokemon/iota/front.4bpp.smol");
	 const u32 gMonBackPic_Iota[] = INCBIN_U32("graphics/pokemon/iota/back.4bpp.smol");
	 const u16 gMonPalette_Iota[] = INCBIN_U16("graphics/pokemon/iota/front.gbapal");
	 const u16 gMonShinyPalette_Iota[] = INCBIN_U16("graphics/pokemon/iota/back.gbapal");
	 const u8 gMonIcon_Iota[] = INCBIN_U8("graphics/pokemon/iota/icon.4bpp");

#endif //P_FAMILY_MEW

#if P_FAMILY_MISSINGNO1
	 const u32 gMonFrontPic_Missingno1[] = INCBIN_U32("graphics/pokemon/missingno1/front.4bpp.smol");
	 const u32 gMonBackPic_Missingno1[] = INCBIN_U32("graphics/pokemon/missingno1/back.4bpp.smol");
	 const u16 gMonPalette_Missingno1[] = INCBIN_U16("graphics/pokemon/missingno1/front.gbapal");
	 const u16 gMonShinyPalette_Missingno1[] = INCBIN_U16("graphics/pokemon/missingno1/back.gbapal");
	 const u8 gMonIcon_Missingno1[] = INCBIN_U8("graphics/pokemon/missingno1/icon.4bpp");

#endif //P_FAMILY_MISSINGNO1

#if P_FAMILY_MISSINGNO2
	 const u32 gMonFrontPic_Missingno2[] = INCBIN_U32("graphics/pokemon/missingno2/front.4bpp.smol");
	 const u32 gMonBackPic_Missingno2[] = INCBIN_U32("graphics/pokemon/missingno2/back.4bpp.smol");
	 const u16 gMonPalette_Missingno2[] = INCBIN_U16("graphics/pokemon/missingno2/front.gbapal");
	 const u16 gMonShinyPalette_Missingno2[] = INCBIN_U16("graphics/pokemon/missingno2/back.gbapal");
	 const u8 gMonIcon_Missingno2[] = INCBIN_U8("graphics/pokemon/missingno2/icon.4bpp");

#endif //P_FAMILY_MISSINGNO2

#if P_FAMILY_MISSINGNO3
	 const u32 gMonFrontPic_Missingno3[] = INCBIN_U32("graphics/pokemon/missingno3/front.4bpp.smol");
	 const u32 gMonBackPic_Missingno3[] = INCBIN_U32("graphics/pokemon/missingno3/back.4bpp.smol");
	 const u16 gMonPalette_Missingno3[] = INCBIN_U16("graphics/pokemon/missingno3/front.gbapal");
	 const u16 gMonShinyPalette_Missingno3[] = INCBIN_U16("graphics/pokemon/missingno3/back.gbapal");
	 const u8 gMonIcon_Missingno3[] = INCBIN_U8("graphics/pokemon/missingno3/icon.4bpp");

#endif //P_FAMILY_MISSINGNO3

#if P_FAMILY_MISSINGNO4
	 const u32 gMonFrontPic_Missingno4[] = INCBIN_U32("graphics/pokemon/missingno4/front.4bpp.smol");
	 const u32 gMonBackPic_Missingno4[] = INCBIN_U32("graphics/pokemon/missingno4/back.4bpp.smol");
	 const u16 gMonPalette_Missingno4[] = INCBIN_U16("graphics/pokemon/missingno4/front.gbapal");
	 const u16 gMonShinyPalette_Missingno4[] = INCBIN_U16("graphics/pokemon/missingno4/back.gbapal");
	 const u8 gMonIcon_Missingno4[] = INCBIN_U8("graphics/pokemon/missingno4/icon.4bpp");

#endif //P_FAMILY_MISSINGNO4

#if P_FAMILY_MISSINGNO5
	 const u32 gMonFrontPic_Missingno5[] = INCBIN_U32("graphics/pokemon/missingno5/front.4bpp.smol");
	 const u32 gMonBackPic_Missingno5[] = INCBIN_U32("graphics/pokemon/missingno5/back.4bpp.smol");
	 const u16 gMonPalette_Missingno5[] = INCBIN_U16("graphics/pokemon/missingno5/front.gbapal");
	 const u16 gMonShinyPalette_Missingno5[] = INCBIN_U16("graphics/pokemon/missingno5/back.gbapal");
	 const u8 gMonIcon_Missingno5[] = INCBIN_U8("graphics/pokemon/missingno5/icon.4bpp");

#endif //P_FAMILY_

	const u32 gMonFrontPic_Egg[] = INCBIN_U32("graphics/pokemon/egg/anim_front.4bpp.smol");
	const u16 gMonPalette_Egg[] = INCBIN_U16("graphics/pokemon/egg/normal.gbapal");
	const u8 gMonIcon_Egg[] = INCBIN_U8("graphics/pokemon/egg/icon.4bpp");
