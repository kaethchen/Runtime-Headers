@class NSString, ACAccountStore;
@protocol AASignOutFlowControllerDelegate;

@interface AASignOutFlowController : NSObject {
    ACAccountStore *_accountStore;
    NSString *telemetryFlowID;
}

@property (weak, nonatomic) id<AASignOutFlowControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)signOutAppleAccount:(id)a0 completion:(id /* block */)a1;
- (void)sendTelemetryEventSignoutStart:(id)a0;
- (void)_delegate_disableFindMyDeviceForAccount:(id)a0 completion:(id /* block */)a1;
- (void)_delegate_performWalrusValidationForAccount:(id)a0 completion:(id /* block */)a1;
- (void)_delegate_presentError:(id)a0 withTitle:(id)a1;
- (void)_delegate_signOutAccount:(id)a0 completion:(id /* block */)a1;
- (void)_delegate_startSignOutFlowForAccount:(id)a0 completion:(id /* block */)a1;
- (void)_disableDeviceLocatorForAccount:(id)a0 completion:(id /* block */)a1;
- (void)_performWalrusValidationForAccount:(id)a0 completion:(id /* block */)a1;
- (void)_preflightSignOutOfAccount:(id)a0 completion:(id /* block */)a1;
- (void)_signOutAppleAccount:(id)a0 completion:(id /* block */)a1;
- (void)_startSignOutOfferFlow:(id)a0 completion:(id /* block */)a1;
- (BOOL)isBetterSignOutFeatureEnabled;
- (void)sendTelemetryEventSignoutFinish:(id)a0 account:(id)a1 didSucceed:(BOOL)a2 error:(id)a3;

@end
