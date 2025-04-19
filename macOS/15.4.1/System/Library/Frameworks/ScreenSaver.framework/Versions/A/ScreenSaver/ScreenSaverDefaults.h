@class NSString, NSMutableDictionary;

@interface ScreenSaverDefaults : NSUserDefaults {
    NSMutableDictionary *_defaults;
    NSMutableDictionary *_registeredDefaults;
    NSString *_userName;
    NSString *_domainName;
    BOOL _dirty;
}

+ (id)standardUserDefaults;
+ (void)resetStandardUserDefaults;
+ (id)defaultModuleName;
+ (id)defaultsForEngine;
+ (id)defaultsForModule:(id)a0;
+ (id)defaultsForModuleWithName:(id)a0;
+ (id)defaultsForUser:(id)a0 moduleName:(id)a1;

- (void)dealloc;
- (id)description;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)synchronize;
- (id)volatileDomainNames;
- (id)dictionaryRepresentation;
- (id)persistentDomainForName:(id)a0;
- (void)registerDefaults:(id)a0;
- (void)removePersistentDomainForName:(id)a0;
- (void)removeVolatileDomainForName:(id)a0;
- (void)setPersistentDomain:(id)a0 forName:(id)a1;
- (void)setVolatileDomain:(id)a0 forName:(id)a1;
- (id)volatileDomainForName:(id)a0;
- (BOOL)reload;
- (id)registeredDefaults;
- (id)_removeSecurityKeysFromDefaults:(id)a0;
- (id)activeModule;
- (id)initWithUser:(id)a0 moduleName:(id)a1;
- (void)removeDefaultsForModuleWithName:(id)a0;

@end
