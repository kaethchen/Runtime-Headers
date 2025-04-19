@class NSMutableDictionary;

@interface SUCatalogPackageSource : SUPackageSource {
    NSMutableDictionary *_packageReferencesByProduct;
    NSMutableDictionary *_digestByPackageURLPath;
    NSMutableDictionary *_extraPackageReferencesByProduct;
}

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_packageDictionaryForProductKey:(id)a0 matchingPackageURL:(id)a1;
- (id)allPackageReferences;
- (id)descriptionForProduct:(id)a0;
- (id)digestForPackageAtURLPath:(id)a0;
- (id)initWithCatalog:(id)a0;
- (id)packageReferencesMatchingIdentifier:(id)a0 version:(id)a1;
- (void)registerExtraPackageReference:(id)a0 forProductKey:(id)a1;
- (BOOL)registerProduct:(id)a0;
- (void)unregisterExtraPackageReference:(id)a0 forProductKey:(id)a1;

@end
