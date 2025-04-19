@class NSString, NSXPCListener, NSXPCInterface;

@interface AKAdaptiveService : NSObject <NSXPCListenerDelegate> {
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    NSXPCListener *_listener;
}

@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resume;
- (void)activate;
- (id)listenerEndpoint;
- (id)initWithInterface:(id)a0 strongObject:(id)a1;
- (id)_initWithInterface:(id)a0 object:(id)a1;
- (id)initWithInterface:(id)a0 weakObject:(id)a1;

@end
