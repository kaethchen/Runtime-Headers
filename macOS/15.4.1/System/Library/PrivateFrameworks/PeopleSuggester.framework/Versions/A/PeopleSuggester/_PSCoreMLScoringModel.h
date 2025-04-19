@class NSArray, MLModel, NSDictionary, NSURL, NSString;

@interface _PSCoreMLScoringModel : NSObject

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (retain, nonatomic) MLModel *mlModel;
@property (nonatomic) BOOL mlModelInitialized;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSArray *inputShape;
@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSString *inputFeatureName;
@property (retain, nonatomic) NSString *numCandidatesFeatureName;
@property (retain, nonatomic) NSString *outputFeatureName;
@property (nonatomic) long long modelType;

- (id)init;
- (void).cxx_destruct;
- (void)loadModel;
- (id)scoreCandidatesWithCoreMLModel:(id)a0;
- (id)batchPredictWithFeatureDictArray:(id)a0;
- (id)featureOrderFromMetadata;
- (id)getModelDescription;
- (id)getModelPath;
- (long long)getModelTypeWithModelMetadata:(id)a0;
- (id)getSuggestionProxiesForCandidateToFeatureVectorDictGetter:(id /* block */)a0 predictionContext:(id)a1 messageInteractionCache:(id)a2 shareInteractionCache:(id)a3;
- (id)initWithCoreMLModel:(id)a0;
- (BOOL)isGBDTModel;
- (BOOL)isSetModel;
- (id)loadCoreMLModel:(id)a0 config:(id)a1;
- (void)loadModelMetadata;
- (void)loadProductionModel:(id)a0;
- (id)predictWithFeatureProvider:(id)a0;
- (id)reformatCandidateDictionaryIntoFeatureTensor:(id)a0 candidateList:(id)a1 error:(id *)a2;
- (id)scoreCandidates:(id /* block */)a0 predictionContext:(id)a1;
- (id)scoreCandidatesWithGBDTModel:(id)a0;
- (void)unloadModel;

@end
