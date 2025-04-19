@interface MTRClusterDishwasherAlarm : MTRGenericCluster

- (void)modifyEnabledAlarmsWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeLatchWithParams:(id)a0;
- (id)readAttributeMaskWithParams:(id)a0;
- (id)readAttributeStateWithParams:(id)a0;
- (id)readAttributeSupportedWithParams:(id)a0;
- (void)resetWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;

@end
