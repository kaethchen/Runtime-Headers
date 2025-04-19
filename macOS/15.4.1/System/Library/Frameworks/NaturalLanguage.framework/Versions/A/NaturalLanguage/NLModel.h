@class NSObject, NSDictionary, NLModelConfiguration, NSData, MLModel, NLModelImpl;
@protocol OS_dispatch_queue;

@interface NLModel : NSObject {
    NLModelConfiguration *_configuration;
    NSDictionary *_infoDictionary;
    NLModelImpl *_modelImpl;
    NSData *_data;
    MLModel *_mlModel;
    void *_container;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (readonly, copy) NLModelConfiguration *configuration;

+ (id)modelWithContentsOfURL:(id)a0 error:(id *)a1;
+ (id)modelWithData:(id)a0 error:(id *)a1;
+ (id)modelWithMLModel:(id)a0 error:(id *)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)data;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (unsigned long long)systemVersion;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)gazetteer;
- (id)initWithMLModel:(id)a0 error:(id *)a1;
- (id)predictedLabelHypothesesForString:(id)a0 maximumCount:(unsigned long long)a1;
- (id)mlModel;
- (id)classifierTestResultsWithDataProvider:(id)a0;
- (id)documentFrequencyMap;
- (id)embedding;
- (id)embeddingData;
- (id)initWithClassifierMLModel:(id)a0;
- (id)initWithConfiguration:(id)a0 modelImpl:(id)a1;
- (id)initWithData:(id)a0 mlModel:(id)a1 error:(id *)a2;
- (id)labelArray;
- (id)labelMap;
- (id)predictedLabelArraysForTokenArrays:(id)a0;
- (id)predictedLabelForString:(id)a0;
- (id)predictedLabelHypothesesForTokens:(id)a0 maximumCount:(unsigned long long)a1;
- (id)predictedLabelsForTokens:(id)a0;
- (id)sequenceTestResultsWithDataProvider:(id)a0;
- (id)testResultsWithDataProvider:(id)a0;
- (id)testResultsWithDataSet:(id)a0;
- (id)vocabularyMap;
- (BOOL)writeMLModelToURL:(id)a0 atomically:(BOOL)a1 error:(id *)a2;
- (BOOL)writeMLModelToURL:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1 error:(id *)a2;

@end
