@class NSString, NSArray, NSURL;

@interface _MLTModelComparatorConfiguration : NSObject

@property (nonatomic) unsigned int seed;
@property (nonatomic) unsigned long long monteCarloCount;
@property (retain, nonatomic) NSString *testCaseType;
@property (retain, nonatomic) NSArray *imageInputs;
@property (retain, nonatomic) NSString *modelAPath;
@property (retain, nonatomic) NSString *modelBPath;
@property long long modelAComputeUnit;
@property long long modelBComputeUnit;
@property BOOL allowHardwareFallback;
@property BOOL dumpOutputs;
@property (retain) NSURL *outputDumpLogFileURL;
@property (retain) NSURL *outputMetricsLogFileURL;
@property long long iterations;

- (id)init;
- (void).cxx_destruct;

@end
