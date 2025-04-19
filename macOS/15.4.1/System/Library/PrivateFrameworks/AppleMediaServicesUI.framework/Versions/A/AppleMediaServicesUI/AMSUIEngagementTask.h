@class NSError, NSString, AMSEngagementRequest, AMSUIEngagementViewController, AMSBagKeySet, NSViewController, AMSEngagementResult, AMSProcessInfo;
@protocol AMSBagProtocol, AMSUIEngagementTaskDelegate;

@interface AMSUIEngagementTask : AMSTask <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, AMSUIEngagementViewControllerDelegate, AMSBagConsumer> {
    BOOL _finished;
    BOOL _running;
}

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (retain) id<AMSBagProtocol> bag;
@property (retain) NSViewController *cachedNavigationController;
@property (retain) NSError *error;
@property BOOL presented;
@property (retain) AMSEngagementRequest *request;
@property (retain) AMSEngagementResult *result;
@property (readonly) AMSUIEngagementViewController *taskController;
@property (retain) NSViewController *presentingViewController;
@property BOOL allowMultiplePresentations;
@property (retain) AMSProcessInfo *clientInfo;
@property (weak) id<AMSUIEngagementTaskDelegate> delegate;
@property BOOL isRootRemotePresentation;
@property struct CGSize { double width; double height; } preferredContentSize;
@property BOOL remotePresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (BOOL)isFinished;
- (BOOL)isRunning;
- (id)initWithRequest:(id)a0 bag:(id)a1 presentingViewController:(id)a2;
- (id)presentEngagement;
- (double)_preferredWidth;
- (id)_infoWithBuyParams:(id)a0 additionalInfo:(id)a1;
- (BOOL)_isInitialEngagementViewController;
- (BOOL)_isRemotePresentationEnabled;
- (BOOL)_isRemoteViewService;
- (BOOL)_isWindowPresentation;
- (double)_preferredHeight;
- (id)_presentEngagementLocally;
- (id)_presentEngagementRemotely;
- (id)_presentTaskController;
- (id)_presentViewController:(id)a0 dismissBlock:(id /* block */)a1;
- (id)engagementViewController:(id)a0 contentViewWithDictionary:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)engagementViewController:(id)a0 didFinishWithResult:(id)a1 error:(id)a2;
- (BOOL)engagementViewController:(id)a0 handleDynamicDelegateAction:(id)a1 completionHandler:(id /* block */)a2;
- (void)engagementViewControllerShouldDismiss:(id)a0;

@end
