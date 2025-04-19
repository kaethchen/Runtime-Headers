@class br_pacer, NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol BRContainerHelper, OS_dispatch_source, OS_dispatch_queue, NSObject;

@interface BRContainerCache : NSObject {
    NSString *_personaID;
    id<BRContainerHelper> _helper;
    NSMutableDictionary *_containersByID;
    NSMutableSet *_fetchedContainerIDs;
    BOOL _containerCacheUptodate;
    NSObject<OS_dispatch_queue> *_queue;
    br_pacer *_invalidationPacer;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    id<NSObject> _containerStatusObserver;
}

+ (id)containerHelper;
+ (id)containerCache;
+ (id)containerCacheForPersonaID:(id)a0;
+ (BOOL)hasDaemonicParts;
+ (BOOL)isManagedProvider;
+ (BOOL)isPersonalProvider;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_accountWillChange;
- (id)_allContainersByIDNoCopyBlocking:(BOOL)a0;
- (void)_containerListDidChange;
- (BOOL)_updateContainersCache;
- (id)allContainersBlockIfNeeded:(BOOL)a0;
- (id)allContainersByID;
- (id)containerByID:(id)a0;
- (id)documentContainers;
- (id)initWithHelper:(id)a0 personaID:(id)a1;
- (void)invalidateAndClearCache:(BOOL)a0;
- (void)subscribeToContainerStatusUpdate;
- (void)unsubscribeToContainerStatusUpdate;

@end
