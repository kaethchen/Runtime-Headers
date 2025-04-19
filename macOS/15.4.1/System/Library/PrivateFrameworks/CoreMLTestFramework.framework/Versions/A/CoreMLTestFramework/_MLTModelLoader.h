@interface _MLTModelLoader : NSObject

+ (int)compileModelAtPath:(id)a0 compiledPath:(id)a1 encryptCompiledModel:(BOOL)a2 sinfURL:(id)a3 addMLProgram:(BOOL)a4 error:(id *)a5;
+ (id)compiledModelURLForModelPath:(id)a0 encryptCompiledModel:(BOOL)a1 sinfURL:(id)a2 addMLProgram:(BOOL)a3 error:(id *)a4;
+ (id)compilerOptionsWithEncryptModel:(BOOL)a0 sinfURL:(id)a1 error:(id *)a2;
+ (id)createInMemoryModel:(id)a0 blobFileResolutionOption:(long long)a1 withModelConfiguration:(id)a2 error:(id *)a3;
+ (int)encryptCompiledModelAtPath:(id)a0 sinfURL:(id)a1 error:(id *)a2;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 allowFallback:(BOOL)a2 addMLProgram:(BOOL)a3 assertModelIsMLProgram:(BOOL)a4 inMemoryModel:(BOOL)a5 inMemoryModelBlobFileResolutionOption:(long long)a6 error:(id *)a7;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 allowFallback:(BOOL)a2 addMLProgram:(BOOL)a3 assertModelIsMLProgram:(BOOL)a4 inMemoryModel:(BOOL)a5 inMemoryModelBlobFileResolutionOption:(long long)a6 experimentalMLE5EngineUsage:(long long)a7 error:(id *)a8;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 allowFallback:(BOOL)a2 addMLProgram:(BOOL)a3 assertModelIsMLProgram:(BOOL)a4 inMemoryModel:(BOOL)a5 inMemoryModelBlobFileResolutionOption:(long long)a6 experimentalMLE5EngineUsage:(long long)a7 experimentalMLE5BNNSGraphBackendUsage:(long long)a8 experimentalMLE5BNNSGraphBackendUsageMultiSegment:(long long)a9 error:(id *)a10;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 computeDevice:(id)a2 functionName:(id)a3 useLowPrecisionAccumulationOnGPU:(BOOL)a4 allowFallback:(BOOL)a5 enableProfiling:(BOOL)a6 encryptCompiledModel:(BOOL)a7 sinfURL:(id)a8 useAsyncLoad:(BOOL)a9 usePreloadedKey:(BOOL)a10 addMLProgram:(BOOL)a11 assertModelIsMLProgram:(BOOL)a12 inMemoryModel:(BOOL)a13 inMemoryModelBlobFileResolutionOption:(long long)a14 experimentalMLE5EngineUsage:(long long)a15 experimentalMLE5BNNSGraphBackendUsage:(long long)a16 experimentalMLE5BNNSGraphBackendUsageMultiSegment:(long long)a17 e5rtMutableMILWeightURLs:(id)a18 e5rtDynamicCallableFunctions:(id)a19 serializesMILTextForDebugging:(BOOL)a20 specializationStrategy:(long long)a21 specializationUsesMPSGraphExecutable:(BOOL)a22 e5rtCustomANECompilerOptions:(id)a23 error:(id *)a24;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 computeDevice:(id)a2 functionName:(id)a3 useLowPrecisionAccumulationOnGPU:(BOOL)a4 allowFallback:(BOOL)a5 enableProfiling:(BOOL)a6 encryptCompiledModel:(BOOL)a7 sinfURL:(id)a8 useAsyncLoad:(BOOL)a9 usePreloadedKey:(BOOL)a10 addMLProgram:(BOOL)a11 assertModelIsMLProgram:(BOOL)a12 inMemoryModel:(BOOL)a13 inMemoryModelBlobFileResolutionOption:(long long)a14 experimentalMLE5EngineUsage:(long long)a15 experimentalMLE5BNNSGraphBackendUsage:(long long)a16 experimentalMLE5BNNSGraphBackendUsageMultiSegment:(long long)a17 e5rtMutableMILWeightURLs:(id)a18 e5rtDynamicCallableFunctions:(id)a19 serializesMILTextForDebugging:(BOOL)a20 specializationStrategy:(long long)a21 specializationUsesMPSGraphExecutable:(BOOL)a22 e5rtCustomANECompilerOptions:(id)a23 experimentalMLProgramEncryptedCacheUsage:(long long)a24 error:(id *)a25;
+ (id)modelAtPath:(id)a0 computeUnit:(long long)a1 computeDevice:(id)a2 useLowPrecisionAccumulationOnGPU:(BOOL)a3 allowFallback:(BOOL)a4 enableProfiling:(BOOL)a5 encryptCompiledModel:(BOOL)a6 sinfURL:(id)a7 useAsyncLoad:(BOOL)a8 usePreloadedKey:(BOOL)a9 addMLProgram:(BOOL)a10 assertModelIsMLProgram:(BOOL)a11 inMemoryModel:(BOOL)a12 inMemoryModelBlobFileResolutionOption:(long long)a13 experimentalMLE5EngineUsage:(long long)a14 error:(id *)a15;
+ (BOOL)modelIsMILAndNNv1FallbackDetected:(id)a0 modelURL:(id)a1;
+ (unsigned long long)modelSizeAtPath:(id)a0;
+ (BOOL)removeTemporaryModelForModelAtPath:(id)a0 error:(id *)a1;
+ (id)temporaryCompiledURLForModelPath:(id)a0;
+ (id)temporaryCompiledURLForModelURL:(id)a0;
+ (id)updateableModelAtPath:(id)a0 computeUnit:(long long)a1 error:(id *)a2;
+ (void)validateComputeUnitSelectionForCompiledModel:(id)a0 withModelConfiguration:(id)a1 withComputeUnit:(long long)a2;

@end
