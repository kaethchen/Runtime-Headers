@class NSString;
@protocol LACDTOSensorTrustStateProvider, LACDTORatchetStateProvider, LACDTOFeatureControlling, LACDTOPendingPolicyEvaluationController;

@interface LACDTOServiceXPCHost : NSObject <LACDTOServiceXPC> {
    id<LACDTOFeatureControlling> _featureController;
    id<LACDTORatchetStateProvider> _ratchetStateProvider;
    id<LACDTOSensorTrustStateProvider> _trustStateProvider;
    id<LACDTOPendingPolicyEvaluationController> _pendingEvaluationController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)checkCanEnableFeatureWithCompletion:(id /* block */)a0;
- (void)disableFeatureStrictModeWithContext:(id)a0 completion:(id /* block */)a1;
- (void)disableFeatureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)enableFeatureStrictModeWithCompletion:(id /* block */)a0;
- (void)enableFeatureWithCompletion:(id /* block */)a0;
- (void)cancelPendingEvaluationWithRatchetIdentifier:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (void)checkIsFeatureAvailableWithCompletion:(id /* block */)a0;
- (void)checkIsFeatureEnabledWithCompletion:(id /* block */)a0;
- (void)checkIsFeatureStrictModeEnabledWithCompletion:(id /* block */)a0;
- (void)checkIsFeatureSupportedWithCompletion:(id /* block */)a0;
- (void)checkIsSensorTrustedWithCompletion:(id /* block */)a0;
- (void)enableFeatureActivatingGracePeriodWithCompletion:(id /* block */)a0;
- (id)initWithFeatureController:(id)a0 ratchetStateProvider:(id)a1 trustStateProvider:(id)a2 pendingEvaluationController:(id)a3;
- (void)ratchetStateCompositeWithCompletion:(id /* block */)a0;
- (void)ratchetStateWithCompletion:(id /* block */)a0;

@end
