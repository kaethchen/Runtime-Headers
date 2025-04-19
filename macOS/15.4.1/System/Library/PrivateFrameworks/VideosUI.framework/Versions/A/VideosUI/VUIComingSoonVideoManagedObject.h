@class NSString, VUITVSeasonManagedObject, NSDate;

@interface VUIComingSoonVideoManagedObject : NSManagedObject

@property (copy, nonatomic) NSString *canonicalID;
@property (copy, nonatomic) NSDate *availabilityStartDate;
@property (retain, nonatomic) VUITVSeasonManagedObject *season;

@end
