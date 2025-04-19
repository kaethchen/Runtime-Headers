@interface NSMenuKeyCache : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_cache;
    void /* unknown type, empty encoding */ validCaches;
}

@property (class, nonatomic) BOOL useMatchPriority;
@property (class, nonatomic, retain) NSMenuKeyCache *shared;

@property (nonatomic) void /* unknown type, empty encoding */ isCommandKeyCacheDisabled;
@property (nonatomic) void /* unknown type, empty encoding */ minimumModifierCache;
@property (nonatomic) void /* unknown type, empty encoding */ keyMatchingLevel;
@property (nonatomic, readonly) BOOL isModifierCacheValid;
@property (nonatomic, readonly) BOOL isCommandKeyCacheValid;

- (id)init;
- (void).cxx_destruct;
- (void)cacheKeyInfo:(id)a0 forItem:(long long)a1 inMenu:(id)a2 keyCode:(unsigned short)a3 isVirtual:(BOOL)a4;
- (BOOL)couldBeMenuModifiers:(unsigned int)a0;
- (void)emptyKeyCache;
- (void)forEachKeyCacheEntry:(id /* block */)a0;
- (void)forEachKeyCacheEntryForKeyCode:(unsigned short)a0 isVirtual:(BOOL)a1 perform:(id /* block */)a2;
- (void)invalidateCommandKeyCache;
- (void)invalidateModifierCache;
- (void)markCommandKeyCacheValid;
- (void)markModifierCacheValid;
- (void)removeCacheEntryInMenu:(id)a0 fromIndex:(long long)a1 keyCode:(unsigned short)a2 isVirtual:(BOOL)a3;
- (void)removeMenu:(id)a0;
- (void)setKeyCacheEnabled:(BOOL)a0;
- (void)updateCacheEntryItemIndexInMenu:(id)a0 fromIndex:(long long)a1 toIndex:(long long)a2 keyCode:(unsigned short)a3 isVirtual:(BOOL)a4;

@end
