@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MTRDeviceConnectivityMonitor : NSObject {
    NSString *_instanceName;
    struct vector<_DNSServiceRef_t *, std::allocator<_DNSServiceRef_t *>> { struct _DNSServiceRef_t **__begin_; struct _DNSServiceRef_t **__end_; struct __compressed_pair<_DNSServiceRef_t **, std::allocator<_DNSServiceRef_t *>> { struct _DNSServiceRef_t **__value_; } __end_cap_; } _resolvers;
    NSMutableDictionary *_connections;
    id /* block */ _monitorHandler;
    NSObject<OS_dispatch_queue> *_handlerQueue;
}

+ (struct _DNSServiceRef_t { } *)_sharedResolverConnection;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stopMonitoring;
- (void)_stopMonitoring;
- (void)_callHandler;
- (void)handleResolvedHostname:(const char *)a0 port:(unsigned short)a1 error:(int)a2;
- (id)initWithCompressedFabricID:(id)a0 nodeID:(id)a1;
- (id)initWithInstanceName:(id)a0;
- (void)startMonitoringWithHandler:(id /* block */)a0 queue:(id)a1;

@end
