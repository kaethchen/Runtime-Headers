@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface CDPDaemonConnection : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (id)daemon;
- (id)daemonWithErrorHandler:(id /* block */)a0;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)a0;

@end
