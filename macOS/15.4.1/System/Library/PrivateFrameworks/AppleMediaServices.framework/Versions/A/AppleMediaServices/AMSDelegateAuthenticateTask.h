@class AMSDelegateAuthenticateRequest, NSString, NSDictionary, AMSBagKeySet, ACAccount, AMSURLSession, AMSBiometricsSignatureResult;
@protocol AMSBagProtocol;

@interface AMSDelegateAuthenticateTask : AMSTask <AMSURLProtocolDelegate, NSURLSessionDelegate, AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) ACAccount *account;
@property (readonly) AMSURLSession *session;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) NSDictionary *formData;
@property (readonly) AMSDelegateAuthenticateRequest *request;
@property (retain) AMSBiometricsSignatureResult *signatureResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)_init;
- (id)_delegateAuthenticateResultFromUrlResult:(id)a0;
- (id)_encodedURLRequestWithError:(id *)a0;
- (id)_parseFormDataAsStringFromResult:(id)a0;
- (id)_parseFormDataFromResult:(id)a0;
- (id)_performDelegateAuthenticationWithError:(id *)a0;
- (id)_urlRequestParameters;
- (id)delegateAuthenticateUrl;
- (id)initWithBag:(id)a0 account:(id)a1;
- (id)initWithDelegateAuthenticateRequest:(id)a0 bag:(id)a1 account:(id)a2;
- (id)performDelegateAuthentication;

@end
