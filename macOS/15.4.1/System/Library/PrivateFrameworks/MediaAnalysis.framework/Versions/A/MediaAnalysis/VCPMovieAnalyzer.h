@class NSMutableDictionary, NSDictionary, VCPAsset, PHAsset;

@interface VCPMovieAnalyzer : NSObject {
    unsigned long long _requestedAnalyses;
    NSMutableDictionary *_analysis;
    NSMutableDictionary *_privateResults;
    VCPAsset *_asset;
    BOOL _supportConditionalAnalysis;
    NSDictionary *_existingAnalysis;
    BOOL _prepareLivePhotoScenes;
    PHAsset *_phAsset;
    NSDictionary *_options;
}

@property (nonatomic) BOOL allowStreaming;
@property (nonatomic) BOOL onDemand;
@property (nonatomic) float maxHighlightDuration;
@property (nonatomic) BOOL faceDominated;
@property (nonatomic) float maxAnalysisLength;
@property (readonly) long long status;
@property (readonly) unsigned long long errorCode;
@property (readonly) unsigned long long errorLine;

+ (id)analyzerWithVCPAsset:(id)a0 withExistingAnalysis:(id)a1 forAnalysisTypes:(unsigned long long)a2 withOptions:(id)a3;
+ (BOOL)canAnalyzeUndegraded:(id)a0 withResources:(id)a1;
+ (BOOL)enableAudioVideoFusion;
+ (BOOL)getEnableMovieHumanAction;
+ (float)getMaximumHighlightInSec;
+ (BOOL)isHeuristicStickerScoreEnabled;
+ (BOOL)persistAudioEmbedding;
+ (void)purgeCachedModels;

- (void).cxx_destruct;
- (id)analyzeAsset:(id /* block */)a0 streamed:(BOOL *)a1;
- (int)analyzeVideoSegment:(id)a0 timerange:(const struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1 forAnalysisTypes:(unsigned long long)a2 cancel:(id /* block */)a3;
- (int)analyzeVideoTrack:(id)a0 start:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forAnalysisTypes:(unsigned long long)a2 cancel:(id /* block */)a3;
- (id)createDecoderForTrack:(id)a0 timerange:(const struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1 forAnalysisTypes:(unsigned long long)a2 decodedFrameRate:(float *)a3;
- (id)createVideoAnalyzerWithOrientation:(int)a0 preferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 embeddings:(id)a2;
- (int)generateKeyFrameResource:(id)a0;
- (id)initWithPHAsset:(id)a0 existingAnalysis:(id)a1 analysisTypes:(unsigned long long)a2 downloadedData:(id)a3;
- (id)initWithPHAsset:(id)a0 withExistingAnalysis:(id)a1 forAnalysisTypes:(unsigned long long)a2;
- (id)initWithPHAsset:(id)a0 withPausedAnalysis:(id)a1 forAnalysisTypes:(unsigned long long)a2;
- (id)initWithVCPAsset:(id)a0 withExistingAnalysis:(id)a1 forAnalysisTypes:(unsigned long long)a2 withOptions:(id)a3;
- (void)loadPropertiesForAsset:(id)a0;
- (int)performMetadataAnalysisOnAsset:(id)a0 withCancelBlock:(id /* block */)a1;
- (int)postProcessAutoPlayable:(id)a0;
- (id)privateResults;
- (id)processExistingAnalysisForTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 analysisTypes:(unsigned long long *)a1;

@end
