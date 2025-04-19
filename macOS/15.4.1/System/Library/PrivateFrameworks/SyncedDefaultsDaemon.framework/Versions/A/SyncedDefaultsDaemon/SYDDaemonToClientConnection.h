@class NSString, NSXPCConnection, NSMutableSet, NSObject, NSNumber;
@protocol OS_dispatch_queue, SYDDaemonToClientConnectionDelegate;

@interface SYDDaemonToClientConnection : NSObject <NSXPCConnectionDelegate, SYDDaemonProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<SYDDaemonToClientConnectionDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSMutableSet *registeredStoreIDs;
@property (retain) NSMutableSet *entitledStoreIDs;
@property (retain) NSMutableSet *notEntitledStoreIDs;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSNumber *ignoreQuotaEntitlementValue;
@property (nonatomic) unsigned long long manualSyncCount;
@property (nonatomic) BOOL didRefreshBundleMap;
@property (readonly, nonatomic) BOOL supportsTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)changeDictionaryWithChangedKeys:(id)a0 reason:(long long)a1 changeToken:(id)a2;
+ (id)changedKeysForStoreIdentifier:(id)a0 sinceChangeTokenIfValid:(id)a1 inCoreDataStore:(id)a2 error:(id *)a3;
+ (id)errorForUnknownStore:(id)a0;
+ (id)errorNotEntitledForStoreConfiguration:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (id)client;
- (void)exit;
- (void)allStoreIdentifiersWithCompletionHandler:(id /* block */)a0;
- (void)changeDictionarySinceChangeToken:(id)a0 inStoreWithConfiguration:(id)a1 reply:(id /* block */)a2;
- (void)changeTokenForStoreWithConfiguration:(id)a0 reply:(id /* block */)a1;
- (void)containerIDWithConfiguration:(id)a0 reply:(id /* block */)a1;
- (void)deleteDataFromDiskForStoreWithConfiguration:(id)a0 reply:(id /* block */)a1;
- (void)dictionaryRepresentationForStoreWithConfiguration:(id)a0 reply:(id /* block */)a1;
- (void)isCloudSyncUserDefaultEnabledForStoreIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)isUIFrameworkLinkedInDaemonWithReply:(id /* block */)a0;
- (void)objectForKey:(id)a0 inStoreWithConfiguration:(id)a1 reply:(id /* block */)a2;
- (void)personaUniqueStringWithReply:(id /* block */)a0;
- (void)postFakeAccountChangeNotificationWithCompletionHandler:(id /* block */)a0;
- (void)postFakeAccountChangeNotificationWithPreviousID:(id)a0 currentID:(id)a1 completionHandler:(id /* block */)a2;
- (void)postFakeSyncManagerChangeNotificationForStoreWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)processAccountChangesWithCompletionHandler:(id /* block */)a0;
- (void)registerForChangeNotificationsForStoreWithConfiguration:(id)a0 reply:(id /* block */)a1;
- (void)removeObjectForKey:(id)a0 inStoreWithConfiguration:(id)a1 reply:(id /* block */)a2;
- (void)removeUnitTestSyncManagersWithReply:(id /* block */)a0;
- (void)saveChangeToken:(id)a0 forStoreWithConfiguration:(id)a1 reply:(id /* block */)a2;
- (void)setCloudSyncUserDefaultEnabled:(BOOL)a0 storeIdentifier:(id)a1;
- (void)setFakeError:(id)a0 forNextCloudKitRequestOfClassName:(id)a1 inStoreWithConfiguration:(id)a2;
- (void)setObject:(id)a0 forKey:(id)a1 inStoreWithConfiguration:(id)a2 reply:(id /* block */)a3;
- (void)synchronizeStoreWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)synchronizeStoresWithIdentifiers:(id)a0 type:(long long)a1 testConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithXPCConnection:(id)a0 delegate:(id)a1;
- (BOOL)_isEntitledForStoreConfiguration:(id)a0;
- (id)changeTokenURLForStoreConfiguration:(id)a0 xpcConnection:(id)a1 error:(id *)a2;
- (void)daemonToClientConnectionDidChangeValues:(id)a0;
- (void)decrementManualSyncCount;
- (void)incrementManualSyncCount;
- (BOOL)isCloudSyncEnablementEntitledForStoreIdentifier:(id)a0;
- (BOOL)isEntitledForStoreConfiguration:(id)a0;
- (BOOL)isKnownStore:(id)a0;
- (BOOL)isPerformingManualSync;
- (void)notifyAccountDidChangeFromAccountID:(id)a0 toAccountID:(id)a1 completionHandler:(id /* block */)a2;
- (void)notifyAccountDidChangeWithCompletionHandler:(id /* block */)a0;
- (BOOL)shouldEnforceQuotaForStoreConfiguration:(id)a0;
- (void)syncManagerDidChangeNotification:(id)a0;
- (id)valueForEntitlement:(id)a0 storeConfiguration:(id)a1;

@end
