@class NSString, NSSet, NSDate;

@interface TVISAerialUserEntity : NSManagedObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *lastActiveDate;
@property (retain, nonatomic) NSSet *activeCategories;
@property (retain, nonatomic) NSSet *activeSubcategories;
@property (retain, nonatomic) NSSet *pinnedAssets;

+ (id)fetchRequest;
+ (id)entityDescriptionForContext:(id)a0;

@end
