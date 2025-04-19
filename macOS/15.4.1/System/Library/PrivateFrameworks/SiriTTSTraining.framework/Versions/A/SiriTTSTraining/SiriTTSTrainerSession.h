@class NSString, NSXPCConnection;

@interface SiriTTSTrainerSession : NSObject <SiriTTSTrainerAgentDelegate> {
    NSString *_appId;
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDeviceSupported;
+ (id /* block */)getInstallingProgressBlockForAsset:(id)a0;
+ (void)setInstallingProgressBlock:(id /* block */)a0 forAsset:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)cancelTask:(id)a0 reply:(id /* block */)a1;
- (void)cleanUpTaskQueue:(id /* block */)a0;
- (id)getAllAvailableLocales;
- (id)getAllAvailableScriptNames:(id)a0;
- (void)getAllTasks:(id /* block */)a0;
- (void)getCurrentAssetVersion:(id)a0 name:(id)a1 reply:(id /* block */)a2;
- (void)getRecordingMetadata:(id)a0 name:(id)a1 reply:(id /* block */)a2;
- (void)getTaskById:(id)a0 completion:(id /* block */)a1;
- (void)installTrainingAsset:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (id)installableTrainingAssetsForLanguage:(id)a0 name:(id)a1 type:(long long)a2;
- (id)installedTrainingAssetsForLanguage:(id)a0 name:(id)a1 type:(long long)a2;
- (oneway void)installingTrainingAsset:(id)a0 progress:(float)a1;
- (void)startRequest:(id)a0 completion:(id /* block */)a1;
- (void)uninstallTrainingAsset:(id)a0;
- (void)uninstallTrainingAsset:(id)a0 completion:(id /* block */)a1;

@end
