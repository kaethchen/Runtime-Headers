@class NSDictionary;

@interface GEOConfigStorageExpiryCached : NSObject <GEOConfigStorageExpiry> {
    unsigned long long _options;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_cachedValues;
}

- (void).cxx_destruct;
- (id)_expiryForKey:(id)a0;
- (void)clearConfigKeyExpiry:(id)a0;
- (id)getAllExpiringKeys;
- (BOOL)getConfigKeyExpiry:(id)a0 date:(id *)a1 osVersion:(id *)a2;
- (BOOL)getConfigKeyIsExpired:(id)a0;
- (id)initForSource:(long long)a0;
- (void)resync;
- (void)setConfigKeyExpiry:(id)a0 date:(id)a1 osVersion:(id)a2;

@end
