@class NSLock, NSXPCConnection;

@interface DCDeviceMetadataDaemonConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *conn;
@property (retain, nonatomic) NSLock *connLock;

- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (int)currentUID;
- (id)remoteObjectProxy:(id /* block */)a0;
- (id)synchronousRemoteObjectProxy:(id /* block */)a0;

@end
