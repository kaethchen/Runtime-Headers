@class MLFeatureDescription, NSArray, NSString, NSURL, NSDictionary, NSOrderedSet, MLLayerPath;

@interface MLModelDescription : NSObject <NSSecureCoding> {
    NSArray *_functionDescriptions;
    NSString *_defaultFunctionName;
    NSString *_functionName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *classLabels;
@property (readonly, copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSURL *modelURL;
@property (nonatomic) BOOL isUpdatable;
@property (retain, nonatomic) NSDictionary *trainingInputDescriptionsByName;
@property (retain, nonatomic) NSDictionary *parameterDescriptionsByKey;
@property (retain, nonatomic) MLLayerPath *modelPath;
@property (readonly, copy, nonatomic) MLFeatureDescription *predictedValueFeatureDescription;
@property (readonly) MLFeatureDescription *predictedClassFeatureDescription;
@property (readonly) MLFeatureDescription *classProbabilityFeatureDescription;
@property (readonly) NSOrderedSet *inputFeatureNames;
@property (readonly) NSOrderedSet *outputFeatureNames;
@property (readonly) NSOrderedSet *stateFeatureNames;
@property (readonly, nonatomic) NSDictionary *inputDescriptionsByName;
@property (readonly, nonatomic) NSDictionary *outputDescriptionsByName;
@property (readonly, nonatomic) NSDictionary *stateDescriptionsByName;
@property (readonly, copy, nonatomic) NSString *predictedFeatureName;
@property (readonly, copy, nonatomic) NSString *predictedProbabilitiesName;
@property (readonly, nonatomic) NSDictionary *metadata;

+ (id)metadataWithFormat:(void *)a0;
+ (id)metadataWithSpecification:(void *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugQuickLookObject;
- (id)defaultFunctionName;
- (id)functionDescriptions;
- (BOOL)hasEnumeratedShapeInputs;
- (BOOL)hasRangeShapeInputs;
- (id)initFromModelDescriptionSpecification:(void *)a0;
- (id)initFromRawCompiledModelArchive:(struct _MLModelInputArchiver { } *)a0 error:(id *)a1;
- (id)initFromRawModelDescriptionSpecification:(void *)a0;
- (id)initFromRawModelSpecification:(void *)a0;
- (id)initFromSingleFunctionCompiledModelArchive:(struct _MLModelInputArchiver { } *)a0 error:(id *)a1;
- (id)initFromSingleFunctionModelDescriptionSpecification:(void *)a0;
- (id)initFromSingleFunctionModelSpecification:(void *)a0;
- (id)initWithInputDescriptions:(id)a0 outputDescriptions:(id)a1 predictedFeatureName:(id)a2 predictedProbabilitiesName:(id)a3 functionDescriptions:(id)a4 isUpdatable:(BOOL)a5 trainingInputDescriptions:(id)a6 parameterDescriptions:(id)a7 orderedInputFeatureNames:(id)a8 orderedOutputFeatureNames:(id)a9 metadata:(id)a10 defaultFunctionName:(id)a11 functionName:(id)a12 classLabels:(id)a13 modelURL:(id)a14 modelPath:(id)a15;
- (id)initWithInputDescriptions:(id)a0 outputDescriptions:(id)a1 predictedFeatureName:(id)a2 predictedProbabilitiesName:(id)a3 metadata:(id)a4;
- (id)initWithInputDescriptions:(id)a0 outputDescriptions:(id)a1 predictedFeatureName:(id)a2 predictedProbabilitiesName:(id)a3 trainingInputDescriptions:(id)a4 metadata:(id)a5;
- (id)initWithInputDescriptions:(id)a0 outputDescriptions:(id)a1 predictedFeatureName:(id)a2 predictedProbabilitiesName:(id)a3 trainingInputDescriptions:(id)a4 orderedInputFeatureNames:(id)a5 orderedOutputFeatureNames:(id)a6 metadata:(id)a7;
- (id)initWithInputDescriptions:(id)a0 outputDescriptions:(id)a1 stateDescriptions:(id)a2 predictedFeatureName:(id)a3 predictedProbabilitiesName:(id)a4 functionDescriptions:(id)a5 isUpdatable:(BOOL)a6 trainingInputDescriptions:(id)a7 parameterDescriptions:(id)a8 orderedInputFeatureNames:(id)a9 orderedOutputFeatureNames:(id)a10 orderedStateFeatureNames:(id)a11 metadata:(id)a12 defaultFunctionName:(id)a13 functionName:(id)a14 classLabels:(id)a15 modelURL:(id)a16 modelPath:(id)a17;
- (id)initWithInputDescriptions:(id)a0 outputDescriptions:(id)a1 stateDescriptions:(id)a2 predictedFeatureName:(id)a3 predictedProbabilitiesName:(id)a4 functionName:(id)a5;
- (id)initWithModelDescriptionSpecification:(void *)a0 error:(id *)a1;
- (id)initWithModelSpecification:(void *)a0 error:(id *)a1;
- (BOOL)isEqualToDescription:(id)a0;
- (id)modelDescriptionBySettingMetadata:(id)a0;
- (BOOL)validateAsClassifierDescriptionAndReturnError:(id *)a0;
- (BOOL)validateAsRegressorDescriptionAndReturnError:(id *)a0;
- (BOOL)verifyInput:(id)a0 error:(id *)a1;

@end
