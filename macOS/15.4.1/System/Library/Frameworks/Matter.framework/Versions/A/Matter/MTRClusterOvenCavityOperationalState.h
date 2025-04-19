@interface MTRClusterOvenCavityOperationalState : MTRGenericCluster

- (void)stopWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeCountdownTimeWithParams:(id)a0;
- (id)readAttributeCurrentPhaseWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeOperationalErrorWithParams:(id)a0;
- (id)readAttributeOperationalStateListWithParams:(id)a0;
- (id)readAttributeOperationalStateWithParams:(id)a0;
- (id)readAttributePhaseListWithParams:(id)a0;
- (void)startWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)startWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)stopWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;

@end
