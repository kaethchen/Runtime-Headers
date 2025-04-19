@class NSArray, NSBox, NSViewController, AMSUICommonNavigationBar;

@interface AMSUICommonNavigationController : AMSUICommonViewController

@property (retain) NSArray *layoutConstraints;
@property (readonly) NSBox *navigationBarSeparator;
@property (readonly) NSBox *secondaryNavigationBarSeparator;
@property (readonly) AMSUICommonNavigationBar *navigationBar;
@property (getter=isNavigationBarHidden) BOOL navigationBarHidden;
@property unsigned long long navigationBarStyle;
@property (readonly) AMSUICommonNavigationBar *secondaryNavigationBar;
@property (getter=isSecondaryNavigationBarHidden) BOOL secondaryNavigationBarHidden;
@property unsigned long long secondaryNavigationBarStyle;
@property (readonly) NSViewController *topViewController;
@property (retain) NSArray *viewControllers;

+ (BOOL)isAlertNavigationBarStyle:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_setup;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)_chevronImage;
- (void)_backBarButtonItemAction:(id)a0;
- (void)_dismissViewController:(id)a0 push:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForNavigationBarStyle:(unsigned long long)a0;
- (void)_presentTopViewController:(id)a0 push:(BOOL)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)_setNeedsUpdateConstraints;
- (void)_updateNavigationBar;
- (void)_updateNavigationBar:(id)a0 topNavigationItem:(id)a1 navigationBarStyle:(unsigned long long)a2;
- (void)_updateWindowSizeOfViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)addConstraintsForNavigationBar:(id)a0 separator:(id)a1 style:(unsigned long long)a2 intoLayoutConstraints:(id)a3;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (id)previousViewController;
- (void)setNavigationBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setSecondaryNavigationBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)updateNavigationBar;

@end
