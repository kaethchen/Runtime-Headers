@class NSBannerView;

@interface _NSCornerView : NSView {
    NSBannerView *_backgroundView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void)_addOrRemoveBlurViewIfNecessary;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (BOOL)_drawingEndSeparator;
- (void)_finishedMakingConnections;
- (void)_invalidateHeaderDependentDrawing;
- (int)_vibrancyBlendMode;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)enclosingScrollView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fillRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)a0;

@end
