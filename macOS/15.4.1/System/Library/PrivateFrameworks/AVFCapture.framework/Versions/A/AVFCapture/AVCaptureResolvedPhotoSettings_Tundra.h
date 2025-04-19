@class AVCaptureResolvedPhotoSettingsInternal_Tundra;

@interface AVCaptureResolvedPhotoSettings_Tundra : NSObject {
    AVCaptureResolvedPhotoSettingsInternal_Tundra *_internal;
}

@property (readonly) long long uniqueID;
@property (readonly) struct { int x0; int x1; } photoDimensions;
@property (readonly) struct { int x0; int x1; } rawPhotoDimensions;
@property (readonly) struct { int x0; int x1; } previewDimensions;
@property (readonly) struct { int x0; int x1; } embeddedThumbnailDimensions;
@property (readonly) struct { int x0; int x1; } rawEmbeddedThumbnailDimensions;
@property (readonly) struct { int x0; int x1; } portraitEffectsMatteDimensions;
@property (readonly) struct { int x0; int x1; } livePhotoMovieDimensions;
@property (readonly, getter=isFlashEnabled) BOOL flashEnabled;
@property (readonly, getter=isRedEyeReductionEnabled) BOOL redEyeReductionEnabled;
@property (readonly) struct { int width; int height; } deferredPhotoProxyDimensions;
@property (readonly, getter=isStillImageStabilizationEnabled) BOOL stillImageStabilizationEnabled;
@property (readonly, getter=isVirtualDeviceFusionEnabled) BOOL virtualDeviceFusionEnabled;
@property (readonly, getter=isDualCameraFusionEnabled) BOOL dualCameraFusionEnabled;
@property (readonly) unsigned long long expectedPhotoCount;
@property (readonly) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } photoProcessingTimeRange;
@property (readonly, getter=isContentAwareDistortionCorrectionEnabled) BOOL contentAwareDistortionCorrectionEnabled;
@property (readonly, getter=isFastCapturePrioritizationEnabled) BOOL fastCapturePrioritizationEnabled;

+ (id)resolvedSettingsWithUniqueID:(long long)a0 photoDimensions:(struct { int x0; int x1; })a1;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)_initWithUniqueID:(long long)a0 photoDimensions:(struct { int x0; int x1; })a1;
- (struct { int x0; int x1; })dimensionsForSemanticSegmentationMatteOfType:(id)a0;

@end
