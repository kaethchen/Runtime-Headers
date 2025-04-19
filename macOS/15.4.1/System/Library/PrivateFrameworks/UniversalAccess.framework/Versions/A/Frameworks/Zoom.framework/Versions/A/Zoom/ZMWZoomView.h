@class ZMWBorderView, CALayer, ZMWResizeView;

@interface ZMWZoomView : ZMWSnapshotView {
    ZMWResizeView *_resizeHandleLayer;
    ZMWBorderView *_borderLayer;
    CALayer *_foregroundLayer;
    CALayer *_backgroundLayer;
    CALayer *_contentLayer;
    BOOL _isInResizeMode;
    int _adjustmentType;
    long long _windowStyle;
    struct CGSize { double width; double height; } _mouseDownViewSize;
    struct CGPoint { double x; double y; } _mouseDownViewPosition;
    struct CGPoint { double x; double y; } _mouseDownPosition;
}

- (void).cxx_destruct;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setZoomFactor:(double)a0;
- (void)_handleMouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleMouseUpAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })captureRect;
- (void)handleMouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_captureSize;
- (void)_handleMouseDragToScreenPoint:(struct CGPoint { double x0; double x1; })a0 withDifference:(struct CGPoint { double x0; double x1; })a1;
- (void)_handleMouseMoveToScreenPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateBorder;
- (void)_updateContentLayerSize;
- (void)_updateCursorViewPosition;
- (void)_updateFocusPoint;
- (void)enableResizeMode:(BOOL)a0;
- (void)handleMouseDragToScreenPoint:(struct CGPoint { double x0; double x1; })a0 withDifference:(struct CGPoint { double x0; double x1; })a1;
- (void)handleMouseMoveToScreenPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)handleMouseUpAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithSuperlayer:(id)a0 connection:(unsigned int)a1;
- (void)setCenterPoint:(struct CGPoint { double x0; double x1; })a0 animationDuration:(double)a1;
- (void)setScreenFocusPoint:(struct CGPoint { double x0; double x1; })a0 windowFocusPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setupFilter;
- (BOOL)shouldMoveCursorInsideWindow;

@end
