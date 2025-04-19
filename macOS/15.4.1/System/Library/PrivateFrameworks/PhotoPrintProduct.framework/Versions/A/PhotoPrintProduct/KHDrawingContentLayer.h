@class KHFrame;

@interface KHDrawingContentLayer : KHBaseLayer

@property (retain, nonatomic) KHFrame *frameObject;
@property (nonatomic) double drawingScale;
@property (nonatomic) struct CGPoint { double x; double y; } drawingOffset;

- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithFrameObject:(id)a0;

@end
