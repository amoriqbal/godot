/*************************************************************************/
/*  lang_table.h                                                         */
/*************************************************************************/
/*                       This file is part of:                           */
/*                           GODOT ENGINE                                */
/*                      https://godotengine.org                          */
/*************************************************************************/
/* Copyright (c) 2007-2020 Juan Linietsky, Ariel Manzur.                 */
/* Copyright (c) 2014-2020 Godot Engine contributors (cf. AUTHORS.md).   */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/

#ifndef LANG_TABLE_H
#define LANG_TABLE_H

//#include <windows.h>

struct _WinLocale {
    const char *locale;
    int main_lang;
    int sublang;
};

static const _WinLocale _win_locales[] = {
    { "ar", LANG_ARABIC, SUBLANG_NEUTRAL },
    { "ar_AE", LANG_ARABIC, SUBLANG_ARABIC_UAE },
    { "ar_BH", LANG_ARABIC, SUBLANG_ARABIC_BAHRAIN },
    { "ar_DZ", LANG_ARABIC, SUBLANG_ARABIC_ALGERIA },
    { "ar_EG", LANG_ARABIC, SUBLANG_ARABIC_EGYPT },
    { "ar_IQ", LANG_ARABIC, SUBLANG_ARABIC_IRAQ },
    { "ar_JO", LANG_ARABIC, SUBLANG_ARABIC_JORDAN },
    { "ar_KW", LANG_ARABIC, SUBLANG_ARABIC_KUWAIT },
    { "ar_LB", LANG_ARABIC, SUBLANG_ARABIC_LEBANON },
    { "ar_LY", LANG_ARABIC, SUBLANG_ARABIC_LIBYA },
    { "ar_MA", LANG_ARABIC, SUBLANG_ARABIC_MOROCCO },
    { "ar_OM", LANG_ARABIC, SUBLANG_ARABIC_OMAN },
    { "ar_QA", LANG_ARABIC, SUBLANG_ARABIC_QATAR },
    { "ar_SA", LANG_ARABIC, SUBLANG_ARABIC_SAUDI_ARABIA },
    //no sudan
    { "ar_SY", LANG_ARABIC, SUBLANG_ARABIC_SYRIA },
    { "ar_TN", LANG_ARABIC, SUBLANG_ARABIC_TUNISIA },
    { "ar_YE", LANG_ARABIC, SUBLANG_ARABIC_YEMEN },
    { "be", LANG_BELARUSIAN, SUBLANG_NEUTRAL },
    { "be_BY", LANG_BELARUSIAN, SUBLANG_BELARUSIAN_BELARUS },
    { "bg", LANG_BULGARIAN, SUBLANG_NEUTRAL },
    { "bg_BG", LANG_BULGARIAN, SUBLANG_BULGARIAN_BULGARIA },
    { "ca", LANG_CATALAN, SUBLANG_NEUTRAL },
    { "ca_ES", LANG_CATALAN, SUBLANG_CATALAN_CATALAN },
    { "cs", LANG_CZECH, SUBLANG_NEUTRAL },
    { "cs_CZ", LANG_CZECH, SUBLANG_CZECH_CZECH_REPUBLIC },
    { "da", LANG_DANISH, SUBLANG_NEUTRAL },
    { "da_DK", LANG_DANISH, SUBLANG_DANISH_DENMARK },
    { "de", LANG_GERMAN, SUBLANG_NEUTRAL },
    { "de_AT", LANG_GERMAN, SUBLANG_GERMAN_AUSTRIAN },
    { "de_CH", LANG_GERMAN, SUBLANG_GERMAN_SWISS },
    { "de_DE", LANG_GERMAN, SUBLANG_GERMAN },
    { "de_LU", LANG_GERMAN, SUBLANG_GERMAN_LUXEMBOURG },
    { "el", LANG_GREEK, SUBLANG_NEUTRAL },
    { "el_GR", LANG_GREEK, SUBLANG_GREEK_GREECE },
    //{"en_029", LANG_ENGLISH,SUBLANG_ENGLISH_CARIBBEAN},
    { "en", LANG_ENGLISH, SUBLANG_NEUTRAL },
    { "en_AU", LANG_ENGLISH, SUBLANG_ENGLISH_AUS },
    { "en_CA", LANG_ENGLISH, SUBLANG_ENGLISH_CAN },
    { "en_GB", LANG_ENGLISH, SUBLANG_ENGLISH_UK },
    //{"en_IE", LANG_ENGLISH,SUBLANG_ENGLISH_IRELAND},
    { "en_IN", LANG_ENGLISH, SUBLANG_ENGLISH_INDIA },
    //MT
    { "en_NZ", LANG_ENGLISH, SUBLANG_ENGLISH_NZ },
    { "en_PH", LANG_ENGLISH, SUBLANG_ENGLISH_PHILIPPINES },
    { "en_SG", LANG_ENGLISH, SUBLANG_ENGLISH_SINGAPORE },
    { "en_US", LANG_ENGLISH, SUBLANG_ENGLISH_US },
    { "en_ZA", LANG_ENGLISH, SUBLANG_ENGLISH_SOUTH_AFRICA },
    { "es", LANG_SPANISH, SUBLANG_NEUTRAL },
    { "es_AR", LANG_SPANISH, SUBLANG_SPANISH_ARGENTINA },
    { "es_BO", LANG_SPANISH, SUBLANG_SPANISH_BOLIVIA },
    { "es_CL", LANG_SPANISH, SUBLANG_SPANISH_CHILE },
    { "es_CO", LANG_SPANISH, SUBLANG_SPANISH_COLOMBIA },
    { "es_CR", LANG_SPANISH, SUBLANG_SPANISH_COSTA_RICA },
    { "es_DO", LANG_SPANISH, SUBLANG_SPANISH_DOMINICAN_REPUBLIC },
    { "es_EC", LANG_SPANISH, SUBLANG_SPANISH_ECUADOR },
    { "es_ES", LANG_SPANISH, SUBLANG_SPANISH },
    { "es_GT", LANG_SPANISH, SUBLANG_SPANISH_GUATEMALA },
    { "es_HN", LANG_SPANISH, SUBLANG_SPANISH_HONDURAS },
    { "es_MX", LANG_SPANISH, SUBLANG_SPANISH_MEXICAN },
    { "es_NI", LANG_SPANISH, SUBLANG_SPANISH_NICARAGUA },
    { "es_PA", LANG_SPANISH, SUBLANG_SPANISH_PANAMA },
    { "es_PE", LANG_SPANISH, SUBLANG_SPANISH_PERU },
    { "es_PR", LANG_SPANISH, SUBLANG_SPANISH_PUERTO_RICO },
    { "es_PY", LANG_SPANISH, SUBLANG_SPANISH_PARAGUAY },
    { "es_SV", LANG_SPANISH, SUBLANG_SPANISH_EL_SALVADOR },
    { "es_US", LANG_SPANISH, SUBLANG_SPANISH_US },
    { "es_UY", LANG_SPANISH, SUBLANG_SPANISH_URUGUAY },
    { "es_VE", LANG_SPANISH, SUBLANG_SPANISH_VENEZUELA },
    { "et", LANG_ESTONIAN, SUBLANG_NEUTRAL },
    { "et_EE", LANG_ESTONIAN, SUBLANG_ESTONIAN_ESTONIA },
    { "fi", LANG_FINNISH, SUBLANG_NEUTRAL },
    { "fi_FI", LANG_FINNISH, SUBLANG_FINNISH_FINLAND },
    { "fr", LANG_FRENCH, SUBLANG_NEUTRAL },
    { "fr_BE", LANG_FRENCH, SUBLANG_FRENCH_BELGIAN },
    { "fr_CA", LANG_FRENCH, SUBLANG_FRENCH_CANADIAN },
    { "fr_CH", LANG_FRENCH, SUBLANG_FRENCH_SWISS },
    { "fr_FR", LANG_FRENCH, SUBLANG_FRENCH },
    { "fr_LU", LANG_FRENCH, SUBLANG_FRENCH_LUXEMBOURG },
    { "ga", LANG_IRISH, SUBLANG_NEUTRAL },
    { "ga_IE", LANG_IRISH, SUBLANG_IRISH_IRELAND },
    { "hi", LANG_HINDI, SUBLANG_NEUTRAL },
    { "hi_IN", LANG_HINDI, SUBLANG_HINDI_INDIA },
    { "hr", LANG_CROATIAN, SUBLANG_NEUTRAL },
    { "hr_HR", LANG_CROATIAN, SUBLANG_CROATIAN_CROATIA },
    { "hu", LANG_HUNGARIAN, SUBLANG_NEUTRAL },
    { "hu_HU", LANG_HUNGARIAN, SUBLANG_HUNGARIAN_HUNGARY },
    { "in", LANG_ARMENIAN, SUBLANG_NEUTRAL },
    { "in_ID", LANG_INDONESIAN, SUBLANG_INDONESIAN_INDONESIA },
    { "is", LANG_ICELANDIC, SUBLANG_NEUTRAL },
    { "is_IS", LANG_ICELANDIC, SUBLANG_ICELANDIC_ICELAND },
    { "it", LANG_ITALIAN, SUBLANG_NEUTRAL },
    { "it_CH", LANG_ITALIAN, SUBLANG_ITALIAN_SWISS },
    { "it_IT", LANG_ITALIAN, SUBLANG_ITALIAN },
    { "iw", LANG_HEBREW, SUBLANG_NEUTRAL },
    { "iw_IL", LANG_HEBREW, SUBLANG_HEBREW_ISRAEL },
    { "ja", LANG_JAPANESE, SUBLANG_NEUTRAL },
    { "ja_JP", LANG_JAPANESE, SUBLANG_JAPANESE_JAPAN },
    { "ko", LANG_KOREAN, SUBLANG_NEUTRAL },
    { "ko_KR", LANG_KOREAN, SUBLANG_KOREAN },
    { "lt", LANG_LITHUANIAN, SUBLANG_NEUTRAL },
    //{"lt_LT", LANG_LITHUANIAN,SUBLANG_LITHUANIAN_LITHUANIA},
    { "lv", LANG_LATVIAN, SUBLANG_NEUTRAL },
    { "lv_LV", LANG_LATVIAN, SUBLANG_LATVIAN_LATVIA },
    { "mk", LANG_MACEDONIAN, SUBLANG_NEUTRAL },
    { "mk_MK", LANG_MACEDONIAN, SUBLANG_MACEDONIAN_MACEDONIA },
    { "ms", LANG_MALAY, SUBLANG_NEUTRAL },
    { "ms_MY", LANG_MALAY, SUBLANG_MALAY_MALAYSIA },
    { "mt", LANG_MALTESE, SUBLANG_NEUTRAL },
    { "mt_MT", LANG_MALTESE, SUBLANG_MALTESE_MALTA },
    { "nl", LANG_DUTCH, SUBLANG_NEUTRAL },
    { "nl_BE", LANG_DUTCH, SUBLANG_DUTCH_BELGIAN },
    { "nl_NL", LANG_DUTCH, SUBLANG_DUTCH },
    { "no", LANG_NORWEGIAN, SUBLANG_NEUTRAL },
    { "no_NO", LANG_NORWEGIAN, SUBLANG_NORWEGIAN_BOKMAL },
    { "no_NO_NY", LANG_NORWEGIAN, SUBLANG_NORWEGIAN_NYNORSK },
    { "pl", LANG_POLISH, SUBLANG_NEUTRAL },
    { "pl_PL", LANG_POLISH, SUBLANG_POLISH_POLAND },
    { "pt", LANG_PORTUGUESE, SUBLANG_NEUTRAL },
    { "pt_BR", LANG_PORTUGUESE, SUBLANG_PORTUGUESE_BRAZILIAN },
    { "pt_PT", LANG_PORTUGUESE, SUBLANG_PORTUGUESE },
    { "ro", LANG_ROMANIAN, SUBLANG_NEUTRAL },
    { "ro_RO", LANG_ROMANIAN, SUBLANG_ROMANIAN_ROMANIA },
    { "ru", LANG_RUSSIAN, SUBLANG_NEUTRAL },
    { "ru_RU", LANG_RUSSIAN, SUBLANG_RUSSIAN_RUSSIA },
    { "sk", LANG_SLOVAK, SUBLANG_NEUTRAL },
    { "sk_SK", LANG_SLOVAK, SUBLANG_SLOVAK_SLOVAKIA },
    { "sl", LANG_SLOVENIAN, SUBLANG_NEUTRAL },
    { "sl_SI", LANG_SLOVENIAN, SUBLANG_SLOVENIAN_SLOVENIA },
    { "sq", LANG_ALBANIAN, SUBLANG_NEUTRAL },
    { "sq_AL", LANG_ALBANIAN, SUBLANG_ALBANIAN_ALBANIA },
    { "sr", LANG_SERBIAN_NEUTRAL, SUBLANG_NEUTRAL },
    { "sv", LANG_SWEDISH, SUBLANG_NEUTRAL },
    { "sv_SE", LANG_SWEDISH, SUBLANG_SWEDISH },
    { "th", LANG_THAI, SUBLANG_NEUTRAL },
    { "th_TH", LANG_THAI, SUBLANG_THAI_THAILAND },
    { "tr", LANG_TURKISH, SUBLANG_NEUTRAL },
    { "tr_TR", LANG_TURKISH, SUBLANG_TURKISH_TURKEY },
    { "uk", LANG_UKRAINIAN, SUBLANG_NEUTRAL },
    { "uk_UA", LANG_UKRAINIAN, SUBLANG_UKRAINIAN_UKRAINE },
    { "vi", LANG_VIETNAMESE, SUBLANG_NEUTRAL },
    { "vi_VN", LANG_VIETNAMESE, SUBLANG_VIETNAMESE_VIETNAM },
    { "zh", LANG_CHINESE, SUBLANG_NEUTRAL },
    { "zh_CN", LANG_CHINESE, SUBLANG_CHINESE_SIMPLIFIED },
    { "zh_HK", LANG_CHINESE, SUBLANG_CHINESE_HONGKONG },
    { "zh_SG", LANG_CHINESE, SUBLANG_CHINESE_SINGAPORE },
    { "zh_TW", LANG_CHINESE, SUBLANG_CHINESE_TRADITIONAL },
    { 0, 0, 0 },
};

#endif // LANG_TABLE_H
