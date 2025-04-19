@class NSMenuWindowManagerBackgroundView, NSView, NSMutableDictionary;

@interface NSMenuWindowManagerWindow : NSWindow {
    NSMutableDictionary *_trackingRectDictionary;
    struct OpaqueEventHandlerRef { } *_windowEventHandler;
    struct OpaqueEventHandlerRef { } *_controlEventHandler;
    struct { unsigned char windowRefIsDeallocated : 1; unsigned char unhandledKey : 1; unsigned char blockInputContext : 1; unsigned char keyWindowProperties : 2; unsigned char ignoresMulticolorAccent : 1; unsigned int reserved : 26; } _flags;
    id _rememberedKeyWindow;
    const long long *_rememberedWindowOrdering;
    unsigned long long _rememberedWindowOrderingCount;
    struct OpaqueWindowPtr { } *_windowRef;
}

@property (readonly) NSMenuWindowManagerBackgroundView *backgroundView;
@property (readonly) NSView *menuItemsContainerView;
@property (nonatomic) struct OpaqueWindowPtr { } *windowRef;
@property (nonatomic) BOOL managesContainerViewFrame;
@property (nonatomic) BOOL ignoresMulticolorAccent;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } flippedContainerViewFrame;

+ (id)_allowedRunLoopModesForToolTips;

- (void)dealloc;
- (long long)_trackingAreaIDForTrackingArea:(id)a0;
- (BOOL)canHide;
- (void)resignKeyWindow;
- (BOOL)_allowsActiveInputContext;
- (BOOL)_allowsActiveInputContextDuringMenuTracking;
- (void)_clearPreviousKeyWindowProperties;
- (BOOL)_didInstallTrackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 assumeInside:(BOOL)a1 userData:(void *)a2 trackingNum:(long long)a3;
- (void)_discardCursorRect:(long long)a0;
- (id)_findKeyWindowToRestoreFromSavedProperties;
- (BOOL)_handleKeyEvent:(id)a0;
- (BOOL)_hasActiveControls;
- (BOOL)_ignoredForScripting;
- (void)_moveTrackingArea:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_overrideDefeatingConstrainFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toScreen:(id)a1 fullScreenConstrainToTile:(BOOL)a2;
- (void)_recordPreviousKeyWindowProperties;
- (void)_removeReferencesToCarbonWindowRef;
- (void)_removeTrackingRect:(long long)a0;
- (void)_removeTrackingRects:(long long *)a0 count:(long long)a1;
- (void)_restorePreviousKeyWindowFromSavedProperties;
- (BOOL)_sendManufacturedCursorUpdateEventForTrackingRectEvent:(id)a0;
- (void)_sendManufacturedTrackingAreaEventsForMouseDraggedEvent:(id)a0 forceExit:(BOOL)a1;
- (void)_setCursorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 index:(long long)a1;
- (void)_setLastHitView:(id)a0;
- (void)_setVisible:(BOOL)a0;
- (id)_substituteKeyWindowForAction:(SEL)a0;
- (void)_synchronizeConfigurationForTrackingArea:(id)a0;
- (void *)_trackingAreaInfoForTrackingRectTag:(long long)a0;
- (Class)_trackingAreaManagerClass;
- (void)_updateMouseMovedState;
- (BOOL)accessibilityIsChildOfApp;
- (BOOL)canBecomeKeyWindow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (BOOL)makeFirstResponder:(id)a0;
- (void)makeKeyWindow;
- (void)setAlphaValue:(double)a0;

@end
