@class NSString, NSHashTable;

@interface _VUITVAppNavigationController : VUINSNavigationController <VUINSNavigationControllerDelegate>

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) unsigned long long oldControllerCountBeforeTransition;
@property (nonatomic) unsigned long long maxNavControllerStackDepth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRootViewController:(id)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)_transitionFromViewController:(id)a0 toViewController:(id)a1 action:(unsigned long long)a2 animated:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)dismissAllModals:(id /* block */)a0;
- (void)_handleMaxStackDepth;
- (void)_notifyObserversOfViewControllerChange:(unsigned long long)a0 animated:(BOOL)a1;
- (void)vui_addControllerObserver:(id)a0;
- (id)vui_popToRootViewControllerAnimated:(BOOL)a0;
- (id)vui_popViewControllerAnimated:(BOOL)a0;
- (void)vui_pushViewController:(id)a0 animated:(BOOL)a1;
- (void)vui_removeControllerObserver:(id)a0;
- (id)vui_rootViewController;
- (void)vui_setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)vui_topViewController;
- (id)vui_viewControllers;
- (id)vui_visibleViewController;

@end
