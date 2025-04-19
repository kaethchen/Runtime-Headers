@interface NSDrawerFrame : NSFrameView {
    long long trackingTag;
    unsigned long long drawerEdge;
    BOOL registeredForEdgeChanges;
    BOOL _unused;
}

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })minContentSizeForMinFrameSize:(struct CGSize { double x0; double x1; })a0 styleMask:(unsigned long long)a1;
+ (struct CGSize { double x0; double x1; })minFrameSizeForMinContentSize:(struct CGSize { double x0; double x1; })a0 styleMask:(unsigned long long)a1;
+ (double)minFrameWidthWithTitle:(id)a0 styleMask:(unsigned long long)a1;

- (void)dealloc;
- (void)drawerDidClose:(id)a0;
- (void)_addTrackingRects;
- (void)_drawFrameRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_postFrameChangeNotification;
- (void)_removeTrackingRects;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)adjustHalftonePhase;
- (id)contentFill;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (void)drawFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawerDidOpen:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 owner:(id)a2;
- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })minFrameSize;
- (void)mouseDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)registerForEdgeChanges:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })resizeIndicatorRect;
- (void)resizeWithEvent:(id)a0;
- (void)setEdge:(unsigned long long)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setLayer:(id)a0;
- (unsigned long long)shadowOptions;
- (void)shapeWindow;
- (void)viewDidMoveToWindow:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;

@end
