@class UVCExtensionStateMachineEvent, UVCExtensionState;

@interface UVCExtensionStateTransition : NSObject

@property (retain) UVCExtensionState *srcState;
@property (retain) UVCExtensionState *dstState;
@property (retain) UVCExtensionStateMachineEvent *event;
@property (copy) id /* block */ guard;
@property (copy) id /* block */ action;

- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0 dstState:(id)a1 event:(id)a2 guard:(id /* block */)a3 action:(id /* block */)a4;
- (id)transactionFromStateOnEvent:(id)a0 event:(id)a1;

@end
