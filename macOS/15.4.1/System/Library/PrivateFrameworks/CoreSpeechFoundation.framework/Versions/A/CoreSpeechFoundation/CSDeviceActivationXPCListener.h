@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSDeviceActivationXPCListener : NSObject <CSDeviceActivateXPCConnectionDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *listener;
@property (retain, nonatomic) NSMutableArray *connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(const char *)a0;
- (void)_handleListenerError:(id)a0;
- (void)_handleListenerEvent:(id)a0;
- (void)listen;
- (void)CSActivationXPCConnectionReceivedClientError:(id)a0 clientError:(id)a1 client:(id)a2;
- (void)_handleNewRemoteConnection:(id)a0;

@end
