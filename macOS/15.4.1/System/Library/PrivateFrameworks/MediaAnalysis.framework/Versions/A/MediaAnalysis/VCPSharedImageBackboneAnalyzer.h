@class VCPImageBackboneAnalyzer;

@interface VCPSharedImageBackboneAnalyzer : NSObject {
    VCPImageBackboneAnalyzer *_analyzer;
}

+ (id)sharedAnalyzerWithRevision:(id)a0;

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (id)initWithRevision:(id)a0;

@end
