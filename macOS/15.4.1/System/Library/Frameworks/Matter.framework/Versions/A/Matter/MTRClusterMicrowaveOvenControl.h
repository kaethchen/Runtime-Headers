@interface MTRClusterMicrowaveOvenControl : MTRGenericCluster

- (void)addMoreTimeWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeCookTimeWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeMaxCookTimeWithParams:(id)a0;
- (id)readAttributeMaxPowerWithParams:(id)a0;
- (id)readAttributeMinPowerWithParams:(id)a0;
- (id)readAttributePowerSettingWithParams:(id)a0;
- (id)readAttributePowerStepWithParams:(id)a0;
- (id)readAttributeSelectedWattIndexWithParams:(id)a0;
- (id)readAttributeSupportedWattsWithParams:(id)a0;
- (id)readAttributeWattRatingWithParams:(id)a0;
- (void)setCookingParametersWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)setCookingParametersWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;

@end
