@class NSMutableDictionary, NSHashTable;

@interface NSXPCSharedListener : NSObject {
    NSHashTable *_delegates;
    void *reserved;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

@property (retain) NSMutableDictionary *listeners;

+ (id)connectToService:(id)a0 listener:(id)a1 error:(id *)a2;
+ (void)warmUpClassNamed:(id)a0 inServiceNamed:(id)a1;
+ (id)connectionForListenerNamed:(id)a0 fromServiceNamed:(id)a1 instanceIdentifier:(id)a2;
+ (void)_endpointForListenerNamed:(id)a0 fromServiceNamed:(id)a1 instanceIdentifier:(id)a2 queue:(id)a3 async:(BOOL)a4 completion:(id /* block */)a5;
+ (void)_failedToWarmUpClassNamed:(id)a0 inServiceNamed:(id)a1 dueTo:(id)a2;
+ (void)cacheFutureEndpointsForServiceNamed:(id)a0;
+ (id)connectToService:(id)a0 instanceIdentifier:(id)a1 listener:(id)a2 error:(id *)a3;
+ (void)connectToService:(id)a0 instanceIdentifier:(id)a1 listener:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
+ (void)connectToService:(id)a0 listener:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (id)connectionForListenerNamed:(id)a0 fromServiceNamed:(id)a1;
+ (id)endpointCache;
+ (void)endpointForListenerNamed:(id)a0 fromServiceNamed:(id)a1 instanceIdentifier:(id)a2 queue:(id)a3 async:(BOOL)a4 completion:(id /* block */)a5;
+ (void)endpointForListenerNamed:(id)a0 fromServiceNamed:(id)a1 instanceIdentifier:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
+ (id)endpointForReply:(id)a0 withListenerName:(id)a1 replyErrorCode:(long long *)a2;
+ (void)getSDKVersionOfServiceNamed:(id)a0 reply:(id /* block */)a1;
+ (void)listenerEndpointForService:(id)a0 instanceIdentifier:(id)a1 listener:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
+ (id)listenerEndpointForService:(id)a0 listener:(id)a1 error:(id *)a2;
+ (void)listenerEndpointForService:(id)a0 listener:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (void)purgeEndpointCache;
+ (void)service:(id)a0 builtForPlatform:(unsigned int)a1 againstMinimumSDK:(unsigned int)a2 reply:(id /* block */)a3;
+ (void)setEndpointCache:(id)a0;
+ (id)sharedServiceListener;

- (void)dealloc;
- (void)resume;
- (void)addDelegate:(id)a0;
- (void)addListener:(id)a0 withName:(id)a1;
- (void)didAcceptNewConnection:(id)a0;
- (id)listenerEndpointWithName:(id)a0;
- (void)resumeAdditionalService:(id)a0;
- (void)resumeSubService:(id)a0;
- (BOOL)shouldAcceptNewConnection:(id)a0 forListenerNamed:(id)a1;
- (void)whileHoldingLock:(id /* block */)a0;

@end
