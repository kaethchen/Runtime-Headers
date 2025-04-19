@class NSString;
@protocol LACCredentialStore, LACDTODeviceInfoProvider;

@interface LACDTOPolicyProcessorEmptyPasscode : NSObject <LACEvaluationRequestProcessor> {
    id<LACCredentialStore> _store;
    id<LACDTODeviceInfoProvider> _device;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCredentialStore:(id)a0 device:(id)a1;
- (void)_processAndEvaluateRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)canProcessRequest:(id)a0;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
