@class NSString, NSMeasurement, NSNumber;

@interface GetAcitivitySummaryIntentResponse : INIntentResponse

@property (nonatomic, copy) NSMeasurement *activeEnergyBurned;
@property (nonatomic, copy) NSMeasurement *activeEnergyBurnedGoal;
@property (nonatomic, copy) NSString *activeEnergyBurnedUnit;
@property (nonatomic) double appleMoveTime;
@property (nonatomic) double appleMoveTimeGoal;
@property (nonatomic) double appleExerciseTime;
@property (nonatomic) double appleExerciseTimeGoal;
@property (nonatomic) double appleStandHours;
@property (nonatomic) double appleStandHoursGoal;
@property (nonatomic, retain) NSNumber *isWheelchairUser;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
