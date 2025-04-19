@class NSDictionary, NSXPCListener, NSString;

@interface LSDPluginManager : NSObject <NSXPCListenerDelegate, LSDPluginServiceProtocol>

@property (retain) NSDictionary *pluginsByBundleIentifier;
@property (retain) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)endpointForServiceIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)loadPluginsAtURL:(id)a0;
- (void)startPlugins;

@end
