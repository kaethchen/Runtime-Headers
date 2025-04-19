@class NSMutableDictionary, NSDictionary, VCPAsset, PHAsset, VCPPhotoAnalyzerSharedContext;

@interface VCPPhotoAnalyzer : NSObject {
    unsigned long long _requestedAnalyses;
    NSMutableDictionary *_analysis;
    unsigned long long _irisAnalyses;
    NSDictionary *_phFaceResults;
    unsigned long long _phFaceFlags;
    VCPAsset *_asset;
    float _imageBlurTextureScore;
    float _preAnalysisSharpnessScore;
    BOOL _faceDominated;
    BOOL _requirePHFaceAnalysis;
    PHAsset *_phAsset;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
    VCPPhotoAnalyzerSharedContext *_sharedContext;
}

@property (nonatomic) BOOL allowStreaming;
@property (nonatomic) BOOL onDemand;
@property (readonly) long long status;
@property (readonly) unsigned long long errorCode;
@property (readonly) unsigned long long errorLine;

+ (id)resourceForAsset:(id)a0 withResources:(id)a1;
+ (id)analyzerWithVCPAsset:(id)a0 forAnalysisTypes:(unsigned long long)a1;
+ (BOOL)canAnalyzeUndegraded:(id)a0 withResources:(id)a1;
+ (BOOL)isLivePhotoKeyFrameEnabled;

- (void).cxx_destruct;
- (id).cxx_construct;
- (int)runBlock:(id /* block */)a0 queue:(id)a1;
- (void)setSharedContext:(id)a0;
- (void)_reportPetsAnalysisWithResults:(id)a0;
- (id)analyzeAsset:(id /* block */)a0 withOptions:(id)a1;
- (int)analyzeImage:(unsigned long long *)a0 performedAnalyses:(unsigned long long *)a1 cancel:(id /* block */)a2;
- (int)checkFaceDominant;
- (int)downscaleImage:(struct __CVBuffer { } *)a0 scaledImage:(struct __CVBuffer **)a1 majorDimension:(int)a2;
- (id)existingAnalysisForMovieAnalyzer;
- (id)initWithPHAsset:(id)a0 existingAnalysis:(id)a1 analysisTypes:(unsigned long long)a2 downloadedData:(id)a3;
- (id)initWithPHAsset:(id)a0 withExistingAnalysis:(id)a1 forAnalysisTypes:(unsigned long long)a2;
- (id)initWithVCPAsset:(id)a0 withExistingAnalysis:(id)a1 forAnalysisTypes:(unsigned long long)a2;
- (void)processExistingAnalyses:(id)a0;
- (void)updateDegradedFlagForMajorDimension:(unsigned long long)a0;

@end
