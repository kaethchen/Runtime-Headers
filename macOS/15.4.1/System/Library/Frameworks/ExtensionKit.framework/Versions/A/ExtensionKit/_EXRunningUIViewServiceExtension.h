@class NSString, NSXPCListener, NSXPCConnection;

@interface _EXRunningUIViewServiceExtension : _EXRunningUIExtension <NSViewServiceDelegate, NSXPCListenerDelegate>

@property (readonly) NSString *viewControllerClassName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSXPCConnection *xpcConnection;
@property (retain) NSXPCListener *serviceListener;
@property (retain) NSXPCListener *internalListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)viewControllerClassName;
- (BOOL)viewServiceDidCreateViewController:(id)a0 extensionIdentifier:(id)a1 error:(id *)a2;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (int)startWithArguments:(const char **)a0 count:(int)a1;

@end
