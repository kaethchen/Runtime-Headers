@class NSString, PFStateMachineNode, PFStateMachineGraph, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PFStateMachine : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PFStateMachineGraph *_graph;
    PFStateMachineNode *_previousNode;
    PFStateMachineNode *_currentNode;
    id _owner;
    id _delayedEventCancelToken;
    NSMutableArray *_subflowStack;
}

@property (readonly) NSString *name;
@property (readonly) id uuid;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)previousNode;
- (id)owner;
- (void)_handleEvent:(id)a0;
- (void)handleEvent:(id)a0;
- (id)graph;
- (id)currentNode;
- (void)trace:(id)a0;
- (void)_cancelLastDelayedEvent;
- (id)_popReturnTransition;
- (void)_pushReturnTransition:(id)a0;
- (void)atomicHandleEvent:(id /* block */)a0;
- (void)atomicHandleEventAsync:(id /* block */)a0;
- (id)atomicQueue;
- (id)initWithGraph:(id)a0 name:(id)a1 owner:(id)a2;
- (void)postEvent:(id)a0 afterTimeout:(double)a1;
- (void)traceObject:(id)a0 state:(id)a1;

@end
