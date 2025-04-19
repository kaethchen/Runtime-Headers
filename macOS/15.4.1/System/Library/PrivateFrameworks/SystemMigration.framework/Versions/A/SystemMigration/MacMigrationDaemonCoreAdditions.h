@class NSXPCListener;

@interface MacMigrationDaemonCoreAdditions : NSObject <MacMigrationDaemonAdditionsProtocol>

@property (retain) NSXPCListener *selectSourceListener;
@property (retain) NSXPCListener *customizeListener;
@property (retain) NSXPCListener *progressListener;
@property (retain) NSXPCListener *debugListener;
@property (retain) NSXPCListener *odUtilsListener;
@property (retain) NSXPCListener *pairingListener;

- (void).cxx_destruct;
- (void)updateServiceStateAfterRemoval:(id)a0;
- (void)client:(id *)a0 andInterface:(id *)a1 requiresRemoteInterface:(BOOL *)a2 forListener:(id)a3 andConnection:(id)a4;
- (void)createListeners:(id)a0;
- (void)registerAdditions:(id)a0;
- (void)resumeListeners:(id)a0;

@end
