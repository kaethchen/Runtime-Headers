@class RSParentAssociation, RSKeyframeAccumulation, RSRecessedAreaReconstructor, RSDoorWindowOnlineDetector, RSNonUniformHeightEstimation, RSOpeningHeightAlignment, RSWallOpeningOnlineOptimizer, RSProjection2DZ, RSMarkerCoaching, RSWallOpeningOnlineDetector, RSMarkerSignal, RSMirrorDetection, RSFloorPlan, NSMutableArray, RSGeometryCalculation, RSFloorEstimation, RSScanUIFormatter;

@interface RSOnlineFloorPlanGenerator : RSFloorPlanGeneratorBase {
    RSWallOpeningOnlineOptimizer *_onlineWallOpeningConsistency;
    RSDoorWindowOnlineDetector *_onlineDoorWindow;
    RSMirrorDetection *_mirrorDetector;
    RSWallOpeningOnlineDetector *_wallOpeningDetector;
    RSKeyframeAccumulation *_accumulator;
    RSGeometryCalculation *_geometryEstimator;
    RSScanUIFormatter *_scanUiFormatter;
    RSProjection2DZ *_projector;
    RSNonUniformHeightEstimation *_heightEstimator;
    RSOpeningHeightAlignment *_openingHeightAlignment;
    RSRecessedAreaReconstructor *_recessedAreaReconstructor;
    RSParentAssociation *_parentAssociation;
    RSFloorEstimation *_floorEstimator;
    BOOL _isMarkerCoachingEnabled;
    RSMarkerCoaching *_markerCoaching;
    RSMarkerSignal *_markerSignal;
    BOOL _isNonUniformHeightEnabled;
    BOOL _isOpeningReplaceOpendoorEnabled;
    BOOL _isOpendoorReplaceOpeningEnabled;
    BOOL _isDoorReplaceOpeningEnabled;
    BOOL _isBayWindowRecessedAreaEnabled;
    RSFloorPlan *_floorPlanForOffline;
    NSMutableArray *_floorPlanDebug;
    BOOL _enableLiveDump;
}

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (void)generateFloorPlanWithInputDir:(id)a0 outputDir:(id)a1 debug:(BOOL)a2;
- (void)generateFloorPlanWithInputPath:(id)a0 outputPath:(id)a1 debug:(BOOL)a2;

@end
