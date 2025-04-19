@class MRImageProvider, NSMutableDictionary;

@interface MREffectScrapbook_Old : MREffect {
    MRImageProvider *mImageProviders[7];
    NSMutableDictionary *mSprites;
    unsigned long long mNumberOfVertices;
    float *mMeshVertices;
    float *mMeshTextureVertices;
    float mLocalTranslationX;
    float mLocalTranslationY;
    float mZoomScale;
    double mPhaseTime;
}

+ (void)initialize;
+ (void)renderDumbImage:(id)a0 inContext:(id)a1 atPosition:(struct CGPoint { double x0; double x1; })a2 andSize:(struct CGSize { double x0; double x1; })a3 zRotation:(float)a4 withBorderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
+ (void)renderImage:(id)a0 withFrame:(id)a1 andMask:(id)a2 usingSprite:(id)a3 inContext:(id)a4;

- (void)_cleanup;
- (BOOL)isOpaque;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (BOOL)isAlphaFriendly;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (id)initWithEffectID:(id)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderEffect10AtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderEffect1AtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderEffect2AtTime:(double)a0 movieVersion:(BOOL)a1 inContext:(id)a2 withArguments:(id)a3;
- (void)renderEffect3AtTime:(double)a0 movieVersion:(BOOL)a1 inContext:(id)a2 withArguments:(id)a3;
- (void)renderEffect4AtTime:(double)a0 movieVersion:(BOOL)a1 inContext:(id)a2 withArguments:(id)a3;
- (void)renderEffect5AtTime:(double)a0 movieVersion:(BOOL)a1 inContext:(id)a2 withArguments:(id)a3;
- (void)renderEffect6AtTime:(double)a0 movieVersion:(BOOL)a1 inContext:(id)a2 withArguments:(id)a3;
- (void)renderEffect7AtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderEffect8AtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderEffect9AtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
