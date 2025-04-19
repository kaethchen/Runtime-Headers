@class NSDictionary;

@interface VCPWatchFaceAnalyzer : NSObject {
    NSDictionary *_options;
}

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (int)analyzeAsset:(id)a0 cancel:(id /* block */)a1 results:(id *)a2;

@end
