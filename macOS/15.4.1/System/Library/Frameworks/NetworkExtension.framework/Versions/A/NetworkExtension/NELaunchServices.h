@interface NELaunchServices : NSObject

+ (id)bundleProxyForIdentifier:(id)a0 uid:(unsigned int)a1 plugins:(id *)a2;
+ (id)lookupIdentifier:(id)a0 plugins:(id *)a1;
+ (id)pluginBundleProxyWithIdentifier:(id)a0 type:(id)a1 pluginClass:(long long)a2 extensionPoint:(id)a3 uid:(unsigned int)a4;
+ (id)pluginClassToExtensionPoint:(long long)a0;
+ (id)pluginProxyWithIdentifier:(id)a0 type:(id)a1 pluginClass:(long long)a2 extensionPoint:(id)a3;

@end
