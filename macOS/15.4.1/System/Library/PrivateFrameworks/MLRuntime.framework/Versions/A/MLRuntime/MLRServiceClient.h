@class NSXPCConnection;

@interface MLRServiceClient : NSObject {
    NSXPCConnection *_connection;
}

+ (id)sharedConnection;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)donateJSONResult:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)performOnRemoteObjecWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)performOnRemoteObjecWithBlock:(id /* block */)a0 isSynchronous:(BOOL)a1 errorHandler:(id /* block */)a2;
- (void)performSynchronouslyOnRemoteObjecWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;

@end
