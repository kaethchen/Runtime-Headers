@interface MTRClusterCameraAVSettingsUserLevelManagement : MTRGenericCluster

- (void)MPTZMoveToPresetWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeTiltMinWithParams:(id)a0;
- (void)DPTZRelativeMoveWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)DPTZSetViewportWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)MPTZRelativeMoveWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)MPTZRelativeMoveWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)MPTZRemovePresetWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)MPTZSavePresetWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)MPTZSetPositionWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)MPTZSetPositionWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeTiltMaxWithParams:(id)a0;
- (id)readAttributeZoomMaxWithParams:(id)a0;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeDPTZRelativeMoveWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeMPTZPositionWithParams:(id)a0;
- (id)readAttributeMPTZPresetsWithParams:(id)a0;
- (id)readAttributeMaxPresetsWithParams:(id)a0;
- (id)readAttributePanMaxWithParams:(id)a0;
- (id)readAttributePanMinWithParams:(id)a0;

@end
