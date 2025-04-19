@interface MTRClusterSmokeCOAlarm : MTRGenericCluster

- (id)readAttributeCOStateWithParams:(id)a0;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeBatteryAlertWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeContaminationStateWithParams:(id)a0;
- (id)readAttributeDeviceMutedWithParams:(id)a0;
- (id)readAttributeEndOfServiceAlertWithParams:(id)a0;
- (id)readAttributeExpiryDateWithParams:(id)a0;
- (id)readAttributeExpressedStateWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeHardwareFaultAlertWithParams:(id)a0;
- (id)readAttributeInterconnectCOAlarmWithParams:(id)a0;
- (id)readAttributeInterconnectSmokeAlarmWithParams:(id)a0;
- (id)readAttributeSmokeSensitivityLevelWithParams:(id)a0;
- (id)readAttributeSmokeStateWithParams:(id)a0;
- (id)readAttributeTestInProgressWithParams:(id)a0;
- (void)selfTestRequestWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)selfTestRequestWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)writeAttributeSmokeSensitivityLevelWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeSmokeSensitivityLevelWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
