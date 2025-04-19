@interface CSNovDetector : NSObject {
    void *_novDetect;
}

- (void)dealloc;
- (void)reset;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (void)resetBest;
- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (id)_getAnalyzedResultFromNdresult:(struct _ndresult { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; float x4; BOOL x5; BOOL x6; } *)a0;
- (id)getOptionValue:(id)a0;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;
- (id)getAnalyzedResultForPhId:(unsigned int)a0;
- (id)getBestAnalyzedResult;
- (unsigned int)numResultsAvailable;

@end
