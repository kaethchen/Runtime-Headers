@class NSString, ManagedNamedGroup, NSDate;

@interface ManagedCounter : NSManagedObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long value;
@property (nonatomic, retain) ManagedNamedGroup *group;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
