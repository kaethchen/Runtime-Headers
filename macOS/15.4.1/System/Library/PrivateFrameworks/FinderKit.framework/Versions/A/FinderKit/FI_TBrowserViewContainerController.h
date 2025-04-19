@class FI_TSearchSliceController, FI_TContainerLayoutManager, NSViewController, NSMutableArray, FI_TPathBarController, FI_TBrowserSplitViewController;

@interface FI_TBrowserViewContainerController : FI_TViewController {
    NSViewController *_bannerViewController;
    NSMutableArray *_layoutConstraints;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct __compressed_pair<TNotificationCenterObserver *, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__value_; } __end_cap_; } _notificationCenterObservers;
}

@property (retain, nonatomic) FI_TContainerLayoutManager *containerLayoutManager;
@property (retain, nonatomic) FI_TPathBarController *pathBarController;
@property (retain, nonatomic) FI_TPathBarController *ephemeralPathBarController;
@property (nonatomic) BOOL ephemeralPathBarIsInHideAnimation;
@property (readonly, nonatomic) BOOL bannerViewIsVisible;
@property (readonly, nonatomic) FI_TBrowserSplitViewController *browserSplitViewController;
@property (readonly, nonatomic) FI_TSearchSliceController *searchSliceController;
@property (readonly, nonatomic) BOOL isPathBarVisible;
@property (readonly, nonatomic) BOOL isEphemeralPathBarVisible;

+ (id)keyPathsForValuesAffectingIsPathBarVisible;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)aboutToTearDown;
- (void)configureView;
- (void)initCommon;
- (id)bannerView;
- (void)setPathBarTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 selectedNodes:(const void *)a1;
- (id)searchSliceView;
- (void)activateLayoutGuideRelatedConstraintsIfNeeded;
- (id)browserSplitView;
- (id)browserSplitViewWrapper;
- (void)configureBannerView:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 isInColumnView:(BOOL)a1 isBackupBrowser:(BOOL)a2 icqMessage:(id)a3;
- (void)configureBrowserSplitViewWithBrowserViewController:(id)a0;
- (BOOL)configureEphemeralPathBar:(BOOL)a0 ephemeralDisplayController:(id)a1 containerDelegate:(id)a2;
- (BOOL)configurePathBar:(BOOL)a0 containerDelegate:(id)a1;
- (void)configureSearchSliceView:(BOOL)a0 showSliceContainer:(BOOL)a1 showSearchStringSlice:(BOOL)a2 searchFilterUTIs:(id)a3 toolbarSearchField:(id)a4 browserContainerController:(id)a5;
- (id)initWithContentView:(id)a0 containerLayoutManager:(id)a1;
- (BOOL)isSearchSliceViewVisible;
- (id)pathBarView;
- (void)tearDownAccessoryViews;

@end
