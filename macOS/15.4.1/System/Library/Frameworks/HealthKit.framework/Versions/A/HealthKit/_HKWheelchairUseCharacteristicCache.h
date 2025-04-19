@class HKHealthStore, NSHashTable, NSObject, HKWheelchairUseObject;
@protocol OS_dispatch_queue;

@interface _HKWheelchairUseCharacteristicCache : NSObject {
    HKHealthStore *_healthStore;
    NSHashTable *_observers;
    long long _state;
    HKWheelchairUseObject *_wheelchairUseObject;
    NSObject<OS_dispatch_queue> *_queue;
    int _characteristicUpdateToken;
    long long _queryRetries;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (id)initWithHealthStore:(id)a0;
- (void)_alertObservers:(id)a0 didUpdateToWheelchairUser:(BOOL)a1;
- (void)_handleFetchError:(id)a0;
- (void)_handleFetchSuccess:(id)a0;
- (void)_lock_fetchWheelchairUse;
- (void)_lock_fetchWheelchairUseIfNecessary;
- (BOOL)_lock_isWheelchairUser;
- (BOOL)_lock_needsFetch;
- (BOOL)hasFetchedWheelchairUse;
- (BOOL)isWheelchairUser;

@end
