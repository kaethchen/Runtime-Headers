@class NSUUID, NSString, NSDictionary, AMSAuthenticateOptions, AMSBagKeySet, AMSMutablePromise, NSMutableArray, NSNumber, ACAccountStore;
@protocol AMSAuthenticateMetricsProtocol, AMSBagProtocol, AMSAuthenticateTaskDelegate;

@interface AMSAuthenticateTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) NSDictionary *initialAuthenticationResults;
@property (retain) AMSMutablePromise *resultPromise;
@property (retain) NSMutableArray *errors;
@property BOOL isLocalAccountProvided;
@property BOOL isServerRequested;
@property (retain) id<AMSAuthenticateMetricsProtocol> metrics;
@property (retain) ACAccountStore *accountStore;
@property (retain) id<AMSBagProtocol> bag;
@property (weak) id<AMSAuthenticateTaskDelegate> delegate;
@property (readonly) AMSAuthenticateOptions *options;
@property (copy) NSString *password;
@property (copy) NSString *multiUserToken;
@property (copy) NSString *rawPassword;
@property (copy) NSString *altDSID;
@property (retain) NSNumber *DSID;
@property (retain) NSUUID *homeIdentifier;
@property (retain) NSUUID *homeUserIdentifier;
@property (copy) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_accountStoreForOptions:(id)a0;
+ (id)_createFallbackBag;
+ (id)createBagForSubProfile;
+ (id)loadCreateAppleIDWithClientInfo:(id)a0 bag:(id)a1;
+ (id)loadCreateAppleIDWithClientInfo:(id)a0 url:(id)a1 bag:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (id)initWithAccount:(id)a0 options:(id)a1;
- (id)_sanitizeError:(id)a0;
- (id)_runCreateAccountDialogWithBag:(id)a0;
- (id)_accountForAuthenticationWithError:(id *)a0;
- (id)_attemptCompanionAuthenticationForAccount:(id)a0;
- (void)_attemptMultiUserTokenAuthenticationForAccount:(id)a0 completion:(id /* block */)a1;
- (id)_attemptPasswordReuseAuthenticationForAccount:(id)a0;
- (id)_createAuthKitUpdateTaskForAccount:(id)a0;
- (id)_finishWithVerifiedAccount:(id)a0 andAuthKitUpdateResult:(id)a1;
- (void)_handleDialogFromError:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isMetricsEnabled;
- (void)_performAuthenticationAndGeneratePasswordWithAccount:(id)a0;
- (id)_performAuthenticationUsingAccount:(id)a0 credentialSource:(unsigned long long)a1;
- (void)_performAuthenticationWithInitialResultsAndAccount:(id)a0;
- (void)_postFollowUpForFailedAuthenticationWithAccount:(id)a0;
- (void)_processAuthKitUpdateResult:(id)a0 error:(id)a1;
- (id)_runCreateAccountDialog;
- (id)_runDialogRequest:(id)a0;
- (BOOL)_shouldShowCreateAccountDialogForAccount:(id)a0;
- (id)_signIntoOtherMediaTypeWithVerifiedAccount:(id)a0 andAuthKitUpdateResults:(id)a1;
- (void)_updateAccountPasswordUsingSecondaryAccounts:(id)a0;
- (void)_updateAccountWithProvidedInformation:(id)a0;
- (id)homeID;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 options:(id)a2;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 options:(id)a2 bag:(id)a3;
- (id)initWithAccount:(id)a0 options:(id)a1 bag:(id)a2;
- (id)initWithAuthenticationResults:(id)a0 accountStore:(id)a1 options:(id)a2;
- (id)initWithAuthenticationResults:(id)a0 accountStore:(id)a1 options:(id)a2 bag:(id)a3;
- (id)initWithAuthenticationResults:(id)a0 options:(id)a1;
- (id)initWithAuthenticationResults:(id)a0 options:(id)a1 bag:(id)a2;
- (id)initWithRequest:(id)a0 accountStore:(id)a1;
- (id)initWithRequest:(id)a0 accountStore:(id)a1 bag:(id)a2;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (id)performAuthentication;
- (void)setHomeID:(id)a0;

@end
