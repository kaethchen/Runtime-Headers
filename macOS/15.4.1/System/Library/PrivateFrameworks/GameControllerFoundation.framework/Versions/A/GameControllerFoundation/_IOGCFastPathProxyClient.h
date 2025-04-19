@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _IOGCFastPathProxyClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    struct { unsigned int val[8]; } _auditToken;
    unsigned int _taskID;
    unsigned int _service;
    unsigned int _connect;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIncomingConnection:(id)a0;

@end
