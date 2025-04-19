@interface MLLoader : NSObject

+ (id)_conformConfiguration:(id)a0 usingModelArchive:(void *)a1;
+ (BOOL)_createDecryptSessionForModelAtURL:(id)a0 configuration:(id)a1 decryptSession:(id *)a2 loaderEvent:(id)a3 error:(id *)a4;
+ (id)_findCodedObjectURLInModelArchive:(void *)a0;
+ (id)_loadModelAssetDescriptionFromArchive:(void *)a0 configuration:(id)a1 modelVersion:(id)a2 compilerVersion:(id)a3 loadingClasses:(id)a4 error:(id *)a5;
+ (id)_loadModelFromArchive:(void *)a0 configuration:(id)a1 loaderEvent:(id)a2 useUpdatableModelLoaders:(BOOL)a3 error:(id *)a4;
+ (id)_loadModelFromArchive:(void *)a0 configuration:(id)a1 modelVersion:(id)a2 compilerVersion:(id)a3 loaderEvent:(id)a4 useUpdatableModelLoaders:(BOOL)a5 loadingClasses:(id)a6 error:(id *)a7;
+ (id)_loadModelFromAssetAtURL:(id)a0 configuration:(id)a1 loaderEvent:(id)a2 error:(id *)a3;
+ (id)_loadModelWithClass:(Class)a0 fromArchive:(void *)a1 modelVersionInfo:(id)a2 compilerVersionInfo:(id)a3 configuration:(id)a4 error:(id *)a5;
+ (id)_loadUpdatableModelWithClass:(Class)a0 fromArchive:(void *)a1 modelVersionInfo:(id)a2 compilerVersionInfo:(id)a3 configuration:(id)a4 error:(id *)a5;
+ (id)_loadWithModelLoaderFromArchive:(void *)a0 configuration:(id)a1 loaderEvent:(id)a2 useUpdatableModelLoaders:(BOOL)a3 error:(id *)a4;
+ (void)_populateLoaderAndPredictionEvent:(id)a0 model:(id)a1 configuration:(id)a2 loadTimeDuration:(unsigned long long)a3;
+ (id)_unarchiveCodedModelObjectAtURL:(id)a0 error:(id *)a1;
+ (BOOL)checkAssetPath:(id)a0 error:(id *)a1;
+ (id)loadModelAssetDescriptionFromArchive:(void *)a0 error:(id *)a1;
+ (id)loadModelAssetDescriptionFromAssetAtURL:(id)a0 error:(id *)a1;
+ (id)loadModelFromArchive:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (id)loadModelFromArchive:(void *)a0 error:(id *)a1;
+ (id)loadModelFromAssetAtURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)loadModelFromAssetAtURL:(id)a0 error:(id *)a1;
+ (id)loadUpdatableModelFromArchive:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (id)loadUpdatableModelFromAssetAtURL:(id)a0 configuration:(id)a1 error:(id *)a2;

@end
