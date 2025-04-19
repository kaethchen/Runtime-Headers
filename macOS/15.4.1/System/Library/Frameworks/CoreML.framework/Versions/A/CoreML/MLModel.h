@class MLModelMetadata, NSString, NSArray, MLPredictionEvent, MLModelDescription, MLFairPlayDecryptSession, NSObject, MLModelConfiguration;
@protocol MLPipeline, OS_dispatch_queue, MLNeuralNetwork, MLWritable, MLRegressor, MLProgram, MLClassifier;

@interface MLModel : NSObject <MLModeling> {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _emittedDetailsToInstruments;
    struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } _nextPredictionRequestID;
    NSObject<OS_dispatch_queue> *_asyncPredictionQueue;
}

@property (class, readonly, copy, nonatomic) NSArray *availableComputeDevices;

@property (nonatomic) unsigned long long signpostID;
@property (retain, nonatomic) MLPredictionEvent *predictionEvent;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (retain, nonatomic) MLModelConfiguration *configuration;
@property (retain, nonatomic) MLFairPlayDecryptSession *decryptSession;
@property (readonly, nonatomic) id<MLProgram> program;
@property (readonly, nonatomic) id<MLNeuralNetwork> neuralNetwork;
@property (readonly, nonatomic) id<MLWritable> writable;
@property (readonly, nonatomic) id<MLClassifier> classifier;
@property (readonly, nonatomic) id<MLRegressor> regressor;
@property (readonly, nonatomic) id<MLPipeline> pipeline;
@property (readonly, nonatomic) BOOL supportsConcurrentSubmissions;
@property (readonly, nonatomic) unsigned long long predictionTypeForKTrace;
@property (readonly, nonatomic) BOOL recordsPredictionEvent;
@property (readonly) MLModelMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_compileModelAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (void)compileModelAtURL:(id)a0 completionHandler:(id /* block */)a1;
+ (id)compileModelAtURL:(id)a0 error:(id *)a1;
+ (id)compileModelWithoutAutoreleaseAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (unsigned long long)generateSignpostId;
+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (void)loadModelAsset:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (long long)maxPredictionsInFlight;
+ (id)modelWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)modelWithContentsOfURL:(id)a0 error:(id *)a1;
+ (id)predictionsFromLoopingOverBatch:(id)a0 model:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)predictionsFromSubbatchingBatch:(id)a0 maxSubbatchLength:(long long)a1 predictionBlock:(id /* block */)a2 options:(id)a3 error:(id *)a4;
+ (BOOL)serializeInterfaceAndMetadata:(void *)a0 toArchive:(void *)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)cancelPredictionRequest:(id)a0;
- (id)debugQuickLookObject;
- (void)enableInstrumentsTracing;
- (void)enableInstrumentsTracingIfNeeded;
- (id)executionSchedule;
- (id)initDescriptionOnlyWithSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
- (id)initInterfaceAndMetadataWithCompiledArchive:(void *)a0 error:(id *)a1;
- (id)initWithDescription:(id)a0;
- (id)initWithDescription:(id)a0 configuration:(id)a1;
- (id)initWithName:(id)a0 inputDescription:(id)a1 outputDescription:(id)a2 orderedInputFeatureNames:(id)a3 orderedOutputFeatureNames:(id)a4 configuration:(id)a5;
- (id)internalEngine;
- (id)modelPath;
- (id)newRequestForModel:(id)a0 inputFeatures:(id)a1 options:(id)a2 error:(id *)a3;
- (id)newRequestWithInputFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)newRequestWithInputFeatures:(id)a0 usingState:(id)a1 options:(id)a2 error:(id *)a3;
- (id)newState;
- (id)newStateForFeatureNamed:(id)a0 initializerBlock:(id /* block */)a1;
- (id)newStateWithClientBuffers:(id)a0;
- (unsigned long long)nextPredictionRequestID;
- (id)objectBoundingBoxOutputDescription;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (id)pipelineOfPostVisionFeaturePrintModelsFromPipeline:(id)a0;
- (void)predictionFromFeatures:(id)a0 completionHandler:(id /* block */)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (void)predictionFromFeatures:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 usingState:(id)a1 error:(id *)a2;
- (void)predictionFromFeatures:(id)a0 usingState:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)predictionFromFeatures:(id)a0 usingState:(id)a1 options:(id)a2 error:(id *)a3;
- (id)predictionsFromBatch:(id)a0 error:(id *)a1;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (void)prepareWithCompletionHandler:(id /* block */)a0;
- (void)prepareWithConcurrencyHint:(long long)a0;
- (void)setModelPath:(id)a0 modelName:(id)a1;
- (void)submitPredictionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)updatable;
- (id)vectorizeInput:(id)a0 error:(id *)a1;
- (id)visionFeaturePrintInfo;

@end
