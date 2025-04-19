@class NSArray, NSNumberFormatter, NSDictionary, NSString, _MLTInferenceBundleTester;

@interface _MLTJSONReader : NSObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _lastRange;
}

@property (copy) NSArray *jsonTestDataArray;
@property (retain) NSNumberFormatter *numFormatter;
@property BOOL isReaderForInferenceTest;
@property BOOL isReaderForGradientTest;
@property (retain) NSArray *trainingData;
@property (retain) NSArray *validationData;
@property (retain) NSDictionary *gradientTestData;
@property (retain) NSString *modelArchitecture;
@property (copy, nonatomic) NSString *datafilePath;
@property (copy, nonatomic) NSString *arrDataFilePath;
@property (copy, nonatomic) NSArray *featureNames;
@property (nonatomic) unsigned long long skippedSamples;
@property unsigned long long batchSize;
@property BOOL finishedReading;
@property unsigned long long currentSampleIdx;
@property unsigned long long trainingDataSamples;
@property unsigned long long validationDataSamples;
@property unsigned long long numberOfSamplesToRead;
@property unsigned long long inferenceDataSamples;
@property (retain) _MLTInferenceBundleTester *bundleTester;
@property (readonly, nonatomic) unsigned long long linesRead;
@property (readonly, nonatomic) unsigned long long stringEncoding;
@property BOOL streamableJSON;
@property (readonly, copy, nonatomic) NSString *inferenceTestCaseNameKey;
@property (readonly, copy, nonatomic) NSString *inferenceTestCaseOutputKey;
@property (readonly, copy, nonatomic) NSString *inferenceTestCaseInputKey;
@property (readonly, copy, nonatomic) NSString *modelUpdateInputFeatureKey;
@property (readonly, copy, nonatomic) NSString *modelUpdateTrueLabelKey;

+ (id)inferenceTestConfigurationFromFile:(id)a0 error:(id *)a1;
+ (id)modelUpdateTestConfigurationFromFile:(id)a0 error:(id *)a1;
+ (id)readConfigurationFromFile:(id)a0 forTest:(id)a1 error:(id *)a2;
+ (id)readJSONFile:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)readLine;
- (id)nextDataSample:(BOOL)a0;
- (id)MLFeatureValueFromDict:(id)a0 error:(id *)a1;
- (BOOL)assignDataFromFile:(id)a0 encoding:(unsigned long long)a1 error:(id *)a2;
- (id)biasGradientsForLayerName:(id)a0 error:(id *)a1;
- (BOOL)getArrayValues:(id)a0 outArray:(id *)a1 outDataType:(long long *)a2 error:(id *)a3;
- (id)getEmptyFeatureDictionary;
- (id)getModelArchitecture:(id *)a0;
- (id)getMultiArray:(id)a0 error:(id *)a1;
- (id)initForInferenceTestFromFile:(id)a0 batchSize:(unsigned long long)a1 error:(id *)a2;
- (id)initForModelUpdateGradientTestFromFile:(id)a0 error:(id *)a1;
- (id)initForModelUpdateTestFromFile:(id)a0 error:(id *)a1;
- (id)inputFeatureDictForInferenceTestFromBatch:(id)a0 error:(id *)a1;
- (id)inputFeatureDictForInferenceTestFromDict:(id)a0 error:(id *)a1;
- (id)layerNamesForModelUpdateGradientTest:(id *)a0;
- (id)modelUpdateDataSampleAtIndex:(unsigned long long)a0 sampleClass:(id)a1 error:(id *)a2;
- (id)modelUpdateDataSampleWithoutAutoreleaseAtIndex:(unsigned long long)a0 sampleClass:(id)a1 error:(id *)a2;
- (id)nextDataDict;
- (id)nextDataSet;
- (id)nextInferenceDataSetWithError:(id *)a0;
- (id)outputFeatureDictForInferenceTestFromBatch:(id)a0 error:(id *)a1;
- (id)outputFeatureDictForInferenceTestFromDict:(id)a0 error:(id *)a1;
- (id)processDatum:(id)a0;
- (BOOL)setFeaturesNamesAndTotalCaseCount:(id)a0 withStreaming:(BOOL)a1 error:(id *)a2;
- (id)trainingDataAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)trainingDataSampleForModelUpdateGradientTest:(id *)a0;
- (id)validationDataAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)weightGradientsForLayerName:(id)a0 error:(id *)a1;

@end
