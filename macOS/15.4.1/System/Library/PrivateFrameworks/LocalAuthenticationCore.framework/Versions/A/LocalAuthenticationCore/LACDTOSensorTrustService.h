@class NSString, NSObject;
@protocol LACUserInterfaceController, LACDTOSensorTrustStateProvider, LACFlagsProvider, LACDTOFeatureStateProviding, OS_dispatch_queue, LACDTOKVStore;

@interface LACDTOSensorTrustService : NSObject <LACDTOSensorTrustService> {
    NSObject<OS_dispatch_queue> *_replyQueue;
    id<LACUserInterfaceController> _uiController;
    id<LACDTOKVStore> _store;
    id<LACDTOFeatureStateProviding> _featureStateProvider;
    id<LACFlagsProvider> _flags;
    id<LACDTOSensorTrustStateProvider> _trustStateProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_repairStateProvider;
- (id)_trustStore;
- (id)_trustVerifier;
- (id)_uiPresenter;
- (id)evaluationProcessor;
- (id)initWithReplyQueue:(id)a0 uiController:(id)a1 store:(id)a2 featureStateProvider:(id)a3;
- (id)trustStateProvider;

@end
