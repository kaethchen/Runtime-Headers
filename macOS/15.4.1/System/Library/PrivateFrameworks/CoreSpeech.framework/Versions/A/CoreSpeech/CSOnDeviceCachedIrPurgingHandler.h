@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSOnDeviceCachedIrPurgingHandler : NSObject <CSVoiceTriggerAssetHandlerDelegate, CSAttSiriMitigationAssetHandlerDelegate, CSVoiceTriggerEnabledMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)CSVoiceTriggerEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;
- (void)_cleanUpOnDeviceCompilationPath;
- (void)_purgeCachedIrFilesWithAsset:(id)a0;
- (void)cleanUpCachedIrDir;
- (void)mitigationAssetHandler:(id)a0 endpointId:(id)a1 didChangeCachedAsset:(id)a2;
- (void)startRegistration;
- (void)voiceTriggerAssetHandler:(id)a0 endpointId:(id)a1 didChangeCachedAsset:(id)a2;

@end
