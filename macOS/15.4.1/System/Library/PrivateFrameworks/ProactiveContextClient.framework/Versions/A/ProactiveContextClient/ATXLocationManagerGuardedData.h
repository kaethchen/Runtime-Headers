@class ATXLocationManagerState, CLLocation, NSDate;

@interface ATXLocationManagerGuardedData : NSObject {
    CLLocation *currentLocation;
    NSDate *lastRequestLocationDate;
    unsigned long long currentRoutineMode;
    ATXLocationManagerState *state;
    NSDate *lastLOIUpdateTimestamp;
    NSDate *lastRoutineModeTimestamp;
    NSDate *lastPredictedLOIsUpdateTimestamp;
    NSDate *lastPredictedExitTimesUpdateTimestamp;
}

- (id)init;
- (void).cxx_destruct;
- (void)clear;

@end
