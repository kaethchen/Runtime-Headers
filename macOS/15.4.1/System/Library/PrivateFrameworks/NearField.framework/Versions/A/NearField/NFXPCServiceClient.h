@class NSString, NSXPCConnection, NSHashTable, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue;

@interface NFXPCServiceClient : NSObject {
    NSXPCConnection *_xpcConnection;
    NSHashTable *_delegates;
    NSString *_serviceName;
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    long long _clientCount;
}

@property (readonly) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (id)initWithService:(id)a0 remoteObjectInterface:(id)a1 exportedInterface:(id)a2 exportedObject:(id)a3;
- (id)initWithService:(id)a0 remoteObjectInterface:(id)a1 exportedInterface:(id)a2 exportedObject:(id)a3 xpcDispatchQueue:(id)a4;

@end
