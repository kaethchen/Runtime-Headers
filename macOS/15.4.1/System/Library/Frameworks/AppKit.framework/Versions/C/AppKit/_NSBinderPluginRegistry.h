@class NSMapTable;

@interface _NSBinderPluginRegistry : NSObject {
    NSMapTable *_registry;
    NSMapTable *_cachedRegistry;
}

+ (id)sharedRegistry;

- (void)dealloc;
- (id)init;
- (Class)pluginClassForObject:(id)a0 andBinderClass:(Class)a1 requiredPluginProtocol:(id)a2;
- (void)registerPluginClass:(Class)a0 forObjectClass:(Class)a1 andBinderClass:(Class)a2;

@end
