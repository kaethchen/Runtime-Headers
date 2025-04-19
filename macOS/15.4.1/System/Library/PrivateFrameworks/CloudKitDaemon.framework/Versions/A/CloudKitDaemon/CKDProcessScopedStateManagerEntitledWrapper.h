@class CKEntitlements;

@interface CKDProcessScopedStateManagerEntitledWrapper : NSObject <CKXPCProcessScopedDaemon>

@property (readonly) CKEntitlements *entitlements;

- (void).cxx_destruct;
- (void)accountWithID:(id)a0 changedWithChangeType:(long long)a1;
- (void)accountsDidGrantAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)accountsDidRevokeAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)accountsWillDeleteAccount:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(id /* block */)a0;
- (void)dumpAllClientsStatusReportToFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchUsabilityForTestAccountCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (void)globalDeviceIdentifierWithCompletionHandler:(id /* block */)a0;
- (void)maxInlineMergeableDeltaSizeWithCompletionHandler:(id /* block */)a0;
- (void)updatePushTokens;
- (void)wipeAllCachesAndDie;
- (void)wipeServerConfigurationsAndDie;
- (id)initWithEntitlements:(id)a0;

@end
