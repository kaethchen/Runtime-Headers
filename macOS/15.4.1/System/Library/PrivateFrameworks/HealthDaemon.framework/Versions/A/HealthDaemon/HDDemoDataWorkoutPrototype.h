@class HKQuantity;

@interface HDDemoDataWorkoutPrototype : NSObject

@property (nonatomic) unsigned long long workoutActivityType;
@property (nonatomic) unsigned long long goalType;
@property (retain, nonatomic) HKQuantity *goal;
@property (nonatomic) double startTimeOffsetInDay;
@property (nonatomic) double duration;
@property (nonatomic) double totalEnergyBurnedInKcal;
@property (nonatomic) double totalDistanceWalkingInMiles;
@property (nonatomic) double totalDistanceCyclingInMiles;
@property (nonatomic) double totalDistanceCrossCountrySkiingInMeters;
@property (nonatomic) double totalDistanceRowingInMeters;
@property (nonatomic) double totalDistanceSkatingSportsInMeters;
@property (nonatomic) double totalDistancePaddleSportsInMeters;
@property (nonatomic) double totalDistanceDownhillSnowSportsInMeters;
@property (nonatomic) double totalDistanceSwimmingInYards;
@property (nonatomic) double swimmingSegmentDistanceInYards;
@property (nonatomic) long long totalSwimmingSegments;
@property (nonatomic) long long numLapsPerSegment;
@property (nonatomic) double swimTimePerSegment;
@property (nonatomic) double restTimePerSegment;
@property (nonatomic) long long swimmingStrokeStyle;

+ (id)hikingPrototype;
+ (id)rowingPrototype;
+ (id)HIITPrototype;
+ (id)soccerPrototype;
+ (id)coolDownPrototype;
+ (id)coreTrainingPrototype;
+ (id)crossCountrySkiingPrototype;
+ (id)cyclingPrototype;
+ (id)dancePrototype;
+ (id)downhillSnowSportsPrototype;
+ (id)ellipticalPrototype;
+ (id)functionalStrengthTrainingPrototype;
+ (id)golfPrototype;
+ (id)paddleSportsPrototype;
+ (id)pickRandomWorkoutFrom:(id)a0;
+ (id)runningPrototype;
+ (id)skatingSportsPrototype;
+ (id)swimmingPrototype;
+ (id)thirdPartyWorkoutPrototype;
+ (id)underwaterDivingPrototype;
+ (id)walkingPrototype;
+ (id)workoutPrototypeWithActivityType:(unsigned long long)a0 goalType:(unsigned long long)a1 goal:(id)a2 startTime:(double)a3 duration:(double)a4 energyBurned:(double)a5 distanceWalking:(double)a6 distanceCycling:(double)a7;
+ (id)workoutPrototypeWithActivityType:(unsigned long long)a0 goalType:(unsigned long long)a1 goal:(id)a2 startTime:(double)a3 duration:(double)a4 energyBurned:(double)a5 distanceWalking:(double)a6 distanceCycling:(double)a7 distanceCrossCountrySkiing:(double)a8 distanceRowing:(double)a9 distanceSkatingSports:(double)a10 distancePaddleSports:(double)a11 distanceDownhillSnowSports:(double)a12;
+ (id)workoutPrototypeWithActivityType:(unsigned long long)a0 goalType:(unsigned long long)a1 goal:(id)a2 startTime:(double)a3 duration:(double)a4 energyBurned:(double)a5 distanceWalking:(double)a6 distanceCycling:(double)a7 distanceSwimming:(double)a8 distanceSwimmingSegment:(double)a9 totalSwimmingSegments:(long long)a10 numLapsPerSegment:(long long)a11 swimTimePerSegment:(double)a12 restTimePerSegment:(double)a13 swimmingStrokeStyle:(long long)a14;
+ (id)yogaAndRunningPrototypes;
+ (id)yogaPrototype;

- (void).cxx_destruct;

@end
