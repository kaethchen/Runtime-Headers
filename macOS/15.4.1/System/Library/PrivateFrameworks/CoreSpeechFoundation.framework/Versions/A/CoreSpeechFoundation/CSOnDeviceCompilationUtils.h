@interface CSOnDeviceCompilationUtils : NSObject

+ (id)getCachedIrFromConfigPath:(id)a0 modelTye:(long long)a1 asset:(id)a2;
+ (id)getCachedIrFromMilFilePath:(id)a0 modelTye:(long long)a1 asset:(id)a2;
+ (id)getCachedIrsFromCSAsset:(id)a0 cachedIrDir:(id)a1;
+ (id)getIrNameFromModelNameForCompile:(id)a0 locale:(id)a1 assetVersion:(id)a2 hashToUse:(id)a3;
+ (id)_getBaseNamingWithHashToUse:(id)a0 milName:(id)a1 configVersion:(id)a2;
+ (id)_getCachedIrsFromConfigFile:(id)a0 modelType:(long long)a1 CSAsset:(id)a2 cachedIrDir:(id)a3;
+ (long long)getBackendTypeFromModelFile:(id)a0;
+ (id)getCachedIrFromMilFilePath:(id)a0 modelTye:(long long)a1 asset:(id)a2 cachedIrHomePath:(id)a3;
+ (id)getMilConfigFromMilFilePath:(id)a0;
+ (id)getModelCompiledDirWithModelType:(long long)a0 basePath:(id)a1;
+ (id)getModelConfigsWithAsset:(id)a0 modelType:(long long)a1;
+ (id)getModelNameFromMilFilePath:(id)a0;
+ (BOOL)isBnnsIrNameForCurrentBuild:(id)a0;
+ (id)readMilFilePathFromConfig:(id)a0 modelType:(long long)a1;
+ (BOOL)shouldCompileForAssetType:(unsigned long long)a0;
+ (id)sortCachedIrsByLastAccessTimeStamp:(id)a0;
+ (BOOL)validateSecondPassCheckerCompilation:(id)a0 error:(id *)a1;

@end
