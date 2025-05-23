@class MRSlideProvider, NSString, NSMutableDictionary, NSArray, MREffect, MCContainerEffect;

@interface MRLayerEffect : MRLayer {
    NSString *mEffectID;
    NSArray *mSlideProviders;
    NSMutableDictionary *mSlideShowTimeScripts;
    MRSlideProvider *mMultiImageModelInput;
    unsigned int mIndexOfFirstMultiImageInput;
    struct _NSRange { unsigned long long location; unsigned long long length; } mMultiImageSlideRange;
    BOOL mNeedsToUpdateEffect;
    BOOL mNeedsToUpdateTiming;
    BOOL mNeedsToUpdateSlides;
    BOOL mNeedsToUpdateTexts;
    BOOL mNeedsToUpdateEffectAttributes;
    BOOL mNeedsToUpdateEffectLiveAttributes;
    BOOL mSlidesAreReadonly;
    BOOL mHasRequestedMoreSlides;
    NSString *_panoramaPanningSlideID;
    double _panoramaPanningPreviousDelta;
    BOOL _panoramaPanningIsLandscape;
    BOOL _ignoresNextTimeSynchronization;
    double _previouslyRenderedContainerTime;
}

@property (setter=suspendAsynchronousOperations:) BOOL asynchronousOperationsAreSuspended;
@property (nonatomic) BOOL isInInteractiveMode;
@property (readonly) NSMutableDictionary *slideProvidersForElementIDs;
@property (readonly) NSMutableDictionary *textsForElementIDs;
@property (copy, nonatomic) NSString *targetedElement;
@property (copy, nonatomic) NSString *editedElement;
@property (readonly) MREffect *effect;
@property (readonly) MCContainerEffect *container;

- (void)cleanup;
- (void)activate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setDuration:(double)a0;
- (void)unload;
- (BOOL)isOpaque;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)hasAudio;
- (id)initWithEffectID:(id)a0 andParameters:(id)a1;
- (BOOL)isAlphaFriendly;
- (void)synchronizeTime;
- (double)pzrEnd:(id)a0;
- (void)_addAudioDucker:(id)a0;
- (void)_cleanupProviders;
- (id)_dumpLayerWithOptions:(unsigned long long)a0;
- (id)_effectAttributes;
- (void)_effectTriggeredStop;
- (BOOL)_hideTextWhileEditing;
- (BOOL)_isNative3D;
- (long long)_maxLinesForTextElement:(id)a0;
- (struct CGSize { double x0; double x1; })_maxSizeForTextElement:(id)a0;
- (void)_observePlug;
- (void)_observePlugOnPreactivate;
- (void)_rebuildEffect;
- (void)_removeAudioDucker:(id)a0;
- (void)_renderAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (struct CGSize { double x0; double x1; })_rendererSize;
- (void)_requestRendering;
- (id)_retainedByUserRenderedImageAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (BOOL)_setStateValue:(id)a0 forKey:(id)a1;
- (void)_stallRenderer;
- (void)_unobservePlug;
- (void)_unobservePlugOnDepreactivate;
- (void)_updateEffectAttributes;
- (void)_updateSlides;
- (void)_updateTexts;
- (void)_updateTiming;
- (void)animateCenterOfSlide:(id)a0 to:(struct CGPoint { double x0; double x1; })a1 withDuration:(double)a2;
- (void)animateCenterOfSlide:(id)a0 to:(struct CGPoint { double x0; double x1; })a1 withDuration:(double)a2 andInitialSpeed:(struct CGSize { double x0; double x1; })a3;
- (void)animateRotationOfSlide:(id)a0 to:(double)a1 withDuration:(double)a2;
- (void)animateScaleOfSlide:(id)a0 to:(double)a1 withDuration:(double)a2;
- (void)beginMorphingToAspectRatio:(double)a0 withDuration:(double)a1;
- (id)currentSlideInfoForElement:(id)a0;
- (id)currentSlideInfos;
- (id)elementHitAtPoint:(struct CGPoint { double x0; double x1; })a0 localPoint:(struct CGPoint { double x0; double x1; } *)a1;
- (void)endMorphing;
- (void)getLazyDuration:(double *)a0 lazyFactor:(double *)a1 animationDuration:(double *)a2 fromInterestingTime:(double)a3;
- (BOOL)getStartTime:(double *)a0 andDuration:(double *)a1 forMovingToElementID:(id)a2 backwards:(BOOL)a3;
- (BOOL)getVerticesCoordinates:(struct CGPoint { double x0; double x1; }[4] *)a0 forElement:(id)a1;
- (BOOL)hasMoreSlidesFromTime:(double)a0 backwards:(BOOL)a1 startTime:(double *)a2 duration:(double *)a3;
- (BOOL)hasSlides;
- (BOOL)hasSomethingToRender;
- (id)initWithPlug:(id)a0 andParameters:(id)a1 inSuperlayer:(id)a2;
- (double)interestingTimeForElement:(id)a0;
- (double)interestingTimeForTime:(double)a0;
- (BOOL)isLoadedForTime:(double)a0;
- (double)panoramaPanningCancel:(id)a0;
- (double)panoramaPanningEnd:(id)a0;
- (double)panoramaPanningStart:(id)a0;
- (double)panoramaPanningUpdate:(id)a0;
- (id)patchworkAtTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (void)preactivate;
- (BOOL)prerenderForTime:(double)a0 inContext:(id)a1 withArguments:(id)a2;
- (double)pzrCancel:(id)a0;
- (double)pzrStart:(id)a0;
- (double)pzrUpdate:(id)a0;
- (void)resumeOrPause:(BOOL)a0;
- (void)setAssetPath:(id)a0 ofSlide:(id)a1;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0 ofSlide:(id)a1;
- (void)setKenBurnsType:(int)a0 ofSlide:(id)a1;
- (void)setMaxScale:(double)a0 ofSlide:(id)a1;
- (void)setPlayerHint:(id)a0 ofSlide:(id)a1;
- (void)setRotation:(double)a0 ofSlide:(id)a1;
- (void)setScale:(double)a0 ofSlide:(id)a1;
- (void)setTime:(double)a0 ofSlide:(id)a1;
- (BOOL)supportsDynamicExpansion;

@end
