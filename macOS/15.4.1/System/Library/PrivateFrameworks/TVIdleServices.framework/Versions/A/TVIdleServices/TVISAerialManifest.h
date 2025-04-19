@class NSArray, NSDictionary, NSSet, NSString;

@interface TVISAerialManifest : NSObject

@property (readonly, nonatomic) NSDictionary *jsonObject;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) unsigned long long initialAssetCount;
@property (readonly, nonatomic) NSArray *assetIdentifiers;
@property (readonly, nonatomic) NSArray *categoryIdentifiers;
@property (readonly, nonatomic) NSSet *subcategoryIdentifiers;
@property (readonly, nonatomic) NSString *SHA256;
@property (readonly, nonatomic) NSString *localizationVersion;

+ (id)_fetchAssetsMappingForContext:(id)a0 withIdentifiers:(id)a1;
+ (id)_fetchCategoryMappingForContext:(id)a0;
+ (id)_fetchSubcategoryMappingForContext:(id)a0;
+ (BOOL)_isValidAsset:(id)a0;
+ (BOOL)_isValidCategory:(id)a0;
+ (BOOL)_isValidSubcategory:(id)a0;
+ (id)localCustomerManifest;

- (id)description;
- (void).cxx_destruct;
- (id)initWithJSONObject:(id)a0;
- (id)assetIdentifiersToGroupIdentifiers;
- (unsigned long long)minimumAssetsNeeded;
- (unsigned long long)updateStoreWithManagedObjectContext:(id)a0 existingCategories:(id)a1 existingSubcategories:(id)a2 existingAssets:(id)a3;

@end
