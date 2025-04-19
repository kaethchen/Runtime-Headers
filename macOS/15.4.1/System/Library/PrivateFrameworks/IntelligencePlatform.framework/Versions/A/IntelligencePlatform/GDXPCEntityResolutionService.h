@class NSXPCInterface, NSXPCConnection;

@interface GDXPCEntityResolutionService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)generateMentionsForQuery:(id)a0 error:(id *)a1;
- (void)locked_establishConnection;
- (id)submitCollectionQuery:(id)a0 withError:(id *)a1;
- (id)submitQuery:(id)a0 withError:(id *)a1;
- (BOOL)warmupForMode:(long long)a0 error:(id *)a1;

@end
