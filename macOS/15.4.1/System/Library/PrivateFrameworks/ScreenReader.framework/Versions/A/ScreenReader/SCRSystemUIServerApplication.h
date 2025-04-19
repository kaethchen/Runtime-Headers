@class NSArray, SCRElement, AXFUIElement;

@interface SCRSystemUIServerApplication : SCRSystemApplication {
    NSArray *_menuExtras;
    SCRElement *_menubarForTracking;
    AXFUIElement *_ncMenubar;
}

+ (BOOL)openFauxMenuExtraItem:(id)a0;

- (void).cxx_destruct;
- (void)setChildren:(id)a0;
- (id)focusedWindow;
- (id)uiElementForHierarchyIndexPath:(id)a0;
- (id)menuExtras;
- (void)dispatchResetMenubarForTracking;
- (id)menuBar;
- (void)_focusOnMenuExtras;
- (id)_menuExtraMenuBar;
- (id)_menuExtraUIMenuBar;
- (id)_menubarForTracking;
- (void)_refreshMenuExtras;
- (void)_resetMenubarForTracking;
- (void)addItemDescriptionToRequest:(id)a0;
- (void)connectToApp;
- (id)elementFromUIElement:(id)a0;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)focusOut;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (BOOL)isSystemUIServerApplication;
- (void)moveToSpotElement:(id)a0;
- (BOOL)trackMenuBarGestureEvent:(id)a0 request:(id)a1;
- (id)uiMenuBar;

@end
