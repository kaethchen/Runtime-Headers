@class AMSUIWebNavigationBarModel, NSString, AMSUIWebAppearance, AMSPageRenderMetricsPresenter, NSDictionary, AMSBinaryPromise, NSViewController, AMSUIWebClientContext, AMSUICommonNavigationItem;
@protocol AMSUIWebPresentationDelegate, AMSUIWebPagePresenter;

@interface AMSUIWebContainerViewController : AMSUICommonViewController <AMSUIWebPresentationDelegate>

@property (retain) AMSBinaryPromise *activeRefresh;
@property (weak) AMSUIWebClientContext *context;
@property BOOL didAppearOnce;
@property BOOL dismissCalled;
@property BOOL isAppearing;
@property (retain) NSViewController *hiddenViewController;
@property (weak) AMSUICommonNavigationItem *lastNavigationItem;
@property long long lastNavigationStyle;
@property (retain) AMSUIWebNavigationBarModel *navigationBarModel;
@property struct CGPoint { double x; double y; } scrollPosition;
@property (readonly) unsigned long long activePresentationType;
@property (retain) AMSUIWebAppearance *appearance;
@property long long containerIndex;
@property (retain) NSViewController<AMSUIWebPagePresenter> *containedViewController;
@property long long disableReappearPlaceholder;
@property (weak) AMSUIWebContainerViewController<AMSUIWebPresentationDelegate> *modalPresentationDelegate;
@property (weak) AMSUIWebContainerViewController *nextContainer;
@property (retain) NSDictionary *pageInfo;
@property (readonly) NSDictionary *pageMetrics;
@property (retain) AMSPageRenderMetricsPresenter *pageRenderPresenter;
@property (weak) AMSUIWebContainerViewController<AMSUIWebPresentationDelegate> *pushPresentationDelegate;
@property BOOL shouldSkipInitialRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id /* block */)_actionBlockForWebButtonModel:(id)a0;
- (void)_adjustWebViewScrollFor:(id)a0 completion:(id /* block */)a1;
- (void)_applyAppearance;
- (id)_buttonModelForBarButtonItemModel:(id)a0;
- (id)_createCommonBarButtonItemWithModel:(id)a0 navigationBarModel:(id)a1;
- (unsigned long long)_determineActivePresentationType;
- (void)_handlePushDismissal;
- (void)_postEvent:(id)a0;
- (void)_prepareToMoveWebViewToVC:(id)a0 completion:(id /* block */)a1;
- (void)_refreshForInitialAppear;
- (id)_refreshWithOptions:(id)a0;
- (void)_scrollTo:(struct CGPoint { double x0; double x1; })a0 webView:(id)a1 completion:(id /* block */)a2;
- (void)_setupNavBarAnimated:(BOOL)a0;
- (void)applyNavigationBarModel:(id)a0 toCommonNavigationController:(id)a1 animated:(BOOL)a2;
- (void)applyNavigationModel:(id)a0;
- (void)cacheScrollViewPositionFor:(id)a0;
- (void)contentWasReplacedAnimated:(BOOL)a0;
- (void)didDismissController:(id)a0;
- (void)handleModalDismissal;
- (id)initWithViewController:(id)a0 appearance:(id)a1 navigationBar:(id)a2 context:(id)a3;
- (id)navigationItem;
- (void)replaceContentWithViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setupToolbarAnimated:(BOOL)a0;
- (void)updateRefreshControlForPageModel:(id)a0;
- (void)updateSafeAreaEdgesForPageModel:(id)a0;

@end
