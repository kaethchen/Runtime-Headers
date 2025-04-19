@class NSArray, HDDaemon;

@interface HDPluginManager : NSObject {
    NSArray *_plugins;
}

@property (readonly, copy, nonatomic) NSArray *notificationInstructionCriteriaClasses;
@property (weak, nonatomic) HDDaemon *daemon;
@property (copy, nonatomic) NSArray *allowablePluginDirectoryPaths;

- (void).cxx_destruct;
- (id)initWithDaemon:(id)a0;
- (id)_builtInPluginClasses;
- (id)_createPluginsFromClasses:(id)a0;
- (id)_pluginClasses;
- (id)_pluginDirectoryPaths;
- (id)createExtensionsForDaemon:(id)a0;
- (id)createExtensionsForProfile:(id)a0;
- (void)notifyPluginsOfDatabaseObliteration;
- (id)pluginsConformingToProtocol:(id)a0;

@end
