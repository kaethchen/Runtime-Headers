@class NSNumber;

@interface MTRThermostatClusterThermostatScheduleTransition : MTRThermostatClusterWeeklyScheduleTransitionStruct

@property (copy, nonatomic) NSNumber *transitionTime;
@property (copy, nonatomic) NSNumber *heatSetpoint;
@property (copy, nonatomic) NSNumber *coolSetpoint;

@end
