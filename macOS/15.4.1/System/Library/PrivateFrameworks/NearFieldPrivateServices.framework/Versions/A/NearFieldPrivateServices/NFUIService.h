@interface NFUIService : NFPrivateService {
    id /* block */ _uiInvalidationHandler;
}

@property (retain) id debugContext;

- (void).cxx_destruct;
- (id)serviceName;
- (BOOL)canRun;
- (void)coreNFCUIActivateWithCompletion:(id /* block */)a0;
- (void)coreNFCUIInvalidate;
- (void)coreNFCUISetInvalidationHandler:(id /* block */)a0;
- (void)coreNFCUISetMode:(long long)a0;
- (void)coreNFCUISetScanText:(id)a0;
- (void)coreNFCUITagScannedCount:(long long)a0;
- (void)launchBundleWithIdentifier:(id)a0 launchReason:(unsigned long long)a1 launchDomain:(long long)a2;
- (oneway void)serviceNotificationReceived:(id)a0 error:(id)a1;

@end
