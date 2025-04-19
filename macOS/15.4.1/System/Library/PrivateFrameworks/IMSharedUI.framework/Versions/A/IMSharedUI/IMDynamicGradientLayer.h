@class CALayer, NSArray, CATransformLayer;
@protocol IMDynamicGradientReferenceView;

@interface IMDynamicGradientLayer : CALayer

@property (retain, nonatomic) CALayer *gradientLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gradientFrame;
@property (retain, nonatomic) CATransformLayer *trackingLayer;
@property (nonatomic) double screenScale;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (weak, nonatomic) id<IMDynamicGradientReferenceView> referenceView;
@property (copy, nonatomic) NSArray *colors;
@property (readonly, nonatomic) struct CGImage { } *gradient;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (double)_floorToPixels:(double)a0;
- (void)_updateAnimation;
- (void)_updateGradientImage;
- (void)didMoveToWindow:(id)a0;

@end
