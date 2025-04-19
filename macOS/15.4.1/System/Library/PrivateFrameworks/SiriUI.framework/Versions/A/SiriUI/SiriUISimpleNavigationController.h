@class NSViewController, SiriUINavigationBarView, NSString, NSMutableArray;
@protocol SiriUISimpleNavigationControllerDelegate;

@interface SiriUISimpleNavigationController : NSViewController <CAAnimationDelegate>

@property (retain) NSMutableArray *mutableViewControllers;
@property (retain) NSViewController *selectedVC;
@property (retain) SiriUINavigationBarView *navigationBarView;
@property (retain) NSMutableArray *vcsNeedingUpdateConstraints;
@property BOOL wantsNavigationBar;
@property (weak) id<SiriUISimpleNavigationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)loadView;
- (void)updateViewConstraints;
- (id)viewControllers;
- (void)setViewControllers:(id)a0;
- (void)popViewControllerAnimated:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)topViewController;
- (void)popToViewController:(id)a0 animated:(BOOL)a1;
- (double)navigationBarHeight;
- (void)_addChildVCToSelf:(id)a0;
- (void)_addNavigationBarConstraints;
- (void)_animateToSelectedVCFromVC:(id)a0;
- (void)_didShowViewController:(id)a0 animated:(BOOL)a1;
- (void)_moveToTopViewController:(BOOL)a0;
- (void)_moveToViewControllerAtIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_popMutableViewControllersToSelectedVC;
- (void)_popViewController;
- (void)_removeChildVCFromSelf:(id)a0;
- (void)_replacePreviousVCWithNewVCInViewHierarchy:(id)a0;
- (void)_sendDelegateDidLayoutViewController:(id)a0;
- (void)_unloadHiddenViewControllersAndUpdateLayout;
- (void)_updateNavigationBarViewWithViewController:(id)a0 animated:(BOOL)a1;
- (void)_willShowViewController:(id)a0 animated:(BOOL)a1;
- (id)initShowingNavigationBar:(BOOL)a0;
- (void)popToBottomViewControllerAnimated:(BOOL)a0;
- (void)updateNavigationBarTitle:(id)a0;

@end
