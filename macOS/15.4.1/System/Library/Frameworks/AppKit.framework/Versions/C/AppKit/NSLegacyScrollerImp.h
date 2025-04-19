@class NSTrackingArea;

@interface NSLegacyScrollerImp : NSScrollerImp {
    NSTrackingArea *contentViewTrackingArea;
    double _uiStateTransitionProgress;
}

- (void)dealloc;
- (id)init;
- (void)_animateOutOfRolloverState;
- (void)_animateToRolloverState;
- (double)_knobRolloverProportion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rolloverTrackingRect;
- (struct __CFDictionary { } *)copyCoreUIOptions;
- (BOOL)hitTestForLocalPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)knobEndInset;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseExitedScroller;
- (void)removeTrackingAreas;
- (long long)scrollerStyle;
- (void)setKnobAlpha:(double)a0;
- (void)setTrackAlpha:(double)a0;
- (void)setUiStateTransitionProgress:(double)a0;
- (double)trackSideInset;
- (double)uiStateTransitionProgress;
- (void)updateTrackingAreas;

@end
