@class NSMutableDictionary;

@interface VNImageAnalyzerCompoundRequestGroupingConfigurations : NSObject {
    NSMutableDictionary *_groupingConfigurations;
    unsigned long long _detectorModel;
}

- (void).cxx_destruct;
- (unsigned long long)detectorModel;
- (id)initWithDetectorModel:(unsigned long long)a0;

@end
