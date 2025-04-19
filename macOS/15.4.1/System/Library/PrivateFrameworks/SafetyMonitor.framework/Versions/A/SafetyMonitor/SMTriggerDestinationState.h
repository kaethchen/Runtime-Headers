@class NSUUID, SMUpperBoundEta, NSDate, CLLocation;

@interface SMTriggerDestinationState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *lastLockDate;
@property (retain, nonatomic) NSDate *lastUnlockDate;
@property (nonatomic) unsigned long long predominantModeOfTransport;
@property (nonatomic) unsigned long long currentStatus;
@property (retain, nonatomic) NSDate *currentStatusDate;
@property (retain, nonatomic) NSDate *roundTripReminderDate;
@property (retain, nonatomic) NSDate *timeToUpdateStatus;
@property (retain, nonatomic) SMUpperBoundEta *upperBoundEta;
@property (nonatomic) double mapsExpectedTravelTime;
@property (nonatomic) double remainingDistance;
@property (nonatomic) BOOL shouldRetryETAQuery;
@property (nonatomic) unsigned short numberOfETARetries;
@property (nonatomic) BOOL dirty;
@property (nonatomic) CLLocation *originLocation;

+ (id)statusToString:(unsigned long long)a0;
+ (id)convertSMDirectionTransportTypeToString:(unsigned long long)a0;
+ (id)modeOfTransportToString:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionIdentifier:(id)a0;
- (id)initWithSessionIdentifier:(id)a0 currentStatus:(unsigned long long)a1 currentStatusDate:(id)a2 lastLockDate:(id)a3 lastUnlockDate:(id)a4 predominantModeOfTransport:(unsigned long long)a5 numberOfETARetries:(unsigned short)a6 shouldRetryETAQuery:(BOOL)a7 roundTripReminderDate:(id)a8 timeToUpdateStatus:(id)a9 upperBoundEta:(id)a10 mapsExpectedTravelTime:(double)a11 remainingDistance:(double)a12 date:(id)a13;
- (void)markDirty;

@end
