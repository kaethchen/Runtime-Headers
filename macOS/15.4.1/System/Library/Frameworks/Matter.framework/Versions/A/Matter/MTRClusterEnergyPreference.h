@interface MTRClusterEnergyPreference : MTRGenericCluster

- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeCurrentEnergyBalanceWithParams:(id)a0;
- (id)readAttributeCurrentLowPowerModeSensitivityWithParams:(id)a0;
- (id)readAttributeEnergyBalancesWithParams:(id)a0;
- (id)readAttributeEnergyPrioritiesWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeLowPowerModeSensitivitiesWithParams:(id)a0;
- (void)writeAttributeCurrentEnergyBalanceWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeCurrentEnergyBalanceWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeCurrentLowPowerModeSensitivityWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeCurrentLowPowerModeSensitivityWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
