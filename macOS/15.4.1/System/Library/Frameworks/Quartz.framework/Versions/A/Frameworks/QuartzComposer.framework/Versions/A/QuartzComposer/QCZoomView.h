@interface QCZoomView : NSView {
    struct CGPoint { double x; double y; } _cachedCenter;
    double _cachedZoomFactorX;
    double _cachedZoomFactorY;
    double _zoomFactorX;
    double _zoomFactorY;
    void *_unused[4];
}

- (BOOL)autoscroll:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollWheel:(id)a0;
- (void)viewDidMoveToSuperview;
- (double)maxX;
- (double)minY;
- (double)maxY;
- (double)minX;
- (struct CGPoint { double x0; double x1; })_centerPoint;
- (void)__frameChanged:(id)a0;
- (void)_zoomToFitRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_adjustFrame;
- (void)setZoomFactorX:(double)a0;
- (void)zoomInY;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionBounds;
- (void)setZoomFactorY:(double)a0;
- (void)zoomInX;
- (BOOL)zoomStateCached;
- (void)_setCenterPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_setZoomFactorX:(double)a0 factorY:(double)a1 centerPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)_zoomWithSpeedFactorForX:(double)a0 speedFactorForY:(double)a1;
- (BOOL)allowsNonSquareZooming;
- (void)cacheZoomState;
- (double)incrementalZoomAmount;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxBounds;
- (double)resizeHotzoneWidth;
- (void)restoreZoomState;
- (double)zoomFactorX;
- (double)zoomFactorY;
- (void)zoomOutX;
- (void)zoomOutY;
- (void)zoomToFitAll;
- (void)zoomToFitSelection;

@end
