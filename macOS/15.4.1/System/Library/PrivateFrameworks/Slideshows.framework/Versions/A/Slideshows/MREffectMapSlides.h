@class MRImageProvider, NSMutableDictionary, MURandom;

@interface MREffectMapSlides : MREffect {
    NSMutableDictionary *mSprites;
    MRImageProvider *mBoxShadowBig;
    MRImageProvider *mBoxShadowBigBottom;
    MRImageProvider *mBoxShadowBigTop;
    MURandom *mRandom;
}

- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (void)_renderBigShadowForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 rects:(id)a2 atTime:(double)a3 inContext:(id)a4 withArguments:(id)a5;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (id)initWithEffectID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)render1SlideAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2 scale:(double)a3;
- (void)render2SlidesAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2 scale:(double)a3;
- (void)render3SlidesAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2 scale:(double)a3;
- (void)render4SlidesAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2 scale:(double)a3;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderKey:(id)a0 shadow:(id)a1 shadowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 size:(struct CGSize { double x0; double x1; })a3 position:(struct CGPoint { double x0; double x1; })a4 xRot:(double)a5 tX:(double)a6 isPano:(BOOL)a7 time:(double)a8 inContext:(id)a9 withArguments:(id)a10;

@end
