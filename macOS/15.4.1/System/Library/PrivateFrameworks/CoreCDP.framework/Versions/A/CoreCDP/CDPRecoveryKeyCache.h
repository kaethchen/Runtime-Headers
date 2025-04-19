@class AAFKeychainManager;

@interface CDPRecoveryKeyCache : NSObject {
    AAFKeychainManager *_keychainManager;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)cacheRecoveryKey:(id)a0 forAltDSID:(id)a1 error:(id *)a2;
- (void)deleteCache;
- (id)fetchRecoveryKeyFromCacheForAltDSID:(id)a0;

@end
