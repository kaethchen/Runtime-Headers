@class VSOptional, NSMutableDictionary, NSString, NSOperationQueue, NSMutableArray;
@protocol VSStateMachineDelegate;

@interface VSStateMachine : NSObject {
    _Atomic int _mode;
}

@property (retain, nonatomic) NSOperationQueue *transitionQueue;
@property (retain, nonatomic) VSOptional *currentState;
@property (retain, nonatomic) NSMutableArray *enqueuedTransitions;
@property (retain, nonatomic) NSMutableDictionary *transitionTable;
@property (retain, nonatomic) NSMutableDictionary *ignoredEventsByState;
@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<VSStateMachineDelegate> delegate;
@property (nonatomic) BOOL ignoresUnassignedEvents;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)enqueueEvent:(id)a0;
- (void)_enteringState:(id)a0;
- (void)_exitingState:(id)a0;
- (void)_handleEnqueuedTransitions;
- (void)_setDestinationState:(id)a0 forEvent:(id)a1 inState:(id)a2 ignoringEvent:(BOOL)a3;
- (void)activateWithState:(id)a0;
- (void)ignoreEvent:(id)a0 inState:(id)a1;
- (void)setDestinationState:(id)a0 forEvent:(id)a1 inState:(id)a2;

@end
