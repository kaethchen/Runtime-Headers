@class NSString, NSDictionary, AMSUIWebClientContext, AMSBoolean, ACAccount;

@interface AMSUIWebBuyAction : AMSUIWebAction <AMSUIPurchaseDelegate, AMSUIWebActionRunnable>

@property (retain) NSString *contentType;
@property BOOL makeCurrentAccount;
@property BOOL requiresAccount;
@property (retain) NSDictionary *metricsOverlay;
@property (retain) NSDictionary *performanceMetricsOverlay;
@property (retain) AMSBoolean *sendBlindedData;
@property (retain) ACAccount *account;
@property (retain) NSString *buyParams;
@property BOOL legacyBuy;
@property long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) AMSUIWebClientContext *context;

- (void).cxx_destruct;
- (void)purchase:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (id)_runBuy;
- (id)_iTunesAccount;
- (void)_makeCurrentAccountIfNeeded:(id)a0;
- (id)_purchasePluginIdentifierForContentType:(id)a0;
- (id)_runBuyWithContentType:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)purchase:(id)a0 handleWindowRequest:(id)a1 error:(id *)a2;
- (id)purchaseContentWithType:(id)a0;
- (id)runAction;

@end
