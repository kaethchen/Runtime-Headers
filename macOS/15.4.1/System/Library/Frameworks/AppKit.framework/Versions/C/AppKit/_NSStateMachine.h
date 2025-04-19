@class NSMutableDictionary;

@interface _NSStateMachine : NSObject {
    unsigned long long _stateCount;
    unsigned long long _eventCount;
    struct { unsigned long long x0; unsigned long long x1; BOOL x2; unsigned long long x3; id /* block */ x4; id /* block */ x5; } *_transitionTable;
    NSMutableDictionary *_stateChangeObservers;
}

@property (nonatomic) unsigned long long state;

+ (void)debugAttemptedInvalidStateTransitionFromState:(unsigned long long)a0 withEvent:(unsigned long long)a1;
+ (void)debugStateTransitionFromState:(unsigned long long)a0 withEvent:(unsigned long long)a1 toState:(unsigned long long)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_iterateTransitionTable:(id /* block */)a0;
- (unsigned long long)_totalStateCount;
- (id)_transitionDescriptions;
- (void)handleEvent:(unsigned long long)a0 withContext:(id)a1;
- (id)initWithStates:(unsigned long long)a0 events:(unsigned long long)a1 initialState:(unsigned long long)a2;
- (void)setStateChangeObserver:(unsigned long long)a0 observer:(id /* block */)a1;
- (void)setStaticTransitionFromState:(unsigned long long)a0 withEvent:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)setTransitionHandlerForState:(unsigned long long)a0 withEvent:(unsigned long long)a1 transitionHandler:(id /* block */)a2;
- (void)setTransitionHandlerForState:(unsigned long long)a0 withEvent:(unsigned long long)a1 transitionHandler:(id /* block */)a2 postTransitionHandler:(id /* block */)a3;

@end
