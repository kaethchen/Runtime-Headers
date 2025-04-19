@interface CKDProcessScopedStateManager : NSObject <CKXPCProcessScopedDaemon>

+ (id)sharedManager;

- (void)accountWithID:(id)a0 changedWithChangeType:(long long)a1;
- (void)accountsDidGrantAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)accountsDidRevokeAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)accountsWillDeleteAccount:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(id /* block */)a0;
- (void)dumpAllClientsStatusReportToFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchUsabilityForTestAccountCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (void)globalDeviceIdentifierWithCompletionHandler:(id /* block */)a0;
- (id)initInternal;
- (void)maxInlineMergeableDeltaSizeWithCompletionHandler:(id /* block */)a0;
- (void)updatePushTokens;
- (void)wipeAllCachesAndDie;
- (void)wipeServerConfigurationsAndDie;
- (void)_globalDeviceIdentifierWithEntitlements:(id)a0 completionHandler:(id /* block */)a1;
- (void)_wipePersonaBasedClientCacheForAppRecord:(id)a0;
- (void)kickOffPendingLongLivedOperations;

@end
