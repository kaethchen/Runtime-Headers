@class AMSEngagementRequest, NSString, NSViewController, AMSBagKeySet, NSDictionary, AMSPromise, AMSProcessInfo;
@protocol AMSBagProtocol, AMSUIEngagementViewControllerDelegate;

@interface AMSUIEngagementViewController : AMSUICommonViewController <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) NSViewController *childController;
@property (retain) NSDictionary *engagementMetrics;
@property (retain) AMSPromise *loadVCPromise;
@property BOOL started;
@property (retain) id<AMSBagProtocol> bag;
@property (retain) AMSProcessInfo *clientInfo;
@property (weak) id<AMSUIEngagementViewControllerDelegate> delegate;
@property (readonly) AMSEngagementRequest *request;
@property (readonly) AMSEngagementRequest *effectiveRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)_setup;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)_dismiss;
- (id)_preloadChildVC;
- (void)_enqueueDisplayEvent;
- (id)_isOriginatingURLTrusted;
- (BOOL)_isURLTrusted:(id)a0 inDomains:(id)a1;
- (void)_receivedCarrierLinkResult:(id)a0;
- (void)_receivedPurchaseResult:(id)a0;
- (void)_setupContentSize;
- (void)_startEngagement;
- (void)_updateChildViewController:(id)a0;
- (id)dynamicViewController:(id)a0 contentViewWithDictionary:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)dynamicViewController:(id)a0 didFinishCarrierLinkingWithResult:(id)a1 error:(id)a2;
- (void)dynamicViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)dynamicViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2;
- (BOOL)dynamicViewController:(id)a0 handleDelegateAction:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)dynamicViewControllerShouldDismiss:(id)a0;
- (id)initWithRequest:(id)a0 bag:(id)a1 delegate:(id)a2;
- (id)navigationItem;
- (id)requestIsSupported;
- (void)resolveWithResult:(id)a0 error:(id)a1;
- (void)updateEffectiveRequest:(id)a0;
- (void)webViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)webViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)willDismissWebViewController:(id)a0;

@end
