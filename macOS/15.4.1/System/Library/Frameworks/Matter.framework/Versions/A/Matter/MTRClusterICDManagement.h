@interface MTRClusterICDManagement : MTRGenericCluster

- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeActiveModeDurationWithParams:(id)a0;
- (id)readAttributeActiveModeThresholdWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClientsSupportedPerFabricWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeICDCounterWithParams:(id)a0;
- (id)readAttributeIdleModeDurationWithParams:(id)a0;
- (id)readAttributeMaximumCheckInBackOffWithParams:(id)a0;
- (id)readAttributeOperatingModeWithParams:(id)a0;
- (id)readAttributeRegisteredClientsWithParams:(id)a0;
- (id)readAttributeUserActiveModeTriggerHintWithParams:(id)a0;
- (id)readAttributeUserActiveModeTriggerInstructionWithParams:(id)a0;
- (void)registerClientWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)stayActiveRequestWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)unregisterClientWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;

@end
