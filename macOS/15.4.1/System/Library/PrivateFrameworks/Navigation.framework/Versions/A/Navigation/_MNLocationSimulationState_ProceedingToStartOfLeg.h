@interface _MNLocationSimulationState_ProceedingToStartOfLeg : _MNLocationSimulationState

- (long long)type;
- (id)nextSimulatedLocationWithElapsedTime:(double)a0;
- (void)onEnterState;

@end
