@class BKSHIDEventAuthenticationOriginator, BKSHIDEventDisplay, NSMutableDictionary, NSDictionary, BSMutableIntegerMap, BKEventDeferringGraph, NSMutableArray, NSSet;
@protocol BKHIDEventBufferingHIDSystem, BKHIDEventDeliveryResolutionObserver;

@interface BKHIDEventDeliveryManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_deliveryRoots;
    unsigned long long _deliveryRootsEventTypeMask;
    NSMutableArray *_keyCommandDeliveryRoots;
    NSMutableDictionary *_buffersByDispatchTarget;
    BKEventDeferringGraph *_deferringGraph;
    BSMutableIntegerMap *_deferringRulesByPID;
    BSMutableIntegerMap *_bufferingPredicatesByPID;
    BSMutableIntegerMap *_clientsByPID;
    NSSet *_allObserverResolutions;
    NSMutableDictionary *_destinationCacheBySender;
}

@property (retain, nonatomic) id<BKHIDEventDeliveryResolutionObserver> resolutionObserver;
@property (retain, nonatomic) id<BKHIDEventBufferingHIDSystem> bufferingDispatcher;
@property (readonly, nonatomic) NSDictionary *currentBuffersPerDispatchTarget;
@property (retain, nonatomic) BKSHIDEventDisplay *mainDisplay;
@property (readonly, nonatomic) BKSHIDEventAuthenticationOriginator *authenticationOriginator;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)connectionDescriptionForDeferringRuleIdentity:(id)a0;
- (id)deferEventsMatchingPredicate:(id)a0 toTarget:(id)a1 withReason:(id)a2;
- (id)deliveryGraphDescription;
- (id)dispatchDiscreteEventsForReason:(id)a0 withRules:(id)a1;
- (void)processDidTerminate:(int)a0;
- (void)_server_submitLocalRuleChanges:(id)a0;
- (id)descriptionOfResolutionPathForEventDescriptor:(id)a0 senderDescriptor:(id)a1;
- (void)reevaluateBufferingWithContext:(id)a0;
- (void)_fireTimeoutForPID:(int)a0 bufferingPredicates:(id)a1 client:(id)a2;
- (void)_server_setLocalDeliveryManager:(id)a0;
- (id)_test_deliveryRootForIdentifier:(id)a0;
- (id)descriptionOfResolutionPathForKeyCommand:(id)a0 senderDescriptor:(id)a1;
- (id)destinationsForEvent:(struct __IOHIDEvent { } *)a0 sender:(id)a1;
- (id)destinationsForKeyCommand:(id)a0 sender:(id)a1;
- (id)destinationsStartingFromPID:(int)a0 deferringPredicate:(id)a1;
- (void)forceSelectDeferringTarget:(id)a0 forEnvironment:(id)a1 forClientWithPID:(int)a2;
- (id)initWithObserverService:(id)a0;
- (void)selectDeferringPredicate:(id)a0 forClientWithPID:(int)a1;
- (id)sequenceForFirstEvent:(struct __IOHIDEvent { } *)a0 sender:(id)a1 processor:(id)a2 dispatcher:(id)a3 additionalContext:(id)a4;
- (id)sequenceForKeyCommand:(id)a0 sender:(id)a1 processor:(id)a2 dispatcher:(id)a3 additionalContext:(id)a4;
- (id)server_localDeliveryManager;
- (void)setActiveUIResponders:(id)a0 forClientWithPID:(int)a1;
- (void)setDeferringRules:(id)a0 forClientWithPID:(int)a1;
- (void)setDispatchingRoots:(id)a0 forClientWithPID:(int)a1;
- (void)setEventBufferingPredicates:(id)a0 forClientWithPID:(int)a1;
- (void)setKeyCommandRoots:(id)a0 forClientWithPID:(int)a1;
- (void)setKeyCommandsRegistrations:(id)a0 forClientWithPID:(int)a1;

@end
