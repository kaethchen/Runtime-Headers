@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, IAXPCProtocol;

@interface IAAccountCollector : NSObject {
    NSXPCConnection *_connection;
    id<IAXPCProtocol> _agent;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)cancelSetupForAccount:(id)a0 pluginID:(id)a1;
- (id)aListPluginIDForSettings:(id)a0;
- (void)account:(id)a0 didChangeWithType:(int)a1 oldAccount:(id)a2;
- (void)accountWithUID:(id)a0 reply:(id /* block */)a1;
- (id)accountWithUID_sync:(id)a0;
- (void)accountsWithLoginName:(id)a0 service:(id)a1 provider:(id)a2 attributes:(id)a3 reply:(id /* block */)a4;
- (id)accountsWithLoginName_sync:(id)a0 service:(id)a1 provider:(id)a2 attributes:(id)a3;
- (void)activateAccountUID:(id)a0;
- (void)activateAccountUID:(id)a0 reply:(id /* block */)a1;
- (void)addACAccountProperties:(id)a0 forUID:(id)a1;
- (void)addAccount:(id)a0 reply:(id /* block */)a1;
- (id)addAccount_sync:(id)a0;
- (void)allAccountsWithReply:(id /* block */)a0;
- (void)authenticateAccountUID:(id)a0 credential:(id)a1 reply:(id /* block */)a2;
- (void)cacheAccounts;
- (void)configureAccountUID:(id)a0 pluginID:(id)a1;
- (void)continueSetupInAppForPluginID:(id)a0 settings:(id)a1;
- (void)copyContactsRecordsAndDeleteAccountUID:(id)a0 reply:(id /* block */)a1;
- (void)deactivateAccountUID:(id)a0;
- (id)deleteAccountWithUID_sync:(id)a0;
- (id)descriptionForAccount:(id)a0;
- (void)descriptionForAccount:(id)a0 reply:(id /* block */)a1;
- (void)dumpDataPluginNotificationHistory;
- (id)imageForAccountUID:(id)a0;
- (id)imageForAccountUID:(id)a0 pluginID:(id)a1;
- (id)imageForPluginID:(id)a0;
- (id)parentGoogleAccountForChildAccountWithUID:(id)a0;
- (id)propertiesForPluginID:(id)a0;
- (void)removeAccountWithUID:(id)a0 deleteFromDataSource:(BOOL)a1 reply:(id /* block */)a2;
- (void)removeAccountWithUID:(id)a0 deleteFromPlugin:(BOOL)a1 reply:(id /* block */)a2;
- (void)topLevelAccountsForProvider:(id)a0 reply:(id /* block */)a1;
- (id)topLevelAccounts_sync;
- (void)updateAccountWithUID:(id)a0 withSettings:(id)a1;
- (void)writeDiagnostics;

@end
