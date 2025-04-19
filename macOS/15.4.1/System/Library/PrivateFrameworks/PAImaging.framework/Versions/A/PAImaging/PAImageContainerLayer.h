@class PALayerAnimationFactory, PANeutrinoImageLayer, NSObject;
@protocol OS_dispatch_queue;

@interface PAImageContainerLayer : CALayer {
    NSObject<OS_dispatch_queue> *_animQueue;
    PALayerAnimationFactory *_animFactory;
}

@property (class, nonatomic) BOOL layerAnimationsDisabled;

@property (retain, nonatomic) PANeutrinoImageLayer *imageLayer;
@property (readonly, nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } imageTransform;
@property (readonly, nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } contentTransform;
@property (nonatomic) struct CGSize { double width; double height; } minLayerSize;

- (id)init;
- (void).cxx_destruct;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_isAnimating;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_animate:(id /* block */)a0;
- (void)_setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setPosition:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_shouldAnimate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_minimumContentBoundsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)PALayerDebug_decodeFromDictionary:(id)a0;
- (void)_abortAnim;
- (BOOL)_allowsImplicitAnimation;
- (void)_animateSetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_animateSetImageTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0 contentTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1;
- (void)_animateSetPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)_cleanupAnim;
- (id)_newAnimationFactory;
- (void)_notifyBeginAnimate;
- (void)_notifyEndAnimate;
- (void)_setContentTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (void)_setImageTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (void)setImageTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0 contentTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1;

@end
