@class NSDictionary;

@interface BWPhotoEncoderControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (nonatomic) BOOL alwaysAwaitInference;
@property (nonatomic) BOOL usesHighEncodingPriority;
@property (nonatomic) BOOL zeroShutterLagEnabled;
@property (retain, nonatomic) NSDictionary *attachedMediaConfigurationByAttachedMediaKey;
@property (nonatomic) BOOL deferredPhotoProcessorEnabled;
@property (nonatomic) int portraitRenderQuality;
@property (nonatomic) int semanticDevelopmentVersion;
@property (copy, nonatomic) NSDictionary *inputColorInfo;
@property (nonatomic) BOOL cameraSupportsFlash;
@property (nonatomic) struct { int width; int height; } constantColorConfidenceMapDimensions;
@property (nonatomic) int smartStyleRenderingVersion;
@property (nonatomic) BOOL smartStyleReversibilityEnabled;
@property (nonatomic) struct { int width; int height; } stereoPhotoOutputDimensions;

- (void)dealloc;

@end
