@class NSHashTable, NSString, NSArray, NSSet, BSServiceConnection, NSMutableDictionary, NSDictionary, NSMutableSet, NSMutableArray, NSObject, BSMutableIntegerMap;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface BKSHIDEventDeliveryManager : NSObject <BSDescriptionStreamable> {
    BSServiceConnection *_serviceConnection;
    BOOL _forTesting;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_lock_assertions;
    unsigned int _lock_discreteDispatchingSeed;
    NSMutableSet *_lock_discreteDispatchingRoots;
    NSSet *_lock_lastSentDiscreteDispatchingRoots;
    unsigned int _lock_keyCommandsDispatchingSeed;
    NSMutableSet *_lock_keyCommandsDispatchingRoots;
    NSSet *_lock_lastSentKeyCommandsDispatchingRoots;
    unsigned int _lock_deferringSeed;
    NSMutableArray *_lock_deferringRules;
    NSArray *_lock_lastSentDeferringRules;
    unsigned int _lock_bufferingSeed;
    NSMutableDictionary *_lock_bufferingPredicates;
    NSSet *_lock_lastSentBufferingPredicates;
    unsigned int _lock_activeUIResponderSeed;
    NSMutableDictionary *_lock_activeUIResponderPredicates;
    NSSet *_lock_lastSentActiveUIResponderPredicates;
    unsigned int _lock_keyCommandsRegistrationSeed;
    NSMutableDictionary *_lock_keyCommandsRegistrations;
    NSDictionary *_lock_lastSentKeyCommandsRegistrations;
    NSSet *_lock_lastSentSetOfKeyCommandsRegistrations;
    NSObject<OS_dispatch_queue> *_implicitFlushQueue;
    struct __CFBoolean { } *_lock_needsFlush;
    long long _lock_preventFlushingSeed;
    BSMutableIntegerMap *_lock_preventFlushingReasons;
    id<BSInvalidatable> _lock_implicitPreventFlushingAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)transactionAssertionWithReason:(id)a0;
- (void)_coreSetUpWithServiceConnection:(id)a0;
- (id)_initForTestingWithService:(id)a0;
- (id)_initWithRemoteConnection;
- (void)_lock_flushIfNeeded;
- (void)_lock_implicitFlush;
- (id)_lock_stateDescription;
- (id)_lock_transactionAssertionWithReason:(id)a0;
- (void)_reconnectAfterServerInterruption;
- (void)_syncServiceFlushState;
- (id)bufferEventsMatchingPredicate:(id)a0 withReason:(id)a1;
- (id)connectionDescriptionForDeferringRuleIdentity:(id)a0;
- (id)connectionDescriptionForDeferringRuleWithSeed:(unsigned int)a0 pid:(int)a1;
- (id)deferEventsMatchingPredicate:(id)a0 toTarget:(id)a1 withReason:(id)a2;
- (id)deliveryGraphDescription;
- (id)dispatchDiscreteEventsForReason:(id)a0 withRules:(id)a1;
- (id)dispatchKeyCommandsForReason:(id)a0 withRule:(id)a1;
- (id)registerKeyCommands:(id)a0;
- (id)requestActiveUIResponderForDeferringPredicate:(id)a0 withReason:(id)a1;
- (id)resolutionDescriptionForEventDescriptor:(id)a0 sender:(id)a1;
- (id)resolutionDescriptionForKeyCommand:(id)a0 sender:(id)a1;
- (void)selectDeferringPredicate:(id)a0 withReason:(id)a1;

@end
