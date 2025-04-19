@interface MTRClusterLaundryDryerControls : MTRGenericCluster

- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeSelectedDrynessLevelWithParams:(id)a0;
- (id)readAttributeSupportedDrynessLevelsWithParams:(id)a0;
- (void)writeAttributeSelectedDrynessLevelWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeSelectedDrynessLevelWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
