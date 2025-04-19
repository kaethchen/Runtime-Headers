@class NSTimer, NSView, NSScrollView, UXNavigationBar, NSString, NSDictionary, NSMutableArray, NSLayoutConstraint, NSButton, NSViewController;

@interface UXNavigationController : NSViewController <GKContentRefresh>

@property (retain, nonatomic) UXNavigationBar *navigationBar;
@property (retain, nonatomic) NSLayoutConstraint *currentHorizontalSpacingLayout;
@property (retain, nonatomic) NSLayoutConstraint *currentVerticalSpacingLayout;
@property (copy) id /* block */ animationCleanupBlock;
@property (retain, nonatomic) NSTimer *animationCleanupTimer;
@property (retain, nonatomic) NSMutableArray *poppedViewControllers;
@property (retain, nonatomic) NSView *contentView;
@property (retain, nonatomic) NSButton *backButton;
@property (weak, nonatomic) NSScrollView *scrollView;
@property (nonatomic) double slideDuration;
@property (readonly, nonatomic) NSViewController *topViewController;
@property (copy, nonatomic) NSMutableArray *viewControllers;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfViewControllers;
+ (id)keyPathsForValuesAffectingTopViewController;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)cancelOperation:(id)a0;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (id)initWithRootViewController:(id)a0;
- (void)popViewControllerAnimated:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)topViewController;
- (void)popToRootViewControllerAnimated:(BOOL)a0;
- (void)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)backButtonPressed:(id)a0;
- (void)setupNavigationBar;
- (void)_gkRefreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)_gkSetContentsNeedUpdateWithHandler:(id /* block */)a0;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)_willBeginSheet;
- (void)_didBeginSheet;
- (void)_didEndSheet;
- (void)_gkForceNextContentUpdate;
- (void)_gkResetContents;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id /* block */)a0;
- (void)_willEndSheet;
- (id)addViewController:(id)a0 withHorizontalOffset:(double)a1 verticalOffset:(double)a2;
- (void)configureBackButton:(id)a0 forViewController:(id)a1;
- (id)getBackButton;
- (void)performAnimationCleanup;
- (void)pushLastPoppedViewControllerAnimated:(BOOL)a0;
- (void)scheduleAnimationCleanup;

@end
