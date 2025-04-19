@class NSString, NSURL, NSSet;

@interface TVISAerialCategoryEntity : NSManagedObject <TVISAerialAssetProviding>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *localizedNameKey;
@property (copy, nonatomic) NSString *localizedDescriptionKey;
@property (nonatomic) long long preferredOrder;
@property (nonatomic) BOOL isActive;
@property (copy, nonatomic) NSURL *previewImageURL;
@property (retain, nonatomic) NSSet *assets;
@property (readonly, nonatomic) NSSet *assetIDs;
@property (copy, nonatomic) NSSet *subcategories;
@property (copy, nonatomic) NSSet *activeForUsers;
@property (readonly, nonatomic) NSSet *activeForUserIDs;

+ (id)fetchRequest;
+ (id)entityDescriptionForContext:(id)a0;

@end
