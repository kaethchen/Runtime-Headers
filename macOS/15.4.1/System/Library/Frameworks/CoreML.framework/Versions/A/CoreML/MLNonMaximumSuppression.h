@class MLNonMaximumSuppressionParameters, NSString;

@interface MLNonMaximumSuppression : MLModelEngine <MLModelSpecificationLoader>

@property (readonly) MLNonMaximumSuppressionParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;

@end
