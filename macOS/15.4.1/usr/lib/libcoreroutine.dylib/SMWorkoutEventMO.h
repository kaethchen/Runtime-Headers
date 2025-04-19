@class NSUUID, SMInitiatorContactMO, SMLocationMO, NSDate, SMCacheMO;

@interface SMWorkoutEventMO : NSManagedObject

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *sessionIdentifier;
@property (retain, nonatomic) SMLocationMO *location;
@property (nonatomic) short activityType;
@property (nonatomic) short locationType;
@property (nonatomic) short swimmingLocationType;
@property (nonatomic) short sessionState;
@property (nonatomic) BOOL isResumedSessionState;
@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) SMCacheMO *cache;
@property (retain, nonatomic) SMInitiatorContactMO *initiatorContact;

+ (id)fetchRequest;
+ (id)getWorkoutEventMOFromWorkoutEvent:(id)a0 context:(id)a1;
+ (id)getWorkoutEventMOFromWorkoutEvents:(id)a0 context:(id)a1;
+ (id)managedObjectWithSMWorkoutEvent:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithSMWorkoutEvent:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end
