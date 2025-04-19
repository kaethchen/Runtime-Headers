@class NSLock;

@interface AOSThreadManager : NSObject {
    NSLock *_proxyLock;
}

+ (void)initialize;
+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)clearCaches;
- (void)AOSKPersistAccountAttributes:(id)a0;
- (void)AOSKPersistEmailAliasURL:(id)a0;
- (BOOL)AOSKPersistFullUsername;
- (void)AOSKPersistMailProperties:(id)a0;
- (void)AOSKUpdateAccountProperties:(id)a0;
- (void)runQuotaUsageThreadWithContext:(id)a0;
- (void)AOSKPersistAccountData:(id)a0;
- (void)AOSKPersistExpirationDate:(id)a0;
- (void)AOSKPersistMailAliases:(id)a0;
- (void)AOSKVerifyQuota:(id)a0;
- (id)_aliasInfoFromJSONData:(id)a0;
- (id)_aliasesFromXMLData:(id)a0;
- (void)runBuddyLoginThreadWithContext:(id)a0;
- (id)_createDictionaryFromAlias:(id)a0;
- (id)_mailPrefsDataFromDict:(id)a0;
- (id)_updateDelegateInfo:(id)a0 usingStoredInfo:(id)a1 forAccount:(struct AOSAccount { } *)a2;
- (id)_updateDerivedInfoUsingOldInfo:(id)a0 andNewInfo:(id)a1 forAccount:(struct AOSAccount { } *)a2;
- (void)runBuddyHelpThreadWithContext:(id)a0;
- (void)runConfigQueryThreadWithContext:(id)a0;
- (void)runDataclassConfigThreadWithContext:(id)a0;
- (void)runDelegateLoginThreadWithContext:(id)a0;
- (void)runDeregisterDeviceThreadWithContext:(id)a0;
- (void)runDeviceListRetrievalThreadWithContext:(id)a0;
- (void)runDocumentsMigrationDevicesThreadWithContext:(id)a0;
- (void)runDocumentsMigrationStatusThreadWithContext:(id)a0;
- (void)runDocumentsMigrationTriggerThreadWithContext:(id)a0;
- (void)runEmailLookupThreadWithContext:(id)a0;
- (void)runInitiateVettingThreadWithContext:(id)a0;
- (void)runPushTokenRetrievalThreadWithContext:(id)a0;
- (void)runRampStateRetrievalThreadWithContext:(id)a0;
- (void)runRegisterDeviceThreadWithContext:(id)a0;
- (void)runStorageAlertThreadWithContext:(id)a0;
- (void)runStorageUsageThreadWithContext:(id)a0;
- (void)runSystemCheckThreadWithContext:(id)a0;

@end
