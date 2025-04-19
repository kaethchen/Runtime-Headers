@class NSString, NSArray, NSMutableDictionary;

@interface SiriUIPluginManager : NSObject {
    NSString *_path;
    NSArray *_domainKeys;
    id /* block */ _factoryInitializationBlock;
    NSMutableDictionary *_domainKeyDictionary;
}

+ (id)pluginManagerForPath:(id)a0 domainKeys:(id)a1 factoryInitializationBlock:(id /* block */)a2;

- (id)description;
- (void).cxx_destruct;
- (void)_registerBundle:(id)a0;
- (void)enumerateFactoryInstancesForDomainKey:(id)a0 groupIdentifier:(id)a1 classIdentifier:(id)a2 usingBlock:(id /* block */)a3;
- (id)initWithPath:(id)a0 domainKeys:(id)a1 factoryInitializationBlock:(id /* block */)a2;
- (void)_loadBundles;

@end
