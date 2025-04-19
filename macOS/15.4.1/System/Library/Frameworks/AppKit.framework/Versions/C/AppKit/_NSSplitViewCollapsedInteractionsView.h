@interface _NSSplitViewCollapsedInteractionsView : NSView {
    long long _orientation;
    BOOL _didSpringLoad;
    BOOL _mouseInside;
    id /* block */ _rolloverTimer;
    id /* block */ _nonInteractiveTimer;
}

@property long long orientation;
@property BOOL onLeftSide;
@property (copy) id /* block */ springLoadingHandler;
@property (copy) id /* block */ canSpringLoadHandler;
@property (copy) id /* block */ proactivePeekHandler;
@property (copy) id /* block */ canProactivePeekHandler;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_beginNonInteractionTimer;
- (void)_beginProactivePeekAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_canSpringLoad;
- (void)_cancelProactivePeek;
- (id)_hitTest:(struct CGPoint { double x0; double x1; } *)a0 dragTypes:(id)a1;
- (id)_hitTestForEvent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_proactivePeekSensitiveRect;
- (void)_setRolloverTimerAtHoverLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_springLoad;
- (void)_unSpringLoad;
- (void)_windowDidResize:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_windowDragSafeRegion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_windowResizeSafeRegion;
- (void)draggingEnded:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isOpaque;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (BOOL)prepareForDragOperation:(id)a0;
- (BOOL)shouldBeArchived;
- (void)springLoadingActivated:(BOOL)a0 draggingInfo:(id)a1;
- (unsigned long long)springLoadingEntered:(id)a0;
- (void)springLoadingExited:(id)a0;
- (void)springLoadingHighlightChanged:(id)a0;
- (void)updateTrackingAreas;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;

@end
