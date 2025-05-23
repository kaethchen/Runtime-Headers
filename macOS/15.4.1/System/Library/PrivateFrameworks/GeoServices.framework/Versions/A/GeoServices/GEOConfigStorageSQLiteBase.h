@class NSString, GEOConfigPersistence;

@interface GEOConfigStorageSQLiteBase : NSObject <GEOConfigStorageReadWrite> {
    long long _source;
    GEOConfigPersistence *_persister;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_instanceSpecificGetKey:(id)a0;
- (id)_instanceSpecificGetKeyPath:(id)a0;
- (void)_instanceSpecificSetValue:(id)a0 forKey:(id)a1;
- (id)getConfigValueForKey:(id)a0 countryCode:(id)a1 options:(unsigned long long)a2 source:(long long *)a3;
- (void)resync;
- (void)setConfigValue:(id)a0 forKey:(id)a1 options:(unsigned long long)a2 synchronous:(BOOL)a3;

@end
