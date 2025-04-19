@class NSUUID, NSDate;

@interface SMTriggerDestinationStateMO : NSManagedObject

@property (nonatomic) short currentStatus;
@property (copy, nonatomic) NSDate *currentStatusDate;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *lastLockDate;
@property (copy, nonatomic) NSDate *lastUnlockDate;
@property (nonatomic) double mapsExpectedTravelTime;
@property (nonatomic) short numberOfETARetries;
@property (nonatomic) long long predominantModeOfTransport_v2;
@property (nonatomic) double remainingDistance;
@property (copy, nonatomic) NSDate *roundTripReminderDate;
@property (copy, nonatomic) NSUUID *sessionIdentifier_v2;
@property (nonatomic) BOOL shouldRetryETAQuery;
@property (copy, nonatomic) NSDate *timeToUpdateStatus;
@property (copy, nonatomic) NSDate *upperBoundEtaCrowFliesUpperBoundEta;
@property (copy, nonatomic) NSDate *upperBoundEtaMapsUpperBoundEta;

+ (id)fetchRequest;
+ (id)initWithTriggerDestinationState:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithSessionIdentifier:(id)a0 lastLockDate:(id)a1 lastUnlockDate:(id)a2 predominantModeOfTransport:(unsigned long long)a3 currentStatus:(unsigned long long)a4 currentStatusDate:(id)a5 date:(id)a6 shouldRetryETAQuery:(BOOL)a7 numberOfETARetries:(unsigned short)a8 upperBoundEtaCrowFliesUpperBoundEta:(id)a9 upperBoundEtaMapsUpperBoundEta:(id)a10 roundTripReminderDate:(id)a11 timeToUpdateStatus:(id)a12 mapsExpectedTravelTime:(double)a13 remainingDistance:(double)a14 managedObjectContext:(id)a15;

@end
