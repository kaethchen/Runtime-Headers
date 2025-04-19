@class NSString, TVISAerialCategoryEntity, NSSet, TVISAerialAssetEntity;

@interface TVISAerialSubcategoryEntity : NSManagedObject <TVISAerialAssetProviding>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *localizedNameKey;
@property (copy, nonatomic) NSString *localizedDescriptionKey;
@property (nonatomic) long long preferredOrder;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) TVISAerialCategoryEntity *category;
@property (retain, nonatomic) NSSet *assets;
@property (readonly, nonatomic) NSSet *assetIDs;
@property (retain, nonatomic) TVISAerialAssetEntity *representativeAsset;
@property (copy, nonatomic) NSSet *activeForUsers;
@property (readonly, nonatomic) NSSet *activeForUserIDs;

+ (id)fetchRequest;
+ (id)entityDescriptionForContext:(id)a0;

@end
