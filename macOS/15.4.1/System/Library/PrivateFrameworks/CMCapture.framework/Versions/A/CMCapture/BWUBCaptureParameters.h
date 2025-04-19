@class NSArray, NSString;

@interface BWUBCaptureParameters : NSObject {
    NSString *_portType;
    NSArray *_deepFusionHDREVZeroCountByEffectiveIntegrationTime;
    int _maxNumberOfFramesForAdaptiveBracketing;
    double _digitalFlashAvailableEffectiveIntegrationTimeThreshold;
    double _digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
    double _stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
    float _digitalFlashRecommendRegularFlashSNRThreshold;
    float _digitalFlashBacklitRecommendRegularFlashSNRThreshold;
    float _digitalFlashBacklitRecommendRegularFlashAERelativeDifferenceThreshold;
    BOOL _digitalFlashHighlightRecoveryEnabled;
    float _stereoPhotoSNRThreshold;
    float _stereoPhotoSNRDifferenceSecondarySNRThreshold;
    float _stereoPhotoSNRDifferenceThreshold;
    int _referenceFrameSelectionMethod;
    BOOL _usePreviousSIFR;
    NSArray *_motionAndFocusScoreWeights;
}

@property (readonly, nonatomic) BOOL nonHDRBrightLightCapturesEnabled;
@property (readonly, nonatomic) double lowLightEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) double sifrMainEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) float sifrGainThreshold;
@property (readonly, nonatomic) float lowLightHDRWithoutSIFRISPDGainThreshold;
@property (readonly, nonatomic) double longWithoutSphereEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) double deepFusionEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) int deepFusionBracketedCaptureReferenceFrameIndex;
@property (readonly, nonatomic) double learnedNRUltraHighResolutionDowngradeEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) float learnedNRUltraHighResolutionExposureBias;
@property (readonly, nonatomic) float autoFlashColorConstancyNormalizedSNRThreshold;
@property (readonly, nonatomic) float autoFlashMacroNormalizedSNRThreshold;
@property (readonly, nonatomic) BOOL macroFlashQSubSwitchingEnabled;
@property (readonly, nonatomic) double redSaturationMainEffectiveIntegrationTimeThreshold;
@property (readonly, nonatomic) float redSaturationSIFRGainThreshold;
@property (readonly, nonatomic) int toneCurveBehavior;
@property (readonly, nonatomic) BOOL preserveBlackLevel;
@property (readonly, nonatomic) float nightModeMinGainThreshold;
@property (readonly, nonatomic) BOOL alwaysUseAFTimeout;
@property (readonly, nonatomic) NSArray *afWindowParams;

- (void)dealloc;
- (id)description;
- (BOOL)usePreviousSIFR;
- (int)deepFusionHDREVZeroCountForEffectiveIntegrationTime:(double)a0;
- (double)digitalFlashAvailableEffectiveIntegrationTimeThreshold;
- (float)digitalFlashBacklitRecommendRegularFlashAERelativeDifferenceThreshold;
- (float)digitalFlashBacklitRecommendRegularFlashSNRThreshold;
- (BOOL)digitalFlashHighlightRecoveryEnabled;
- (float)digitalFlashRecommendRegularFlashSNRThreshold;
- (double)digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
- (id)initWithPortType:(id)a0 sensorIDDictionary:(id)a1;
- (int)maxNumberOfFramesForAdaptiveBracketing;
- (id)motionAndFocusScoreWeights;
- (int)referenceFrameSelectionMethod;
- (double)stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
- (float)stereoPhotoSNRDifferenceSecondarySNRThreshold;
- (float)stereoPhotoSNRDifferenceThreshold;
- (float)stereoPhotoSNRThreshold;

@end
