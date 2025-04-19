@class NSXPCListener, SMDMigrateFrom_XPCClientConnection;

@interface MMNDaemonAdditions : NSObject <MacMigrationDaemonAdditionsProtocol>

@property (retain) NSXPCListener *migrateFromListener;
@property (retain) NSXPCListener *networkEventsListener;
@property (retain) SMDMigrateFrom_XPCClientConnection *vendedMigrateFrom;

- (void).cxx_destruct;
- (void)updateServiceStateAfterRemoval:(id)a0;
- (void)client:(id *)a0 andInterface:(id *)a1 requiresRemoteInterface:(BOOL *)a2 forListener:(id)a3 andConnection:(id)a4;
- (void)createListeners:(id)a0;
- (void)registerAdditions:(id)a0;
- (void)resumeListeners:(id)a0;

@end
