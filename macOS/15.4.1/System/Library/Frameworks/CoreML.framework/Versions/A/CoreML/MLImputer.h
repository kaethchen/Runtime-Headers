@class NSString, MLFeatureValue;

@interface MLImputer : MLModelEngine <MLModelSpecificationLoader>

@property (readonly, nonatomic) MLFeatureValue *imputeValue;
@property (readonly, nonatomic) MLFeatureValue *replaceValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imputeValueFrom:(id)a0 replaceValue:(id)a1 dataTransformerName:(id)a2 inputDescription:(id)a3 outputDescription:(id)a4 orderedInputFeatureNames:(id)a5 orderedOutputFeatureNames:(id)a6 error:(id *)a7;
+ (id)imputeValueFrom:(id)a0 replaceValue:(id)a1 inputDescription:(id)a2 outputDescription:(id)a3 orderedInputFeatureNames:(id)a4 orderedOutputFeatureNames:(id)a5 error:(id *)a6;
+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;

@end
