@interface TVAppBag : NSObject <TVAppBagObjCProtocol> {
    void /* unknown type, empty encoding */ amsBag;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ snapshotBagAccessLock;
    void /* unknown type, empty encoding */ snapshotBag;
    void /* unknown type, empty encoding */ diskCachedKeys;
    void /* unknown type, empty encoding */ diskCachedKeyTypes;
    void /* unknown type, empty encoding */ cachedBagAccessLock;
    void /* unknown type, empty encoding */ cachedBags;
    void /* unknown type, empty encoding */ isSilentFetchingAccessLock;
    void /* unknown type, empty encoding */ isSilentFetching;
    void /* unknown type, empty encoding */ cacheStorage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logPrefix;
    void /* unknown type, empty encoding */ $__lazy_storage_$_systemVersion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_systemVersionInfo;
}

@property (class, nonatomic, readonly) TVAppBag *app;

- (id)init;
- (void).cxx_destruct;
- (void)prewarm;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (id)integerForKey:(id)a0;
- (id)urlForKey:(id)a0;
- (id)booleanForKey:(id)a0;
- (id)cachedArrayForKey:(id)a0;
- (id)cachedBooleanForKey:(id)a0;
- (id)cachedDictionaryForKey:(id)a0;
- (id)cachedDoubleForKey:(id)a0;
- (id)cachedIntegerForKey:(id)a0;
- (id)cachedStringForKey:(id)a0;
- (id)cachedURLForKey:(id)a0;

@end
