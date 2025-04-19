@class NSURL, MADVideoSafetyClassifier, NSMutableDictionary, VCPVideoEmbeddings, VCPVideoCNNAnalyzer, VCPFullVideoAnalyzer, VCPVideoSceneClassifier, VCPVideoHumanActionAnalyzer;

@interface MADMovieBlastDoorAnalyzer : NSObject {
    NSURL *_movieURL;
    unsigned long long _analysisTypes;
    id /* block */ _cancelBlock;
    unsigned long long _width;
    unsigned long long _height;
    int _orientation;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
    double _frameRate;
    VCPFullVideoAnalyzer *_videoAnalysis;
    VCPVideoSceneClassifier *_sceneClassifier;
    MADVideoSafetyClassifier *_safetyClassifier;
    VCPVideoHumanActionAnalyzer *_humanActionAnalyzer;
    VCPVideoCNNAnalyzer *_videoCNNAnalyzer;
    VCPVideoEmbeddings *_videoEmbeddings;
    NSMutableDictionary *_privateResults;
}

- (void).cxx_destruct;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (id)analyzeAsset:(id *)a0;
- (int)configureAnalyzers;
- (int)createPixelBufferPool:(struct __CVPixelBufferPool **)a0;
- (int)finalizeAnalyzers:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)initWithMovieURL:(id)a0 analysisTypes:(unsigned long long)a1 cancelBlock:(id /* block */)a2;
- (int)processFrame:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (int)processVideo:(id)a0;
- (int)queryVideoProperties:(id)a0;

@end
