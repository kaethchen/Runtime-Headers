@class NSUUID, NSString, HMCDHomeModel, NSSet;

@interface HMCDRoomModel : NSManagedObject

@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) BOOL isDefault;
@property (nonatomic, retain) HMCDHomeModel *home;
@property (nonatomic, copy) NSSet *accessories;
@property (nonatomic, copy) NSSet *zones;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
