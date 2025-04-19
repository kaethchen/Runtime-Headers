@class NSString, NSMutableDictionary, NSObject, FI_TNotificationCenterObserverGlue;

@interface FI_TTagInfoRegistry : NSObject <TCoalescingNodeObserverProtocol> {
    NSMutableDictionary *_registry;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _nodeObserver;
    struct TReadWriteLock { struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } fRWLock; } _lock;
    int _discoveringTags;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _tagsContainerNode;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _favoriteTagsPrefChangedObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)finalize;
+ (void)startDiscovery;
+ (void)stopDiscovery;
+ (id)allTags;
+ (id)tagInfoForName:(id)a0;
+ (id)copyTagInfoRegistry;
+ (void)deleteTag:(id)a0;
+ (id)favoriteTagNames;
+ (id)favoriteTags;
+ (long long)indexOfFavorite:(id)a0;
+ (BOOL)isTagKnown:(id)a0;
+ (id)knownTags;
+ (void)renameTag:(id)a0 to:(id)a1;
+ (void)setFavoriteTagNames:(id)a0;
+ (void)setFavoriteTags:(id)a0;
+ (id)tagInfoForFavoriteIndex:(long long)a0;
+ (id)tagSet;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_init;
- (void)aboutToTearDown;
- (void)_refresh;
- (id)allTags;
- (void)_addNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)tagInfoForName:(id)a0;
- (void)_renameNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)coalescingNodeObserver:(void *)a0 nodesChanged:(const void *)a1 inObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 openChildListUpdated:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)coalescingNodeObserver:(void *)a0 openSyncCompleted:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (id)favoriteTagNames;
- (id)favoriteTags;
- (void)favoriteTagsPrefChanged:(id)a0;
- (BOOL)isTagKnown:(id)a0;
- (id)knownTags;
- (void)postRegistryChange:(id)a0;
- (void)setFavoriteTagNames:(id)a0;
- (void)setFavoriteTags:(id)a0;
- (void)startDiscoveringTags;
- (void)stopDiscoveringTags;
- (id)tagInfoForNameWhileLocked:(id)a0;

@end
