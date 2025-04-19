@class NSMutableDictionary, NSMutableArray, UVCExtensionState;

@interface UVCExtensionStateMachine : NSObject {
    NSMutableArray *_transactions;
    id _owner;
    NSMutableArray *_previousStates;
    NSMutableDictionary *_events;
}

@property (retain) UVCExtensionState *currentState;
@property (retain) NSMutableArray *deferredEvents;

- (void).cxx_destruct;
- (id)initWithOwner:(id)a0;
- (void)addEvents:(id)a0;
- (void)addStateTransitions:(id)a0;
- (id)getDeferredEventToPost;
- (id)getNewStateAfterPostingDeferredEvents:(id)a0 deferredEventToPost:(id *)a1;
- (BOOL)postEventWithName:(id)a0 error:(id *)a1;
- (BOOL)postSameStateAction:(id)a0 transition:(id)a1 event:(id)a2 error:(id *)a3;
- (BOOL)postStateChangeAction:(id)a0 transition:(id)a1 event:(id)a2 error:(id *)a3;

@end
