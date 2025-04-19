@class BSServiceConnection, NSSet, NSString, NSMapTable, NSMutableSet, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BKSHIDEventObserver : NSObject <BKSHIDEventObserverClientInterface> {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_lock_deferringAssertionsToObservers;
    NSSet *_lock_deferringObservations;
    NSMutableSet *_lock_chainObserverContainers;
    NSMutableDictionary *_lock_identityToChainMatches;
    NSMutableSet *_lock_allChainObserverPredicates;
    BSServiceConnection *_connection;
}

@property (readonly, nonatomic) NSSet *deferringObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (oneway void)didUpdateDeferringObservations:(id)a0;
- (void)_lock_disableObservation;
- (void)_lock_enableObservation;
- (void)_lock_resetChainObserverPredicates;
- (id)addDeferringObserver:(id)a0;
- (id)addObservingClient:(id)a0 forChainObserver:(id)a1;
- (id)deferringObservations;
- (oneway void)didUpdateDeferringChains:(id)a0;

@end
