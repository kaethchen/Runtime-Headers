@class NSMutableDictionary, NSString, _MLTLogger, NSDictionary;
@protocol MLBatchProvider;

@interface _MLTModelUpdateValidator : NSObject

@property (retain, nonatomic) NSMutableDictionary *metricsDict;
@property (retain, nonatomic) _MLTLogger *logger;
@property (retain, nonatomic) NSString *recipePath;
@property (retain, nonatomic) id<MLBatchProvider> dataProvider;
@property (retain, nonatomic) NSMutableDictionary *validationAccuracyDict;
@property (retain, nonatomic) NSDictionary *validationParams;
@property BOOL tested;
@property BOOL useBatchPrediction;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)addFailingCountForOutput:(id)a0 forMetric:(id)a1;
- (BOOL)addPassingCountForOutput:(id)a0 forMetric:(id)a1;
- (BOOL)checkIfResultsWithinParams:(BOOL)a0 error:(id *)a1;
- (void)populateMetricsDictFromParams:(id)a0;
- (BOOL)validateModel:(id)a0 withParams:(id)a1 verbose:(BOOL)a2 error:(id *)a3;
- (BOOL)validateModelWithoutAutorelease:(id)a0 withParams:(id)a1 verbose:(BOOL)a2 error:(id *)a3;
- (id)validationAccuracyForOutput:(id)a0 error:(id *)a1;

@end
