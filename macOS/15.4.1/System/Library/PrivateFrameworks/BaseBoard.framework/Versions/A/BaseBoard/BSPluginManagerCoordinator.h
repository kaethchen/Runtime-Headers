@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject {
    NSMutableDictionary *_managersByBundleID;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)registerPlugins;
- (id)mainPluginManager;
- (id)pluginManagerForBundle:(id)a0;
- (void)registerPluginsFromBundle:(id)a0;

@end
