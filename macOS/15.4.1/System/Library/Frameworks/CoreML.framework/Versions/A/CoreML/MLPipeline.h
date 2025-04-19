@class NSArray, NSString;

@interface MLPipeline : MLModelEngine <MLSpecificationCompilerResolvingBlobFileReferences, MLSpecificationCompiler, MLPipeline>

@property (retain) NSArray *models;
@property (retain) NSArray *modelNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_compileSpecification:(void *)a0 blobMapping:(id)a1 toArchive:(void *)a2 options:(id)a3 error:(id *)a4;
+ (void)archiveCustomModelNames:(const void *)a0 to:(void *)a1;
+ (BOOL)archivePipelineModelDetailsFrom:(const void *)a0 toArchive:(void *)a1 error:(id *)a2;
+ (void)archivePipelineUpdateParameterForModels:(const void *)a0 to:(void *)a1 updatable:(BOOL)a2;
+ (id)classLabelsForPipelineFromSubModelArray:(id)a0 predictedFeatureName:(id)a1;
+ (id)classLabelsForPipelineFromSubModelDescriptionArray:(id)a0 predictedFeatureName:(id)a1;
+ (id)compileSpecification:(void *)a0 blobMapping:(id)a1 toArchive:(void *)a2 options:(id)a3 error:(id *)a4;
+ (id)compileSpecification:(void *)a0 toArchive:(void *)a1 options:(id)a2 error:(id *)a3;
+ (id)compileWithModelsInPipeline:(const void *)a0 blobMapping:(id)a1 toArchive:(void *)a2 options:(id)a3 updatable:(BOOL)a4 osSizeTracking:(id)a5 error:(id *)a6;
+ (id)compiledVersionForSpecification:(void *)a0 options:(id)a1 error:(id *)a2;
+ (id)extractSubModelNamesFromArchive:(void *)a0 numModels:(unsigned long long)a1;
+ (id)loadModelAssetDescriptionFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;
+ (BOOL)parseModelArchive:(void *)a0 subModelNames:(id *)a1 subModelArchiveNames:(id *)a2 error:(id *)a3;

- (void).cxx_destruct;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void)_submitPredictionRequestToSubmodel:(unsigned long long)a0 input:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)executionSchedule;
- (id)initModelFromMetadataAndArchive:(void *)a0 versionInfo:(id)a1 description:(id)a2 configuration:(id)a3 error:(id *)a4;
- (id)initWithModels:(id)a0 modelNames:(id)a1 description:(id)a2 configuration:(id)a3;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (unsigned long long)predictionTypeForKTrace;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (void)replaceModelAtIndex:(unsigned long long)a0 with:(id)a1;
- (void)submitPredictionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)supportsConcurrentSubmissions;
- (void)updateParameterDescriptionsByKeyBasedOnSubModel;

@end
