@class NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, SCDAAssertionCoordinatorDelegate;

@interface SCDAAssertionCoordinator : NSObject <SCDAInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    id<SCDAAssertionCoordinatorDelegate> _delegate;
    _Atomic long long _numberOfAssertions;
    NSMutableDictionary *_assertionsByUUID;
    _Atomic long long _numberOfActiveAssertions;
    NSMutableSet *_activeAssertionUUIDs;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)_activateAssertionWithUUID:(id)a0;
- (void)_addAssertion:(id)a0;
- (void)_deactivateAndRemoveAssertionWithUUID:(id)a0 context:(id)a1 error:(id)a2 options:(unsigned long long)a3;
- (id)acquireRelinquishableAssertionWithContext:(id)a0 relinquishmentHandler:(id /* block */)a1;
- (void)barrier:(id /* block */)a0;
- (void)getActiveAssertionsWithCompletion:(id /* block */)a0;
- (void)getPendingAndActiveAssertionsWithCompletion:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 queue:(id)a1 delegate:(id)a2;
- (unsigned long long)numberOfActiveAssertions;
- (unsigned long long)numberOfPendingAndActiveAssertions;
- (void)relinquishAsertionsPassingTest:(id /* block */)a0 context:(id)a1;
- (void)relinquishAsertionsPassingTest:(id /* block */)a0 error:(id)a1;
- (void)relinquishAssertionWithUUID:(id)a0 context:(id)a1 options:(unsigned long long)a2;
- (void)relinquishAssertionWithUUID:(id)a0 error:(id)a1 options:(unsigned long long)a2;

@end
