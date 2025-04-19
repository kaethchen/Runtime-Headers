@class NSString, NSXPCConnection;

@interface BTClient : NSObject <BluetoothXPCDaemonProtocol, BluetoothXPCClientProtocol, NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)getConnection;
- (void)registeredWithDaemonAndContinuingSession:(BOOL)a0;

@end
