@class NSString, NEExtensionProviderContext, NSMutableArray;

@interface NEProviderServer : NSObject <NSXPCListenerDelegate> {
    NSMutableArray *_listeners;
    NSMutableArray *_contexts;
}

@property (class, readonly) NEProviderServer *sharedServer;

@property (readonly) NEExtensionProviderContext *firstContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)removeProviderContext:(id)a0;
- (void)generateProviderEndpointInfoInMessage:(id)a0 extensionPoint:(id)a1;

@end
