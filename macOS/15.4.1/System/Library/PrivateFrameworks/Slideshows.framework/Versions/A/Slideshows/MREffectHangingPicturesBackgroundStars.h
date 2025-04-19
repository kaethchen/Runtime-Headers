@class MRImageProvider;

@interface MREffectHangingPicturesBackgroundStars : MREffect {
    struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; } *mStars;
    float *mStarsVertices;
    float *mStarsTexCoords;
    float *mStarsAttributes;
    MRImageProvider *mBackgroundImageProvider;
    MRImageProvider *mStarImageProvider;
}

+ (void)initialize;

- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (void)_initStars;
- (id)initWithEffectID:(id)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
