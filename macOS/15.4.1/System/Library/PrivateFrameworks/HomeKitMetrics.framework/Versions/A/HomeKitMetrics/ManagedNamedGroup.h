@class NSString, NSSet;

@interface ManagedNamedGroup : NSManagedObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *counters;
@property (nonatomic, retain) NSSet *distributions;
@property (nonatomic, retain) NSSet *durations;

- (void).cxx_destruct;
- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
