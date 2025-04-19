@class _MNLocationSimulationState, NSString, _MNLocationSimulationData, MNLocation;

@interface MNSimulatedLocationGenerator : NSObject <_MNLocationSimulationStateDelegate> {
    _MNLocationSimulationData *_data;
    _MNLocationSimulationState *_currentState;
}

@property (readonly, nonatomic) long long currentStateType;
@property (nonatomic) double speedOverride;
@property (nonatomic) BOOL endAtFinalDestination;
@property (readonly, nonatomic) MNLocation *lastLocation;
@property (readonly, nonatomic) struct { unsigned int x0; float x1; } lastRouteCoordinate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)changeState:(id)a0;
- (struct { unsigned int x0; float x1; })_simulationStartRouteCoordinate;
- (void)updatePosition:(double)a0;
- (void)_updateStartState;
- (id)initWithSimulationParameters:(id)a0;
- (id)nextSimulatedLocationWithElapsedTime:(double)a0;
- (void)updateWithRouteInfo:(id)a0 rerouteReason:(unsigned long long)a1;

@end
