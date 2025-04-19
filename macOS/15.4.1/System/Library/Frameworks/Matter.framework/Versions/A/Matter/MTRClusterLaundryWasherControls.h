@interface MTRClusterLaundryWasherControls : MTRGenericCluster

- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeNumberOfRinsesWithParams:(id)a0;
- (id)readAttributeSpinSpeedCurrentWithParams:(id)a0;
- (id)readAttributeSpinSpeedsWithParams:(id)a0;
- (id)readAttributeSupportedRinsesWithParams:(id)a0;
- (void)writeAttributeNumberOfRinsesWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeNumberOfRinsesWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeSpinSpeedCurrentWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeSpinSpeedCurrentWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
