@class NSXPCListenerEndpoint, NSString, NSObject, OS_xpc_remote_connection;
@protocol OS_xpc_object, OS_dispatch_queue, NSXPCListenerDelegate;

@interface NSXPCListener : NSObject {
    union { NSObject<OS_xpc_object> *xpc; OS_xpc_remote_connection *remote; } _connection;
    NSObject<OS_dispatch_queue> *_userQueue;
    _Atomic id _delegate;
    NSString *_serviceName;
    unsigned long long _state;
    unsigned char _remote;
}

@property (weak) id<NSXPCListenerDelegate> delegate;
@property (readonly, retain) NSXPCListenerEndpoint *endpoint;

+ (id)anonymousListener;
+ (id)serviceListener;
+ (id)_UUID;
+ (void)enableTransactions;

- (void)dealloc;
- (id)description;
- (void)_setQueue:(id)a0;
- (id)initWithMachServiceName:(id)a0;
- (void)invalidate;
- (void)resume;
- (id)_xpcConnection;
- (void)activate;
- (id)__initWithoutRemoteConnection;
- (void)__receiveRemoteConnection:(id)a0;
- (void)suspend;
- (id)_initShared;
- (id)_initWithRemoteName:(id)a0;
- (id)_queue;
- (id)initWithServiceName:(id)a0;
- (id)serviceName;
- (void)setConnectionCodeSigningRequirement:(id)a0;
- (void)setOptions:(unsigned long long)a0;
- (void)stop;

@end
