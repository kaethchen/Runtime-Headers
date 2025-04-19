@interface _NSBrowserScrollView : NSScrollView

- (void)_doScroller:(id)a0 hitPart:(long long)a1 multiplier:(double)a2;
- (id)_enclosingBrowserView;
- (id)_focusRingBleedRegion;
- (void)_handleBoundsChangeForSubview:(id)a0;
- (void)_overlayScroller:(id)a0 didBecomeShown:(BOOL)a1;
- (BOOL)hasScrolledContentsUnderTitlebar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)preservesContentDuringLiveResize;
- (void)scrollWheel:(id)a0;
- (void)setScrollerStyle:(long long)a0;
- (void)tile;

@end
