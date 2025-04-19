@class NSXPCConnection;

@interface LSDatabaseBlockingFetchClient : NSObject <LSDatabaseBlockingFetchProtocol> {
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)getServerStoreBlockingWithCompletionHandler:(id /* block */)a0;
- (id)initWithXPCConnection:(id)a0;

@end
