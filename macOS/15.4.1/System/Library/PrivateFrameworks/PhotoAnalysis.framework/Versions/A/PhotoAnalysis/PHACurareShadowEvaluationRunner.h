@class PHACurareShadowEvaluationRecipeOptions;

@interface PHACurareShadowEvaluationRunner : NSObject

@property (readonly, nonatomic) PHACurareShadowEvaluationRecipeOptions *options;

+ (id)runnerLog;

- (void).cxx_destruct;
- (BOOL)runWithError:(id *)a0;
- (id)evaluateModel:(id)a0 datasetDictionary:(id)a1 error:(id *)a2;
- (void)generateCAEventForResults:(id)a0;
- (id)getDatasetWithError:(id *)a0;
- (id)initWithRecipeOptions:(id)a0;

@end
