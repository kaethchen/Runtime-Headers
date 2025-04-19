@class NSSet, NSArray, NSMutableSet, NSMutableArray;

@interface _BKSHIDLocalEventDeliveryManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _lock_discreteDispatchingSeed;
    NSMutableSet *_lock_discreteDispatchingRoots;
    NSSet *_lock_lastSentDiscreteDispatchingRoots;
    unsigned int _lock_deferringSeed;
    NSMutableArray *_lock_deferringRules;
    NSArray *_lock_lastSentDeferringRules;
}

@property (copy, nonatomic) id /* block */ transactionHandler;

- (id)init;
- (void).cxx_destruct;
- (id)deferEventsMatchingPredicate:(id)a0 toTarget:(id)a1 withReason:(id)a2;
- (id)dispatchDiscreteEventsForReason:(id)a0 withRules:(id)a1;
- (void)_lock_flush;

@end
