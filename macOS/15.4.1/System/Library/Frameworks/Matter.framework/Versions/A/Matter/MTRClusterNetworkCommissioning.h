@interface MTRClusterNetworkCommissioning : MTRGenericCluster

- (void)addOrUpdateThreadNetworkWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)addOrUpdateThreadNetworkWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)addOrUpdateWiFiNetworkWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)addOrUpdateWiFiNetworkWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)connectNetworkWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)connectNetworkWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (void)queryIdentityWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeConnectMaxTimeSecondsWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeInterfaceEnabledWithParams:(id)a0;
- (id)readAttributeLastConnectErrorValueWithParams:(id)a0;
- (id)readAttributeLastNetworkIDWithParams:(id)a0;
- (id)readAttributeLastNetworkingStatusWithParams:(id)a0;
- (id)readAttributeMaxNetworksWithParams:(id)a0;
- (id)readAttributeNetworksWithParams:(id)a0;
- (id)readAttributeScanMaxTimeSecondsWithParams:(id)a0;
- (id)readAttributeSupportedThreadFeaturesWithParams:(id)a0;
- (id)readAttributeSupportedWiFiBandsWithParams:(id)a0;
- (id)readAttributeThreadVersionWithParams:(id)a0;
- (void)removeNetworkWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)removeNetworkWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)reorderNetworkWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)reorderNetworkWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)scanNetworksWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)scanNetworksWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)scanNetworksWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)writeAttributeInterfaceEnabledWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeInterfaceEnabledWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
