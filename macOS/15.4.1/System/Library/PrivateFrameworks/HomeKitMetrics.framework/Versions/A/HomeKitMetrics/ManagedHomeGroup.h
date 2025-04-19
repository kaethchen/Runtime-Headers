@class NSUUID;

@interface ManagedHomeGroup : ManagedNamedGroup

@property (nonatomic, copy) NSUUID *homeUUID;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
