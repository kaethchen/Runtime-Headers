@interface MTRClusterThreadNetworkDirectory : MTRGenericCluster

- (void)addNetworkWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)getOperationalDatasetWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributePreferredExtendedPanIDWithParams:(id)a0;
- (id)readAttributeThreadNetworkTableSizeWithParams:(id)a0;
- (id)readAttributeThreadNetworksWithParams:(id)a0;
- (void)removeNetworkWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)writeAttributePreferredExtendedPanIDWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributePreferredExtendedPanIDWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
