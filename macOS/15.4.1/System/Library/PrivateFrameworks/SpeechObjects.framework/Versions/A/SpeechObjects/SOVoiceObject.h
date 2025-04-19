@class NSMutableDictionary, TTSAsset;

@interface SOVoiceObject : NSObject {
    NSMutableDictionary *_voiceAttributes;
}

@property unsigned long long visibility;
@property unsigned long long downloadStatus;
@property double downloadPercentComplete;
@property (readonly) TTSAsset *voice;

+ (BOOL)isSameLocaleIdentifier:(id)a0 secondLocaleIdentifier:(id)a1;
+ (id)systemLocaleIdentifier;
+ (id)assetForVoiceID:(id)a0;
+ (void)invalidateAssetMaps;
+ (BOOL)isSameLanguageFromLocaleIdentifier:(id)a0 secondLocaleIdentifier:(id)a1;
+ (id)normalizedVoiceIdentifier:(id)a0;
+ (void)rebuildAssetMaps;
+ (void)setVisibleVoicesTable:(id)a0;
+ (id)visibleVoicesForLocaleIdentifier:(id)a0 additionalRequiredVoices:(id)a1 allowAllVoices:(BOOL)a2;
+ (id)visibleVoicesTable;

- (void)dealloc;
- (id)description;
- (long long)compare:(id)a0;
- (id)identifier;
- (id)languageIdentifier;
- (id)localeIdentifier;
- (id)displayName;
- (id)gender;
- (BOOL)matchesSearchString:(id)a0;
- (id)_getSiriVoiceNameFromIdentifier;
- (id)displayNameRoot;
- (id)voiceAttributes;
- (id)_conversionLocale;
- (id)_displayLocalizedVoiceNameForString:(id)a0;
- (id)_overriddenCompactVoices;
- (id)_siriVoiceDisplayName;
- (id)_siriVoiceDisplayNameRoot;
- (id)_siriVoiceGenderedDisplayName;
- (id)_siriVoiceGenderedDisplayNameRoot;
- (id)_voiceNamesEntryFromSpeechSynthesisFrameworkForVoiceName:(id)a0;
- (id)countryDisplayString;
- (id)countryIdentifier;
- (BOOL)doesMatchSystemLocale;
- (id)genderDisplayString;
- (id)initWithVoice:(id)a0 identifier:(id)a1;
- (id)initWithVoiceIdentifier:(id)a0;
- (BOOL)isAppropriateForSystemLanguage;
- (BOOL)isNeuter;
- (BOOL)isSiriVoice;
- (id)languageDisplayString;
- (long long)relativeDesirability;
- (BOOL)showsInFullListOnly;
- (id)siriLocalizedColorName;
- (id)siriVoiceDisplayNameFromIdentifier;

@end
