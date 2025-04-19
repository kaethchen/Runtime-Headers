@class NSString, NSArray, AVCaptureDeviceFormatInternal_Tundra, AVExposureBiasRange, AVZoomRange;

@interface AVCaptureDeviceFormat_Tundra : NSObject {
    AVCaptureDeviceFormatInternal_Tundra *_internal;
}

@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *formatDescription;
@property (readonly, nonatomic) NSArray *videoSupportedFrameRateRanges;
@property (readonly, nonatomic) float videoFieldOfView;
@property (readonly, nonatomic, getter=isVideoBinned) BOOL videoBinned;
@property (readonly, nonatomic, getter=isVideoStabilizationSupported) BOOL videoStabilizationSupported;
@property (readonly, nonatomic) double videoMaxZoomFactor;
@property (readonly, nonatomic) double videoZoomFactorUpscaleThreshold;
@property (readonly, nonatomic) AVZoomRange *systemRecommendedVideoZoomRange;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minExposureDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } maxExposureDuration;
@property (readonly, nonatomic) AVExposureBiasRange *systemRecommendedExposureBiasRange;
@property (readonly, nonatomic) float minISO;
@property (readonly, nonatomic) float maxISO;
@property (readonly, nonatomic, getter=isGlobalToneMappingSupported) BOOL globalToneMappingSupported;
@property (readonly, nonatomic, getter=isVideoHDRSupported) BOOL videoHDRSupported;
@property (readonly, nonatomic) struct { int x0; int x1; } highResolutionStillImageDimensions;
@property (readonly, nonatomic, getter=isHighPhotoQualitySupported) BOOL highPhotoQualitySupported;
@property (readonly, nonatomic, getter=isHighestPhotoQualitySupported) BOOL highestPhotoQualitySupported;
@property (readonly, nonatomic) long long autoFocusSystem;
@property (readonly, nonatomic) NSArray *supportedColorSpaces;
@property (readonly, nonatomic) double videoMinZoomFactorForDepthDataDelivery;
@property (readonly, nonatomic) double videoMaxZoomFactorForDepthDataDelivery;
@property (readonly, nonatomic) NSArray *supportedVideoZoomFactorsForDepthDataDelivery;
@property (readonly, nonatomic) NSArray *supportedVideoZoomRangesForDepthDataDelivery;
@property (readonly, nonatomic) BOOL zoomFactorsOutsideOfVideoZoomRangesForDepthDeliverySupported;
@property (readonly, nonatomic) NSArray *supportedDepthDataFormats;
@property (readonly, nonatomic) NSArray *unsupportedCaptureOutputClasses;
@property (readonly, nonatomic) NSArray *supportedMaxPhotoDimensions;
@property (readonly, nonatomic) NSArray *secondaryNativeResolutionZoomFactors;
@property (readonly, nonatomic, getter=isAutoVideoFrameRateSupported) BOOL autoVideoFrameRateSupported;

+ (void)initialize;
+ (id)_stringForFormatDescription:(struct opaqueCMFormatDescription { } *)a0 centerStageSupported:(BOOL)a1 backgroundBlurSupported:(BOOL)a2 backgroundBlurApertureSupported:(BOOL)a3 studioLightingSupported:(BOOL)a4 studioLightingIntensitySupported:(BOOL)a5 reactionEffectsSupported:(BOOL)a6 backgroundReplacementSupported:(BOOL)a7 frameRateRanges:(id)a8;
+ (id)deviceFormatWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
+ (id)deviceFormatWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 supportedFrameRateRanges:(id)a1 centerStageSupported:(BOOL)a2 backgroundBlurSupported:(BOOL)a3 backgroundBlurApertureSupported:(BOOL)a4 studioLightingSupported:(BOOL)a5 studioLightingIntensitySupported:(BOOL)a6 reactionEffectsSupported:(BOOL)a7 backgroundReplacementSupported:(BOOL)a8 zoomSupported:(BOOL)a9 autoFocusSystem:(long long)a10;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (struct { int x0; int x1; })_formatVideoDimensions;
- (float)geometricDistortionCorrectedVideoFieldOfView;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 supportedFrameRateRanges:(id)a1 centerStageSupported:(BOOL)a2 backgroundBlurSupported:(BOOL)a3 backgroundBlurApertureSupported:(BOOL)a4 studioLightingSupported:(BOOL)a5 studioLightingIntensitySupported:(BOOL)a6 reactionEffectsSupported:(BOOL)a7 backgroundReplacementSupported:(BOOL)a8 zoomSupported:(BOOL)a9 autoFocusSystem:(long long)a10;
- (BOOL)isBackgroundBlurApertureSupported;
- (BOOL)isBackgroundBlurSupported;
- (BOOL)isBackgroundBlurSupportedForContinuityCamera;
- (BOOL)isBackgroundReplacementSupported;
- (BOOL)isBackgroundReplacementSupportedForContinuityCamera;
- (BOOL)isCenterStageSupported;
- (BOOL)isCenterStageSupportedForContinuityCamera;
- (BOOL)isConstantColorSupported;
- (BOOL)isMultiCamSupported;
- (BOOL)isPortraitEffectSupported;
- (BOOL)isPortraitEffectsMatteStillImageDeliverySupported;
- (BOOL)isSpatialVideoCaptureSupported;
- (BOOL)isStereoCaptureSupported;
- (BOOL)isStereoVideoCaptureSupported;
- (BOOL)isStudioLightSupported;
- (BOOL)isStudioLightingIntensitySupported;
- (BOOL)isStudioLightingSupported;
- (BOOL)isStudioLightingSupportedForContinuityCamera;
- (BOOL)isVideoStabilizationModeSupported:(long long)a0;
- (BOOL)reactionEffectsSupported;
- (BOOL)reactionEffectsSupportedForContinuityCamera;
- (id)supportedMaxPhotoDimensionsPrivate;
- (id)videoFrameRateRangeForBackgroundBlur;
- (id)videoFrameRateRangeForBackgroundReplacement;
- (id)videoFrameRateRangeForCenterStage;
- (id)videoFrameRateRangeForPTEffectVideoEffects;
- (id)videoFrameRateRangeForPortraitEffect;
- (id)videoFrameRateRangeForReactionEffectsInProgress;
- (id)videoFrameRateRangeForStudioLight;
- (id)videoFrameRateRangeForStudioLighting;
- (double)videoMaxZoomFactorForCenterStage;
- (double)videoMinZoomFactorForCenterStage;

@end
