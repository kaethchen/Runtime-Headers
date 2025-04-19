@class NSMutableArray;

@interface VCPVideoMetaSegmentAnalyzer : VCPVideoMetaAnalyzer {
    NSMutableArray *_results;
}

- (id)init;
- (void).cxx_destruct;
- (id)privateResults;
- (int)processMetadataGroup:(id)a0 flags:(unsigned long long *)a1;

@end
