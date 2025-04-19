@class NSString, CAShapeLayer, NSFont, CATextLayer;

@interface AXVBorderedLayer : CALayer

@property (retain, nonatomic) CAShapeLayer *_borderShapeLayer;
@property (retain, nonatomic) CAShapeLayer *_highlightShapeLayer;
@property (retain, nonatomic) CATextLayer *_titleLayer;
@property (nonatomic) unsigned long long borderStyle;
@property (nonatomic) double borderThickness;
@property (nonatomic) double highlightRatio;
@property (nonatomic) struct CGColor { } *highlightColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } borderedFrame;
@property (nonatomic) struct CGPoint { double x; double y; } borderedFrameCenter;
@property (nonatomic) struct CGSize { double width; double height; } borderedFrameSize;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSFont *titleFont;
@property (nonatomic) struct CGSize { double width; double height; } titlePadding;

- (id)init;
- (void).cxx_destruct;
- (struct CGColor { } *)borderColor;
- (void)layoutSublayers;
- (void)setBorderColor:(struct CGColor { } *)a0;
- (void)setBackgroundColor:(struct CGColor { } *)a0;
- (void)setCornerRadius:(double)a0;
- (void)_updateBorderShapeLayers;

@end
