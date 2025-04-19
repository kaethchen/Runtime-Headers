@class NSString, CSLanguageCodeUpdateMonitor, CSUAFDownloadMonitor, NSMutableDictionary, CSOnDeviceCompilationHandler, CSAsset, CSVoiceTriggerAssetDownloadMonitor, CSAssetManager, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAssetHandlerMac : CSVoiceTriggerAssetHandler <CSVoiceTriggerAssetDownloadMonitorDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate, CSUAFDownloadMonitorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) CSAsset *cachedAsset;
@property (retain) CSAsset *cachedAssistantAsset;
@property (retain) NSMutableDictionary *cachedEndpointAssets;
@property (retain, nonatomic) CSVoiceTriggerAssetDownloadMonitor *voiceTriggerAssetDownloadMonitor;
@property (retain, nonatomic) CSLanguageCodeUpdateMonitor *languageCodeUpdateMonitor;
@property (retain, nonatomic) CSUAFDownloadMonitor *uafAssetDownloadMonitor;
@property (retain, nonatomic) CSAssetManager *assetManager;
@property (retain, nonatomic) CSOnDeviceCompilationHandler *onDeviceCompilationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)a0 didInstallNewAsset:(BOOL)a1;
- (void)CSVoiceTriggerEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;
- (void)_checkNewAssetAvailability;
- (void)_checkNewAssetAvailabilityForEndpoint;
- (void)_getVoiceTriggerAssetFromAssetManager:(id /* block */)a0;
- (void)_getVoiceTriggerAssetFromAssetManagerWithLocale:(id)a0 bundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)_getVoiceTriggerAssetFromAssetManagerWithLocale:(id)a0 completion:(id /* block */)a1;
- (void)_handleEndpointVoiceTriggerAsset:(id)a0 completion:(id /* block */)a1;
- (void)_handleVoiceTriggerAssetWithCompletion:(id /* block */)a0;
- (void)assetDownloadMonitorDelegate:(id)a0 assetType:(unsigned long long)a1;
- (void)getVoiceTriggerAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (id)initWithDisableOnDeviceCompilation:(BOOL)a0;
- (id)initWithVoiceTriggerAssetDownloadMonitor:(id)a0 languageCodeUpdateMonitor:(id)a1 uafAssetDownloadMonitor:(id)a2 assetManager:(id)a3 uafAssetManager:(id)a4 disableOnDeviceCompilation:(BOOL)a5;
- (void)triggerAssetRefresh;

@end
