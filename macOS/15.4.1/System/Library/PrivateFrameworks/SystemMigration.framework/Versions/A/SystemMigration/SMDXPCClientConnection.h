@class NSXPCConnection;

@interface SMDXPCClientConnection : NSObject <SystemMigrationDaemonProtocol>

@property (weak) NSXPCConnection *xpcConnection;
@property unsigned long long requestedScannerState;
@property BOOL invalidated;

+ (id)daemonProtocolInterface;
+ (id)daemonProtocolInterfaceInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)start;
- (void)allGroupsForSystem:(id)a0 reply:(id /* block */)a1;
- (void)allUsersForSystem:(id)a0 reply:(id /* block */)a1;
- (void)migrationServerTypeForSystem:(id)a0 reply:(id /* block */)a1;
- (void)migrationServerVersionForSystem:(id)a0 reply:(id /* block */)a1;
- (void)requestScannerState:(unsigned long long)a0;
- (id)scannerStateToEnglish:(unsigned long long)a0;
- (void)submitMigrationRequest:(id)a0;
- (void)validateFDEPassword:(id)a0 forSystem:(id)a1 reply:(id /* block */)a2;
- (void)validatePassword:(id)a0 forUser:(id)a1 onSystem:(id)a2 reply:(id /* block */)a3;
- (id)xpcDictFromGroup:(id)a0;
- (id)xpcDictFromUser:(id)a0;

@end
