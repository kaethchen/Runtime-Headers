@interface GEOConfigStorageSQLite : GEOConfigStorageSQLiteBase <GEOConfigStorageExpiry>

- (id)_getExpiringKeyForKey:(id)a0;
- (id)_instanceSpecificGetKey:(id)a0;
- (id)_instanceSpecificGetKeyPath:(id)a0;
- (void)_instanceSpecificSetValue:(id)a0 forKey:(id)a1;
- (void)clearConfigKeyExpiry:(id)a0;
- (id)getAllExpiringKeys;
- (BOOL)getConfigKeyExpiry:(id)a0 date:(id *)a1 osVersion:(id *)a2;
- (BOOL)getConfigKeyIsExpired:(id)a0;
- (void)setConfigKeyExpiry:(id)a0 date:(id)a1 osVersion:(id)a2;

@end
