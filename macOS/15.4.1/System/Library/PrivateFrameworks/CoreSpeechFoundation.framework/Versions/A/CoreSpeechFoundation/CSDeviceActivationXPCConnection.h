@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object, CSDeviceActivateXPCConnectionDelegate;

@interface CSDeviceActivationXPCConnection : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (weak, nonatomic) id<CSDeviceActivateXPCConnectionDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)_handleClientError:(id)a0 client:(id)a1;
- (void)_handleClientEvent:(id)a0;
- (void)_handleClientMessage:(id)a0 client:(id)a1;
- (void)activateConnection;
- (void)_sendReply:(id)a0 client:(id)a1 result:(BOOL)a2 error:(id)a3;
- (void)_handleActivateEventMesssage:(id)a0 client:(id)a1;

@end
