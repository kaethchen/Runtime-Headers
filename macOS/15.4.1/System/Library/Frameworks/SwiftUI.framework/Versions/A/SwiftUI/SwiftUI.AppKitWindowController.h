@interface SwiftUI.AppKitWindowController : NSWindowController <NSWindowDelegate> {
    void /* unknown type, empty encoding */ rootModifier;
    void /* unknown type, empty encoding */ info;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ toolbarBridge;
    void /* unknown type, empty encoding */ inspectorBridge;
    void /* unknown type, empty encoding */ barAppearanceBridge;
    void /* unknown type, empty encoding */ printingBridge;
    void /* unknown type, empty encoding */ windowPlacementBridge;
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ windowsController;
    void /* unknown type, empty encoding */ managedWindow;
    void /* unknown type, empty encoding */ sceneStorageValues;
    void /* unknown type, empty encoding */ sceneBridge;
    void /* unknown type, empty encoding */ scenePresentationBridge;
    void /* unknown type, empty encoding */ windowBehaviorBridge;
    void /* unknown type, empty encoding */ windowAppearanceBridge;
    void /* unknown type, empty encoding */ windowAppearanceViewModel;
    void /* unknown type, empty encoding */ colorSchemeSeed;
    void /* unknown type, empty encoding */ dismissalDialogSeed;
    void /* unknown type, empty encoding */ dismissalDialog;
    void /* unknown type, empty encoding */ dockTileInvalidator;
    void /* unknown type, empty encoding */ scenePhase;
    void /* unknown type, empty encoding */ _visibilityState;
    void /* unknown type, empty encoding */ onDismiss;
    void /* unknown type, empty encoding */ defaultWindowIdentifier;
    void /* unknown type, empty encoding */ toolbarNeedsUpdate;
    void /* unknown type, empty encoding */ toolbarRunLoopObserverAdded;
    void /* unknown type, empty encoding */ cascadeNumber;
    void /* unknown type, empty encoding */ additionalSizingOptions;
    void /* unknown type, empty encoding */ maximumFrameLength;
    void /* unknown type, empty encoding */ _isWindowLoaded;
}

@property (nonatomic, readonly) BOOL windowLoaded;
@property (nonatomic) BOOL shouldCascadeWindows;

- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithWindow:(id)a0;
- (void)rename:(id)a0;
- (BOOL)isWindowLoaded;
- (void)loadWindow;
- (id)makeTouchBar;
- (void)newWindowForTab:(id)a0;
- (void)showWindow:(id)a0;
- (void)window:(id)a0 didDecodeRestorableState:(id)a1;
- (void)window:(id)a0 willEncodeRestorableState:(id)a1;
- (unsigned long long)window:(id)a0 willUseFullScreenPresentationOptions:(unsigned long long)a1;
- (void)windowDidBecomeKey:(id)a0;
- (void)windowDidDeminiaturize:(id)a0;
- (void)windowDidEnterFullScreen:(id)a0;
- (void)windowDidExitFullScreen:(id)a0;
- (void)windowDidLoad;
- (void)windowDidMiniaturize:(id)a0;
- (void)windowDidOrderOffScreen:(id)a0;
- (void)windowDidOrderOnScreen:(id)a0;
- (void)windowDidResize:(id)a0;
- (BOOL)windowShouldClose:(id)a0;
- (id)windowTitleForDocumentDisplayName:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)windowWillOrderOnScreen:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })windowWillUseStandardFrame:(id)a0 defaultFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
