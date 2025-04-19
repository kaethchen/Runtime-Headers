@class AVPortraitEffectsMatte, AVCaptureResolvedPhotoSettings, NSDictionary, AVCameraCalibrationData, NSString, AVDepthData, AVCapturePhotoInternal;

@interface AVCapturePhoto : NSObject

@property (readonly, nonatomic) AVCapturePhotoInternal *internal;
@property (readonly, nonatomic) struct { int x0; int x1; } dimensions;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } timestamp;
@property (readonly, getter=isRawPhoto) BOOL rawPhoto;
@property (readonly) struct __CVBuffer { } *pixelBuffer;
@property (readonly) struct __CVBuffer { } *previewPixelBuffer;
@property (readonly) NSDictionary *embeddedThumbnailPhotoFormat;
@property (readonly) AVDepthData *depthData;
@property (readonly) AVPortraitEffectsMatte *portraitEffectsMatte;
@property (readonly) NSDictionary *metadata;
@property (readonly) AVCameraCalibrationData *cameraCalibrationData;
@property (readonly) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (readonly) long long photoCount;
@property (readonly) NSString *sourceDeviceType;
@property (readonly) struct __CVBuffer { } *constantColorConfidenceMap;
@property (readonly) float constantColorCenterWeightedMeanConfidenceLevel;
@property (readonly, getter=isConstantColorFallbackPhoto) BOOL constantColorFallbackPhoto;

+ (void)initialize;
+ (id)AVFileTypeFromFigCaptureStillImageSettingsFileType:(int)a0 codec:(unsigned int)a1 unresolvedSettings:(id)a2;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned int)_orientation;
- (struct CGImage { } *)CGImageRepresentation;
- (id)bracketSettings;
- (id)_defaultRawCompressionSettings;
- (struct __CVBuffer { } *)_embeddedThumbnailSourcePixelBuffer;
- (id)_fileDataRepresentationWithReplacementMetadata:(id)a0 replacementEmbeddedThumbnailPhotoFormat:(id)a1 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer { } *)a2 replacementDepthData:(id)a3 replacementPortraitEffectsMatte:(id)a4 replacementHairSegmentationMatte:(id)a5 replacementSkinSegmentationMatte:(id)a6 replacementTeethSegmentationMatte:(id)a7 replacementGlassesSegmentationMatte:(id)a8 replacementRawCompressionSettings:(id)a9 exceptionReason:(id *)a10;
- (BOOL)_isCompressedPhoto;
- (BOOL)_isProRAWPhoto;
- (BOOL)_isSushiRAWPhoto;
- (BOOL)_isUncompressedYUVOrRGBPhoto;
- (int)_maximumAppleProRAWBitDepth;
- (unsigned int)actualPhotoProcessingFlags;
- (unsigned int)expectedPhotoProcessingFlags;
- (id)fileDataRepresentation;
- (id)fileDataRepresentationWithCustomizer:(id)a0;
- (id)fileDataRepresentationWithReplacementMetadata:(id)a0 replacementEmbeddedThumbnailPhotoFormat:(id)a1 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer { } *)a2 replacementDepthData:(id)a3;
- (float)focusPixelBlurScore;
- (id)initWithTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 photoSurface:(struct __IOSurface { } *)a1 photoSurfaceSize:(unsigned long long)a2 processedFileType:(id)a3 previewPhotoSurface:(struct __IOSurface { } *)a4 embeddedThumbnailSourceSurface:(struct __IOSurface { } *)a5 metadata:(id)a6 depthDataSurface:(struct __IOSurface { } *)a7 depthMetadataDictionary:(id)a8 portraitEffectsMatteSurface:(struct __IOSurface { } *)a9 portraitEffectsMatteMetadataDictionary:(id)a10 hairSegmentationMatteSurface:(struct __IOSurface { } *)a11 hairSegmentationMatteMetadataDictionary:(id)a12 skinSegmentationMatteSurface:(struct __IOSurface { } *)a13 skinSegmentationMatteMetadataDictionary:(id)a14 teethSegmentationMatteSurface:(struct __IOSurface { } *)a15 teethSegmentationMatteMetadataDictionary:(id)a16 glassesSegmentationMatteSurface:(struct __IOSurface { } *)a17 glassesSegmentationMatteMetadataDictionary:(id)a18 constantColorConfidenceMapSurface:(struct __IOSurface { } *)a19 constantColorMetadataDictionary:(id)a20 captureRequest:(id)a21 bracketSettings:(id)a22 sequenceCount:(unsigned long long)a23 photoCount:(unsigned long long)a24 expectedPhotoProcessingFlags:(unsigned int)a25 sourceDeviceType:(id)a26;
- (long long)lensStabilizationStatus;
- (id)livePhotoMovieFileURL;
- (unsigned int)photoProcessingFlags;
- (id)portraitMetadata;
- (struct CGImage { } *)previewCGImageRepresentation;
- (id)privateClientMetadata;
- (id)processedFileType;
- (id)semanticSegmentationMatteForType:(id)a0;
- (long long)sequenceCount;

@end
