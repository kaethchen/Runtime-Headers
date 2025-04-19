@class NSArray, NSXPCConnection, NSHashTable;

@interface BTMManager : NSObject {
    long long _mode;
    NSHashTable *_lists;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _listsLock;
}

@property (class, readonly) BTMManager *shared;
@property (class, readonly) BTMManager *sharedSFLManager;

@property (readonly) NSXPCConnection *connection;
@property (readonly) NSArray *UIDs;

- (void).cxx_destruct;
- (id)initWithMode:(long long)a0;
- (id)addSFLItemWithURL:(id)a0 type:(long long)a1 global:(BOOL)a2 managed:(BOOL)a3 error:(id *)a4;
- (id)fetchSFLItemsMatching:(long long)a0 error:(id *)a1;
- (void)handleUserDataDidChangeNotification:(id)a0;
- (BOOL)removeSFLItem:(id)a0 error:(id *)a1;
- (BOOL)updateSFLItem:(id)a0 error:(id *)a1;
- (long long)registerItem:(id *)a0 withAuditToken:(struct { unsigned int x0[8]; } *)a1 type:(long long)a2 relativeURL:(id)a3 configuration:(id)a4 uid:(unsigned int)a5;
- (void)_canLaunchItemWithAppURL:(id)a0 type:(long long)a1 relativeURL:(id)a2 configuration:(id)a3 uid:(unsigned int)a4 canLaunch:(BOOL *)a5 error:(id *)a6;
- (id)_getItemsMatching:(long long)a0 uid:(unsigned int)a1 error:(id *)a2;
- (BOOL)addItem:(id)a0 uid:(unsigned int)a1 error:(id *)a2;
- (id)addUserItemForURL:(id)a0 error:(id *)a1;
- (id)addUserItemForURL:(id)a0 uid:(unsigned int)a1 error:(id *)a2;
- (BOOL)canLaunchItemWithAppURL:(id)a0 type:(long long)a1 relativeURL:(id)a2 configuration:(id)a3;
- (id)dumpDatabaseWithAuthorization:(id)a0 error:(id *)a1;
- (BOOL)eraseDatabaseWithAuthorization:(id)a0 error:(id *)a1;
- (id)fetchItemWithAppURL:(id)a0 type:(long long)a1 relativeURL:(id)a2 configuration:(id)a3 uid:(unsigned int)a4;
- (id)fetchItemWithUUID:(id)a0 uid:(unsigned int)a1 error:(id *)a2;
- (BOOL)getAlwaysPostNotifications:(BOOL *)a0;
- (BOOL)getEffectiveDisposition:(long long *)a0 andLWCR:(id *)a1 forAppURL:(id)a2 type:(long long)a3 relativeURL:(id)a4 configuration:(id)a5 uid:(unsigned int)a6;
- (BOOL)getEffectiveDisposition:(long long *)a0 andLWCR:(id *)a1 withAuditToken:(struct { unsigned int x0[8]; } *)a2 type:(long long)a3 relativeURL:(id)a4 configuration:(id)a5 uid:(unsigned int)a6;
- (BOOL)getItemDisposition:(long long *)a0 withAppURL:(id)a1 type:(long long)a2 relativeURL:(id)a3 configuration:(id)a4 uid:(unsigned int)a5;
- (id)getItemWithIdentifier:(id)a0 uid:(unsigned int)a1 error:(id *)a2;
- (id)getItemsMatching:(long long)a0 error:(id *)a1;
- (id)getItemsMatching:(long long)a0 uid:(unsigned int)a1 error:(id *)a2;
- (void)handleNotificationResponseWithIdentifier:(id)a0 action:(id)a1;
- (BOOL)importSFLLoginItemFromURL:(id)a0 uid:(unsigned int)a1 deleteWhenDone:(BOOL)a2;
- (BOOL)importSFLLoginItemsAndDeleteWhenDone:(BOOL)a0;
- (id)invalidateLaunchItemWithBundleURL:(id)a0 type:(long long)a1 itemURL:(id)a2 configuration:(id)a3 uid:(unsigned int)a4;
- (void)launchdDidScanPath:(id)a0;
- (void)launchdWillScanPath:(id)a0;
- (id)mdmPayloadForIdentifier:(id)a0;
- (void)noteLogoutForUID:(unsigned int)a0;
- (void)openLoginItemsWithCompletion:(id /* block */)a0;
- (void)refreshManagedItems;
- (long long)registerItem:(id *)a0 withBundleURL:(id)a1 type:(long long)a2 relativeURL:(id)a3 configuration:(id)a4 uid:(unsigned int)a5;
- (BOOL)registerLaunchItemWithAuditToken:(struct { unsigned int x0[8]; } *)a0 type:(long long)a1 relativeURL:(id)a2 configuration:(id)a3;
- (BOOL)registerLaunchItemWithAuditToken:(struct { unsigned int x0[8]; } *)a0 type:(long long)a1 relativeURL:(id)a2 configuration:(id)a3 uid:(unsigned int)a4;
- (BOOL)registerLaunchItemWithBundleURL:(id)a0 type:(long long)a1 relativeURL:(id)a2 configuration:(id)a3 uid:(unsigned int)a4;
- (BOOL)removeItem:(id)a0 uid:(unsigned int)a1 error:(id *)a2;
- (BOOL)removeManagedJobAtPath:(id)a0 error:(id *)a1;
- (BOOL)removeManagedJobWithLabel:(id)a0 error:(id *)a1;
- (BOOL)saveUserSettings:(id)a0;
- (BOOL)scheduleGarbageCollection;
- (BOOL)setAlwaysPostNotifications:(BOOL)a0;
- (void)setMDMPayload:(id)a0 identifier:(id)a1;
- (void)setMDMPayload:(id)a0 identifier:(id)a1 updateImmediately:(BOOL)a2;
- (BOOL)submitManagedJobAtPath:(id)a0 error:(id *)a1;
- (long long)unregisterItemWithAuditToken:(struct { unsigned int x0[8]; } *)a0 type:(long long)a1 relativeURL:(id)a2 uid:(unsigned int)a3;
- (long long)unregisterItemWithBundleURL:(id)a0 type:(long long)a1 relativeURL:(id)a2 uid:(unsigned int)a3;
- (BOOL)unregisterLaunchItemWithAuditToken:(struct { unsigned int x0[8]; } *)a0 type:(long long)a1 relativeURL:(id)a2;
- (BOOL)unregisterLaunchItemWithAuditToken:(struct { unsigned int x0[8]; } *)a0 type:(long long)a1 relativeURL:(id)a2 uid:(unsigned int)a3;
- (BOOL)unregisterLaunchItemWithBundleURL:(id)a0 type:(long long)a1 relativeURL:(id)a2 uid:(unsigned int)a3;
- (BOOL)updateItem:(id)a0 uid:(unsigned int)a1 error:(id *)a2;
- (BOOL)updateItems:(id)a0 uid:(unsigned int)a1 error:(id *)a2;
- (id)userIdentifiersAndUIDs;
- (id)userSettingsForUID:(unsigned int)a0;

@end
