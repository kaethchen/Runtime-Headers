@class NSString, CHEmergencyMediaItem, CallRecord;

@interface EmergencyMediaItem : NSManagedObject

@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) long long emergencyMediaType;
@property (retain, nonatomic) CallRecord *uploadedForCall;
@property (readonly, nonatomic) CHEmergencyMediaItem *chEmergencyMediaItem;

+ (id)fetchRequest;
+ (id)managedEmergencyMediaItemForEmergencyMediaItem:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedEmergencyMediaItemsForEmergencyMediaItems:(id)a0 inManagedObjectContext:(id)a1;

- (id)copyWithContext:(id)a0;

@end
