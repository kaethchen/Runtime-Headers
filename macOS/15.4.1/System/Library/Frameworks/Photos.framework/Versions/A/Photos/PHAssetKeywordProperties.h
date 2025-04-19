@class NSSet;

@interface PHAssetKeywordProperties : PHAssetPropertySet

@property (readonly, copy, nonatomic) NSSet *keywordTitles;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (BOOL)isToMany;
+ (id)propertySetName;
+ (BOOL)createsPropertySetObjectWithCustomImplementation;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
