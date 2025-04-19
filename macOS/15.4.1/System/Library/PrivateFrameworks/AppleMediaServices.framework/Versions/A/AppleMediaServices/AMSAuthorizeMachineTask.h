@class AMSProcessInfo, NSString, NSNumber, AMSBagKeySet, ACAccount, AMSURLSession, AMSAuthenticateRequest;
@protocol AMSBagProtocol, AMSRequestPresentationDelegate;

@interface AMSAuthorizeMachineTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) AMSAuthenticateRequest *authenticateRequest;
@property (getter=isDeauthorize) BOOL deauthorize;
@property (retain) AMSURLSession *session;
@property (retain) ACAccount *validAccount;
@property unsigned long long authorizeReason;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (copy) NSNumber *familyMemberAccountDSID;
@property (retain) NSString *logKey;
@property (weak) id<AMSRequestPresentationDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)account;
- (id)performAuthorization;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleEngagementRequest:(id)a2 completion:(id /* block */)a3;
- (id)_authenticate;
- (id)_buildRequest;
- (id)_buildRequestParametersWithError:(id *)a0;
- (id)_buildRequestTask;
- (id)_checkRequestThrottle;
- (id)_keybagSyncStringForAccount:(id)a0 withTransactionType:(unsigned int)a1 error:(id *)a2;
- (id)_performAuthorization;
- (id)initWithAccount:(id)a0 authorizeReason:(unsigned long long)a1 bag:(id)a2;
- (id)initWithUsername:(id)a0 authorizeReason:(unsigned long long)a1 bag:(id)a2 presentationDelegate:(id)a3;
- (id)performDeauthorization;

@end
