@class NSString, NSArray, NSMutableSet, NSCache;

@interface SGPatterns : NSObject {
    NSString *_classKey;
    NSArray *_langResolutionOrder;
    NSCache *_compiledRegexes2;
    NSString *_language;
    NSMutableSet *_regexpKeysSeen;
    int _localLanguageVersion;
}

+ (void)initialize;
+ (void)_reinstateDeath;
+ (id)calculateCurrentLanguagesFromPreferredLocaleCodes:(id)a0;
+ (id)calculateLangResolutionOrder;
+ (void)changeLanguageOrPatternData;
+ (void)clearAllRegexCaches;
+ (id)countryCodeFromLanguageCode:(id)a0;
+ (id)fallbackLanguageCodeForCountryCode:(id)a0;
+ (void)forceLanguagesTo:(id)a0;
+ (id)languagePartOfLanguageCode:(id)a0;
+ (id)patternsForClass:(Class)a0;
+ (id)patternsForIdentifier:(id)a0;
+ (void)pauseCacheEvictionTemporarily;
+ (void)resetToDefaultPatternsForTesting;
+ (void)setPatternsDictForTesting:(id)a0;
+ (void)useAllLanguagesAtOnce:(BOOL)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)rawValueForKey:(id)a0;
- (void)_becomeImmuneToDeath;
- (void)_clearRegexCache;
- (id)rawValueOrDataForKey:(id)a0;
- (id)rawValuesForKey:(id)a0;
- (id)regex2ForKey:(id)a0;
- (void)resetIfNeeded;
- (id)stringSetMatcherForKey:(id)a0;

@end
