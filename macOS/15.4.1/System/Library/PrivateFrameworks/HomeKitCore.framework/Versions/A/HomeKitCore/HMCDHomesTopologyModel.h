@class NSUUID, NSSet;

@interface HMCDHomesTopologyModel : NSManagedObject

@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSSet *homes;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
