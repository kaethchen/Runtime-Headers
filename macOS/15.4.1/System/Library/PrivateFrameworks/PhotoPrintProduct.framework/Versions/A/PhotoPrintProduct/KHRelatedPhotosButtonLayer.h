@class CAShapeLayer;

@interface KHRelatedPhotosButtonLayer : CAShapeLayer

@property (retain, nonatomic) CAShapeLayer *roundShapeLayer;
@property (retain, nonatomic) CAShapeLayer *chainLayer1;
@property (retain, nonatomic) CAShapeLayer *chainLayer2;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (struct CGColor { } *)_color;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateGeometry;
- (struct CGColor { } *)_buttonFillColor;
- (struct CGColor { } *)_clearColor;
- (void)_configureChainLayer:(id)a0 isUpperChain:(BOOL)a1;

@end
