@class DDXMLDocument, MRCAMLLayer, NSMutableArray;

@interface MREffectCAML : MREffect {
    DDXMLDocument *mDocument;
    double mWidth;
    double mHeight;
    MRCAMLLayer *mRootLayer;
    BOOL mIsLoaded;
    NSMutableArray *mImageProviders;
    NSMutableArray *mTextLayers;
}

- (void)_cleanup;
- (void)_unload;
- (void)_addValue:(double)a0 toKeyframe:(id)a1 inDict:(id)a2 forKey:(id)a3;
- (id)_animationsForTransformAnimation:(id)a0 inContext:(id)a1;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (id)createLayer:(id)a0 inArray:(id)a1 parentSize:(struct CGSize { double x0; double x1; })a2 parentOrigin:(struct CGPoint { double x0; double x1; })a3 inContext:(id)a4;
- (id)initWithEffectID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderLayer:(id)a0 atTime:(double)a1 inContext:(id)a2 arguments:(id)a3 offset:(struct CGPoint { double x0; double x1; })a4 aspectRatio:(double)a5 withCurrentState:(id)a6;

@end
