@class SCSensitivityAnalysis;

@interface SCVideoStreamAnalyzer : NSObject {
    void /* unknown type, empty encoding */ lastAnalysisTime;
    void /* unknown type, empty encoding */ task;
    void /* unknown type, empty encoding */ analyzer;
    void /* unknown type, empty encoding */ _analysis;
    void /* unknown type, empty encoding */ analysisChanged;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ transferSession;
    void /* unknown type, empty encoding */ bufferPool;
}

@property (nonatomic, readonly) SCSensitivityAnalysis *analysis;
@property (nonatomic, copy) id /* block */ analysisChanged;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(long long)a0 error:(id *)a1;
- (void)analyzePixelBuffer:(struct __CVBuffer { } *)a0;

@end
