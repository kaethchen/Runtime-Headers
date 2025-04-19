@class NSString, ManagedNamedGroup, NSDate;

@interface ManagedDistribution : NSManagedObject

@property (nonatomic) long long count;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) long long max;
@property (nonatomic) long long min;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double sum;
@property (nonatomic) double sumSquares;
@property (nonatomic, retain) ManagedNamedGroup *group;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
