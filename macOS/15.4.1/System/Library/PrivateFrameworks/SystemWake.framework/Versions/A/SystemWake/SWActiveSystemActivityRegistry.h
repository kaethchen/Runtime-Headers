@class NSHashTable;
@protocol BSInvalidatable;

@interface SWActiveSystemActivityRegistry : NSObject {
    id<BSInvalidatable> _stateCaptureHandler;
    NSHashTable *_lock_activeSystemActivities;
    NSHashTable *_lock_observers;
    unsigned long long _lock_activeSystemActivitiesCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedRegistry;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)registerActiveSystemActivity:(id)a0;
- (void)unregisterInactiveSystemActivity:(id)a0;

@end
