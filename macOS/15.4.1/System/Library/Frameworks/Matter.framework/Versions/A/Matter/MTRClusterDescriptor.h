@interface MTRClusterDescriptor : MTRGenericCluster

- (id)readAttributeTagListWithParams:(id)a0;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClientListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeDeviceListWithParams:(id)a0;
- (id)readAttributeDeviceTypeListWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributePartsListWithParams:(id)a0;
- (id)readAttributeServerListWithParams:(id)a0;

@end
