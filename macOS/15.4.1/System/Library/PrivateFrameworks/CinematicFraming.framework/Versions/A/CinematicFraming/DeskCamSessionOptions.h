@interface DeskCamSessionOptions : NSObject

@property (nonatomic) float viewportScaleMultiplierLandscape;
@property (nonatomic) float viewportScaleMultiplierPortrait;
@property (nonatomic) float viewportScaleMultiplierMin;
@property (nonatomic) float framingSpaceScalingFactor;
@property (nonatomic) float framingSpaceExtendPercentage;
@property (nonatomic) float pitchValueUpperThreshold;
@property (nonatomic) float pitchValueLowerThreshold;
@property (nonatomic) float pitchDefaultAngleValue;
@property (nonatomic) float pitchRefinementValue;
@property (nonatomic) float gravityVectorSmoothingAlpha;
@property (nonatomic) float imageBlendingRadiusUpscaler;
@property (nonatomic) float imageBlendingPercentage;
@property (nonatomic) BOOL imageBlurringEnabled;
@property (nonatomic) int imageBlurringKernelSize;
@property (nonatomic) float imageBlurringSigma;
@property (nonatomic) BOOL imageSharpeningEnabled;
@property (nonatomic) int imageSharpeningKernelSize;
@property (nonatomic) float imageSharpeningSigma;
@property (nonatomic) float imageSharpeningAmount;
@property (nonatomic) BOOL imageToneMappingEnabled;
@property (nonatomic) float imageToneMappingExponent;
@property (nonatomic) float imageToneMappingScaler;

- (id)initWithDeviceType:(int)a0;
- (id)asDictionary;
- (id)initWithPlist:(id)a0 deviceType:(int)a1;
- (id)initWithPlistPath:(id)a0 deviceType:(int)a1;

@end
