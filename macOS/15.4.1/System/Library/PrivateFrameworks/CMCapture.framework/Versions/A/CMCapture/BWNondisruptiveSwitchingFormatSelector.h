@class NSString, NSDictionary;

@interface BWNondisruptiveSwitchingFormatSelector : NSObject {
    NSString *_portType;
    float _baseZoomFactor;
    NSDictionary *_zoomFactorToNondisruptiveSwitchingFormatIndexSIFRBinned;
    NSDictionary *_zoomFactorToNondisruptiveSwitchingFormatIndexSIFRNonBinned;
    int _ultraHighResolutionNondisruptiveStreamingFormatIndex;
    int _mainFormatSIFRBinningFactor;
    int _videoStabilizationStrength;
    NSDictionary *_quadraSubPixelSwitchingParameters;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _quadraSubPixelSceneBasedOnNormalizedSNR;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _quadraSubPixelSceneBasedOnLuxLevel;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; BOOL resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _quadraSubPixelSceneBasedOnGain;
    BOOL _quadraSubPixelSceneMonitoringForActionCameraEnabled;
    BOOL _quadraSubPixelSceneMonitoringForDigitalFlashEnabled;
    BOOL _quadraSubPixelSceneMonitoringForVideoEnabled;
    BOOL _quadraSubPixelSceneMonitoringForPhotoEnabled;
    float _lastZoomFactor;
    int _lastDigitalFlashMode;
    BOOL _lastStationary;
    int _lastNondisruptiveSwitchingFormatIndex;
    NSString *_lastQuadraSubPixelSwitchingIntent;
}

+ (void)initialize;

- (void)dealloc;
- (void)setVideoStabilizationStrength:(int)a0;
- (int)formatIndexForZoomFactor:(float)a0 frameStatistics:(id)a1 imageControlMode:(int)a2 stillImageDigitalFlashMode:(int)a3 isStationary:(BOOL)a4 isSecondaryStream:(BOOL)a5 binnedSIFROnSecondaryStreamAllowed:(BOOL)a6 ignoreZoomFactorAndQuadraSubPixelSceneMonitoring:(BOOL)a7 ultraHighResolutionZeroShutterLagEnabled:(BOOL)a8;
- (id)initWithPortType:(id)a0 quadraSubPixelSwitchingParameters:(id)a1 baseZoomFactor:(float)a2 zoomFactorToNondisruptiveSwitchingFormatIndexSIFRBinned:(id)a3 zoomFactorToNondisruptiveSwitchingFormatIndexSIFRNonBinned:(id)a4 ultraHighResolutionNondisruptiveStreamingFormatIndex:(int)a5 mainFormatSIFRBinningFactor:(int)a6;

@end
