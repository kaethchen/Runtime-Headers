@class NSHashTable, CSUAFAssetManager, CSUAFDownloadMonitor, CSLanguageCodeUpdateMonitor, NSString, NSObject, CSAsset, CSAssetManager, CSOnDeviceCompilationHandler;
@protocol OS_dispatch_queue;

@interface CSAttSiriMitigationAssetHandler : NSObject <CSVoiceTriggerEnabledMonitorDelegate, CSVoiceTriggerAssetHandlerDelegate, CSUAFDownloadMonitorDelegate>

@property (retain) CSAsset *cachedAsset;
@property (retain, nonatomic) CSAssetManager *assetManager;
@property (retain, nonatomic) CSUAFAssetManager *uafAssetManager;
@property (retain, nonatomic) CSUAFDownloadMonitor *uafDownloadMonitor;
@property (retain, nonatomic) CSLanguageCodeUpdateMonitor *languageCodeUpdateMonitor;
@property (nonatomic) BOOL overrideEnabled;
@property (retain, nonatomic) NSString *overridePath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) CSOnDeviceCompilationHandler *onDeviceCompilationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHandler;
+ (id)sharedHandlerDisabledOnDeviceCompilation;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)CSVoiceTriggerEnabledMonitor:(id)a0 didReceiveEnabled:(BOOL)a1;
- (void)_getMitigationAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (void)_getPreinstalledMitigationAssetForCurrentLocale:(id /* block */)a0;
- (void)_receivedNewAssetUpdate:(id)a0;
- (id)_siriLanguageCode;
- (void)assetDownloadMonitorDelegate:(id)a0 assetType:(unsigned long long)a1;
- (void)getMitigationAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (id)getNeuralCombinerConfigFile;
- (id)initWithAssetManager:(id)a0 withUAFAssetManager:(id)a1 withUAFDownloadMonitor:(id)a2 withLanguageCodeUpdateMonitor:(id)a3 withAssetOverrideFlag:(BOOL)a4 withOverrideAssetPath:(id)a5;
- (id)initWithAssetManager:(id)a0 withUAFAssetManager:(id)a1 withUAFDownloadMonitor:(id)a2 withLanguageCodeUpdateMonitor:(id)a3 withAssetOverrideFlag:(BOOL)a4 withOverrideAssetPath:(id)a5 disableOnDeviceCompilation:(BOOL)a6;
- (id)initWithDisableOnDeviceCompilation;
- (void)notifyObservers:(id)a0 endpointId:(id)a1;
- (void)setCachedAssetWithOverride:(id)a0;
- (void)triggerAssetRefresh;
- (void)voiceTriggerAssetHandler:(id)a0 endpointId:(id)a1 didChangeCachedAsset:(id)a2;

@end
