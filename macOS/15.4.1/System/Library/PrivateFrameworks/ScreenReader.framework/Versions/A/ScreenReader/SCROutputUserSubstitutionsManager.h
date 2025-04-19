@class NSLock, NSArray, SCRCUserDefaults;

@interface SCROutputUserSubstitutionsManager : NSObject {
    SCRCUserDefaults *_userDefaults;
    NSLock *_cachedUserSubstitutionsLock;
    NSArray *_cachedUserSubstitutions;
    struct URegularExpression **_smartRegularExpressions;
    struct URegularExpression **_dumbRegularExpressions;
}

+ (id)defaultManager;
+ (id)findAndReplaceSingleDoubleQuoteSymbolsInString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_compileRegularExpressions:(long long)a0;
- (struct URegularExpression { } *)_createRegexFromString:(id)a0;
- (void)_handleUserDefaultsTransactionNotification:(id)a0;
- (BOOL)_replaceTextInString:(id)a0 withSubstitution:(id)a1 withPunctuationTable:(id)a2;
- (id)createUserSubstitutionsWithStorageArray:(id)a0;
- (void)loadUserSubstitutionsFromPrefs;
- (BOOL)makeRegexSubstitutionsInAction:(id)a0 componentName:(id)a1 component:(id)a2;
- (BOOL)makeSubstitutionInString:(id)a0 componentName:(id)a1 component:(id)a2 domainIdentifier:(id)a3 usePunctuationSettings:(BOOL)a4 ignoreSinglePunctuation:(BOOL)a5 ignorePunctuationOnlyStrings:(BOOL)a6;
- (id)substituteComposedCharacter:(id)a0 inAction:(id)a1 component:(id)a2;

@end
