@interface NUScrollView : NSScrollView

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInset;

- (void)setEdgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)awakeFromNib;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (double)maximumZoomScale;
- (double)minimumZoomScale;
- (void)setMaximumZoomScale:(double)a0;
- (void)setMinimumZoomScale:(double)a0;
- (void)setZoomScale:(double)a0;
- (double)zoomScale;
- (void)_replaceClipView;

@end
