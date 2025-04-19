@interface MTRClusterOTASoftwareUpdateRequestor : MTRGenericCluster

- (void)announceOTAProviderWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeDefaultOTAProvidersWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeUpdatePossibleWithParams:(id)a0;
- (id)readAttributeUpdateStateProgressWithParams:(id)a0;
- (id)readAttributeUpdateStateWithParams:(id)a0;
- (void)writeAttributeDefaultOTAProvidersWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeDefaultOTAProvidersWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
