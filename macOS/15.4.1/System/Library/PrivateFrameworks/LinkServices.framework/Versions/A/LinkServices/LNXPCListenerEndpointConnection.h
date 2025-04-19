@class NSXPCListenerEndpoint;

@interface LNXPCListenerEndpointConnection : LNConnection

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

- (void).cxx_destruct;
- (void)connectWithOptions:(id)a0;
- (void)acquireAssertionsForConnectionOperation:(id)a0;
- (id)initWithEffectiveBundleIdentifier:(id)a0 appBundleIdentifier:(id)a1 processInstanceIdentifier:(id)a2 appIntentsEnabledOnly:(BOOL)a3 userIdentity:(id)a4 listenerEndpoint:(id)a5 auditToken:(struct { unsigned int x0[8]; })a6 error:(id *)a7;
- (BOOL)refreshWithOptions:(id)a0;

@end
