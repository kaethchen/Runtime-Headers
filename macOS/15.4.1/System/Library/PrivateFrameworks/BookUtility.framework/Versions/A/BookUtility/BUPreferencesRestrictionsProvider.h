@class NSString, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface BUPreferencesRestrictionsProvider : NSObject <BURestrictionsProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (nonatomic) BOOL isBookStoreAllowed;
@property (nonatomic) BOOL isExplicitContentAllowed;
@property (nonatomic) BOOL isAccountModificationAllowed;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)_cfPreferenceAppValueForKey:(id)a0;
- (id)_currentObserversCopy;
- (void)_updateRestrictionsAndNotifyIfNeeded:(id)a0;
- (void)_uq_notifyObserversForAccountModificationRestrictionsChange;
- (void)_uq_notifyObserversForBookStoreRestrictionsChange;
- (void)_uq_notifyObserversForExplicitContentRestrictionsChange;
- (void)_uq_updateRestrictionsIfNeeded;

@end
