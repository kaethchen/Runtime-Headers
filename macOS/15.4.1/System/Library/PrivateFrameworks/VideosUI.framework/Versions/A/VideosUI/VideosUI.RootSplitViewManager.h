@interface VideosUI.RootSplitViewManager : NSObject <VUITVAppNavigationControllerObserver> {
    void /* unknown type, empty encoding */ rootControllerConfig;
    void /* unknown type, empty encoding */ tabItemsUpdater;
    void /* unknown type, empty encoding */ defaultSectionManager;
    void /* unknown type, empty encoding */ appContext;
    void /* unknown type, empty encoding */ preloadedImageViewModelsMap;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ hasHandledFirstSelectionFromLaunch;
    void /* unknown type, empty encoding */ selectedIndex;
    void /* unknown type, empty encoding */ previousIndex;
    void /* unknown type, empty encoding */ lastSelectedIdentifier;
    void /* unknown type, empty encoding */ memoryPressureNotificationSource;
    void /* unknown type, empty encoding */ stackExpirationDates;
    void /* unknown type, empty encoding */ stackExpirationWorkItems;
    void /* unknown type, empty encoding */ remoteSideBarSections;
    void /* unknown type, empty encoding */ controllerMap;
    void /* unknown type, empty encoding */ tabBarPageDataDict;
    void /* unknown type, empty encoding */ sidebarPageDataDict;
    void /* unknown type, empty encoding */ actionContextTabBar;
    void /* unknown type, empty encoding */ impressionsTracker;
    void /* unknown type, empty encoding */ shouldTrackImpressions;
    void /* unknown type, empty encoding */ sideBarController;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)numberOfChildControllersDidChangeFor:(id)a0 from:(long long)a1 to:(long long)a2 animated:(BOOL)a3;

@end
