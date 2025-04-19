@class NSArray, NSDictionary, MLModel, NSString, _MLTInputGeneratorUtils;

@interface _MLTInputGenerator : NSObject <_MLTInputProvider>

@property (retain, nonatomic) NSDictionary *inputDescriptions;
@property (retain, nonatomic) NSDictionary *outputDescriptions;
@property (retain, nonatomic) MLModel *model;
@property (nonatomic) struct __CVBuffer { } *buffer;
@property (retain, nonatomic) _MLTInputGeneratorUtils *inputGeneratorUtils;
@property (retain, nonatomic) NSArray *testCases;
@property (nonatomic) unsigned long long currentCase;
@property (retain, nonatomic) _MLTInputGeneratorUtils *util;
@property long long seed;
@property unsigned long long monteCarloCount;
@property BOOL dataAvailable;
@property (copy, nonatomic) NSString *inputDataKey;
@property (copy, nonatomic) NSString *vecDataKey;
@property (copy, nonatomic) NSString *otherFrameWorkPredictionKey;
@property (copy, nonatomic) NSString *testCaseNameKey;
@property (copy, nonatomic) NSArray *outputTestData;

+ (id)inputGeneratorWithModel:(id)a0 seed:(long long)a1 monteCarloIterations:(unsigned long long)a2 testCaseType:(id)a3;
+ (id)inputGeneratorWithModel:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (id)allDataSets:(id *)a0;
- (id)initWithModel:(id)a0 seed:(long long)a1 monteCarloIterations:(unsigned long long)a2 testCaseType:(id)a3;
- (id)nextDataSet:(id *)a0;

@end
