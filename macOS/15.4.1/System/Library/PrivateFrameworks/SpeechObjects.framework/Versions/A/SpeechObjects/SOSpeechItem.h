@class NSString;

@interface SOSpeechItem : NSObject

@property (readonly) NSString *bundleIdentifier;
@property (retain) NSString *localeIdentifier;
@property (retain) NSString *fallbackLocaleIdentifier;
@property BOOL showCountryInDisplayTitle;
@property BOOL downloadFullSize;
@property BOOL offlineDictationOnly;
@property (readonly) unsigned long long byteSize;
@property (readonly, retain) NSString *engineIdentifier;
@property (readonly, retain) NSString *variant;
@property (readonly, retain) NSString *version;
@property (readonly, retain) NSString *tagName;
@property unsigned long long visibility;
@property unsigned long long downloadStatus;
@property double downloadPercentComplete;
@property (readonly) NSString *fullSizeBundleIdentifier;
@property (readonly) unsigned long long fullSizeByteSize;
@property (readonly) NSString *fullSizeTagName;

+ (id)componentsFromLocaleIdentifier:(id)a0;
+ (BOOL)isLocaleIdentifier:(id)a0 containedInLocaleIdentifiers:(id)a1;
+ (BOOL)isSameLocaleIdentifier:(id)a0 secondLocaleIdentifier:(id)a1;
+ (BOOL)isSameLangaugeFromLocaleIdentifier:(id)a0 secondLocaleIdentifier:(id)a1;
+ (id)normalizedLocaleIdentifier:(id)a0;
+ (id)systemLocaleIdentifier;
+ (id)displayStringForByteSize:(unsigned long long)a0;
+ (id)displayStringForTimeRemaining:(double)a0;
+ (id)installationDictionaryCache;
+ (id)visibleObjectsFromItems:(id)a0 forLocaleIdentifier:(id)a1 additionalRequiredItems:(id)a2;

- (void)dealloc;
- (long long)compare:(id)a0;
- (id)languageIdentifier;
- (id)displayTitle;
- (BOOL)matchesSearchString:(id)a0;
- (long long)compareDisplayTitle:(id)a0;
- (id)displayedSize;
- (id)languageWithDialectDisplayString;
- (long long)compareCountryWithDialectTitle:(id)a0;
- (id)countryWithDialectDisplayString;
- (id)_conversionLocale;
- (long long)compareCountryTitle:(id)a0;
- (long long)compareLanguageTitle:(id)a0;
- (id)countryDisplayString;
- (id)countryIdentifier;
- (BOOL)doesMatchSystemLocale;
- (id)initWithDownloadableBundleIdentifier:(id)a0 properties:(id)a1;
- (BOOL)isAppropriateForSystemLangauge;
- (id)languageDisplayString;

@end
