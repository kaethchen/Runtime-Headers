@class NSXPCListenerEndpoint, NSString, BMXPCListener, BMAccessServer, NSMapTable, NSObject;
@protocol OS_dispatch_queue, BMFileServer;

@interface BMAccessServiceListener : NSObject <NSXPCConnectionDelegate, BMXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    BMXPCListener *_listener;
    BMAccessServer *_accessServer;
    id<BMFileServer> _fileServer;
    NSMapTable *_clientSpecificListeners;
    BMXPCListener *_coreDuetListener;
}

@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)activate;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (BOOL)_acceptConnection:(id)a0;
- (id)endpointForCoreDuetUseCases;
- (id)initLegacyWithQueue:(id)a0;
- (id)initWithDomain:(unsigned long long)a0 queue:(id)a1 delegate:(id)a2;
- (id)initWithMachServiceName:(id)a0 domain:(unsigned long long)a1 queue:(id)a2 accessServer:(id)a3 fileServer:(id)a4;
- (id)initWithMachServiceName:(id)a0 domain:(unsigned long long)a1 queue:(id)a2 accessServer:(id)a3 fileServer:(id)a4 delegate:(id)a5;
- (void)replyToInvocation:(id)a0 withError:(id)a1;
- (id)uniqueEndpointForAppScopedServicesActingOnBehalfOfClientWithAccessControlPolicy:(id)a0;
- (BOOL)validateConnection:(id)a0 error:(id *)a1;

@end
