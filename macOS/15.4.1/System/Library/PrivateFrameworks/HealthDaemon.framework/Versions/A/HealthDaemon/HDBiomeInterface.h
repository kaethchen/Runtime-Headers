@class HDWorkoutSessionConfiguration;

@interface HDBiomeInterface : NSObject {
    HDWorkoutSessionConfiguration *_sessionConfiguration;
    int _mostRecentBiomeEventType;
}

- (void).cxx_destruct;
- (void)_sendBiomeEvent:(id)a0 toSource:(id)a1;
- (BOOL)sleepFocusOn;
- (void)stopSessionWithIdentifier:(id)a0 recoveredWorkoutConfiguration:(id)a1;
- (void)unitTesting_workoutConfigurationUpdated:(id)a0 recentEventType:(int)a1;
- (void)workoutConfigurationUpdated:(id)a0;
- (void)workoutSessionWithConfiguration:(id)a0 transitionedToState:(long long)a1 fromState:(long long)a2;

@end
