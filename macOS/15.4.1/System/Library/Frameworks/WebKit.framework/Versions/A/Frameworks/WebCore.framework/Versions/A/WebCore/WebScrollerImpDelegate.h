@class NSString;

@interface WebScrollerImpDelegate : NSObject <NSAnimationDelegate, NSScrollerImpDelegate> {
    struct WeakPtr<WebCore::Scrollbar, WTF::SingleThreadWeakPtrImpl, WTF::RawPtrTraits<WTF::SingleThreadWeakPtrImpl>> { struct RefPtr<WTF::SingleThreadWeakPtrImpl, WTF::RawPtrTraits<WTF::SingleThreadWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::SingleThreadWeakPtrImpl>> { struct SingleThreadWeakPtrImpl *m_ptr; } m_impl; } _scrollbar;
    struct RetainPtr<WebScrollbarPartAnimation> { void *m_ptr; } _knobAlphaAnimation;
    struct RetainPtr<WebScrollbarPartAnimation> { void *m_ptr; } _trackAlphaAnimation;
    struct RetainPtr<WebScrollbarPartAnimation> { void *m_ptr; } _uiStateTransitionAnimation;
    struct RetainPtr<WebScrollbarPartAnimation> { void *m_ptr; } _expansionTransitionAnimation;
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
- (id)initWithScrollbar:(void *)a0;
- (struct NakedPtr<WebCore::ScrollbarsControllerMac> { struct ScrollbarsControllerMac *x0; })scrollbarsController;
- (void)setUpAlphaAnimation:(void *)a0 scrollerPainter:(id)a1 part:(int)a2 animateAlphaTo:(double)a3 duration:(double)a4;

@end
