@interface FRCOpticalFlowEstimatorConfiguration : NSObject

@property (nonatomic) long long mode;
@property (nonatomic) BOOL disableOutputFlowScaling;
@property (nonatomic) BOOL streamingMode;
@property (nonatomic) long long revision;
@property (nonatomic) BOOL skipLastLevel;
@property (nonatomic) BOOL adaptationLayerOnly;
@property (nonatomic) BOOL legacyNormalization;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) unsigned int matchOutputDimensions;

- (id)init;

@end
