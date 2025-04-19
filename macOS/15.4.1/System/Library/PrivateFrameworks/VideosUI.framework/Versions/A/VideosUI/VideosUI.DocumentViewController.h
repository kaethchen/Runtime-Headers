@interface VideosUI.DocumentViewController : VideosUI.VUIViewController <VideosUI.VUIDeeplinkURLHandlingInterceptor, VUINSNavigationControllerDelegate> {
    void /* unknown type, empty encoding */ viewWillAppearAfterTabSwitch;
    void /* unknown type, empty encoding */ reportImpressionsInViewWillDisappear;
    void /* unknown type, empty encoding */ templateViewController;
    void /* unknown type, empty encoding */ hasViewAppeared;
    void /* unknown type, empty encoding */ deferLoadingTemplateController;
    void /* unknown type, empty encoding */ alwaysShowTemplateWithAnimation;
    void /* unknown type, empty encoding */ pendingDeeplinkURL;
    void /* unknown type, empty encoding */ documentDelegate;
    void /* unknown type, empty encoding */ ignoreDidMoveToNilParent;
    void /* unknown type, empty encoding */ rebaseIdentifier;
    void /* unknown type, empty encoding */ isInTabBarMode;
    void /* unknown type, empty encoding */ loadingViewManager;
    void /* unknown type, empty encoding */ documentDidSetHandler;
    void /* unknown type, empty encoding */ document;
    void /* unknown type, empty encoding */ isTransitioning;
    void /* unknown type, empty encoding */ navBarOpacity;
    void /* unknown type, empty encoding */ navBarTintColor;
    void /* unknown type, empty encoding */ navBarPrefersLargeTitles;
    void /* unknown type, empty encoding */ navBarTitleView;
    void /* unknown type, empty encoding */ navBarTitle;
    void /* unknown type, empty encoding */ navBarCachedWidth;
    void /* unknown type, empty encoding */ needsConfigurationWhenMovesToParent;
}

@property (nonatomic, readonly) BOOL vuiShouldAutomaticallyForwardAppearanceMethods;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;
- (void)willTerminate:(id)a0;
- (BOOL)handleDeeplink:(id)a0;
- (void)vui_viewDidLoad;
- (BOOL)deeplinkURLWasHandled:(id)a0;
- (void)scrollToTopWithAnimated:(BOOL)a0 needsFocusUpdate:(BOOL)a1;
- (void)vui_didMoveToParentViewController:(id)a0;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_viewWillDisappear:(BOOL)a0;

@end
