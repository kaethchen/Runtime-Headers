@class NSString;

@interface WebScrollerImpDelegateMac : NSObject <NSAnimationDelegate, NSScrollerImpDelegate> {
    void *_scroller;
    struct RetainPtr<WebScrollbarPartAnimationMac> { void *m_ptr; } _knobAlphaAnimation;
    struct RetainPtr<WebScrollbarPartAnimationMac> { void *m_ptr; } _trackAlphaAnimation;
    struct RetainPtr<WebScrollbarPartAnimationMac> { void *m_ptr; } _uiStateTransitionAnimation;
    struct RetainPtr<WebScrollbarPartAnimationMac> { void *m_ptr; } _expansionTransitionAnimation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromBacking:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToBacking:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToLayer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)effectiveAppearanceForScrollerImp:(id)a0;
- (id)layer;
- (struct CGPoint { double x0; double x1; })mouseLocationInScrollerForScrollerImp:(id)a0;
- (void)scrollerImp:(id)a0 animateExpansionTransitionWithDuration:(double)a1;
- (void)scrollerImp:(id)a0 animateKnobAlphaTo:(double)a1 duration:(double)a2;
- (void)scrollerImp:(id)a0 animateTrackAlphaTo:(double)a1 duration:(double)a2;
- (void)scrollerImp:(id)a0 animateUIStateTransitionWithDuration:(double)a1;
- (void)scrollerImp:(id)a0 overlayScrollerStateChangedTo:(unsigned long long)a1;
- (BOOL)shouldUseLayerPerPartForScrollerImp:(id)a0;
- (void)cancelAnimations;
- (id)initWithScroller:(void *)a0;
- (void)setUpAlphaAnimation:(void *)a0 featureToAnimate:(int)a1 animateAlphaTo:(double)a2 duration:(double)a3;

@end
