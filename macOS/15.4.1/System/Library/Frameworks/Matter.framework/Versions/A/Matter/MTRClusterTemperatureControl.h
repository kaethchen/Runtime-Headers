@interface MTRClusterTemperatureControl : MTRGenericCluster

- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeMaxTemperatureWithParams:(id)a0;
- (id)readAttributeMinTemperatureWithParams:(id)a0;
- (id)readAttributeSelectedTemperatureLevelWithParams:(id)a0;
- (id)readAttributeStepWithParams:(id)a0;
- (id)readAttributeSupportedTemperatureLevelsWithParams:(id)a0;
- (id)readAttributeTemperatureSetpointWithParams:(id)a0;
- (void)setTemperatureWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)setTemperatureWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;

@end
