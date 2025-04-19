@interface MTRClusterElectricalPowerMeasurement : MTRGenericCluster

- (id)readAttributeVoltageWithParams:(id)a0;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAccuracyWithParams:(id)a0;
- (id)readAttributeActiveCurrentWithParams:(id)a0;
- (id)readAttributeActivePowerWithParams:(id)a0;
- (id)readAttributeApparentCurrentWithParams:(id)a0;
- (id)readAttributeApparentPowerWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeFrequencyWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeHarmonicCurrentsWithParams:(id)a0;
- (id)readAttributeHarmonicPhasesWithParams:(id)a0;
- (id)readAttributeNeutralCurrentWithParams:(id)a0;
- (id)readAttributeNumberOfMeasurementTypesWithParams:(id)a0;
- (id)readAttributePowerFactorWithParams:(id)a0;
- (id)readAttributePowerModeWithParams:(id)a0;
- (id)readAttributeRMSCurrentWithParams:(id)a0;
- (id)readAttributeRMSPowerWithParams:(id)a0;
- (id)readAttributeRMSVoltageWithParams:(id)a0;
- (id)readAttributeRangesWithParams:(id)a0;
- (id)readAttributeReactiveCurrentWithParams:(id)a0;
- (id)readAttributeReactivePowerWithParams:(id)a0;

@end
