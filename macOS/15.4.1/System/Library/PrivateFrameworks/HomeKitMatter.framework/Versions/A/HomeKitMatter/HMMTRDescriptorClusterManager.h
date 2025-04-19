@class HMMTRProtocolMap;

@interface HMMTRDescriptorClusterManager : HMFObject

@property (copy) id /* block */ createClusterInstance;
@property (readonly, copy) HMMTRProtocolMap *protocolMap;

+ (id)sharedManager;
+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)protocolMap;
- (void)endpointForClusterID:(id)a0 mtrDevice:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (id)_buildClustersInUseDictWithClustersInUse:(id)a0;
- (id)_fetchStateCaptureInformationForDevice:(id)a0 endpointID:(id)a1 callbackQueue:(id)a2;
- (id)_fetchStateCaptureInformationForDevice:(id)a0 endpointID:(id)a1 clusterID:(id)a2 callbackQueue:(id)a3;
- (void)_populateAttributeValuesForClusterClassName:(id)a0 clusterClassFeatureMap:(id)a1 endpoint:(id)a2 device:(id)a3 deviceTopology:(id)a4 callbackQueue:(id)a5 completionHandler:(id /* block */)a6;
- (void)_queryAttributeValueFromClusterAtCHIPEndpoint:(id)a0 device:(id)a1 attributeValuesToCheckDict:(id)a2 attributeValuesSupportedDict:(id)a3 attributeValuesRetrievedDict:(id)a4 callbackQueue:(id)a5 clusterClassName:(id)a6 completionHandler:(id /* block */)a7;
- (void)_queryEndpointsForClusterID:(id)a0 endpoints:(id)a1 device:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)_queryEndpointsForClusterID:(id)a0 endpoints:(id)a1 mtrDevice:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)_queryFeatureMapFromClusterAtCHIPEndpoint:(id)a0 device:(id)a1 callbackQueue:(id)a2 clusterClassName:(id)a3 completionHandler:(id /* block */)a4;
- (void)_querySupportedAttributesFromClusterAtCHIPEndpoint:(id)a0 device:(id)a1 callbackQueue:(id)a2 clusterClassName:(id)a3 completionHandler:(id /* block */)a4;
- (void)_removeDisabledCharacteristicsFromServiceDescription:(id)a0 endpoint:(id)a1 topology:(id)a2;
- (void)_runBlockForAllEndpointsWithClusterID:(id)a0 endpoints:(id)a1 device:(id)a2 callbackQueue:(id)a3 finishedRunningAllBlocksPromise:(id)a4 block:(id /* block */)a5;
- (void)_runBlockForAllEndpointsWithClusterID:(id)a0 endpoints:(id)a1 mtrDevice:(id)a2 callbackQueue:(id)a3 finishedRunningAllBlocksPromise:(id)a4 block:(id /* block */)a5;
- (void)_updateOTARequestorEndpointsInTopology:(id)a0 device:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_verifyHAPCharacteristicSupportAtCHIPEndpoint:(id)a0 device:(id)a1 endpointDeviceTypes:(id)a2 callbackQueue:(id)a3 clusterClassToQueryForFeatureMap:(id)a4 hapServicesToCheckForFeatureMap:(id)a5 hapServicesInUse:(id)a6 deviceTopology:(id)a7 bridgeAggregateNodeEndpoint:(id)a8 server:(id)a9 lastError:(id)a10 completionHandler:(id /* block */)a11;
- (void)_verifyHAPCharacteristicSupportWithRequiredAttributeValuesAtCHIPEndpoint:(id)a0 device:(id)a1 callbackQueue:(id)a2 hapServicesToCheckForRequiredAttributeValues:(id)a3 hapCharacteristicsToCheckForRequiredAttributeValues:(id)a4 attributeValuesSupportedDict:(id)a5 attributeValuesRetrievedDict:(id)a6 deviceTopology:(id)a7 server:(id)a8 lastError:(id)a9 completionHandler:(id /* block */)a10;
- (void)_verifyHAPOptionalCharacteristicSupportAtCHIPEndpoint:(id)a0 device:(id)a1 endpointDeviceTypes:(id)a2 callbackQueue:(id)a3 clusterClassToQueryForAttributes:(id)a4 hapServicesToCheckForOptionalMatterAttribute:(id)a5 clusterAttributesSupported:(id)a6 hapServicesInUse:(id)a7 deviceTopology:(id)a8 bridgeAggregateNodeEndpoint:(id)a9 server:(id)a10 lastError:(id)a11 completionHandler:(id /* block */)a12;
- (id)buildClusterDescriptorWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (void)endpointForClusterID:(id)a0 device:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (id)fetchClientClustersForDevice:(id)a0 endpointID:(id)a1 callbackQueue:(id)a2;
- (id)fetchClusterAcceptedCommandsForDevice:(id)a0 endpointID:(id)a1 clusterID:(id)a2 callbackQueue:(id)a3;
- (id)fetchClusterAttributesForDevice:(id)a0 endpointID:(id)a1 clusterID:(id)a2 callbackQueue:(id)a3;
- (id)fetchClusterEventListForDevice:(id)a0 endpointID:(id)a1 clusterID:(id)a2 callbackQueue:(id)a3;
- (id)fetchClusterFeatureMapForDevice:(id)a0 endpointID:(id)a1 clusterID:(id)a2 callbackQueue:(id)a3;
- (id)fetchClusterGeneratedCommandsForDevice:(id)a0 endpointID:(id)a1 clusterID:(id)a2 callbackQueue:(id)a3;
- (id)fetchClusterRevisionForDevice:(id)a0 endpointID:(id)a1 clusterID:(id)a2 callbackQueue:(id)a3;
- (void)fetchDeviceTypesForDevice:(id)a0 atEndpoint:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchDeviceTypesForEndpoints:(id)a0 device:(id)a1 endpointDeviceTypes:(id)a2 lastError:(id)a3 callbackQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)fetchDeviceTypesForEndpoints:(id)a0 mtrDevice:(id)a1 endpointDeviceTypes:(id)a2 lastError:(id)a3 callbackQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)fetchDeviceTypesWithMTRDevice:(id)a0 atEndpoint:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (id)fetchDeviceTypesWithMTRDevice:(id)a0 endpointID:(id)a1 callbackQueue:(id)a2;
- (void)fetchEndpointsForDevice:(id)a0 endpointID:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchEndpointsWithMTRDevice:(id)a0 endpointID:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchHAPCategoryForCHIPDevice:(id)a0 nodeId:(id)a1 server:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchHAPCategoryWithMTRDevice:(id)a0 nodeId:(id)a1 server:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchHAPServicesAtCHIPEndpoint:(id)a0 deviceTopology:(id)a1 endpointDeviceTypes:(id)a2 accessoryInfo:(id)a3 hapToCHIPClusterMappingArray:(id)a4 device:(id)a5 isBridge:(BOOL)a6 bridgeAggregateNodeEndpoint:(id)a7 isComposedDevice:(BOOL)a8 server:(id)a9 callbackQueue:(id)a10 completionHandler:(id /* block */)a11;
- (void)fetchHAPServicesForEndpoints:(id)a0 endpointDeviceTypes:(id)a1 device:(id)a2 nodeId:(id)a3 isBridge:(BOOL)a4 bridgeAggregateNodeEndpoint:(id)a5 server:(id)a6 topology:(id)a7 hapAccessoryInfo:(id)a8 callbackQueue:(id)a9 completionHandler:(id /* block */)a10;
- (void)fetchHAPServicesWithMTRDevice:(id)a0 nodeId:(id)a1 server:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (id)fetchPartsListForDevice:(id)a0 endpointID:(id)a1 callbackQueue:(id)a2;
- (id)fetchServerClustersForDevice:(id)a0 endpointID:(id)a1 callbackQueue:(id)a2;
- (void)fetchStateCaptureInformationForDevice:(id)a0 nodeId:(id)a1 server:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (id)getBridgeEndpointsDeviceTypes:(id)a0 endpointDeviceTypes:(id)a1;
- (id)hapServiceDescriptionForServiceType:(id)a0 clustersInUse:(id)a1 endpoint:(id)a2 name:(id)a3 hapToCHIPClusterMappingArray:(id)a4 clusterClassesToQuery:(id)a5 hapServicesToCheckForFeatureMap:(id)a6 hapServicesToCheckForOptionalMatterAttribute:(id)a7 hapServicesToCheckForRequiredAttributeValues:(id)a8 hapCharacteristicsToCheckForRequiredAttributeValues:(id)a9 server:(id)a10;
- (id)hapServiceDescriptionsForTopology:(id)a0 namesDictionary:(id)a1 server:(id)a2;
- (void)queryEndpointForClusterID:(id)a0 endpoint:(id)a1 device:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (id)runBlockForAllEndpointsWithClusterID:(id)a0 device:(id)a1 callbackQueue:(id)a2 block:(id /* block */)a3;
- (id)runBlockForAllEndpointsWithClusterID:(id)a0 mtrDevice:(id)a1 callbackQueue:(id)a2 block:(id /* block */)a3;

@end
