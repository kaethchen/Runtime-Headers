@class MRImageProvider, NSMutableDictionary, MRReflectionsRenderable;

@interface MREffectReflections : MREffect {
    NSMutableDictionary *mSprites;
    BOOL mSpeedUpRight;
    BOOL mIsLoaded;
    NSMutableDictionary *mLayoutInfo;
    NSMutableDictionary *mBreakInformation;
    BOOL mHasBreak;
    BOOL mShrink;
    long long mTilt;
    long long mPhaseOutType;
    long long mDirection;
    long long mLayout;
    long long mAspect;
    MRImageProvider *mGroundShadowCenterProvider;
    MRImageProvider *mGroundShadowLeftProvider;
    MRImageProvider *mGroundShadowRightProvider;
    MRReflectionsRenderable *mHead;
    MRReflectionsRenderable *mTail;
}

+ (void)initialize;

- (void)setAttributes:(id)a0;
- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (void)_applySizeScripts:(double)a0;
- (double)_tXForTime:(double)a0 layout:(id)a1;
- (double)_yOffsetForTime:(double)a0 layout:(id)a1 size:(struct CGSize { double x0; double x1; })a2 position:(struct CGPoint { double x0; double x1; })a3 aspectRatio:(double)a4;
- (double)_yRotationForTime:(double)a0 layout:(id)a1;
- (void)beginMorphingToAspectRatio:(double)a0 withDuration:(double)a1;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (void)endMorphing;
- (void)getLazyDuration:(double *)a0 lazyFactor:(double *)a1 animationDuration:(double *)a2 fromInterestingTime:(double)a3;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (id)initWithEffectID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1 position:(struct CGPoint { double x0; double x1; })a2 yRot:(double)a3 tX:(double)a4 time:(double)a5 inContext:(id)a6 withArguments:(id)a7 flipped:(BOOL)a8 shadow:(BOOL)a9;
- (void)renderStuffAtTime:(double)a0 alpha:(double)a1 inContext:(id)a2 withArguments:(id)a3;

@end
