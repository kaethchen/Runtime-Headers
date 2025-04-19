@class VCPVideoActivityDescriptor, VCPCNNModel, VCPCNNData, NSMutableArray, NSNumber;

@interface VCPVideoActivityAnalyzer : VCPVideoAnalyzer {
    VCPVideoActivityDescriptor *_activityDescriptor;
    NSMutableArray *_activityScores;
    NSMutableArray *_validActivityScores;
    NSMutableArray *_qualityResults;
    NSMutableArray *_interestingnessResults;
    NSMutableArray *_obstructionResults;
    NSMutableArray *_classificationResults;
    NSMutableArray *_fineActionResults;
    NSMutableArray *_faceResults;
    NSMutableArray *_results;
    float _sceneSwitchFrequency;
    long long _numOfFrames;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastProcessTime;
    float _overallActivityLevel;
    VCPCNNModel *_model;
    VCPCNNData *_input;
    NSNumber *_sportsSceneId;
}

- (id)init;
- (void).cxx_destruct;
- (id)results;
- (float)actionScoreInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)addSceneClassificationContributionToActivityLevel:(float *)a0;
- (void)addSceneSwitchFrequencyConstributionToActivityLevel:(float *)a0;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 frameStats:(id)a3 flags:(unsigned long long *)a4;
- (int)computeActivityScoreAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (int)extractRequiredClassificationInfoFrom:(id)a0 toArray:(id)a1;
- (int)extractRequiredFaceInfoFrom:(id)a0 toArray:(id)a1;
- (int)extractRequiredInfoFrom:(id)a0 toArray:(id)a1;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 fpsRate:(float)a1;
- (void)generateActivityDescriptor;
- (void)normalizeActivityDescriptor;
- (int)preProcessQualityResults:(id)a0 interestingnessResults:(id)a1 obstructionResults:(id)a2 classificationResults:(id)a3 fineActionResults:(id)a4 faceResults:(id)a5 sceneSwitchFrequency:(float)a6;
- (void)resetActivityStatsAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (float)scaleBasedOnFaceForTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)validateActivityScores;
- (float)validationScoreOfTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 fromResult:(id)a1 startIdx:(int *)a2;

@end
