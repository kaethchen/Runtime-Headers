@class MRImageProvider, MRCroppingSprite;

@interface MREffectModern : MREffect {
    MRCroppingSprite *mSprite;
    MRImageProvider *mGradientProvider;
}

- (void)_cleanup;
- (BOOL)isOpaque;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isAlphaFriendly;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (id)initWithEffectID:(id)a0;
- (BOOL)isNative3D;
- (id)patchworkAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderImage:(id)a0 withMask:(id)a1 inContext:(id)a2 atPosition:(struct CGPoint { double x0; double x1; })a3 andSize:(struct CGSize { double x0; double x1; })a4 zRotation:(float)a5;

@end
