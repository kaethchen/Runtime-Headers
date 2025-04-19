@class MRImageProvider;

@interface MREffectHangingPicturesBackgroundLights : MREffect {
    MRImageProvider *mBackgroundImageProvider;
    MRImageProvider *mBokehImageProvider;
}

- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (id)initWithEffectID:(id)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
