@class NSString, NSURL, NSDate, NSNumber;

@interface FinanceKit.ManagedOrderReturnInfo : NSManagedObject

@property (nonatomic, copy) NSURL *returnPolicyURL;
@property (nonatomic, copy) NSString *returnPolicyDescription;
@property (nonatomic, copy) NSURL *returnManagementURL;
@property (nonatomic, copy) NSDate *returnDeadline;
@property (nonatomic, retain) NSNumber *primitiveDisplayCountdown;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
