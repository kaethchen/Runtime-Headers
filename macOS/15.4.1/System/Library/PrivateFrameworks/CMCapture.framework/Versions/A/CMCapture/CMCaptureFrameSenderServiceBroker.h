@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CMCaptureFrameSenderServiceBroker : NSObject {
    id /* block */ _connectionBrokenHandler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_frameSenderServiceBrokerConnection;
    BOOL _connectionIsValid;
}

- (void)dealloc;
- (void)_ensureFrameSenderServiceBrokerIsValid;
- (id)initWithConnectionBrokenHandler:(id /* block */)a0;
- (int)publishEndpoint:(id)a0 endpointUniqueID:(id)a1 endpointType:(id)a2 endpointPID:(int)a3 endpointProxyPID:(int)a4 endpointAuditToken:(id)a5 endpointProxyAuditToken:(id)a6 endpointCameraUniqueID:(id)a7;
- (int)suppressEndpointWithUniqueID:(id)a0;

@end
