@class NSMapTable;

@interface HKSPSleepStoreCache : NSObject {
    NSMapTable *_sleepStoresByIdentifier;
    id /* block */ _sleepStoreProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)weakCache;
+ (id)strongCache;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSleepStoreProvider:(id /* block */)a0;
- (id)initWithSleepStoreProvider:(id /* block */)a0 useWeakReferences:(BOOL)a1;
- (id)sleepStoreForIdentifier:(id)a0;
- (id)sleepStoreForIdentifier:(id)a0 healthStore:(id)a1;

@end
