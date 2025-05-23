@class NSArray, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface VCPVideoSceneClassifier : VCPVideoAnalyzer {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastProcess;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _start;
    NSMutableArray *_results;
    NSMutableDictionary *_existingScenes;
    NSMutableDictionary *_internalFrameScenes;
    NSMutableDictionary *_thresholdBySceneID;
    NSMutableArray *_objectsOfInterest;
}

@property (readonly) NSDictionary *frameScenes;
@property (retain) NSArray *sceneResults;
@property (retain) NSArray *qualityResults;

- (id)init;
- (void).cxx_destruct;
- (id)results;
- (void)addAggregatedScenes:(id)a0 timerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (void)addResult:(id)a0 start:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 keyIsName:(BOOL)a3;
- (float)adjustedConfidence:(id)a0 confidence:(float)a1;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (BOOL)compareObjectsOfInterest:(id)a0 withScenes:(id)a1;
- (id)filteredKeyFrameResults;
- (void)findObjectsOfInterest:(id)a0;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)sortScenesWithMaxNumCap:(id)a0;

@end
