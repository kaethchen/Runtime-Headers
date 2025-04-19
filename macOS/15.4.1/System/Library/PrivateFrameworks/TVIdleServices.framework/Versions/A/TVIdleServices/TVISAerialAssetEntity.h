@class NSString, NSArray, NSURL, NSSet, NSDictionary, NSDate;

@interface TVISAerialAssetEntity : NSManagedObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *shotID;
@property (copy, nonatomic) NSString *group;
@property (nonatomic) short playOrder;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSURL *previewImageURL;
@property (copy, nonatomic) NSArray *categories;
@property (readonly, nonatomic) NSSet *categoryIDs;
@property (copy, nonatomic) NSSet *subcategories;
@property (readonly, nonatomic) NSSet *subcategoryIDs;
@property (retain, nonatomic) NSDictionary *remoteURLs;
@property (retain, nonatomic) NSDictionary *pointsOfInterest;
@property (copy, nonatomic) NSDate *lastDownloaded;
@property (copy, nonatomic) NSSet *pinnedForUsers;
@property (readonly, nonatomic) NSSet *pinnedForUserIDs;
@property (nonatomic) BOOL includeInShuffle;
@property (copy, nonatomic) NSString *localizedNameKey;
@property (nonatomic) long long preferredOrder;
@property (nonatomic) BOOL showInTopLevel;

+ (id)fetchRequest;
+ (id)entityDescriptionForContext:(id)a0;

@end
