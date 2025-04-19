@class SVXInstrumentationUtilities, NSString, SVXActivationUtils, SVXQueuePerformer, AFSiriActivationListener, SVXVirtualDeviceManager, SVXSiriActivationSupportPredicate;

@interface SVXSiriActivationListenerDelegate : NSObject <AFSiriActivationListenerDelegate> {
    AFSiriActivationListener *_siriActivationListener;
    SVXQueuePerformer *_mainQueuePerformer;
    SVXVirtualDeviceManager *_virtualDeviceManager;
    SVXSiriActivationSupportPredicate *_siriActivationSupportPredicate;
    SVXInstrumentationUtilities *_instrumentationUtils;
    SVXActivationUtils *_activationUtils;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)siriActivationListener:(id)a0 activateWithRequestInfo:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)siriActivationListener:(id)a0 deactivateForReason:(long long)a1 options:(unsigned long long)a2 context:(id)a3 completion:(id /* block */)a4;
- (void)siriActivationListener:(id)a0 myriadEventWithRequestInfo:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)siriActivationListener:(id)a0 prewarmWithRequestInfo:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (id)initWithSiriActivationListener:(id)a0 mainQueuePerformer:(id)a1 siriActivationSupportPredicate:(id)a2 virtualDeviceManager:(id)a3 instrumentationUtils:(id)a4 activationUtils:(id)a5;
- (id)initWithVirtualDeviceManager:(id)a0;

@end
