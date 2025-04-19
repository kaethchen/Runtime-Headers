@class NSUUID, NSString, HMCDHomeModel, NSSet;

@interface HMCDZoneModel : NSManagedObject

@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) HMCDHomeModel *home;
@property (nonatomic, copy) NSSet *rooms;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
