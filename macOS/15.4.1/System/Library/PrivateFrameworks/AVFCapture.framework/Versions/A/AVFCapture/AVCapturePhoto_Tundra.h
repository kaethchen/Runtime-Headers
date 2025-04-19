@class AVPortraitEffectsMatte, NSString, NSDictionary, AVCameraCalibrationData, AVCaptureResolvedPhotoSettings_Tundra, AVDepthData, AVCapturePhotoInternal_Tundra;

@interface AVCapturePhoto_Tundra : NSObject {
    AVCapturePhotoInternal_Tundra *_internal;
}

@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } timestamp;
@property (readonly, getter=isRawPhoto) BOOL rawPhoto;
@property (readonly) struct __CVBuffer { } *pixelBuffer;
@property (readonly) struct __CVBuffer { } *previewPixelBuffer;
@property (readonly) NSDictionary *embeddedThumbnailPhotoFormat;
@property (readonly) AVDepthData *depthData;
@property (readonly) AVPortraitEffectsMatte *portraitEffectsMatte;
@property (readonly) NSDictionary *metadata;
@property (readonly) AVCameraCalibrationData *cameraCalibrationData;
@property (readonly) AVCaptureResolvedPhotoSettings_Tundra *resolvedSettings;
@property (readonly) long long photoCount;
@property (readonly) NSString *sourceDeviceType;
@property (readonly) struct __CVBuffer { } *constantColorConfidenceMap;
@property (readonly) float constantColorCenterWeightedMeanConfidenceLevel;
@property (readonly, getter=isConstantColorFallbackPhoto) BOOL constantColorFallbackPhoto;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (struct CGImage { } *)CGImageRepresentation;
- (id)bracketSettings;
- (id)fileDataRepresentation;
- (id)fileDataRepresentationWithCustomizer:(id)a0;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 captureRequest:(id)a1;
- (long long)lensStabilizationStatus;
- (struct CGImage { } *)previewCGImageRepresentation;
- (id)semanticSegmentationMatteForType:(id)a0;
- (long long)sequenceCount;

@end
