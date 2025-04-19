@class NSString, NSDictionary;

@interface VTUIStringsHelper : NSObject {
    NSDictionary *_localizedStringTable;
    NSDictionary *_localizedStringTableForSiriLanguage;
}

@property (readonly, nonatomic) NSString *heySiriTriggerPhrase;
@property (readonly, nonatomic) NSString *compactTriggerPhrase;

+ (void)initialize;
+ (id)sharedStringsHelper;

- (id)init;
- (void).cxx_destruct;
- (void)setSiriLanguage:(id)a0;
- (id)_bundleStringTableForLanguages:(id)a0;
- (id)_siriLanguageSubstitutedString:(id)a0;
- (void)setupForCurrentLocaleAndSiriLanguage;
- (id)siriLanguageStringForKey:(id)a0;
- (id)uiLocalizedStringForKey:(id)a0;

@end
