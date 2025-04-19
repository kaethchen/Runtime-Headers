@class AMSURLRequestEncoder, NSString, AMSProcessInfo, AMSChannelLinkParams, NSSet, NSDictionary, AMSURLSession, AMSBagKeySet, AMSMetrics, ACAccount, AMSEngagement, AMSPromise;
@protocol AMSBagProtocol, AMSChannelLinkTaskDelegate;

@interface AMSChannelLinkTask : AMSTask <AMSURLProtocolDelegate, NSURLSessionDelegate, AMSBagConsumer>

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
@property (weak) id<AMSChannelLinkTaskDelegate> delegate;
@property (readonly) AMSChannelLinkParams *linkParams;
@property (copy) NSDictionary *metricsOverlay;
@property (readonly) NSString *productCode;
@property (readonly) NSSet *supplementaryFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_postLinkingParametersWithResult:(id)a0 account:(id)a1;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)perform;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (id)_linkParameters;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleEngagementRequest:(id)a2 completion:(id /* block */)a3;
- (id)_linkURLRequest;
- (id)_performLinking;
- (id)initWithAccount:(id)a0 bag:(id)a1 linkParams:(id)a2 productCode:(id)a3 supplementaryFields:(id)a4;
- (id)_chainedLinkingResult:(id)a0;
- (void)_delegateHandleEngagementRequest:(id)a0 completion:(id /* block */)a1;
- (id)_linkFailureFromResult:(id)a0;
- (id)_metricsEventFromChannelLinkResult:(id)a0 error:(id)a1;
- (void)_performDelegateAuthenticationWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_performLinkingWithValidations;
- (id)_postLinkingActionURLRequestWithResult:(id)a0;
- (id)_processPostLinkingActionsWithResult:(id)a0;
- (id)_processPostLinkingMetricsWithResult:(id)a0 error:(id)a1;
- (id)_promptForAccount;
- (id)_recordEngagementMetricsEvent:(id)a0;
- (id)_resultDecodingURLResult:(id)a0;
- (id)initWithAccount:(id)a0 bag:(id)a1 engagementHandler:(id)a2 guid:(id)a3 linkParams:(id)a4 metrics:(id)a5 msisdn:(id)a6 pacTokenPromise:(id)a7 productCode:(id)a8 requestEncoder:(id)a9 supplementaryFields:(id)a10 urlSession:(id)a11;

@end
