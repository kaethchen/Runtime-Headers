@class NSString, ManagedNamedGroup, NSDate;

@interface ManagedDuration : NSManagedObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) ManagedNamedGroup *group;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
