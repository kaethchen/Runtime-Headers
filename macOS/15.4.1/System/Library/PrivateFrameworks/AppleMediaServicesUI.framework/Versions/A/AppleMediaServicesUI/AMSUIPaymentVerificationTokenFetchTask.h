@class NSString, WrappedAMSUIWebViewController, AMSUIPaymentVerificationMetrics, NSDictionary, AMSBagKeySet, ACAccount, AMSPromise, NSViewController, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUIPaymentVerificationTokenFetchTask : AMSTask <AMSBagConsumer, AMSUIWebDelegate>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) AMSUIPaymentVerificationMetrics *metrics;
@property (retain) AMSPromise *resultPromise;
@property (retain) WrappedAMSUIWebViewController *webVC;
@property (readonly) ACAccount *account;
@property (readonly) NSDictionary *accountParameters;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (readonly) NSString *displayName;
@property (readonly) unsigned long long mode;
@property (retain) NSDictionary *userInfo;
@property (readonly) NSViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)_contextCombining:(id)a0 with:(id)a1 accountParameters:(id)a2 account:(id)a3;
+ (id)_promiseToTryNextFlowWithResult:(id)a0 error:(id)a1 continuationBlock:(id /* block */)a2;
+ (id)_tokenFromDictionary:(id)a0;
+ (id)performRemoteDisabledFeatureWithBag:(id)a0 featureKey:(id)a1 featureBlock:(id /* block */)a2;

- (void).cxx_destruct;
- (id)initWithMode:(unsigned long long)a0 accountParameters:(id)a1 viewController:(id)a2 bag:(id)a3 displayName:(id)a4;
- (id)performTask;
- (void)_finishPromiseWithResult:(id)a0 error:(id)a1;
- (id)initWithMode:(unsigned long long)a0 account:(id)a1 viewController:(id)a2 bag:(id)a3 displayName:(id)a4;
- (id)performApplePayTaskWithFeatureFlag:(BOOL)a0;
- (id)performCardOnFileTaskWithFeatureFlag:(BOOL)a0;
- (id)performIDCardTaskWithFeatureFlag:(BOOL)a0;
- (id)performWebFlowTask;
- (void)setHeader:(id)a0 withValueIn:(id)a1 forKey:(id)a2 onRequest:(id)a3;
- (void)webViewController:(id)a0 didEncodeNetworkRequest:(id)a1;
- (void)webViewController:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;

@end
