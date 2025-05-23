@class PIFaceObservationCache, NSString;

@interface PIPortraitAutoCalculator : NUAutoCalculator <PIFaceObservingAutoCalculator>

@property (retain, nonatomic) PIFaceObservationCache *faceObservationCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)portraitInfoDictionaryFromCameraMetadata:(id)a0;
+ (BOOL)canApplyPortraitEffectsWithMetadata:(id)a0;
+ (id)depthEffectInfoDictionaryFromFaceObservations:(id)a0 metadata:(id)a1 orientation:(long long)a2 valuesAtCapture:(id)a3;
+ (id)depthEffectInfoDictionaryFromFaceObservations:(id)a0 valuesAtCapture:(id)a1 lumaNoiseScale:(float)a2 orientation:(long long)a3;
+ (id)focusRectDictionaryFromMetadata:(id)a0;
+ (id)focusRectDictionaryFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (BOOL)isStillImageDisparity:(id)a0;
+ (BOOL)isTapToFocusEnabled:(id)a0;
+ (id)portraitEffectInfoDictionaryFromFaceObservations:(id)a0 orientation:(long long)a1 valuesAtCapture:(id)a2;
+ (id)portraitInfoDictionaryFromFaceObservations:(id)a0 metadata:(id)a1 orientation:(long long)a2 valuesAtCapture:(id)a3;

- (void).cxx_destruct;
- (void)submit:(id /* block */)a0;
- (void)_calculateWithImageProperties:(id)a0 valuesAtCapture:(id)a1 completion:(id /* block */)a2;

@end
