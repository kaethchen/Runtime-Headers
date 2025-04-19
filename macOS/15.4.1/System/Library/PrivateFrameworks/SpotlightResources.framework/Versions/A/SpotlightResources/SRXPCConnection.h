@class NSObject;
@protocol OS_dispatch_queue;

@interface SRXPCConnection : CSXPCConnection {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedConnection;

- (id)init;
- (void).cxx_destruct;
- (void)sendMessageAsync:(id)a0 completion:(id /* block */)a1;

@end
