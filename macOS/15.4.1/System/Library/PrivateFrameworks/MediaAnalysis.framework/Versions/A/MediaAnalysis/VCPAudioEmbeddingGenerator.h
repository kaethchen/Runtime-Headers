@class NSString, NSMutableArray;

@interface VCPAudioEmbeddingGenerator : NSObject <SNResultsObserving> {
    NSMutableArray *_results;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _trackStart;
    NSString *_resultsKey;
    int _version;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)results;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)addDetectionFromTime:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0 toTime:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 embedding:(id)a2;
- (int)finalizeAnalysisAtTime:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0;
- (id)initWithTrackStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 threshold:(float)a1 resultsKey:(id)a2 version:(int)a3;

@end
