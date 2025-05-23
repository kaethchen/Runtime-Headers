@class NSString;

@interface GEOConfigStorageClient : NSObject <GEOConfigStorageReadWrite>

@property (class, readonly, nonatomic) GEOConfigStorageClient *shared;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;
- (id)getAllKeysAndValuesForOptions:(unsigned long long)a0;
- (void)getConfigValueForKey:(id)a0 countryCode:(id)a1 options:(unsigned long long)a2 result:(id /* block */)a3;
- (id)getConfigValueForKey:(id)a0 countryCode:(id)a1 options:(unsigned long long)a2 source:(long long *)a3;
- (void)getExpiringKeys:(unsigned long long)a0 result:(id /* block */)a1;
- (void)migrateEntitledKey:(id)a0 options:(unsigned long long)a1;
- (void)resync;
- (void)setConfigKeyExpiry:(id)a0 options:(unsigned long long)a1 date:(id)a2 osVersion:(id)a3;
- (void)setConfigValue:(id)a0 forKey:(id)a1 options:(unsigned long long)a2 synchronous:(BOOL)a3;

@end
