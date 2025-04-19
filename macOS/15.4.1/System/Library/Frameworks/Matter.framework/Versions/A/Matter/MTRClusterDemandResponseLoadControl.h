@interface MTRClusterDemandResponseLoadControl : MTRGenericCluster

- (void)addLoadControlEventRequestWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)clearLoadControlEventsRequestWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)clearLoadControlEventsRequestWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeActiveEventsWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeDefaultRandomDurationWithParams:(id)a0;
- (id)readAttributeDefaultRandomStartWithParams:(id)a0;
- (id)readAttributeEventsWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeLoadControlProgramsWithParams:(id)a0;
- (id)readAttributeNumberOfEventsPerProgramWithParams:(id)a0;
- (id)readAttributeNumberOfLoadControlProgramsWithParams:(id)a0;
- (id)readAttributeNumberOfTransitionsWithParams:(id)a0;
- (void)registerLoadControlProgramRequestWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)removeLoadControlEventRequestWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)unregisterLoadControlProgramRequestWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)writeAttributeDefaultRandomDurationWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeDefaultRandomDurationWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeDefaultRandomStartWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeDefaultRandomStartWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
