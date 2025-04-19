@interface NSOverlayScrollerImp : NSScrollerImp {
    double _expansionTransitionProgress;
    BOOL _expanded;
}

@property (readonly) double _contractedTrackWidth;

- (id)init;
- (void)setEnabled:(BOOL)a0;
- (void)setExpansionTransitionProgress:(double)a0;
- (void)_animateExpansion;
- (void)_animateToRolloverState;
- (double)_knobRolloverProportion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForPart:(unsigned long long)a0 usingExpandedParts:(BOOL)a1;
- (struct __CFDictionary { } *)copyCoreUIKnobOptions;
- (struct __CFDictionary { } *)copyCoreUIOptions;
- (struct __CFDictionary { } *)copyCoreUITrackOptions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandedRectForPart:(unsigned long long)a0;
- (double)expansionTransitionProgress;
- (BOOL)hitTestForLocalPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isExpanded;
- (double)knobEndInset;
- (unsigned long long)overlayScrollerState;
- (long long)scrollerStyle;
- (void)setExpanded:(BOOL)a0;
- (void)setOverlayScrollerState:(unsigned long long)a0 forceImmediately:(BOOL)a1;
- (double)trackWidth;

@end
