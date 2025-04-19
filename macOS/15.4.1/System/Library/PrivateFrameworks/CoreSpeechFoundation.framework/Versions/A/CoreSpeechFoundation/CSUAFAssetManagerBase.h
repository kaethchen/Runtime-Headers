@class NSMutableDictionary, CSExclaveAssetManagerProxy, NSObject;
@protocol OS_dispatch_queue;

@interface CSUAFAssetManagerBase : NSObject

@property (readonly, nonatomic) BOOL isExclaveHardware;
@property (readonly, nonatomic) CSExclaveAssetManagerProxy *exclaveManagerProxy;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableDictionary *retryTimers;
@property (readonly, nonatomic) NSMutableDictionary *retryAttemptCount;
@property (readonly, nonatomic) double assetMapRetryTimeInterval;
@property (readonly, nonatomic) unsigned long long maxAssetMapRetryCount;

- (id)init;
- (void).cxx_destruct;
- (void)mapAssetToExclaveKit:(id)a0 completion:(id /* block */)a1;
- (void)retryMappingAssetToExclaveKit:(id)a0 completion:(id /* block */)a1;
- (void)_cancelRetryTimerForAsset:(id)a0;
- (void)_logMapFailTelemetryAndSubmitDiagnosticReportForError:(id)a0 assetSpecifier:(id)a1 assetConfigVersion:(id)a2;
- (void)_logMapOperationLatencyTelemetry:(double)a0 assetSpecifier:(id)a1 assetConfigVersion:(id)a2;
- (void)_mapAssetToExclaveKit:(id)a0 assetName:(id)a1 assetSet:(id)a2 completion:(id /* block */)a3;
- (void)_mapVoiceTriggerAsset:(id)a0 asset:(id)a1 completion:(id /* block */)a2;
- (void)_resetRetryTimerForAsset:(id)a0;
- (void)_retryMappingAssetToExclaveKit:(id)a0 assetName:(id)a1 assetSet:(id)a2 completion:(id /* block */)a3;
- (void)_setAssetMapRetryTimeInterval:(double)a0;
- (void)_setMaxAssetMapRetryCount:(unsigned long long)a0;
- (id)_timerForUUID:(id)a0 eventHandler:(id /* block */)a1;
- (id)initWithForceSetIsExclave:(BOOL)a0 exclaveManagerProxy:(id)a1;
- (void)mapAssetToExclaveKit:(id)a0 assetName:(id)a1 assetSet:(id)a2 completion:(id /* block */)a3;
- (void)retryMappingAssetToExclaveKit:(id)a0 assetName:(id)a1 assetSet:(id)a2 completion:(id /* block */)a3;

@end
