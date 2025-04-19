@interface MTRClusterBridgedDeviceBasicInformation : MTRGenericCluster

- (void)keepActiveWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeHardwareVersionStringWithParams:(id)a0;
- (id)readAttributeHardwareVersionWithParams:(id)a0;
- (id)readAttributeManufacturingDateWithParams:(id)a0;
- (id)readAttributeNodeLabelWithParams:(id)a0;
- (id)readAttributePartNumberWithParams:(id)a0;
- (id)readAttributeProductAppearanceWithParams:(id)a0;
- (id)readAttributeProductIDWithParams:(id)a0;
- (id)readAttributeProductLabelWithParams:(id)a0;
- (id)readAttributeProductNameWithParams:(id)a0;
- (id)readAttributeProductURLWithParams:(id)a0;
- (id)readAttributeReachableWithParams:(id)a0;
- (id)readAttributeSerialNumberWithParams:(id)a0;
- (id)readAttributeSoftwareVersionStringWithParams:(id)a0;
- (id)readAttributeSoftwareVersionWithParams:(id)a0;
- (id)readAttributeUniqueIDWithParams:(id)a0;
- (id)readAttributeVendorIDWithParams:(id)a0;
- (id)readAttributeVendorNameWithParams:(id)a0;
- (void)writeAttributeNodeLabelWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeNodeLabelWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
