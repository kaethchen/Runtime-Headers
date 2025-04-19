@protocol CPUI_EnrollmentHostUIDelegate;

@interface AccountEnrollmentController : CPUI_EnrollmentController

@property (retain) id<CPUI_EnrollmentHostUIDelegate> uiOwnerDelegate;

- (void).cxx_destruct;
- (void)showiCloudPromotionPageWithiCloudQuotaString:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestDevicePasscodeDataWithCompletionHandler:(id /* block */)a0;
- (void)requestDevicePasscodeWithCompletionHandler:(id /* block */)a0;
- (void)requestUserConsentWithProfileData:(id)a0 managedAppleID:(id)a1 enrollmentType:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)requestUsernameWithDefaultUsername:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestWebAuthenticationWithWebAuthURL:(id)a0 authenticator:(id)a1 authParams:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestiCloudSignInConfirmationWithCompletionHandler:(id /* block */)a0;
- (void)startEnrollmentInWindow:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)suggestRestoreForAccountWithUsername:(id)a0 personaID:(id)a1 completionHandler:(id /* block */)a2;

@end
