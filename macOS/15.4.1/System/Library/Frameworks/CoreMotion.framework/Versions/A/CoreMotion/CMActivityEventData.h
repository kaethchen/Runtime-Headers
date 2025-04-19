@class NSString, NSDate;

@interface CMActivityEventData : NSObject <SRSampleExporting, SRSampling, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) long long workoutType;
@property (nonatomic) double heartRateRecoveryStartTime;
@property (nonatomic) double heartRateRecoveryEndTime;

+ (id)actionName:(long long)a0;
+ (id)eventTypeName:(long long)a0;
+ (id)reasonName:(long long)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)initWithStartDate:(id)a0 eventType:(long long)a1 action:(long long)a2 reason:(long long)a3 workoutType:(long long)a4;
- (id)sr_dictionaryRepresentation;

@end
