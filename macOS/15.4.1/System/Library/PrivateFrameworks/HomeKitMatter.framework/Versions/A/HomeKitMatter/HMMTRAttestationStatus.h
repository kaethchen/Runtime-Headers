@class HMMTRUIDialogPresenter, HMMTRAccessoryServer, NSString, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface HMMTRAttestationStatus : NSObject <MTRDeviceAttestationDelegate>

@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) HMMTRAccessoryServer *accessoryServer;
@property (retain, nonatomic) HMMTRUIDialogPresenter *uiDialogPresenter;
@property (retain, nonatomic) id userAuthorizationDelegate;
@property (readonly, copy) NSNumber *failSafeExpiryTimeoutSecs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)deviceAttestationCompletedForController:(id)a0 opaqueDeviceHandle:(void *)a1 attestationDeviceInfo:(id)a2 error:(id)a3;
- (void)_requestUserPermissionForBridgeAccessory:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithQueue:(id)a0 uiDialogPresenter:(id)a1 failSafeExpiryTimeoutSecs:(id)a2;
- (void)populateDelegate:(id)a0;

@end
