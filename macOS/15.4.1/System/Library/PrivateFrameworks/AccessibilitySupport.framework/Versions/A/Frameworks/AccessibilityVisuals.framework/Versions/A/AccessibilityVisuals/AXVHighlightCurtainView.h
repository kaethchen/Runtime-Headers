@class NSColor, CAShapeLayer;

@interface AXVHighlightCurtainView : AXVHighlightView

@property (retain, nonatomic, setter=_setCurtainLayer:) CAShapeLayer *_curtainLayer;
@property (retain, nonatomic) NSColor *curtainColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } nonCoveredRect;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFrameSpanningAllScreens;
- (void)_setCurtainLayerPath:(id)a0;
- (void)updateCurtainColor:(id)a0 withAnimation:(double)a1;

@end
