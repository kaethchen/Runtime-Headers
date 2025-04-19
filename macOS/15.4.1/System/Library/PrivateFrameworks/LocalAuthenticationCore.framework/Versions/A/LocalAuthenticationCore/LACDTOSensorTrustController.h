@class NSString;
@protocol LACDTOSensorTrustStore, LACDTOSensorTrustVerifier, LACFeatureFlagsProviderDTO, LACUserInterfacePresenting;

@interface LACDTOSensorTrustController : NSObject <LACEvaluationRequestProcessor> {
    id<LACUserInterfacePresenting> _ui;
    id<LACDTOSensorTrustStore> _store;
    id<LACDTOSensorTrustVerifier> _verifier;
    id<LACFeatureFlagsProviderDTO> _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_isHardwareTrustError:(id)a0;
- (BOOL)canProcessRequest:(id)a0;
- (id)initWithReplyQueue:(id)a0 ui:(id)a1 store:(id)a2 verifier:(id)a3 flags:(id)a4;
- (void)postProcessRequest:(id)a0 result:(id)a1 completion:(id /* block */)a2;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
