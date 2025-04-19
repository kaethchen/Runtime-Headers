@class NSView, NSString, ForYouRecommendationMediator, BrowserViewController, NSScrollView, NSVisualEffectView, StartPageCollectionViewController, NSViewController, NSLayoutConstraint, KeyLoopSplicingContainerView, BrowserWindowController;
@protocol StartPageContentViewController;

@interface StartPageViewController : NSViewController {
    NSView *_rootView;
    NSViewController<StartPageContentViewController> *_currentMainContainerViewController;
    StartPageCollectionViewController *_startPageCollectionViewController;
    double _defaultBottomBannerContainerToMainContainerBottomConstraintConstant;
}

@property (weak, nonatomic) KeyLoopSplicingContainerView *mainContainerView;
@property (weak, nonatomic) NSVisualEffectView *windowBackdropVisualEffectView;
@property (retain, nonatomic) NSView *bottomBanner;
@property (weak, nonatomic) NSView *bottomBannerContainer;
@property (retain, nonatomic) NSLayoutConstraint *mainContainerToBottomBannerContainerConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomBannerContainerToMainContainerBottomConstraint;
@property (weak, nonatomic) BrowserViewController *browserContentViewController;
@property (weak, nonatomic) BrowserWindowController *browserWindowController;
@property (readonly, nonatomic) NSString *pageTitle;
@property (retain, nonatomic) NSView *externalCenteringView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } startPageViewContentRect;
@property (retain, nonatomic) ForYouRecommendationMediator *mediator;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *lastUsedBookmarksFolderUUID;
@property (readonly, nonatomic) NSScrollView *startPageScrollView;

+ (id)url;
+ (id)defaultPageTitle;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)nibName;
- (void)awakeFromNib;
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)_windowWillEnterFullScreen;
- (void)_windowWillExitFullScreen;
- (void)_reLayOutThenRunAnimationGroup:(id /* block */)a0;
- (void)_setMainContainerViewController;
- (void)_animateBottomBannerIn:(id)a0;
- (void)_animateBottomBannerOut;
- (void)_backgroundImageChanged:(id)a0;
- (id)_currentBrowserTabViewItem;
- (void)_updateBottomBanner;
- (void)_updateWindowAndTabTitle;
- (void)didDismissTabDialog;
- (void)forceVoiceOverFocusAfterCloseImportingBrowserData;
- (id)initStandaloneStartPageWithBrowserWindowController:(id)a0 startPageType:(long long)a1;
- (id)initWithBrowserContentViewController:(id)a0;
- (id)initWithBrowserContentViewController:(id)a0 startPageType:(long long)a1;
- (void)setBottomBanner:(id)a0 animated:(BOOL)a1;
- (void)updateMainContainerViewController;
- (void)willPresentTabDialog;

@end
