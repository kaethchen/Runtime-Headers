@class NSArray, MLCompilerNeuralNetworkOutput, NSURL, MLVersionInfo, MLModelAssetDescription;

@interface MLProgramE5Container : NSObject

@property (readonly, copy, nonatomic) NSArray *functionInfoArray;
@property (readonly, copy, nonatomic) MLModelAssetDescription *modelAssetDescription;
@property (readonly, nonatomic) MLCompilerNeuralNetworkOutput *compilerOutput;
@property (readonly, copy, nonatomic) NSURL *URLOfMILText;
@property (readonly, nonatomic) MLVersionInfo *compilerVersionInfo;
@property (readonly, nonatomic) MLVersionInfo *modelVersionInfo;

+ (void)_getDefaultFunctionName:(id *)a0 modelDescription:(id *)a1 fromModelAssetDescription:(id)a2;
+ (BOOL)deduceFunctionNameToCompute:(id *)a0 modelDescription:(id *)a1 fromConfiguration:(id)a2 modelAssetDescription:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (id)classScoreVectorNameOfFunctionNamed:(id)a0;
- (id)findPrecompiledE5BundleAndReturnError:(id *)a0;
- (id)initWithCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 error:(id *)a3;
- (id)optionalInputDefaultValuesForFunctionNamed:(id)a0;

@end
