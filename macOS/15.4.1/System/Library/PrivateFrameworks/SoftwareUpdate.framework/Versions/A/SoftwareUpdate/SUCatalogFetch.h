@class NSString, NSDictionary, NSURL, NSError;

@interface SUCatalogFetch : NSObject {
    NSDictionary *_catalogDictionary;
    NSURL *_finalURL;
    NSURL *_setCatalogURL;
    NSString *_previousEntityTag;
    BOOL _skipIfUnchanged;
    NSString *_currentEntityTag;
    BOOL _didUseDefaultURL;
    NSError *_error;
}

+ (id)catalogURL;
+ (id)defaultAppleCatalogURL;
+ (id)preferredCatalogURLsWithExtendedValidationEnforcement:(id *)a0;
+ (id)priorProductionCatalogURLs;

- (void)dealloc;
- (id)init;
- (id)error;
- (id)finalURL;
- (id)_fetchAppleCatalogDictionaryReturningError:(id *)a0 finalURL:(id *)a1 setURL:(id *)a2;
- (id)_fetchCatalogDictionaryReturningError:(id *)a0 finalURL:(id *)a1 setURL:(id *)a2 isAppleDefault:(BOOL *)a3 usingURL:(id)a4;
- (id)_fetchDictionaryFromURL:(id)a0 returningError:(id *)a1;
- (id)catalogDictionary;
- (id)catalogEntityTag;
- (id)initWithURL:(id)a0 previousEntityTag:(id)a1 skipIfUnchanged:(BOOL)a2;
- (BOOL)isCatalogChanged;
- (BOOL)isDefaultAppleCatalogURL;
- (BOOL)isEVProtected;
- (id)systemConfiguredCatalogURL;

@end
