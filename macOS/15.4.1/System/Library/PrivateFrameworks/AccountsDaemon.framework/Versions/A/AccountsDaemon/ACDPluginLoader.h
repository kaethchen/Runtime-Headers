@interface ACDPluginLoader : ACPluginLoader

+ (id)_currentSystemVersion;
+ (id)_buildPluginCache;
+ (id)gameCenterPluginNameFromPlugins:(id)a0 modernPluginEnabled:(BOOL)a1 fallbackPluginID:(id)a2 modernPluginID:(id)a3;
+ (id)pluginForIdentifier:(id)a0 subpath:(id)a1;

@end
