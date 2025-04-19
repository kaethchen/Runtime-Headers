@class TVISAssetServiceManager, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface TVISCacheDeleteManager : NSObject

@property (readonly, nonatomic) TVISAssetServiceManager *assetManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheDeleteQ;
@property (retain, nonatomic) NSMapTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;

+ (id)sharedInstance;
+ (void)registerWithCacheDelete;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0 queue:(id)a1;
- (void)_notifyObserversCacheDeleteDidPurgeItems:(id)a0;
- (struct __CFDictionary { } *)_periodicPurgeHandlerWithUrgency:(int)a0 info:(struct __CFDictionary { } *)a1;
- (void)_purgeCancelHandler;
- (struct __CFDictionary { } *)_purgeHandlerWithUrgency:(int)a0 info:(struct __CFDictionary { } *)a1;
- (struct __CFDictionary { } *)_purgeableAmountHandlerWithUrgency:(int)a0 info:(struct __CFDictionary { } *)a1;

@end
