@class NSObject;
@protocol OS_xpc_object;

@interface CSDeviceActivationXPCClient : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(const char *)a0;
- (void)connect;
- (id)_decodeError:(id)a0;
- (void)_handleListenerError:(id)a0;
- (void)_handleListenerEvent:(id)a0;
- (void)_sendMessage:(id)a0 connection:(id)a1 completion:(id /* block */)a2;
- (void)notifyActivationEvent:(id)a0 completion:(id /* block */)a1;

@end
