@class NSError, NSString, AMSEngagementRequest, AMSEngagementResult, AMSBagKeySet, NSViewController, AMSPromise, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUIEngagementTaskViewController : AMSUICommonViewController <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) id<AMSBagProtocol> bag;
@property (retain) NSViewController *childController;
@property (retain) AMSPromise *childPromise;
@property (copy) id /* block */ dismissBlock;
@property (retain) NSError *error;
@property BOOL presented;
@property (retain) AMSEngagementRequest *request;
@property (retain) AMSEngagementResult *result;
@property BOOL ignoresDismissDetection;
@property (retain) AMSProcessInfo *clientInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_setup;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (id)startEngagement;
- (void)_finishWithResultInfo:(id)a0 error:(id)a1;
- (id)_isOriginatingURLTrusted;
- (BOOL)_isURLTrusted:(id)a0 inDomains:(id)a1;
- (id)_preloadChild;
- (void)_receivedCarrierLinkResult:(id)a0;
- (void)_receivedPurchaseResult:(id)a0;
- (void)_setupContentSize;
- (void)_updateChildViewController:(id)a0;
- (id)_viewControllerForType:(id)a0;
- (id)canPresent;
- (void)dynamicViewController:(id)a0 didFinishCarrierLinkingWithResult:(id)a1 error:(id)a2;
- (void)dynamicViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)dynamicViewController:(id)a0 didFinishWithPurchaseResult:(id)a1 error:(id)a2;
- (void)dynamicViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2;
- (BOOL)dynamicViewControllerShouldDismiss:(id)a0;
- (void)webViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)webViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2 completion:(id /* block */)a3;

@end
