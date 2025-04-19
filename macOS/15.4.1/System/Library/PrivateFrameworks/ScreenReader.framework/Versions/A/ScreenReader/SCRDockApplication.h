@class SCRApplication;

@interface SCRDockApplication : SCRSystemApplication {
    struct __AXObserver { } *_appObserver;
}

@property (retain, nonatomic, setter=_setApplicationBeforeShowingExpose:) SCRApplication *_applicationBeforeShowingExpose;
@property (nonatomic, setter=_setIsShowingDesktop:) BOOL _isShowingDesktop;
@property (nonatomic) BOOL isTabDockActive;
@property (nonatomic) long long lastFocusedLaunchpadGridIndex;
@property (nonatomic) unsigned long long currentExposeType;

- (void).cxx_destruct;
- (void)_exposeDidHide:(id)a0;
- (void)_focusOutExpose;
- (void)_removeElement:(id)a0;
- (void)_exposeDidShow:(id)a0;
- (void)_focusOnDesktop;
- (void)_desktopDidShow:(id)a0;
- (id)_dockMenuUIElement;
- (void)_elementWasCreated:(id)a0;
- (void)_flyToDownloadsAnimationOccurred:(id)a0;
- (void)_focusOnDock:(id)a0;
- (void)_focusOnDockElement:(id)a0;
- (void)_focusOnExpose;
- (void)_focusOnLaunchpadWithRequest:(id)a0;
- (void)_focusOutDesktop;
- (void)_focusOutDock;
- (void)_focusOutLaunchpad;
- (void)_handleNotification:(id)a0 withAXElement:(id)a1;
- (void)_handleSelectionChange:(id)a0;
- (void)_initializeObserver;
- (void)_launchpadDidHide:(id)a0;
- (void)_launchpadDidShow:(id)a0;
- (id)_launchpadFocusedPopoverForContainer:(id)a0;
- (void)_launchpadPageDidChange:(id)a0;
- (void)_uiElementWasDestroyed:(id)a0;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)applicationDidInitialize;
- (BOOL)applicationNeedsWindows;
- (void)applicationWillInvalidate;
- (void)dispatchFocusOnDock;
- (void)dispatchFocusOnDockAndSelectDockItem:(id)a0;
- (void)dispatchFocusOnDockAndSelectDockItemAtIndex:(unsigned long long)a0;
- (void)dispatchFocusOutDock;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)focusOut;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (BOOL)isDockApplication;
- (id)openedMenu;
- (void)setIsKeyboardEventHandler:(BOOL)a0;

@end
