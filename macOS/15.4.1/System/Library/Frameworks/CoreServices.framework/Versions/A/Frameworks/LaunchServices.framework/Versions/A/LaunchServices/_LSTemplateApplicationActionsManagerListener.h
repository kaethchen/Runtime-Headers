@class NSXPCListenerEndpoint, NSString, NSXPCListener, NSObject;
@protocol OS_xpc_object;

@interface _LSTemplateApplicationActionsManagerListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) NSObject<OS_xpc_object> *xpcendpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedListener;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)endpoint;
- (id)xpcendpoint;

@end
