@class WBSCyclerServiceProxy;

@interface WBSSafariCyclerConfigurationTool : NSObject {
    WBSCyclerServiceProxy *_cyclerProxy;
}

- (id)init;
- (void)run;
- (void).cxx_destruct;
- (void)_exitWithError:(id)a0;
- (id)_errorWithCode:(long long)a0;
- (id)_commandWithName:(id)a0;
- (void)_configureDevice:(id)a0;
- (id)_descriptionForErrorCode:(long long)a0;
- (void)_fetchLastError:(id)a0;
- (void)_fetchLogs:(id)a0;
- (void)_fetchStatus:(id)a0;
- (void)_printUsage;
- (void)_resumeCycler:(id)a0;
- (void)_runTest:(id)a0;
- (void)_sendRequestToTest:(id)a0;
- (void)_setConfigurationOption:(id)a0;
- (void)_startCycler:(id)a0;
- (void)_stopCycler:(id)a0;
- (id)_supportedCommands;
- (void)_waitForCyclerToFinish:(id)a0;

@end
