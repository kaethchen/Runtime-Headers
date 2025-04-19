@class NSString, NSArray, AMSCampaignAttributor, NSURL, AMSBagKeySet, AMSURLSession, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSCampaignAttributionTask : AMSTask <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) AMSURLSession *URLSession;
@property (retain, nonatomic) AMSCampaignAttributor *campaignAttributor;
@property (retain) ACAccount *account;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (copy) NSArray *additionalQueryItems;
@property (readonly) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isCampaignAttributorV2Enabled;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)perform;
- (id)_queryItemNames;
- (id)_buildProcessRedirectURLWithEndpointURL:(id)a0 error:(id *)a1;
- (id)_encodeRequestForURL:(id)a0 error:(id *)a1;
- (id)_parseAllowedQueryParamsFromInfo:(id)a0 error:(id *)a1;
- (id)_parseCookiesFromResult:(id)a0;
- (id)_parseEndpointURLFromInfo:(id)a0 error:(id *)a1;
- (id)_parseRedirectURLFromResult:(id)a0 error:(id *)a1;
- (id)_processRedirectWithEndpointURL:(id)a0 error:(id *)a1;
- (id)_processRedirectWithRequest:(id)a0 error:(id *)a1;
- (id)_retrieveProcessRedirectInfoWithError:(id *)a0;
- (void)_setAccountCookies:(id)a0;
- (BOOL)_validateAllowlist:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 bag:(id)a1;
- (id)initWithURL:(id)a0 bag:(id)a1 URLSession:(id)a2;

@end
