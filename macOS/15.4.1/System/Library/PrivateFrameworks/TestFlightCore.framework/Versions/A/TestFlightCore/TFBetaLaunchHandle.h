@class BSProcessHandle, NSString;
@protocol TFBetaLaunchHandleActivationDelegate;

@interface TFBetaLaunchHandle : NSObject <TFBetaAppLaunchScreenHost>

@property (readonly, nonatomic) BSProcessHandle *processHandle;
@property (readonly, copy, nonatomic) NSString *logKey;
@property (weak, nonatomic) id<TFBetaLaunchHandleActivationDelegate> activationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProcessHandle:(id)a0;
- (void)activateIfNeeded;
- (void)launchScreenWindowWasDismissed:(id)a0;
- (void)_activateAlertWithLaunchInfo:(id)a0 bundleURL:(id)a1;
- (id)_getProcessBundleURLForPid:(int)a0;
- (BOOL)_remoteAlertShouldActivateForLaunchInfo:(id)a0;
- (void)_updatedLaunchInfoForActivation:(id)a0;
- (void)activateForTestingWithLaunchInfo:(id)a0;

@end
