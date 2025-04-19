@class NSObject;
@protocol OS_dispatch_queue;

@interface CSOnDeviceCompilationHandler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedHandler;

- (id)init;
- (void).cxx_destruct;
- (void)compileAndUpdateDeviceCachesWithAsset:(id)a0 assetType:(unsigned long long)a1 endpointId:(id)a2 errOut:(id *)a3;
- (id)_compileModelAndAddToCacheWithConfigFiles:(id)a0 compileDirectoryPath:(id)a1 locale:(id)a2 assetVersion:(id)a3 hashToUse:(id)a4 modelType:(long long)a5 compilationFramework:(long long)a6;
- (id)_compileModelWithModelListInAsset:(id)a0 modelType:(id)a1 compileDirectoryPath:(id)a2 locale:(id)a3 compilationFramework:(long long)a4;
- (void)compileAndUpdateDeviceCachesWithAsset:(id)a0 assetType:(unsigned long long)a1 modelType:(id)a2 deviceId:(id)a3 currentLocale:(id)a4 compileDirectory:(id)a5 errOut:(id *)a6;
- (void)compileUsingConfig:(id)a0 locale:(id)a1 compileDirectory:(id)a2 modelType:(long long)a3 errOut:(id *)a4;

@end
