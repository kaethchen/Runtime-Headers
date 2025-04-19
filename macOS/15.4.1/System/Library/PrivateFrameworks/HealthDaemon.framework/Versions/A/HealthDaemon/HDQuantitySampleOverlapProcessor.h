@class NSError;

@interface HDQuantitySampleOverlapProcessor : NSObject {
    unsigned long long _overlapFunction;
    double _anchorTime;
    long long _workingSetCount;
    BOOL _loggedDuplicatedSample;
    struct { double startTime; double endTime; double sampleValue; BOOL shouldContributeToCount; long long sourceID; } _workingSet[128];
}

@property (readonly, nonatomic) NSError *unitTesting_DuplicateSampleError;

- (void).cxx_destruct;
- (id)initWithState:(struct { double x0; unsigned long long x1; long long x2; BOOL x3; struct { double x0; double x1; double x2; BOOL x3; long long x4; } x4[128]; })a0;
- (long long)addSample:(struct { double x0; double x1; double x2; BOOL x3; long long x4; })a0 outputSamples:(struct { double x0; double x1; double x2; BOOL x3; long long x4; }[8])a1 error:(id *)a2;
- (struct { double x0; unsigned long long x1; long long x2; BOOL x3; struct { double x0; double x1; double x2; BOOL x3; long long x4; } x4[128]; })exportCurrentState;
- (BOOL)fetchFinalOverlapSamplesWithErrorOut:(id *)a0 handler:(id /* block */)a1;
- (BOOL)fetchOverlapProcessSamplesFrom:(struct { double x0; double x1; double x2; BOOL x3; long long x4; })a0 setAnchorTime:(BOOL)a1 errorOut:(id *)a2 handler:(id /* block */)a3;
- (long long)finishWithRemainingSamples:(struct { double x0; double x1; double x2; BOOL x3; long long x4; }[8])a0 error:(id *)a1;
- (id)initWithOverlapFunction:(unsigned long long)a0;
- (BOOL)loggedDuplicatedSample;
- (void)resetAnchorTime:(double)a0;

@end
