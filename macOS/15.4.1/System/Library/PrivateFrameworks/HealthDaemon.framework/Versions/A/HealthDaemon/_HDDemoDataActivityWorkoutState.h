@class HKQuantity, NSMutableData, NSMutableArray, NSDate;

@interface _HDDemoDataActivityWorkoutState : NSObject <NSSecureCoding> {
    NSMutableData *_associatedObjectUUIDs;
    NSMutableData *_looseAssociatedObjectUUIDs;
    NSMutableArray *_workoutEvents;
    unsigned long long _workoutActivityType;
    unsigned long long _goalType;
    HKQuantity *_goal;
    NSDate *_startDate;
    double _totalEnergyBurnedInKilocalories;
    double _totalDistanceWalkingInMeters;
    double _totalDistanceCyclingInMeters;
    double _totalDistanceSwimmingInYards;
    double _totalDistanceCrossCountrySkiingInMeters;
    double _totalDistanceRowingInMeters;
    double _totalDistanceSkatingSportsInMeters;
    double _totalDistancePaddleSportsInMeters;
    double _totalDistanceDownhillSnowSportsInMeters;
    double _totalSwimmingStrokes;
    long long _swimmingStrokeStyle;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
