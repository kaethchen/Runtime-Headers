@class NSString, NSDictionary, NSArray, MLModelDescription;

@interface MLModelAssetDescription : NSObject

@property (readonly, copy, nonatomic) NSDictionary *modelDescriptionsByFunctionName;
@property (readonly, copy, nonatomic) NSString *defaultFunctionName;
@property (readonly, nonatomic) BOOL usesMultiFunctionSyntax;
@property (readonly, copy, nonatomic) NSArray *functionNames;
@property (readonly, copy, nonatomic) MLModelDescription *defaultModelDescription;

- (id)description;
- (void).cxx_destruct;
- (id)assetDescriptionBySettingClassLabels:(id)a0;
- (id)assetDescriptionBySettingClassLabels:(id)a0 functionName:(id)a1;
- (id)initFromModelDescriptionSpecification:(struct _MLModelDescriptionSpecification { } *)a0;
- (id)initFromModelSpecification:(struct _MLModelSpecification { } *)a0;
- (id)initWithCompiledModelArchive:(struct _MLModelInputArchiver { } *)a0 error:(id *)a1;
- (id)initWithModelDescription:(id)a0;
- (id)initWithModelDescriptionsByFunctionName:(id)a0 functionNames:(id)a1 defaultFunctionName:(id)a2;
- (id)initWithRawModelDescription:(id)a0;
- (id)modelDescriptionOfFunctionNamed:(id)a0;

@end
