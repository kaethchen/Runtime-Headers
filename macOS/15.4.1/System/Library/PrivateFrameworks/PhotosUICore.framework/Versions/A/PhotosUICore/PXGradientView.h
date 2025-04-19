@class NSArray, CAGradientLayer;

@interface PXGradientView : UXView

@property (readonly, nonatomic) CAGradientLayer *gradientLayer;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint { double x0; double x1; } startPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } endPoint;

+ (Class)layerClass;

- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)_updateGradientLayerColors;

@end
