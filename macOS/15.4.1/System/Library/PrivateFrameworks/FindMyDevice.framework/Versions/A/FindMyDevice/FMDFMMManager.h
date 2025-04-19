@class FMNSXPCConnection, LAContext, FMDFMMAccountInfo;

@interface FMDFMMManager : NSObject

@property (nonatomic) struct AuthorizationOpaqueRef { } *authRef;
@property (retain, nonatomic) FMNSXPCConnection *disableFMMConnection;
@property (retain) FMDFMMAccountInfo *cachedAccountInfo;
@property (retain) LAContext *laContext;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isFMMEnabled;
- (void)didReceiveLostModeExitAuthToken:(id)a0;
- (void)disableFMMUsingToken:(id)a0 inContext:(unsigned long long)a1 usingCallback:(id /* block */)a2;
- (BOOL)needsLostModeExitAuth;
- (id)retrieveFMMAccount:(id *)a0;
- (void)registerObservers;
- (void)_invalidateDisableFMMConnection;
- (id)_genericErrorForDisableContext:(unsigned long long)a0;
- (void)clearFMMAccountsWithCompletion:(id /* block */)a0;
- (id)_adminAuthDataForRight:(const char *)a0;
- (void)_createAuthRight;
- (void)_storeDisableFMMConnection:(id)a0;
- (void)activationLockInfoForContext:(id)a0 withCompletion:(id /* block */)a1;
- (void)activationLockInfoForUnlockWithCompletion:(id /* block */)a0;
- (void)activationLockInfoForValidationWithCompletion:(id /* block */)a0;
- (id)addFMMAccount:(id)a0;
- (void)addFMMAccount:(id)a0 withCompletion:(id /* block */)a1;
- (void)authenticateDeviceOwnerWithCallback:(id /* block */)a0;
- (void)didChangeFMMAccountInfo:(id)a0;
- (void)didRemoveLocalFindableAccessory:(id)a0 completion:(id /* block */)a1;
- (void)disableFMMUsingToken:(id)a0 deviceOwnerCredentials:(id)a1 inContext:(unsigned long long)a2 usingCallback:(id /* block */)a3;
- (void)enableActivationLockWithCompletion:(id /* block */)a0;
- (void)eraseAllContentAndSettingsUsingCallback:(id /* block */)a0;
- (void)fetchAPNSTokenWithCompletion:(id /* block */)a0;
- (void)fetchDeviceOwnerAuthContext:(id /* block */)a0;
- (void)initiateLostModeExitAuthWithCompletion:(id /* block */)a0;
- (void)isActivationLockCapableWithCompletion:(id /* block */)a0;
- (void)isActivationLockedWithCompletion:(id /* block */)a0;
- (void)locationCommandWithCompletion:(id /* block */)a0;
- (void)locationPayloadWithCompletion:(id /* block */)a0;
- (void)needsDeviceOwnerCredentials:(id /* block */)a0;
- (id)newErrorForCode:(int)a0 message:(id)a1;
- (void)performActivationLockOperationWithContext:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeActivationLockForMacOSUserWithPassword:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeActivationLockForiCloudUser:(id)a0 authenticationPET:(id)a1 withCompletion:(id /* block */)a2;
- (id)removeFMMAccountWithUsername:(id)a0;
- (id)removeFMMAccountWithUsername:(id)a0 authRight:(id)a1;
- (void)removeFMMAccountWithUsername:(id)a0 authRight:(id)a1 completion:(id /* block */)a2;
- (void)removeFMMAccountWithUsername:(id)a0 authRight:(id)a1 deviceOwnerCredentials:(id)a2 completion:(id /* block */)a3;
- (void)removeFMMAccountWithUsername:(id)a0 completion:(id /* block */)a1;
- (void)removeManagedActivationLockWithCode:(id)a0 withCompletion:(id /* block */)a1;
- (void)retrieveFMMAccountWithCompletion:(id /* block */)a0;
- (void)shouldPromptForCredentialsForDeviceActivation:(id /* block */)a0;
- (void)shouldResumeCardsForUser:(id)a0 withCompletion:(id /* block */)a1;
- (void)signatureHeadersWithData:(id)a0 completion:(id /* block */)a1;
- (void)simulatePushWithPayload:(id)a0 completion:(id /* block */)a1;
- (void)unregisterObservers;
- (void)updateCredentialsContextForDeviceActivation:(id)a0 completion:(id /* block */)a1;
- (void)validateActivationLockForiCloudUser:(id)a0 authenticationPET:(id)a1 withCompletion:(id /* block */)a2;

@end
