@class NSUUID;

@interface ManagedAccessoryGroup : ManagedHomeGroup

@property (nonatomic, copy) NSUUID *accessoryUUID;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
