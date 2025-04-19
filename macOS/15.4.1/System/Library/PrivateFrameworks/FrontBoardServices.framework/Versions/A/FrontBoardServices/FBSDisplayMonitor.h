@class FBSDisplaySource, FBSDisplayConfiguration, NSArray, NSString, NSSet, NSHashTable, CADisplay, NSObject, FBSDisplayIdentity, NSMapTable;
@protocol OS_dispatch_queue, FBSDisplayObserving, FBSDisplayTransformer;

@interface FBSDisplayMonitor : NSObject <BSInvalidatable> {
    CADisplay *_mainDisplay;
    FBSDisplaySource *_mainDisplaySource;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<FBSDisplayObserving> _lock_bookendObserver;
    NSHashTable *_lock_observers;
    NSMapTable *_lock_sourcesByDisplay;
    BOOL _lock_allowsUnknownDisplays;
    BOOL _lock_canPostToBookendObserver;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue;
@property (readonly, nonatomic) BOOL canPostToBookendObserver;
@property (readonly, weak, nonatomic) id<FBSDisplayObserving> bookendObserver;
@property (readonly, copy, nonatomic) NSArray *observers;
@property (readonly, nonatomic) id<FBSDisplayTransformer> transformer;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *mainIdentity;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *mainConfiguration;
@property (readonly, copy, nonatomic) NSSet *connectedIdentities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)remove:(id)a0;
- (void)add:(id)a0;
- (void)updateTransformsWithCompletion:(id /* block */)a0;
- (id)_initWithBookendObserver:(id)a0 transformer:(id)a1;
- (void)_lock_enumerateConnectedWithBlock:(id /* block */)a0;
- (void)_lock_enumerateSourcesWithBlock:(id /* block */)a0;
- (void)_postInitialBookendObserverConnections;
- (id)_sortedSources;
- (BOOL)allowsUnknownDisplays;
- (id)configurationForIdentity:(id)a0;
- (id)initWithInitializationCompletion:(id /* block */)a0;
- (id)initWithTransformer:(id)a0;
- (void)setAllowsUnknownDisplays:(BOOL)a0;

@end
