@class CRFormPostProcessingManager, CRPerformanceStatistics, CRFormContourBasedDetector, CRFormAnalyzerConfiguration, CRFormDetector, CRFormTextBasedDetector;

@interface CRFormAnalyzer : NSObject

@property (readonly, nonatomic) CRFormAnalyzerConfiguration *configuration;
@property (readonly, nonatomic) CRFormDetector *modelDetector;
@property (readonly, nonatomic) CRFormContourBasedDetector *contourBasedDetector;
@property (readonly, nonatomic) CRFormTextBasedDetector *textBasedDetector;
@property (readonly, nonatomic) CRFormPostProcessingManager *postProcessingManager;
@property (readonly) CRPerformanceStatistics *formDetectionStats;
@property (readonly) CRPerformanceStatistics *formPostProcessingStats;

+ (id)fetchSerializedResultsForImage:(id)a0;
+ (void)_saveAllDebugImagesForRegions:(id)a0 image:(id)a1 afterPostProcessing:(BOOL)a2;
+ (void)_saveDebugImageForRegions:(id)a0 image:(id)a1 suffix:(id)a2 displayTypes:(BOOL)a3;
+ (void)exportSerializedResults:(id)a0 forImage:(id)a1;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 detectionStats:(id)a1 postProcessingStats:(id)a2 error:(id *)a3;
- (void)analyzeImage:(id)a0 outputRegion:(id)a1;
- (BOOL)shouldRunDetectionForDocument:(id)a0;

@end
