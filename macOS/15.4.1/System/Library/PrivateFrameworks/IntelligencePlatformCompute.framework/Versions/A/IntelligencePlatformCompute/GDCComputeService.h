@class NSXPCInterface, NSXPCConnection;

@interface GDCComputeService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)stopWithError:(id *)a0;
- (void)locked_establishConnection;
- (BOOL)clearViewWithName:(id)a0 fullRebuild:(BOOL)a1 error:(id *)a2;
- (BOOL)truncateViewWithName:(id)a0 fullRebuild:(BOOL)a1 error:(id *)a2;
- (id)updateGroupWithName:(id)a0 namesAndRequests:(id)a1 error:(id *)a2;
- (id)updateViewWithName:(id)a0 viewUpdateSourceRequests:(id)a1 error:(id *)a2;

@end
