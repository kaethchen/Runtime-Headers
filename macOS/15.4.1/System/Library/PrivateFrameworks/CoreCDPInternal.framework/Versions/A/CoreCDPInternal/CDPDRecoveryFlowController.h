@class CDPDEDPRecoveryController, NSString, CDPDSecureBackupController, CDPRecoveryFlowContext;
@protocol CDPStateUIProviderInternal, CDPRemoteDeviceSecretValidatorProtocol, CDPDCircleControl;

@interface CDPDRecoveryFlowController : NSObject <CDPDDeviceSecretValidatorDelegate>

@property (retain, nonatomic) CDPRecoveryFlowContext *recoveryContext;
@property (retain, nonatomic) id<CDPDCircleControl> circleController;
@property (retain, nonatomic) CDPDSecureBackupController *secureBackupController;
@property (retain, nonatomic) id<CDPStateUIProviderInternal> uiProvider;
@property (retain, nonatomic) id<CDPRemoteDeviceSecretValidatorProtocol> validator;
@property (retain, nonatomic) CDPDEDPRecoveryController *edpController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)secretValidator:(id)a0 didRequestRepairEDPStateWithContext:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)_escapeOfferForDevices:(id)a0;
- (void)_updateEventWithDevices:(id)a0 withDevices:(id)a1;
- (void)_updateInteractiveRecoverStartEvent:(id)a0 withDevices:(id)a1;
- (void)beginInteractiveRecoveryForDevices:(id)a0 isUsingMultipleICSC:(BOOL)a1 usingValidator:(id)a2;
- (void)beginRecovery:(id /* block */)a0;
- (id)initWithContext:(id)a0 uiProvider:(id)a1 secureBackupController:(id)a2 circleController:(id)a3;
- (id)initWithContext:(id)a0 uiProvider:(id)a1 secureBackupController:(id)a2 circleProxy:(id)a3 octagonProxy:(id)a4;
- (void)recoveryValidatorWithDevices:(id)a0 forMultipleICSC:(BOOL)a1 validationHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)retrieveInflatedDevices:(id /* block */)a0;
- (void)secretValidator:(id)a0 didRequestEDPRecoveryTokenRepairWithContext:(id)a1 successfulCDPRecoveryContinuationHandler:(id /* block */)a2;
- (void)secretValidator:(id)a0 didRequestValidateEDPIdentitiesWithContext:(id)a1 completion:(id /* block */)a2;
- (void)secretValidator:(id)a0 didRequestValidateEDPRecoveryToken:(id)a1 withContext:(id)a2 completion:(id /* block */)a3;
- (void)secretValidator:(id)a0 recoverSecureBackupWithContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)secretValidator:(id)a0 shouldContinueValidationAfterError:(id)a1;

@end
