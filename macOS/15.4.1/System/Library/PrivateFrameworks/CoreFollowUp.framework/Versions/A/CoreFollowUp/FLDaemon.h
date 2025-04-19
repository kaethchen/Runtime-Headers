@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface FLDaemon : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint;

+ (id)sharedInstance;
+ (id)daemonWithErrorHandler:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (id)remoteObjectInterface;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (void)invalidateConnection;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;

@end
