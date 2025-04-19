@class NSXPCListenerEndpoint, NSString, NSXPCListener, NSViewController, NSExtension, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ScreenSaverExtensionModule : ScreenSaverModule <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    NSViewController *_configurationSheetViewController;
    NSViewController *_configurationViewController;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSObject<OS_dispatch_semaphore> *_requestQueueSema;
    NSObject<OS_dispatch_queue> *_viewBridgeEndpointQueue;
    NSObject<OS_dispatch_semaphore> *_viewBridgeEndpointSema;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_semaphore> *_workQueueSema;
    NSXPCListenerEndpoint *_viewBridgeEndpoint;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (retain) NSExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;

- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)displayName;
- (void)___nsx_pingHost:(id /* block */)a0;
- (void)disconnect;
- (void)extension:(id)a0 viewBridgeEndpoint:(id)a1;
- (void)_handshake:(BOOL)a0;
- (void)beginExtensionRequestWithUserInfo:(id)a0;
- (BOOL)hasConfigureSheet;
- (id)initWithExtension:(id)a0 isPreview:(BOOL)a1;
- (id)loadViewForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isPreview:(BOOL)a1;
- (id)loadViewForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isPreview:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)presentConfigureSheetWithCompletionBlock:(id /* block */)a0 dismissBlock:(id /* block */)a1;
- (void)requestConfigurationSheetViewController:(id /* block */)a0;
- (void)requestConfigurationViewController:(id /* block */)a0;
- (void)unloadModule;

@end
