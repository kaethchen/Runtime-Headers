@interface LUIHiddenScroller : NSScroller

+ (BOOL)isCompatibleWithOverlayScrollers;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPart:(unsigned long long)a0;
- (void)scrollerImp:(id)a0 animateKnobAlphaTo:(double)a1 duration:(double)a2;
- (void)scrollerImp:(id)a0 animateTrackAlphaTo:(double)a1 duration:(double)a2;
- (void)setScrollerStyle:(long long)a0;
- (unsigned long long)usableParts;

@end
