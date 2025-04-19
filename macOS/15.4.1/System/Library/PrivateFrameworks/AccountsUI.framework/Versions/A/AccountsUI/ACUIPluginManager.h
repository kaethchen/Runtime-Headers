@class NSDictionary;

@interface ACUIPluginManager : NSObject

@property (readonly) NSDictionary *plugins;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_loadPlugins;
- (id)_validateAndLoadPlugin:(id)a0;
- (id)pluginForAccountType:(id)a0;

@end
