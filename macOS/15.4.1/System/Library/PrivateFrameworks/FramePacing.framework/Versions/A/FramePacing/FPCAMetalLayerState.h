@class NSString, FPOnGlassCAMetalLayerDrawableInterval, NSMutableDictionary, NSNumber, FPDurationStatistics;

@interface FPCAMetalLayerState : NSObject {
    BOOL _needsReport;
    BOOL _hasUpdatedMetadata;
    BOOL _hasTargets;
    unsigned int _presentedCommandBufferCount;
    unsigned int _skippedCommandBufferCount;
    void *_layerAddress;
    NSNumber *_imageQueueID;
    FPDurationStatistics *_presentedEndToEndDrawableLifetimeStats;
    FPDurationStatistics *_presentedCPUWalltimeStats;
    FPDurationStatistics *_presentedGPUWalltimeStats;
    FPDurationStatistics *_presentedOnGPUTimeStats;
    FPDurationStatistics *_presentedGPUFinishToPresentLatency;
    FPDurationStatistics *_skippedEndToEndDrawableLifetimeStats;
    FPDurationStatistics *_skippedCPUWalltimeStats;
    FPDurationStatistics *_skippedGPUWalltimeStats;
    FPDurationStatistics *_skippedOnGPUTimeStats;
    FPDurationStatistics *_skippedGPUFinishToPresentLatency;
    FPDurationStatistics *_onScreenStats;
    FPDurationStatistics *_clientPresentationLatenessStats;
    FPDurationStatistics *_onGlassPresentationLatenessStats;
    NSString *_name;
    NSNumber *_height;
    NSNumber *_width;
    NSNumber *_pixelFormat;
    unsigned long long _signpostID;
    FPOnGlassCAMetalLayerDrawableInterval *_previousDrawableOnGlassDrawable;
    NSMutableDictionary *_acquiredInFlightDrawables;
    NSMutableDictionary *_clientPresentedInFlightDrawables;
    unsigned long long _timeCreatedMCTR;
    unsigned long long _previousMetadataReportedMCTR;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
