@class NSNumber, NSDictionary, NSSet;

@interface HMMTRProtocolMap : HMFObject

@property (copy) id /* block */ createClusterInstance;
@property (readonly, nonatomic) NSNumber *version;
@property (readonly, nonatomic) NSNumber *schemaVersion;
@property (readonly, nonatomic) NSDictionary *rawPlist;
@property (readonly, nonatomic) NSDictionary *hapToCHIPClusterMappingArray;
@property (readonly, nonatomic) NSSet *nativeMatterDeviceTypes;

+ (id)logCategory;
+ (id)protocolMap;
+ (id)mapActiveState:(id)a0;
+ (BOOL)checkIfCharacteristicsIsOfTypeTemp:(id)a0;
+ (id)customMapEventForCharacteristic:(id)a0 event:(id)a1 value:(id)a2;
+ (id)customMapReadForCharacteristic:(id)a0 value:(id)a1 fromRange:(id)a2 toRange:(id)a3;
+ (id)customMapWriteForCharacteristic:(id)a0 value:(id)a1;
+ (id)linearMapForCharacteristic:(id)a0 value:(id)a1 fromRange:(id)a2 toRange:(id)a3;
+ (id)mapAirQuality:(id)a0;
+ (id)mapAirflowDirection:(id)a0;
+ (id)mapCarbonMonoxideDetected:(id)a0;
+ (id)mapCurrentHeatingCoolingState:(id)a0;
+ (id)mapCurrentSystemMode:(id)a0;
+ (id)mapFanModeToActive:(id)a0;
+ (id)mapFanModeToTargetAirPurifier:(id)a0;
+ (id)mapFanModeToTargetFanState:(id)a0;
+ (id)mapPositionState:(id)a0;
+ (id)mapRotationDirection:(id)a0;
+ (id)mapSmokeDetected:(id)a0;
+ (id)mapTargetAirPuriferState:(id)a0;
+ (id)mapTargetFanState:(id)a0;
+ (id)mapTargetHeatingCoolingState:(id)a0;
+ (id)mapTargetSystemMode:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)categoriesForDeviceTypes:(id)a0;
- (id)retrieveHAPToCHIPClusterMapping;
- (id /* block */)_buildEventMapper:(id)a0 characteristicsDict:(id)a1;
- (id /* block */)_buildExpectedValueMapper:(id)a0 characteristicsDict:(id)a1 operation:(unsigned long long)a2 valueMapper:(id /* block */)a3;
- (id /* block */)_buildValueMapper:(id)a0 characteristicsDict:(id)a1 operation:(unsigned long long)a2 forMTRCluster:(BOOL)a3;
- (id)_characteristicDescriptionForCharacteristicWithUUID:(id)a0 characteristicsDict:(id)a1 chipClusterName:(id)a2 operationType:(unsigned long long)a3 value:(id)a4 forMTRCluster:(BOOL)a5;
- (id)_characteristicsDictionaryForCharacteristic:(id)a0 endpointID:(unsigned long long)a1 clusterIDCharacteristicMap:(id)a2;
- (id)_characteristicsDictionaryForCharacteristicUUID:(id)a0 endpointID:(unsigned long long)a1 clusterIDCharacteristicMap:(id)a2;
- (id)_chipClusterFunctionNameForOperationType:(unsigned long long)a0 operationDictionary:(id)a1 value:(id)a2 forMTRCluster:(BOOL)a3;
- (id)_chipParamsDictionaryForOperationType:(unsigned long long)a0 operationDictionary:(id)a1 value:(id)a2;
- (id)_descriptionForCharacteristicUUID:(id)a0 operation:(unsigned long long)a1 value:(id)a2 forMTRCluster:(BOOL)a3 endpointID:(unsigned long long)a4 clusterIDCharacteristicMap:(id)a5;
- (BOOL)_isValidCharacteristicValue:(id)a0 value:(id)a1;
- (id)_protocolMapCharacteristicsKeyForOperationType:(unsigned long long)a0;
- (void)_selectedServiceTypeForServiceArray:(id)a0 device:(id)a1 mtrDevice:(id)a2 endpoint:(id)a3 callbackQueue:(id)a4 completionHandler:(id /* block */)a5;
- (id)descriptionForCharacteristicUUID:(id)a0 operation:(unsigned long long)a1 endpointID:(unsigned long long)a2 clusterIDCharacteristicMap:(id)a3;
- (id)descriptionForCharacteristicUUID:(id)a0 operation:(unsigned long long)a1 value:(id)a2 endpointID:(unsigned long long)a3 clusterIDCharacteristicMap:(id)a4;
- (id)descriptionOfMTRClusterForCharacteristicUUID:(id)a0 operation:(unsigned long long)a1 value:(id)a2 endpointID:(unsigned long long)a3 clusterIDCharacteristicMap:(id)a4;
- (id)getCHIPAttributesForCharacteristic:(id)a0;
- (id)getClusterClassForCharacteristic:(id)a0 endpointID:(id)a1 clusterIDCharacteristicMap:(id)a2;
- (id)getIDForCharacteristic:(id)a0;
- (id)getMTRClusterClassForCharacteristic:(id)a0 endpointID:(id)a1 clusterIDCharacteristicMap:(id)a2;
- (id)getRequiredAttributesForCharacteristic:(id)a0;
- (id)getRequiredFeaturesBitmapForCharacteristic:(id)a0;
- (id)getUpdatedLinkedCharacteristics:(id)a0 endpointID:(id)a1 clusterIDCharacteristicMap:(id)a2;
- (BOOL)isRequiresOptionalMatterAttributeForCharacteristic:(id)a0;
- (id)mtrBaseClusterNameFromMTRClusterName:(id)a0;
- (id)mtrClusterNameFromMTRBaseClusterName:(id)a0;
- (id)mtrClusterReadFunctionNameFromBaseClusterFunctionName:(id)a0;
- (id)mtrClusterWriteFunctionNameFromBaseClusterFunctionName:(id)a0;
- (id)optionalCharacteristicsForService:(id)a0;
- (BOOL)optionalServiceLabelIndexIncludedInService:(id)a0;
- (id)reportDescriptionForCharacteristic:(id)a0 endpointID:(id)a1 clusterIDCharacteristicMap:(id)a2;
- (id)requiredCharacteristicsForService:(id)a0;
- (id)retrieveHAPCharacteristicsToCheckForRequiredAttributeValues;
- (void)servicesForDeviceTypes:(id)a0 device:(id)a1 endpoint:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)servicesOfMTRDevice:(id)a0 forDeviceTypes:(id)a1 endpoint:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)updateMetadataForCharacteristic:(id)a0 metadata:(id)a1 endpointID:(id)a2 topology:(id)a3 clusterIDCharacteristicMap:(id)a4;

@end
