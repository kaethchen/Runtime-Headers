@class QLBubble, NSTimer;

@interface QLBubbleAnimator : NSObject {
    NSTimer *_animationTimer;
    struct CGSize { double width; double height; } _previousSize;
    double _sizeInitialAbsoluteTime;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousItemFrame;
    double _itemFrameInitialAbsoluteTime;
    int _itemFrameAcceleration;
}

@property (weak) QLBubble *bubble;
@property (readonly) struct CGSize { double width; double height; } targetSize;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetItemFrame;
@property (readonly) unsigned long long targetEdge;
@property (readonly) BOOL animating;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_startAnimationIfNeeded;
- (void)setSize:(struct CGSize { double x0; double x1; })a0 itemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 edge:(unsigned long long)a2 animate:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_currentItemFrameWithProgress:(double)a0;
- (struct CGSize { double x0; double x1; })_currentSizeWithProgress:(double)a0;
- (void)_startResizing;
- (void)_updateBubble;
- (void)_updateBubbleWithResizeProgress:(double)a0 moveProgress:(double)a1;
- (void)animationProgress:(id)a0;

@end
