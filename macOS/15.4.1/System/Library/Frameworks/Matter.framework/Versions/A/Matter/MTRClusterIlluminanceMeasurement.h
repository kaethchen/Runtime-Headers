@interface MTRClusterIlluminanceMeasurement : MTRGenericCluster

- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeLightSensorTypeWithParams:(id)a0;
- (id)readAttributeMaxMeasuredValueWithParams:(id)a0;
- (id)readAttributeMeasuredValueWithParams:(id)a0;
- (id)readAttributeMinMeasuredValueWithParams:(id)a0;
- (id)readAttributeToleranceWithParams:(id)a0;

@end
