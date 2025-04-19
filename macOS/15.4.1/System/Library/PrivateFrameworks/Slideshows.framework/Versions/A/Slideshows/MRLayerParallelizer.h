@class NSMutableDictionary, NSMutableArray, MCContainerParallelizer;

@interface MRLayerParallelizer : MRLayer {
    MCContainerParallelizer *mContainer;
    NSMutableDictionary *mSublayersForPlugs;
    float mBackgroundColor[4];
    BOOL mNeedsToUpdateSublayersOrdering;
    BOOL mNeedsToUpdateBackgroundColor;
}

@property (readonly) NSMutableArray *sublayers;
@property const float *backgroundColor;

- (void)cleanup;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setDuration:(double)a0;
- (void)deactivate;
- (BOOL)isInfinite;
- (BOOL)isOpaque;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithParameters:(id)a0;
- (BOOL)hasAudio;
- (id)_currentState;
- (BOOL)isAlphaFriendly;
- (void)removeSublayer:(id)a0;
- (id)sublayerForKey:(id)a0;
- (void)synchronizeTime;
- (void)_setNeedsToRequestRebuildAudio:(BOOL)a0;
- (id)_createSublayerForPlug:(id)a0;
- (void)_deleteSublayer:(id)a0;
- (id)_dumpLayerWithOptions:(unsigned long long)a0;
- (void)_executeLayerCommandQueue;
- (BOOL)_isMadeOpaqueBySublayers;
- (void)_observePlug;
- (void)_observePlugOnPreactivate;
- (void)_observeSublayer:(id)a0;
- (void)_observeSublayerOnPreactivate:(id)a0;
- (void)_renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (id)_retainedByUserRenderedImageAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)_unobservePlug;
- (void)_unobservePlugOnDepreactivate;
- (void)_unobserveSublayer:(id)a0;
- (void)_unobserveSublayerOnDepreactivate:(id)a0;
- (void)_updateSublayersOrdering;
- (void)beginMorphingToAspectRatio:(double)a0 withDuration:(double)a1;
- (id)currentSlideInfoForElement:(id)a0;
- (id)currentSlideInfos;
- (void)depreactivate:(BOOL)a0;
- (void)endMorphing;
- (void)getLazyDuration:(double *)a0 lazyFactor:(double *)a1 animationDuration:(double *)a2 fromInterestingTime:(double)a3;
- (BOOL)getStartTime:(double *)a0 andDuration:(double *)a1 forMovingToElementID:(id)a2 backwards:(BOOL)a3;
- (BOOL)hasMoreSlidesFromTime:(double)a0 backwards:(BOOL)a1 startTime:(double *)a2 duration:(double *)a3;
- (BOOL)hasSlides;
- (BOOL)hasSomethingToRender;
- (id)initWithPlug:(id)a0 andParameters:(id)a1 inSuperlayer:(id)a2;
- (double)interestingTimeForElement:(id)a0;
- (double)interestingTimeForTime:(double)a0;
- (BOOL)isInInteractiveMode;
- (BOOL)isLoadedForTime:(double)a0;
- (id)patchworkAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (double)phaseInSublayerForKey:(id)a0;
- (double)phaseOutSublayerForKey:(id)a0;
- (void)preactivate;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)setBackgroundColorRed:(float)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)setIsInInteractiveMode:(BOOL)a0;
- (void)setNeedsUpdateForPluggerOfSublayer:(id)a0;
- (void)setSublayer:(id)a0 forKey:(id)a1;
- (id)sublayerForPlugObjectID:(id)a0 recursive:(BOOL)a1;
- (id)sublayerHitAtPoint:(struct CGPoint { double x0; double x1; })a0 onlyIfHitElement:(BOOL)a1 localPoint:(struct CGPoint { double x0; double x1; } *)a2;

@end
