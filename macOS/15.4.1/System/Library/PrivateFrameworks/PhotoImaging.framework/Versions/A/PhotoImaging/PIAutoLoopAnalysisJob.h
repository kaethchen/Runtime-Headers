@class AVAsset, NSDictionary;

@interface PIAutoLoopAnalysisJob : NURenderJob

@property (retain, nonatomic) AVAsset *videoSource;
@property (retain, nonatomic) NSDictionary *recipe;

- (void).cxx_destruct;
- (id)result;
- (BOOL)render:(out id *)a0;
- (id)cacheKey;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputVideo;
- (id)analysisRequest;

@end
