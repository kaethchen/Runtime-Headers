@class MLModelMetadata, NSString, MLE5ProgramLibrary, MLVersionInfo, MLModelDescription, MLE5ExecutionStreamPool, MLFeatureProviderConformer, NSObject, MLModelConfiguration;
@protocol MLE5ExecutionStreamOperationPool, OS_dispatch_semaphore;

@interface MLE5Engine : MLModelEngine <MLPreparable, MLProgramInternal, MLModelAssetDescriptionLoader, MLStatefulModelEngine, MLClassifier, MLCompiledModelLoader>

@property (readonly) MLE5ExecutionStreamPool *streamPool;
@property (readonly) id<MLE5ExecutionStreamOperationPool> operationPool;
@property (readonly, copy, nonatomic) NSString *functionName;
@property (readonly) NSString *classProbabilitiesFeatureName;
@property (readonly) id classLabelsSharedKey;
@property (readonly) MLFeatureProviderConformer *inputFeatureConformer;
@property (readonly) MLFeatureProviderConformer *stateFeatureConformer;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *batchMaxInFlightSem;
@property (readonly, nonatomic) MLVersionInfo *compilerVersionInfo;
@property (readonly, nonatomic) MLE5ProgramLibrary *programLibrary;
@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) MLModelConfiguration *configuration;
@property (readonly, nonatomic) BOOL supportsConcurrentSubmissions;
@property (readonly, nonatomic) unsigned long long predictionTypeForKTrace;
@property (readonly, nonatomic) BOOL recordsPredictionEvent;
@property (readonly, nonatomic) unsigned long long signpostID;
@property (readonly) MLModelMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *serializedMILText;

+ (Class)containerClass;
+ (id)loadModelAssetDescriptionFromCompiledArchive:(struct _MLModelInputArchiver { } *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;
+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver { } *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (unsigned long long)_extractSupportFromBackendDict:(id)a0;
- (void)_cleanUpStream:(id)a0;
- (id)_classProbabilitiesInOutputFeatures:(id)a0 error:(id *)a1;
- (id)_classifierResultFromOutputFeatures:(id)a0 classifyTopK:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_cleanUpAndReconfigureStream:(id)a0 forInputFeatures:(id)a1 error:(id *)a2;
- (id)_conformInputFeatures:(id)a0 error:(id *)a1;
- (id)_conformState:(id)a0 error:(id *)a1;
- (unsigned long long)_extractSupportedComputeUnitFromString:(id)a0;
- (id)_newRequestForModel:(id)a0 inputFeatures:(id)a1 usingState:(id)a2 options:(id)a3 error:(id *)a4;
- (id)_outputFeaturesByAddingClassifierResultTo:(id)a0 classifyTopK:(unsigned long long)a1 error:(id *)a2;
- (id)_postProcessingForOutputs:(id)a0 options:(id)a1 error:(id *)a2;
- (void)_predictionFromFeatures:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)_predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)_predictionFromFeatures:(id)a0 stream:(id)a1 options:(id)a2 error:(id *)a3;
- (id)_predictionFromFeatures:(id)a0 usingState:(id)a1 options:(id)a2 error:(id *)a3;
- (id)_probabilityDictionaryWithMultiArray:(id)a0 classifyTopK:(long long)a1;
- (double)_totalRuntimeInMilliSecondsFromE5AnalyticsDictionary:(id)a0;
- (id)_trimQuotesFromBackendName:(id)a0;
- (BOOL)_validateStreamReuse:(BOOL)a0 expectation:(id)a1 error:(id *)a2;
- (id)classLabels;
- (id)classify:(id)a0 options:(id)a1 error:(id *)a2;
- (void)enableInstrumentsTracing;
- (id)evaluateFunction:(id)a0 arguments:(id)a1 error:(id *)a2;
- (id)executionSchedule;
- (id)initWithContainer:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithProgramLibrary:(id)a0 modelDescription:(id)a1 configuration:(id)a2 functionName:(id)a3 classProbabilitiesFeatureName:(id)a4 optionalInputDefaultValues:(id)a5 compilerVersionInfo:(id)a6;
- (id)newContextAndReturnError:(id *)a0;
- (id)newRequestForModel:(id)a0 inputFeatures:(id)a1 options:(id)a2 error:(id *)a3;
- (id)newRequestForModel:(id)a0 inputFeatures:(id)a1 usingState:(id)a2 options:(id)a3 error:(id *)a4;
- (id)newStateWithClientBuffers:(id)a0;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 usingState:(id)a1 options:(id)a2 error:(id *)a3;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)prepareWithConcurrencyHint:(long long)a0 error:(id *)a1;
- (void)submitPredictionRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
