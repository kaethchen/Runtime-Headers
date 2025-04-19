@class NSMapTable, NSBundle, NSWindow;

@interface NSHelpManager : NSObject {
    NSMapTable *_helpMapTable;
    NSMapTable *_keyMapTable;
    NSMapTable *_bundleMapTable;
    NSWindow *_helpWindow;
    NSWindow *_shadowWindow;
    NSWindow *_evtWindow;
    NSBundle *_helpBundle;
}

@property (class, readonly) NSHelpManager *sharedHelpManager;
@property (class, getter=isContextHelpModeActive) BOOL contextHelpModeActive;

+ (BOOL)_activateHelpModeBasedOnEvent:(id)a0;
+ (BOOL)_isCtrlAltForHelpDesired;
+ (BOOL)_keyboardIsOldNeXT;
+ (void)_setCtrlAltForHelpDesired:(BOOL)a0;

- (void)dealloc;
- (id)_auxiliaryHelpBookBundlesCreatingIfNeeded:(BOOL)a0;
- (void)_cleanupHelpForQuit;
- (id)_helpBundleForObject:(id)a0;
- (id)_helpKeyForObject:(id)a0;
- (id)_helpWindow;
- (void)_orderFrontHelpWindow;
- (BOOL)_orderOutHelpWindow;
- (BOOL)_orderOutHelpWindowAfterEventMask:(unsigned long long)a0;
- (void)_placeHelpWindowNear:(struct CGPoint { double x0; double x1; })a0;
- (void)_prepareHelpWindow:(id)a0 locationHint:(struct CGPoint { double x0; double x1; })a1;
- (id)_registeredHelpBookBundles;
- (void)_removeHelpKeyForObject:(id)a0;
- (id)_resolveHelpKeyForObject:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_screenRectContainingPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_setBundleForHelpSearch:(id)a0;
- (void)_setHelpKey:(id)a0 forObject:(id)a1;
- (BOOL)_showHelpForBundle:(id)a0;
- (id)contextHelpForObject:(id)a0;
- (void)findString:(id)a0 inBook:(id)a1;
- (void)openHelpAnchor:(id)a0 inBook:(id)a1;
- (BOOL)registerBooksInBundle:(id)a0;
- (BOOL)registerHelpBook;
- (void)removeContextHelpForObject:(id)a0;
- (void)setContextHelp:(id)a0 forObject:(id)a1;
- (BOOL)showContextHelpForObject:(id)a0 locationHint:(struct CGPoint { double x0; double x1; })a1;
- (void)showHelpFile:(id)a0 context:(long long)a1;

@end
