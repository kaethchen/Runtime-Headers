@class NSUUID, NSString, HMCDAccessoryModel;

@interface HMCDAppleMediaDeviceModel : NSManagedObject

@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic) BOOL isCurrentDevice;
@property (nonatomic, copy) NSString *idsDestination;
@property (nonatomic, retain) HMCDAccessoryModel *accessory;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
