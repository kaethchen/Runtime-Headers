@class NSUUID, NSString, NSSet, HMCDHomesTopologyModel;

@interface HMCDHomeModel : NSManagedObject

@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) HMCDHomesTopologyModel *homesTopology;
@property (nonatomic, copy) NSSet *rooms;
@property (nonatomic, copy) NSSet *users;
@property (nonatomic, copy) NSSet *accessories;
@property (nonatomic, copy) NSSet *zones;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
