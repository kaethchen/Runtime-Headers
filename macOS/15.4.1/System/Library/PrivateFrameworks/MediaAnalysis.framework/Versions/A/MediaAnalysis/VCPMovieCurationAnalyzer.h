@class NSArray, NSDictionary, VCPVideoKeyFrameAnalyzer, VCPMovieHighlightAnalyzer;

@interface VCPMovieCurationAnalyzer : NSObject {
    VCPVideoKeyFrameAnalyzer *_keyFrameAnalyzer;
    VCPMovieHighlightAnalyzer *_highlightAnalyzer;
    NSArray *_descriptorResults;
    NSArray *_qualityResuls;
    NSArray *_junkResults;
    NSArray *_faceResults;
    NSArray *_petsResults;
    NSArray *_actionResults;
    NSArray *_subtleMotionResults;
    NSArray *_voiceResults;
    NSArray *_audioQualityResults;
    NSArray *_sceneResults;
    NSArray *_humanActionResults;
    NSArray *_humanPoseResults;
    NSArray *_cameraMotionResults;
    NSArray *_saliencyResults;
    NSArray *_orientationResults;
    NSArray *_mlHighlightScoreResults;
    NSArray *_mlQualityResults;
    NSDictionary *_faceRanges;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
    struct CGSize { double width; double height; } _frameSize;
    BOOL _isLivePhoto;
    BOOL _hadFlash;
    BOOL _hadZoom;
}

+ (BOOL)isSettlingEffectPregatingEnabled;

- (void).cxx_destruct;
- (id)results;
- (void)setMaxHighlightDuration:(float)a0;
- (void)addSettling:(id)a0 to:(id)a1;
- (void)addHighlight:(id)a0 to:(id)a1;
- (void)addSticker:(id)a0 to:(id)a1;
- (void)addSummary:(id)a0 to:(id)a1;
- (int)analyzeKeyFrame:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 frameStats:(id)a3 flags:(unsigned long long *)a4 photoOffset:(float)a5;
- (id)audioQualityScore:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (int)generateMovieCurations;
- (id)initWithAnalysisTypes:(unsigned long long)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 isLivePhoto:(BOOL)a3 photoOffset:(float)a4 hadFlash:(BOOL)a5 hadZoom:(BOOL)a6 settlingHadZoom:(BOOL)a7 keyFrameResults:(id)a8 isTimelapse:(BOOL)a9 preferredTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a10 asset:(id)a11;
- (void)loadVideoAnalysisResults:(id)a0 audioAnalysisResults:(id)a1 videoCNNResults:(id)a2 andFaceRanges:(id)a3 frameSize:(struct CGSize { double x0; double x1; })a4;
- (int)postProcessKeyFrames;
- (void)reportMovieCurationAnalysisResults:(id)a0 withSummaryAnalytics:(id)a1;

@end
