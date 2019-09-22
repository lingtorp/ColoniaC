/* User interface help strings
 * - Contains user interface strings displayed in the UI
 */

// TODO: Handle language selection somehow
enum LANGUAGES { en, NUM_LANGUAGES };

// ----- HELP STRINGS -----
// Help strings are displayed in their own window as a detailed explanation
// coupled with a teaspoon of historical content to give the text its context.
// They are longer than description strings and are the full explanation of their
// relevant subject excluding providing gameplay information (stats, etc)

// TODO: Adopt these conventions in main.c
const char *aqueduct_help_str[NUM_LANGUAGES] = {"Provides water to baths and foundations."};
const char *basilica_help_str[NUM_LANGUAGES] = {""};
const char *farm_help_str[NUM_LANGUAGES] = {"The Roman society was in large part an agricultural one. On many farms like this one sprinkled around the provinces the mouths of the mighty city Rome was feed."};
const char *senate_house_help_str[NUM_LANGUAGES] = {"Meeting place of the Senate. Enables Laws and increase political power."};
const char *temple_help_str[NUM_LANGUAGES] = {"Increases various powers."};
const char *coin_mint_help_str[NUM_LANGUAGES] = {"Reduces the negative effects of war. Increases gold income. Provides coinage."};
const char *insula_help_str[NUM_LANGUAGES] = {"Multistory apartment building for the plebians."};
const char *forum_help_str[NUM_LANGUAGES] = {"Public square."};
const char *port_ostia_help_str[NUM_LANGUAGES] = {"Enables import and export of foodstuffs"};
const char *bakery_help_str[NUM_LANGUAGES] = {"Increase the amount of food produces by farms."};
const char *circus_maximus_help_str[NUM_LANGUAGES] = {""};
const char *villa_publica_help_str[NUM_LANGUAGES] = {""};
const char *bath_help_str[NUM_LANGUAGES] = {""};
const char *taberna_help_strs[NUM_LANGUAGES] = {""};
const char *taberna_bakery_help_strs[NUM_LANGUAGES] = {""};


// ----- DESCRIPTION STRINGS -----
// Description string are displayed where space is constrained and is a short
// explanatory text that may include gameplay information for the UI.
const char *bath_description_strs[NUM_LANGUAGES] = {
    "Roman bath complexes was a crucial part of life in the city"};
const char *insula_description_strs[NUM_LANGUAGES] = {"Apartment block with space for 300 residents."};
const char *taberna_description_strs[NUM_LANGUAGES] = {""};
