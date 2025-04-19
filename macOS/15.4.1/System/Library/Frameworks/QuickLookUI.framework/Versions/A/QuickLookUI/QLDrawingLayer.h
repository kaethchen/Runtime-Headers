@protocol QLDrawingLayerDelegate;

@interface QLDrawingLayer : CALayer

@property (weak) id<QLDrawingLayerDelegate> drawingDelegate;

- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { } *)a0;

@end
