@class NSMutableDictionary, NSArray, MRImageProvider, NSMutableArray;

@interface MREffectPinMap : MREffect {
    NSMutableDictionary *mSprites;
    float mLocalMatrix[16];
    MRImageProvider *mGradientProvider;
    MRImageProvider *mPinProvider;
    MRImageProvider *mYellowPinProvider;
    MRImageProvider *mRedPinProvider;
    MRImageProvider *mTextBoxArrowProvider;
    MRImageProvider *mTextBoxMiddleProvider;
    MRImageProvider *mTextBoxCapProvider;
    MRImageProvider *mTextBoxArrowFlippedProvider;
    MRImageProvider *mTextBoxMiddleFlippedProvider;
    MRImageProvider *mTextBoxCapFlippedProvider;
    MRImageProvider *mTextBox2ArrowProvider;
    MRImageProvider *mTextBox2MiddleProvider;
    MRImageProvider *mTextBox2CapProvider;
    MRImageProvider *mTextBox2ArrowFlippedProvider;
    MRImageProvider *mTextBox2MiddleFlippedProvider;
    MRImageProvider *mTextBox2CapFlippedProvider;
    MRImageProvider *mTitleBoxLeftProvider;
    MRImageProvider *mTitleBoxMiddleProvider;
    MRImageProvider *mTitleBoxRightProvider;
    MRImageProvider *mBoxShadowSmall;
    MRImageProvider *mBoxShadowBigScaled;
    MRImageProvider *mWaterProvider;
    NSMutableArray *mTextImages;
    NSMutableArray *mTextLineCounts;
    NSMutableArray *mTextYOffsets;
    NSArray *mSortedPins;
    BOOL mNeedsWater;
    BOOL mHas2LineLabels;
    BOOL mHas1LineLabels;
    BOOL mNeedsTitle;
}

- (void)setAttributes:(id)a0;
- (void)_cleanup;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)_unload;
- (void)_drawArrowInContext:(id)a0 atTime:(double)a1 withArguments:(id)a2 atPoint:(struct CGPoint { double x0; double x1; })a3 scale:(double)a4 withTextAtIndex:(long long)a5 t:(struct CGPoint { double x0; double x1; })a6 pointDown:(BOOL)a7 m:(float[16])a8;
- (void)_drawTitleInContext:(id)a0 atTime:(double)a1 withArguments:(id)a2 atPoint:(struct CGPoint { double x0; double x1; })a3 scale:(double)a4 withTextAtIndex:(long long)a5;
- (void)_loadForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (long long)_maxLinesForTextElement:(id)a0;
- (struct CGSize { double x0; double x1; })_maxSizeForTextElement:(id)a0;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 withInverseMatrix:(float[16])a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 withMatrix:(float[16])a1 forElement:(id)a2;
- (id)initWithEffectID:(id)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (id)patchworkAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;

@end
