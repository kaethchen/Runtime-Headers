@class NSURL, NSDictionary;

@interface SUCatalog : NSObject {
    NSURL *_catalogURL;
    NSDictionary *_dictionaryRepresentation;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)initWithContentsOfURL:(id)a0;
- (id)dictionaryRepresentation;
- (id)productDictionaryForProductKey:(id)a0;
- (id)catalogURL;
- (long long)catalogVersion;
- (id)distributionURLForProductKey:(id)a0 preferredLocalizations:(id)a1;
- (id)extraInfoForProductKey:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 catalogURL:(id)a1;
- (id)localizationsForProductKey:(id)a0;
- (id)packageDictionariesForProductKey:(id)a0;
- (id)postDateForProductKey:(id)a0;
- (id)productByLoadingDistributionForProductKey:(id)a0 localization:(id)a1 error:(id *)a2;
- (id)productKeys;

@end
