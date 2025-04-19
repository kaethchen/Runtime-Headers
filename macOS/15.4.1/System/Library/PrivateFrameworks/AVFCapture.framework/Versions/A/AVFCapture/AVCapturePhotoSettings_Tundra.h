@class NSString, NSDictionary, NSArray, NSURL, AVCapturePhotoSettingsInternal_Tundra;

@interface AVCapturePhotoSettings_Tundra : NSObject <NSCopying> {
    AVCapturePhotoSettingsInternal_Tundra *_internal;
}

@property (readonly) long long uniqueID;
@property (readonly, copy) NSDictionary *format;
@property (copy, nonatomic) NSDictionary *rawFileFormat;
@property (readonly) NSString *processedFileType;
@property (readonly) unsigned int rawPhotoPixelFormatType;
@property (readonly) NSString *rawFileType;
@property (nonatomic) long long flashMode;
@property (nonatomic, getter=isAutoRedEyeReductionEnabled) BOOL autoRedEyeReductionEnabled;
@property (nonatomic) long long photoQualityPrioritization;
@property (nonatomic, getter=isAutoStillImageStabilizationEnabled) BOOL autoStillImageStabilizationEnabled;
@property (nonatomic, getter=isAutoVirtualDeviceFusionEnabled) BOOL autoVirtualDeviceFusionEnabled;
@property (nonatomic, getter=isAutoDualCameraFusionEnabled) BOOL autoDualCameraFusionEnabled;
@property (copy, nonatomic) NSArray *virtualDeviceConstituentPhotoDeliveryEnabledDevices;
@property (nonatomic, getter=isDualCameraDualPhotoDeliveryEnabled) BOOL dualCameraDualPhotoDeliveryEnabled;
@property (nonatomic, getter=isHighResolutionPhotoEnabled) BOOL highResolutionPhotoEnabled;
@property (nonatomic) struct { int x0; int x1; } maxPhotoDimensions;
@property (nonatomic, getter=isDepthDataDeliveryEnabled) BOOL depthDataDeliveryEnabled;
@property (nonatomic) BOOL embedsDepthDataInPhoto;
@property (nonatomic, getter=isDepthDataFiltered) BOOL depthDataFiltered;
@property (nonatomic, getter=isCameraCalibrationDataDeliveryEnabled) BOOL cameraCalibrationDataDeliveryEnabled;
@property (nonatomic, getter=isPortraitEffectsMatteDeliveryEnabled) BOOL portraitEffectsMatteDeliveryEnabled;
@property (nonatomic) BOOL embedsPortraitEffectsMatteInPhoto;
@property (copy, nonatomic) NSArray *enabledSemanticSegmentationMatteTypes;
@property (nonatomic) BOOL embedsSemanticSegmentationMattesInPhoto;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSURL *livePhotoMovieFileURL;
@property (copy, nonatomic) NSString *livePhotoVideoCodecType;
@property (copy, nonatomic) NSArray *livePhotoMovieMetadata;
@property (readonly, nonatomic) NSArray *availablePreviewPhotoPixelFormatTypes;
@property (copy, nonatomic) NSDictionary *previewPhotoFormat;
@property (readonly, nonatomic) NSArray *availableEmbeddedThumbnailPhotoCodecTypes;
@property (copy, nonatomic) NSDictionary *embeddedThumbnailPhotoFormat;
@property (readonly, nonatomic) NSArray *availableRawEmbeddedThumbnailPhotoCodecTypes;
@property (copy, nonatomic) NSDictionary *rawEmbeddedThumbnailPhotoFormat;
@property (nonatomic, getter=isAutoContentAwareDistortionCorrectionEnabled) BOOL autoContentAwareDistortionCorrectionEnabled;
@property (nonatomic, getter=isConstantColorEnabled) BOOL constantColorEnabled;
@property (nonatomic, getter=isConstantColorFallbackPhotoDeliveryEnabled) BOOL constantColorFallbackPhotoDeliveryEnabled;
@property (nonatomic, getter=isShutterSoundSuppressionEnabled) BOOL shutterSoundSuppressionEnabled;

+ (long long)uniqueID;
+ (id)photoSettingsFromPhotoSettings:(id)a0;
+ (id)photoSettings;
+ (id)photoSettingsWithFormat:(id)a0;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)a0;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)a0 processedFormat:(id)a1;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)a0 rawFileType:(id)a1 processedFormat:(id)a2 processedFileType:(id)a3;
+ (BOOL)validateVideoSettings:(id)a0 allowingFeatures:(unsigned long long)a1 validPixelKeys:(id)a2 validPixelFormats:(id)a3 validCodecKeys:(id)a4 validCodecs:(id)a5 exceptionReason:(id *)a6;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)_initWithFormat:(id)a0 processedFileType:(id)a1 uniqueID:(long long)a2 exceptionReason:(id *)a3;
- (BOOL)arePreviewPhotoFormatDimensionsLimitedToDisplayDimensions;
- (unsigned int)formatFourCC;
- (void)setPreviewPhotoFormatDimensionsLimitedToDisplayDimensions:(BOOL)a0;

@end
