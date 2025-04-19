@class NSString, _MLTLogger;

@interface _MLTInferenceValidator : NSObject

@property (retain) NSString *computeUnit;
@property (retain) NSString *errorString;
@property (retain) _MLTLogger *logger;
@property long long numCorrect;
@property long long numFailed;

- (void).cxx_destruct;
- (void)addErrorString:(id)a0 forTestCase:(id)a1 andFeatureName:(id)a2;
- (void)calculateAndVerifyMetric:(id)a0 forFeatureName:(id)a1 betweenPredictedValue:(id)a2 andExpectedValue:(id)a3 andReplaceNanInfValue:(BOOL)a4 withThresholdInformation:(id)a5 andTestCaseName:(id)a6 outputMetricsDictionary:(id)a7;
- (void)calculateAndVerifyMetric:(id)a0 forFeatureName:(id)a1 withNumericalType:(long long)a2 betweenPredictedValue:(id)a3 andExpectedValue:(id)a4 andReplaceNanInfValue:(BOOL)a5 withThresholdInformation:(id)a6 andTestCaseName:(id)a7 outputMetricsDictionary:(id)a8;
- (id)initWithComputeUnit:(long long)a0;
- (id)initWithComputeUnit:(long long)a0 andLogger:(id)a1;
- (id)initWithComputeUnit:(long long)a0 logger:(id)a1;
- (id)topKDebugString:(id)a0;
- (BOOL)validateBatchPrediction:(id)a0 withDataSet:(id)a1 outputName:(id)a2 testCaseName:(id)a3 outputMetricsDictionary:(id)a4 replaceNanInfValue:(BOOL)a5 error:(id *)a6;
- (BOOL)validatePredicted:(id)a0 withExpectedValue:(id)a1 featureName:(id)a2 testCaseName:(id)a3 metrics:(id)a4 outputMetricsDictionary:(id)a5 replaceNanInfValue:(BOOL)a6 error:(id *)a7;
- (BOOL)validatePrediction:(id)a0 withExpectedValue:(id)a1 testCaseName:(id)a2 outputMetricsDictionary:(id)a3 replaceNanInfValue:(BOOL)a4 error:(id *)a5;

@end
