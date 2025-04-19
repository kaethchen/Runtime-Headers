@class NSArray, NSString, NSIndexSet, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CHStrokeClassificationModel : CHRecurrentNeuralNetwork {
    NSObject<OS_dispatch_queue> *_queue;
    void *_model;
    long long _modelUseCount;
    long long _inferenceCount;
    struct unique_ptr<CHCodeMap, std::default_delete<CHCodeMap>> { struct __compressed_pair<CHCodeMap *, std::default_delete<CHCodeMap>> { struct CHCodeMap *__value_; } __ptr_; } _codeMap;
}

@property (readonly, nonatomic) NSArray *modelConfigurationsNumStrokes;
@property (readonly, nonatomic) NSArray *modelConfigurationsNumPoints;
@property (readonly, nonatomic) NSString *modelSmallestConfig;
@property (readonly, nonatomic) long long numInputFeatures;
@property (readonly, nonatomic) long long distanceFeatureIndex;
@property (readonly, nonatomic) long long sinAngleFeatureIndex;
@property (readonly, nonatomic) long long cosAngleFeatureIndex;
@property (readonly, nonatomic) long long modelDecoderSize;
@property (readonly, nonatomic) long long maxInputWidth;
@property (readonly, nonatomic) long long minPointsPerStroke;
@property (readonly, nonatomic) long long maxPointsPerStroke;
@property (readonly, nonatomic) long long recognitionMaxStrokes;
@property (readonly, nonatomic) long long contextMaxStrokes;
@property (readonly, nonatomic) long long maxStrokeHeight;
@property (readonly, nonatomic) long long maxNumberOfInputStrokes;
@property (readonly, nonatomic) double interpointDistance;
@property (readonly, nonatomic) long long numOutputClasses;
@property (readonly, nonatomic) long long nontextClassIndex;
@property (readonly, nonatomic) long long weakLabelIndex;
@property (readonly, nonatomic) NSIndexSet *textLTRClassIndexes;
@property (readonly, nonatomic) NSIndexSet *textRTLClassIndexes;
@property (readonly, nonatomic) NSArray *scriptCodeMap;
@property (readonly, nonatomic) NSDictionary *codeScriptDictionary;
@property (readonly, nonatomic) NSDictionary *scriptCodeDictionary;

+ (id)localesFromModelPrediction:(struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *x0; void *x1; struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { void *x0; } x2; })a0 maxNumberOfLocales:(long long)a1 numberOfOutputClass:(long long)a2 scriptCodeMap:(id)a3;
+ (id)modelWithModelName:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_extractFeaturesFromDrawing:(id)a0 numStrokes:(unsigned long long)a1 numPoints:(unsigned long long)a2 error:(id *)a3;
- (BOOL)_isContentStroke:(long long)a0 withinSubtile:(long long)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 ofTotal:(long long)a3;
- (id)_subTilesForStrokeCount:(long long)a0;
- (BOOL)classifyStrokes:(id)a0 outStrokeClassProbabilities:(void *)a1 cancellationBlock:(id /* block */)a2;
- (BOOL)classifyStrokes:(id)a0 outTextStrokeProbabilities:(void *)a1 cancellationBlock:(id /* block */)a2;
- (id)predictedScriptsForDrawing:(id)a0 maxNumberOfLocales:(long long)a1;

@end
