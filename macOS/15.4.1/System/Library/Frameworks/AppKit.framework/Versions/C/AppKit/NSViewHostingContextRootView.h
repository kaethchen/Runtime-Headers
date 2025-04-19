@class NSViewHostingTraits, NSString, NSView, NSResponder, NSViewHostingContext, NSLayoutConstraint, NSMutableSet;

@interface NSViewHostingContextRootView : NSView <NSViewRoot> {
    NSView *_contentView;
    NSViewHostingContext *_hostingContext;
    NSViewHostingTraits *_hostingTraits;
    NSLayoutConstraint *_containerWidthConstraint;
    NSLayoutConstraint *_containerHeightConstraint;
    NSResponder *_firstResponder;
    BOOL _receivedNonProcessedEvent;
    NSMutableSet *_trackingAreas;
    NSMutableSet *_activeTrackingAreas;
}

@property (readonly) NSView *contentView;
@property (readonly, weak) NSViewHostingContext *hostingContext;
@property (readonly) NSViewHostingTraits *hostingTraits;
@property (readonly) BOOL _receivedNonProcessedEvent;
@property (readonly, getter=isInKeyWindow) BOOL inKeyWindow;
@property (readonly, getter=isVisible) BOOL visible;
@property (readonly) double _displayScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)sendMouseMoved:(id)a0;
- (void)_addMouseMovedListener:(id)a0;
- (BOOL)_controlAppearanceChangesOnKeyStateChange;
- (struct CGPoint { double x0; double x1; })_convertViewRootPointFromScreen:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_convertViewRootPointToScreen:(struct CGPoint { double x0; double x1; })a0;
- (void)_didSetHostingTraits:(id)a0;
- (void)_disableTrackingArea:(id)a0;
- (void)_disableTrackingRect:(long long)a0;
- (id)_discardCursorRectsForView:(id)a0;
- (void)_discardTrackingRect:(long long)a0;
- (void)_discardTrackingRects:(long long *)a0 count:(long long)a1;
- (void)_enableTrackingArea:(id)a0;
- (void)_enableTrackingRect:(long long)a0;
- (BOOL)_hasActiveAppearanceIgnoringKeyFocus;
- (BOOL)_hasActiveControls;
- (BOOL)_isViewRoot;
- (void)_moveTrackingArea:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_removeMouseMovedListener:(id)a0;
- (id)_rootViewForViewRoot;
- (void)_setNeedsDisplayInRegion:(id)a0;
- (void)_setTrackingAreasDirty;
- (long long)_setTrackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inside:(BOOL)a1 owner:(id)a2 userData:(void *)a3 useTrackingNum:(long long)a4;
- (void)_setViewsNeedBuildLayerTree;
- (void)_setViewsNeedDisplay;
- (void)_setViewsNeedLayout;
- (void)_setViewsNeedUpdateConstraints;
- (BOOL)_shouldResetCursorRects;
- (void)_updateKeyAppearanceStateIfNeeded:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)firstResponder;
- (void)flagsChanged:(id)a0;
- (BOOL)hasKeyAppearance;
- (id)initWithHostingContext:(id)a0 contentView:(id)a1 traits:(id)a2;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)makeFirstResponder:(id)a0;
- (id)nextEventMatchingMask:(unsigned long long)a0;
- (id)nextEventMatchingMask:(unsigned long long)a0 untilDate:(id)a1 inMode:(id)a2 dequeue:(BOOL)a3;
- (void)sendEvent:(id)a0;
- (void)sendMouseEntered:(id)a0;
- (void)sendMouseExited:(id)a0;
- (void)setHostingTraits:(id)a0;
- (void)trackEventsMatchingMask:(unsigned long long)a0 timeout:(double)a1 mode:(id)a2 handler:(id /* block */)a3;
- (void)updateConstraints;

@end
