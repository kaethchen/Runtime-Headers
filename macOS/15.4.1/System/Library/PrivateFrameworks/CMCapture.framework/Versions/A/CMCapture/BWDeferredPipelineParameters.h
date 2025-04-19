@class NSDictionary;

@interface BWDeferredPipelineParameters : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { int width; int height; } rawSensorDimensions;
@property (retain, nonatomic) NSDictionary *dimensionsByQSubResolutionFlavorByPortType;
@property (nonatomic) int nrfVersion;
@property (nonatomic) int noiseReductionAndFusionScheme;
@property (nonatomic) BOOL intelligentDistortionCorrectionEnabled;
@property (nonatomic) BOOL geometricDistortionCorrectionEnabled;
@property (nonatomic) BOOL dcProcessingWithDepthSupported;
@property (nonatomic) int distortionCorrectionVersion;
@property (nonatomic) int stillImageGDCSourceMode;
@property (nonatomic) int deepZoomVersion;
@property (nonatomic) int deepZoomMode;
@property (nonatomic) int semanticRenderingVersion;
@property (nonatomic) int smartStyleRenderingVersion;
@property (nonatomic) BOOL smartStyleRenderingEnabled;
@property (nonatomic) BOOL smartStyleReversibilityEnabled;
@property (nonatomic) struct { int width; int height; } smartStyleLinearThumbnailDimensions;
@property (nonatomic) struct { int width; int height; } smartStyleStyledThumbnailDimensions;
@property (nonatomic) BOOL generateInferencesForSemanticProcessingIfNeeded;
@property (nonatomic) BOOL quadraProcessingSupportEnabled;
@property (nonatomic) BOOL canProcessEnhancedResolution;
@property (nonatomic) BOOL continuousZoomWithDepthSupported;
@property (nonatomic) int depthDataType;
@property (nonatomic) struct { int width; int height; } depthDataDimensions;
@property (nonatomic) int pearlModuleType;
@property (nonatomic) unsigned int sfhrMode;
@property (nonatomic) struct CGPoint { double x; double y; } sensorCenterOffset;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)areCompatibleWith:(id)a0;

@end
