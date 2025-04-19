@class AMSURLRequestEncoder, NSString, AMSProcessInfo, AMSCarrierLinkParams, NSDictionary, AMSURLSession, AMSBagKeySet, AMSMetrics, ACAccount, AMSEngagement, AMSPromise;
@protocol AMSBagProtocol, AMSCarrierLinkTaskDelegate;

@interface AMSCarrierLinkTask : AMSTask <AMSURLProtocolDelegate, NSURLSessionDelegate, AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) ACAccount *account;
@property (readonly) AMSEngagement *engagementHandler;
@property (readonly) NSString *guid;
@property (readonly) AMSMetrics *metrics;
@property (readonly) NSString *msisdn;
@property (readonly) AMSURLRequestEncoder *requestEncoder;
@property (readonly) AMSURLSession *urlSession;
@property (readonly) AMSPromise *pacTokenPromise;
@property (retain) NSDictionary *additionalLinkingParameters;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (weak) id<AMSCarrierLinkTaskDelegate> delegate;
@property (readonly) AMSCarrierLinkParams *linkParams;
@property (copy) NSDictionary *metricsOverlay;
@property (readonly) NSString *productCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)perform;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (id)_linkParameters;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleEngagementRequest:(id)a2 completion:(id /* block */)a3;
- (id)_linkURLRequest;
- (id)_performLinking;
- (void)_delegateHandleEngagementRequest:(id)a0 completion:(id /* block */)a1;
- (id)_linkFailureFromResult:(id)a0;
- (id)_metricsEventFromCarrierLinkResult:(id)a0 error:(id)a1;
- (id)_pacToken;
- (void)_performDelegateAuthenticationWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_performLinkingWithValidations;
- (id)_promptForAccount;
- (id)_recordEngagementMetricsEvent:(id)a0;
- (id)_resultDecodingURLResult:(id)a0;
- (id)initWithAccount:(id)a0 bag:(id)a1 engagementHandler:(id)a2 guid:(id)a3 linkParams:(id)a4 metrics:(id)a5 msisdn:(id)a6 pacTokenPromise:(id)a7 productCode:(id)a8 requestEncoder:(id)a9 urlSession:(id)a10;
- (id)initWithAccount:(id)a0 bag:(id)a1 linkParams:(id)a2 productCode:(id)a3;

@end
