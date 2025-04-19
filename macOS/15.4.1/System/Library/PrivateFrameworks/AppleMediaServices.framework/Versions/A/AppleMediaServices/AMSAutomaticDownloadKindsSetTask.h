@class NSString, NSArray, AMSBagKeySet, ACAccount, AMSURLSession, AMSProcessInfo;
@protocol AMSBagProtocol, AMSRequestPresentationDelegate;

@interface AMSAutomaticDownloadKindsSetTask : AMSTask <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) AMSURLSession *session;
@property (readonly) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (readonly) NSArray *enabledMediaKinds;
@property (readonly, weak) id<AMSRequestPresentationDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)perform;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (id)initWithEnabledMediaKinds:(id)a0 account:(id)a1 bag:(id)a2;
- (id)initWithEnabledMediaKinds:(id)a0 account:(id)a1 bag:(id)a2 presentationDelegate:(id)a3;

@end
