@interface MTRClusterBooleanStateConfiguration : MTRGenericCluster

- (void)enableDisableAlarmWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAlarmsActiveWithParams:(id)a0;
- (id)readAttributeAlarmsEnabledWithParams:(id)a0;
- (id)readAttributeAlarmsSupportedWithParams:(id)a0;
- (id)readAttributeAlarmsSuppressedWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeCurrentSensitivityLevelWithParams:(id)a0;
- (id)readAttributeDefaultSensitivityLevelWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeSensorFaultWithParams:(id)a0;
- (id)readAttributeSupportedSensitivityLevelsWithParams:(id)a0;
- (void)suppressAlarmWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)writeAttributeCurrentSensitivityLevelWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeCurrentSensitivityLevelWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
