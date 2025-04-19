@class NSOrderedSet, NSString;

@interface MLDictVectorizer : MLModelEngine <MLModelSpecificationLoader>

@property (readonly, nonatomic) NSOrderedSet *categoryName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoryName:(id)a0 dataTransformerName:(id)a1 inputDescription:(id)a2 outputDescription:(id)a3 orderedInputFeatureNames:(id)a4 orderedOutputFeatureNames:(id)a5 error:(id *)a6;
+ (id)categoryName:(id)a0 inputDescription:(id)a1 outputDescription:(id)a2 orderedInputFeatureNames:(id)a3 orderedOutputFeatureNames:(id)a4 error:(id *)a5;
+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)constructDictionary:(id)a0 error:(id *)a1;
- (id)initWith:(id)a0 dataTransformerName:(id)a1 inputDescription:(id)a2 outputDescription:(id)a3 orderedInputFeatureNames:(id)a4 orderedOutputFeatureNames:(id)a5 configuration:(id)a6 error:(id *)a7;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (unsigned long long)predictionTypeForKTrace;

@end
