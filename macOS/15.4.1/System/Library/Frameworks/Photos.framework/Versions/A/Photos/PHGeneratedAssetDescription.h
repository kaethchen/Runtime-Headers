@class NSString;

@interface PHGeneratedAssetDescription : PHObject

@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) short analysisVersion;
@property (nonatomic) long long analysisSourceType;

+ (id)entityKeyMap;
+ (id)fetchGeneratedAssetDescriptionsGroupedByAssetLocalIdentifierWithType:(long long)a0 forAssets:(id)a1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithNodeContainer:(id)a0 photoLibrary:(id)a1;

@end
