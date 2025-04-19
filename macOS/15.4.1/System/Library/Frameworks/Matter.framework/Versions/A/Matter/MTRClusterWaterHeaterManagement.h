@interface MTRClusterWaterHeaterManagement : MTRGenericCluster

- (void)cancelBoostWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)boostWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)cancelBoostWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeBoostStateWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeEstimatedHeatRequiredWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeHeatDemandWithParams:(id)a0;
- (id)readAttributeHeaterTypesWithParams:(id)a0;
- (id)readAttributeTankPercentageWithParams:(id)a0;
- (id)readAttributeTankVolumeWithParams:(id)a0;

@end
