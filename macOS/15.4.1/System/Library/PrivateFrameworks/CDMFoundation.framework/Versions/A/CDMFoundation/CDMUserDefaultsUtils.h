@interface CDMUserDefaultsUtils : NSObject

+ (void)initialize;
+ (id)getDefaultCustomAssetsRootPath;
+ (id)getDefaultCustomLogPath;
+ (BOOL)isAttachMDMRSpantoStringPayloadsEnabled;
+ (BOOL)isInsertEmbeddingOutputsToFeatureStoreEnabled;
+ (BOOL)isPrintUSOInSpanEnabled;
+ (BOOL)isSSURequestTimeoutDisabled;
+ (BOOL)isSkipNodeEnabled;
+ (BOOL)isWriteDebugToDiskEnabled;
+ (BOOL)prewarmModels;
+ (unsigned int)readAsrAlternativeCount:(id)a0;
+ (id)readCustomAssetsRootPath;
+ (id)readCustomLogPath;
+ (unsigned int)readGraphRunnerMaxConcurrentCount;
+ (unsigned long long)readNLv4MaxNumParses;
+ (unsigned int)readNonSiriSelfSampleRate;
+ (id)readUaaPNLAppModelPaths;
+ (id)readUaaPNLCoreModelPath;
+ (unsigned long long)readUaaPNLMaxNumParses;
+ (id)readUaaPNLSystemConfigPath;
+ (BOOL)readUserDefaultForKeyBool:(id)a0 andDefaultValue:(BOOL)a1;
+ (id)readUserDefaultForKeyString:(id)a0 andDefaultValue:(id)a1;
+ (id)readUserDefaultLVCOverride;
+ (id)readUserDefaultPscOverride;
+ (id)readUserDefaultSnlcOverride;
+ (unsigned long long)readUserDefaultsValueForKeyUint64:(id)a0 defaultValue:(long long)a1;
+ (unsigned int)readXPCCallbackDefaultTimeout;
+ (BOOL)shouldUseSwiftBasedGraphRunner;
+ (id)userDefaultsCache;

@end
