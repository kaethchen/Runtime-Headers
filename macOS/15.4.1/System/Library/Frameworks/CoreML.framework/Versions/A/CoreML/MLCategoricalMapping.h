@class NSDictionary, NSString, MLFeatureValue;

@interface MLCategoricalMapping : MLModelEngine <MLModelSpecificationLoader>

@property (readonly, nonatomic) NSDictionary *mapping;
@property (readonly, nonatomic) MLFeatureValue *valueOnUnknown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithMapping:(id)a0 valueOnUnknown:(id)a1 dataTransformerName:(id)a2 inputDescription:(id)a3 outputDescription:(id)a4 orderedInputFeatureNames:(id)a5 orderedOutputFeatureNames:(id)a6 configuration:(id)a7;
- (id)mapFeature:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (unsigned long long)predictionTypeForKTrace;

@end
