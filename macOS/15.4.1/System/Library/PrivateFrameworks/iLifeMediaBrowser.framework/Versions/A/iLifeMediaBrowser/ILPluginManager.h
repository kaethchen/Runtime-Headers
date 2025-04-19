@class NSRecursiveLock, NSMutableDictionary, NSDictionary, NSMutableArray, NSLock;

@interface ILPluginManager : NSObject {
    NSMutableDictionary *_pluginClasses;
    NSMutableDictionary *_pluginIDMMgrMap;
    NSMutableDictionary *_identifierToPluginsMap;
    NSRecursiveLock *_switchingPluginsLock;
    NSRecursiveLock *_disabledPluginsLock;
    NSRecursiveLock *_initLoadAllPluginsLock;
    NSMutableArray *_disabledPlugins;
    NSMutableDictionary *_customFileExtsMap;
    NSMutableDictionary *_customFileOSTypesMap;
    NSMutableArray *_customFolderPlugins;
    NSMutableArray *_customPackagePlugins;
    NSLock *_pluginLoadLockMapLock;
    NSMutableDictionary *_pluginLoadLockMap;
    id _delegate;
    long long _mediaLibraryMode;
    NSDictionary *_mediaLibraryOptions;
    long long _darkBackgroundIconMode;
}

+ (void)initialize;
+ (id)sharedPluginManager;

- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)loadPlugin:(id)a0;
- (id)allPlugins;
- (id)pluginForIdentifier:(id)a0;
- (void)_sendPluginsChangedKVO;
- (id)allPluginsForIdentifier:(id)a0;
- (long long)darkBackgroundIconMode;
- (id)enabledPlugins;
- (id)findPluginsAtPath:(id)a0;
- (id)loadLockForIdentifier:(id)a0;
- (void)loadPluginsWithDelegate:(id)a0;
- (long long)mediaLibraryMode;
- (id)mediaLibraryOptions;
- (id)pluginForIdentifier:(id)a0 forceLoad:(BOOL)a1;
- (id)pluginsCreateMediaObjectFromFolder;
- (id)pluginsCreateMediaObjectFromPackage;
- (id)pluginsForMediaType:(unsigned long long)a0;
- (id)pluginsSupportFileExtension:(id)a0;
- (id)pluginsSupportOSType:(id)a0;
- (void)setDarkBackgroundIconMode:(long long)a0;
- (void)setDarkBackgroundIconModeForBundleIdentifier:(id)a0;
- (void)setExtendedAttributes:(id)a0 forKeys:(id)a1 toPluginIdentifier:(id)a2;
- (void)setExtendedAttributes:(id)a0 forPluginIdentifier:(id)a1;
- (void)setMediaLibraryMode:(long long)a0;
- (void)setMediaLibraryOptions:(id)a0;
- (void)setPluginDisabled:(id)a0;
- (void)setPluginEnabled:(id)a0;
- (BOOL)shouldLoadDataForPluginWithIdentifier:(id)a0;

@end
