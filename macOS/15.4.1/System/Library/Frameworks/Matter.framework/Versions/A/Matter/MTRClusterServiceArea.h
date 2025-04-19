@interface MTRClusterServiceArea : MTRGenericCluster

- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeCurrentAreaWithParams:(id)a0;
- (id)readAttributeEstimatedEndTimeWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeProgressWithParams:(id)a0;
- (id)readAttributeSelectedAreasWithParams:(id)a0;
- (id)readAttributeSupportedAreasWithParams:(id)a0;
- (id)readAttributeSupportedMapsWithParams:(id)a0;
- (void)selectAreasWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)skipAreaWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;

@end
