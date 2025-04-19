@class CSOnDeviceCompilationHandler;

@interface CSVoiceTriggerAssetHandlerFromFile : CSVoiceTriggerAssetHandler {
    CSOnDeviceCompilationHandler *_onDeviceCompilationHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)getPreinstallVoiceTriggerAssetForCurrentLocale:(id /* block */)a0;
- (void)getVoiceTriggerAssetWithEndpointId:(id)a0 completion:(id /* block */)a1;
- (id)initWithDisableOnDeviceCompilation:(BOOL)a0;
- (void)triggerAssetRefresh;

@end
