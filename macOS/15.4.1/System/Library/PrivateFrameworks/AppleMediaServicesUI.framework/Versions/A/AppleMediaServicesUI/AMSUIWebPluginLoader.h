@class NSMutableDictionary, NSDictionary, AMSUIWebClientContext, NSArray;

@interface AMSUIWebPluginLoader : NSObject

@property (readonly, weak) AMSUIWebClientContext *context;
@property (readonly) NSDictionary *installedPluginURLs;
@property (retain) NSMutableDictionary *loadedPluginsMap;
@property (readonly) NSArray *loadedPlugins;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)_loadInstalledPlugins;
- (id)pluginForBundleIdentifier:(id)a0;

@end
