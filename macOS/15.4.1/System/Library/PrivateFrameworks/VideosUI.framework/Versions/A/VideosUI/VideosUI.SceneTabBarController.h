@class NSViewController, NSArray, VUINSNavigationController;

@interface VideosUI.SceneTabBarController : NSObject <VUITVAppRootViewController, VUITabBarProtocol> {
    void /* unknown type, empty encoding */ _tabBarInfo;
    void /* unknown type, empty encoding */ previousSelectedIndex;
    void /* unknown type, empty encoding */ hasSetTabbarIndex;
    void /* unknown type, empty encoding */ viewMetricsRecorder;
}

@property (nonatomic, readonly) VUINSNavigationController *currentNavigationController;
@property (nonatomic, readonly) NSViewController *currentViewController;
@property (nonatomic, readonly) NSArray *tabBarItems;
@property (nonatomic) unsigned long long selectedIndex;

- (id)init;
- (void).cxx_destruct;
- (void)didEnterBackground:(id)a0;
- (void)willTerminate:(id)a0;
- (void)setSelectedIndexForTabBarItemIdentifier:(id)a0;
- (void)setSelectedIndexForTabBarItemIdentifier:(id)a0 clearStack:(BOOL)a1;
- (void)updateWithTabBarItems:(id)a0 setSelectedIdentifierFromDefaults:(BOOL)a1 appContext:(id)a2;

@end
