@interface WLKSettingsLanguageUtilities : NSObject

+ (BOOL)_isSpecialSpokenLanguage:(id)a0;
+ (id)_localizedNameForLanguageCode:(id)a0 withLocale:(id)a1;
+ (id)availableAudioLanguageCodes;
+ (id)localizedNameForLanguageCode:(id)a0;
+ (id)localizedNameForLanguageCodeInItsOwnLanguage:(id)a0;
+ (id)staticLanguageCodes;
+ (id)userFacingAudioLanguageTitles:(id)a0;
+ (id)userFacingLocalizedNameForLanguageCode:(id)a0 autoString:(id)a1;

@end
