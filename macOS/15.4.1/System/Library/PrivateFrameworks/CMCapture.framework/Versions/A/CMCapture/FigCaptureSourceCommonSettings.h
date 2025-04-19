@class NSDictionary;

@interface FigCaptureSourceCommonSettings : NSObject

@property (readonly, nonatomic) NSDictionary *memoryPoolSizeDistributions;
@property (readonly, nonatomic) BOOL livePhotoVitalityScoringSupported;
@property (readonly, nonatomic) float livePhotoJPEGIntermediateCompressionRatioDefaultOverride;
@property (readonly, nonatomic) int previewRegistrationType;
@property (readonly, nonatomic) BOOL previewRegistrationExcludeStaticComponentFromAlignmentShiftsEnabled;
@property (readonly, nonatomic) NSDictionary *photoProcessingTimeRangesInMS;
@property (readonly, nonatomic) BOOL RGBIRStereoFusionThresholdsEnabled;
@property (readonly, nonatomic) BOOL flashMitigationRequired;
@property (readonly, nonatomic) BOOL realtimeFSDNetSupported;
@property (readonly, nonatomic) BOOL frameRateSwitchBasedOnMotionForVFRDisabled;
@property (readonly, nonatomic) BOOL videoStabilizationAdaptiveOverscanSupported;
@property (readonly, nonatomic) BOOL variableFrameRateVideoCaptureFromFWSupported;
@property (readonly, nonatomic) BOOL highPriorityLaunchFromLockScreenSupported;
@property (readonly, nonatomic) int swfrVersion;
@property (readonly, nonatomic) int semanticRenderingVersion;
@property (readonly, nonatomic) int smartStyleRenderingVersion;

- (void)dealloc;

@end
