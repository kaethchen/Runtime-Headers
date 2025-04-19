@class IMAccount, IMServiceImpl, SOAccountAliasController, NSTimer;

@interface SOAccountRegistrationController : NSObject <IMCloudKitEventHandlerAccountInfoProvider>

@property (nonatomic) long long registrationState;
@property (nonatomic) long long enabledState;
@property (retain, nonatomic) IMAccount *account;
@property (retain, nonatomic) SOAccountAliasController *aliasController;
@property (retain, nonatomic) IMServiceImpl *serviceType;
@property (nonatomic) BOOL isSigningOut;
@property (nonatomic) BOOL isSignedIn;
@property (retain) NSTimer *authenticationTimer;

+ (id)errorWithCode:(long long)a0;
+ (id)faceTimeRegistrationController;
+ (id)registrationController;
+ (id)registrationControllerForAccount:(id)a0;
+ (void)resetSharedInstance;
+ (id)stringForAccountRegistrationFailure:(long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)registerAccount;
- (void)enableAccount:(BOOL)a0;
- (id)loginName;
- (void)signOut;
- (BOOL)cloudKitEventNotificationManagerAccountHasiMessageEnabled:(id)a0;
- (BOOL)deleteAccount;
- (void)_SOAccountAliasVerificationStateChanged:(id)a0;
- (void)_accountAliasActivationStateChanged:(id)a0;
- (void)_accountAliasCountChanged:(id)a0;
- (void)_authenticationTimerTimedOut:(id)a0;
- (void)_clearAliasController;
- (void)_clearAuthenticationTimeout;
- (void)_registerAccountIfNecessary;
- (void)_setupAliasController;
- (BOOL)accountIsSignedIn;
- (void)accountLoggedOut:(id)a0;
- (BOOL)accountOnlineAndRegistered;
- (void)activationStatusChanged:(id)a0;
- (BOOL)addAndConfirmNewAlias:(id)a0;
- (void)authenticateWithUsername:(id)a0 authID:(id)a1 authToken:(id)a2;
- (void)authenticateWithUsername:(id)a0 password:(id)a1;
- (void)authenticateWithUsername:(id)a0 password:(id)a1 authID:(id)a2 authToken:(id)a3;
- (void)confirmNewAlias:(id)a0;
- (void)enableReadReceipts:(BOOL)a0;
- (id)localizedRegistrationErrorMessage;
- (BOOL)readReceiptsEnabled;
- (void)registrationStatusChanged:(id)a0;
- (void)setEnabledState:(long long)a0 andPostNotification:(BOOL)a1;
- (void)setRegistrationState:(long long)a0 andPostNotification:(BOOL)a1;
- (void)signOutAndUpdateDaemon:(BOOL)a0;
- (void)updateStateForAccountStatusAndPostNotification:(BOOL)a0;

@end
