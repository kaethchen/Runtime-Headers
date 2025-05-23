@class NSArray, NSDictionary, NSString, NSNumber;

@interface BWStillImageCaptureMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL intelligentDistortionCorrectionEnabled;
@property (nonatomic) BOOL geometricDistortionCorrectionEnabled;
@property (nonatomic) int intelligentDistortionCorrectionVersion;
@property (nonatomic) int deepZoomVersion;
@property (nonatomic) int snrType;
@property (nonatomic) float snr;
@property (nonatomic) int alsLuxLevel;
@property (nonatomic) float alsRearLuxLevel;
@property (nonatomic) int deviceType;
@property (nonatomic) int devicePosition;
@property (retain, nonatomic) NSArray *slaveFocalLengths;
@property (retain, nonatomic) NSArray *slaveLensFNumbers;
@property (nonatomic) float totalZoomFactor;
@property (nonatomic) float uiZoomFactor;
@property (retain, nonatomic) NSDictionary *exifFocalLengthMultiplierByPortType;
@property (nonatomic) float exifFocalLengthOverride;
@property (nonatomic) BOOL fastCapturePrioritizationEnabled;
@property (nonatomic) int systemPressureLevel;
@property (nonatomic) int cameraControlsStatisticsMaster;
@property (nonatomic) int smartCamVersion;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } smartCamTimestamp;
@property (retain, nonatomic) NSDictionary *smartCamInferences;
@property (nonatomic) BOOL isPreviewSmartCamInferences;
@property (nonatomic) int semanticStyleSceneType;
@property (readonly, nonatomic) NSString *semanticStyleSceneTypeAsSmartCameraSceneType;
@property (nonatomic) int zeroShutterLagFailureReason;
@property (retain, nonatomic) NSNumber *shallowDepthOfFieldEffectSceneStatus;
@property (retain, nonatomic) NSDictionary *previewWhiteBalanceMetadataByPortType;
@property (nonatomic) unsigned int streamingTime;

- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)calculateSemanticStyleSceneType;

@end
