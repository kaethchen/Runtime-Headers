@interface MTRBaseClusterEnergyEVSE : MTRGenericBaseCluster

+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeApproximateEVEfficiencyWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeBatteryCapacityWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeChargingEnabledUntilWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeCircuitCapacityWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeDischargingEnabledUntilWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeFaultStateWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMaximumChargeCurrentWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMaximumDischargeCurrentWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeMinimumChargeCurrentWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeNextChargeRequiredEnergyWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeNextChargeStartTimeWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeNextChargeTargetSoCWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeNextChargeTargetTimeWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeRandomizationDelayWindowWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeSessionDurationWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeSessionEnergyChargedWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeSessionEnergyDischargedWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeSessionIDWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeStateOfChargeWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeStateWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeSupplyStateWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeUserMaximumChargeCurrentWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)readAttributeVehicleIDWithClusterStateCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

- (void)startDiagnosticsWithCompletion:(id /* block */)a0;
- (void)clearTargetsWithCompletion:(id /* block */)a0;
- (void)clearTargetsWithParams:(id)a0 completion:(id /* block */)a1;
- (void)disableWithCompletion:(id /* block */)a0;
- (void)disableWithParams:(id)a0 completion:(id /* block */)a1;
- (void)enableChargingWithParams:(id)a0 completion:(id /* block */)a1;
- (void)enableDischargingWithParams:(id)a0 completion:(id /* block */)a1;
- (void)getTargetsWithCompletion:(id /* block */)a0;
- (void)getTargetsWithParams:(id)a0 completion:(id /* block */)a1;
- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeApproximateEVEfficiencyWithCompletion:(id /* block */)a0;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)a0;
- (void)readAttributeBatteryCapacityWithCompletion:(id /* block */)a0;
- (void)readAttributeChargingEnabledUntilWithCompletion:(id /* block */)a0;
- (void)readAttributeCircuitCapacityWithCompletion:(id /* block */)a0;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)a0;
- (void)readAttributeDischargingEnabledUntilWithCompletion:(id /* block */)a0;
- (void)readAttributeFaultStateWithCompletion:(id /* block */)a0;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)a0;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)a0;
- (void)readAttributeMaximumChargeCurrentWithCompletion:(id /* block */)a0;
- (void)readAttributeMaximumDischargeCurrentWithCompletion:(id /* block */)a0;
- (void)readAttributeMinimumChargeCurrentWithCompletion:(id /* block */)a0;
- (void)readAttributeNextChargeRequiredEnergyWithCompletion:(id /* block */)a0;
- (void)readAttributeNextChargeStartTimeWithCompletion:(id /* block */)a0;
- (void)readAttributeNextChargeTargetSoCWithCompletion:(id /* block */)a0;
- (void)readAttributeNextChargeTargetTimeWithCompletion:(id /* block */)a0;
- (void)readAttributeRandomizationDelayWindowWithCompletion:(id /* block */)a0;
- (void)readAttributeSessionDurationWithCompletion:(id /* block */)a0;
- (void)readAttributeSessionEnergyChargedWithCompletion:(id /* block */)a0;
- (void)readAttributeSessionEnergyDischargedWithCompletion:(id /* block */)a0;
- (void)readAttributeSessionIDWithCompletion:(id /* block */)a0;
- (void)readAttributeStateOfChargeWithCompletion:(id /* block */)a0;
- (void)readAttributeStateWithCompletion:(id /* block */)a0;
- (void)readAttributeSupplyStateWithCompletion:(id /* block */)a0;
- (void)readAttributeUserMaximumChargeCurrentWithCompletion:(id /* block */)a0;
- (void)readAttributeVehicleIDWithCompletion:(id /* block */)a0;
- (void)setTargetsWithParams:(id)a0 completion:(id /* block */)a1;
- (void)startDiagnosticsWithParams:(id)a0 completion:(id /* block */)a1;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeApproximateEVEfficiencyWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeAttributeListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeBatteryCapacityWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeChargingEnabledUntilWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeCircuitCapacityWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeClusterRevisionWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeDischargingEnabledUntilWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeFaultStateWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeFeatureMapWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMaximumChargeCurrentWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMaximumDischargeCurrentWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeMinimumChargeCurrentWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeNextChargeRequiredEnergyWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeNextChargeStartTimeWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeNextChargeTargetSoCWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeNextChargeTargetTimeWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeRandomizationDelayWindowWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeSessionDurationWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeSessionEnergyChargedWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeSessionEnergyDischargedWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeSessionIDWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeStateOfChargeWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeStateWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeSupplyStateWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeUserMaximumChargeCurrentWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)subscribeAttributeVehicleIDWithParams:(id)a0 subscriptionEstablished:(id /* block */)a1 reportHandler:(id /* block */)a2;
- (void)writeAttributeApproximateEVEfficiencyWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeApproximateEVEfficiencyWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeRandomizationDelayWindowWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeRandomizationDelayWindowWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)writeAttributeUserMaximumChargeCurrentWithValue:(id)a0 completion:(id /* block */)a1;
- (void)writeAttributeUserMaximumChargeCurrentWithValue:(id)a0 params:(id)a1 completion:(id /* block */)a2;

@end
