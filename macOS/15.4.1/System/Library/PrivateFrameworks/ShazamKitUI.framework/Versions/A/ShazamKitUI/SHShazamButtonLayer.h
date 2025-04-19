@class CALayer, NSString, CAShapeLayer;
@protocol SHShazamButtonViewDelegate;

@interface SHShazamButtonLayer : SHPaletteLayer <CAAnimationDelegate>

@property (retain) CALayer *backgroundLayer;
@property (retain) CALayer *shapeLayer;
@property (retain) CAShapeLayer *topTransparentLayer;
@property (retain) CAShapeLayer *bottomTransparentLayer;
@property (retain) CAShapeLayer *topSolidLayer;
@property (retain) CAShapeLayer *bottomSolidLayer;
@property (retain) CAShapeLayer *topBorder;
@property BOOL initialAnimationPerformed;
@property (weak) id<SHShazamButtonViewDelegate> buttonDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setup;
- (struct CGPath { } *)bottomStrokeLongPath;
- (struct CGPath { } *)bottomStrokePath;
- (void)drawSolidShape;
- (void)drawSolidShapeWithDuration:(double)a0 delay:(double)a1 completion:(id /* block */)a2;
- (void)drawTransparentShape;
- (void)performFadeInIntroAnimation:(double)a0 delay:(double)a1;
- (void)performSDrawingAnimationWithDuration:(double)a0 delay:(double)a1;
- (void)performSDrawingIntroAnimation;
- (void)removeTransparentShape;
- (void)removeTransparentShapeWithDuration:(double)a0 delay:(double)a1 completion:(id /* block */)a2;
- (void)skipIntroAnimation;
- (id)strokeLayerWithPath:(struct CGPath { } *)a0 color:(struct CGColor { } *)a1;
- (struct CGPath { } *)topStrokeLongPath;
- (struct CGPath { } *)topStrokePath;

@end
