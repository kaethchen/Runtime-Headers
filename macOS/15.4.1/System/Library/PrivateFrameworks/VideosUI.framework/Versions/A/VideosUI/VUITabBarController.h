@class NSArray, NSString, VUINSNavigationController, NSViewController;
@protocol VUITabBarControllerUpdatingDelegate;

@interface VUITabBarController : NSTabViewController <NSTabViewDelegate, VUITVAppRootViewController, VUITabBarProtocol, VUITabBarChildViewControllerInteraction>

@property (nonatomic) unsigned long long previousSelectedIndex;
@property (nonatomic) BOOL hasSetTabBarIndex;
@property (retain, nonatomic) NSArray *tabBarItems;
@property (weak, nonatomic) id<VUITabBarControllerUpdatingDelegate> updatingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) VUINSNavigationController *currentNavigationController;
@property (readonly, nonatomic) NSViewController *currentViewController;
@property (nonatomic) unsigned long long selectedIndex;

+ (BOOL)shouldIgnoreLastSelectedTabIndex;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)selectedViewController;
- (void)tabView:(id)a0 didSelectTabViewItem:(id)a1;
- (void)viewDidLoad;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)_setSelectedViewController:(id)a0;
- (void)_handleSelectedViewControllerDidChange;
- (void)_saveLastSelectedAndScrollToTop:(id)a0 selectedIndex:(unsigned long long)a1 previousSelectedIndex:(unsigned long long)a2;
- (id)_tabBarChildViewControllerWithIdentifier:(id)a0 documentRef:(id)a1 isNonServerTab:(BOOL)a2 title:(id)a3 isSelectedTab:(BOOL)a4 appContext:(id)a5 iconResource:(id)a6 contextData:(id)a7 uiConfigDict:(id)a8;
- (void)_updateTabBarChildViewController:(id)a0 withTitle:(id)a1;
- (void)_updateTabbarChildViewController:(id)a0 withTitle:(id)a1 iconResource:(id)a2;
- (unsigned long long)indexForTabBarItemIdentifier:(id)a0;
- (void)setSelectedIndexForTabBarItemIdentifier:(id)a0;
- (void)setSelectedIndexForTabBarItemIdentifier:(id)a0 clearStack:(BOOL)a1;
- (void)setVuiSelectedIndex:(unsigned long long)a0;
- (void)updateWithTabBarItems:(id)a0 setSelectedIdentifierFromDefaults:(BOOL)a1 appContext:(id)a2;
- (id)viewControllerWithTabIdentifier:(id)a0;

@end
