@interface MTRClusterChime : MTRGenericCluster

- (id)readAttributeEnabledWithParams:(id)a0;
- (void)playChimeSoundWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)playChimeSoundWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeActiveChimeIDWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeInstalledChimeSoundsWithParams:(id)a0;
- (void)writeAttributeActiveChimeIDWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeActiveChimeIDWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeEnabledWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeEnabledWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
