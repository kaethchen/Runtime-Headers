@interface MTRClusterValveConfigurationAndControl : MTRGenericCluster

- (void)openWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)closeWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)closeWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)openWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeAutoCloseTimeWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeCurrentLevelWithParams:(id)a0;
- (id)readAttributeCurrentStateWithParams:(id)a0;
- (id)readAttributeDefaultOpenDurationWithParams:(id)a0;
- (id)readAttributeDefaultOpenLevelWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeLevelStepWithParams:(id)a0;
- (id)readAttributeOpenDurationWithParams:(id)a0;
- (id)readAttributeRemainingDurationWithParams:(id)a0;
- (id)readAttributeTargetLevelWithParams:(id)a0;
- (id)readAttributeTargetStateWithParams:(id)a0;
- (id)readAttributeValveFaultWithParams:(id)a0;
- (void)writeAttributeDefaultOpenDurationWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeDefaultOpenDurationWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeDefaultOpenLevelWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeDefaultOpenLevelWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
