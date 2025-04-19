@class NSString, NSViewController, NSArray, AMPNavigationFilterableModel;
@protocol AMPNavigationControllerDelegate;

@interface AMPNavigationController : NSViewController <AMPFilterableViewModelProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSViewController *rootViewController;
@property (retain, nonatomic) NSViewController *topViewController;
@property (retain, nonatomic) AMPNavigationFilterableModel *filterableForwarder;
@property (weak, nonatomic) id<AMPNavigationControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *viewControllers;
@property (nonatomic) unsigned long long animationStyle;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_setupCrossFadeFromView:(id)a0 toView:(id)a1;
- (void)_cleanup;
- (void)_doCrossFadeFromView:(id)a0 toView:(id)a1;
- (void)_doSlideAnimation:(unsigned long long)a0 fromView:(id)a1 toView:(id)a2;
- (void)_setupSlideAnimation:(unsigned long long)a0 fromView:(id)a1 toView:(id)a2;
- (id)supplementalTargetForAction:(SEL)a0 sender:(id)a1;
- (BOOL)validateMenuItem:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)goBack:(id)a0;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (id)visibleViewController;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForTopView;
- (void)_addObserversToViewController:(id)a0;
- (void)_finishPopForController:(id)a0;
- (void)_finishPushForController:(id)a0 animated:(BOOL)a1;
- (void)_removeObserversFromViewController:(id)a0;
- (void)_resetViewControllerBeforeBeingPoppedOutFromNavigationStack:(id)a0;
- (void)_transitionFromViewController:(id)a0 toViewController:(id)a1 action:(unsigned long long)a2 animated:(BOOL)a3 completionHandler:(id /* block */)a4;
- (unsigned long long)_transitionOptionsForAction:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_updateViewControllerBeforeBeingPushedToNavigationStack:(id)a0;
- (id)currentFilterableViewModel;
- (void)dismissAllModals:(id /* block */)a0;
- (id)filterableViewModelForViewController:(id)a0;
- (id)getFilterableViewModelOrProvider;

@end
