@class NSString, IFJS_Context, PKDistributionValueNode, PKDistributionScript, NSObject, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PKDistributionEvaluator : NSObject <PKDistributionValueNodeCallerTrackingDelegate> {
    struct OpaqueJSContext { } *_context;
    IFJS_Context *_globalObject;
    NSObject<OS_dispatch_queue> *_evaluationQueue;
    NSObject<OS_dispatch_group> *_evaluationGroup;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    PKDistributionValueNode *_nodeBeingEvaluated;
    PKDistributionScript *_unevaluatedTopScript;
    NSMutableSet *_registeredNodes;
    BOOL _isTerminating;
}

@property BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)finalize;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)terminate;
- (void)setNotifyQueue:(id)a0;
- (id)notifyQueue;
- (void)waitUntilQuiescent;
- (struct OpaqueJSContext { } *)jsContext;
- (id)globalObject;
- (id)_evaluateNode:(id)a0 returningError:(id *)a1;
- (id)_evaluateScript:(id)a0 forNode:(id)a1 error:(id *)a2;
- (id)callingNode;
- (id)evaluateExpression:(id)a0 returningError:(id *)a1;
- (void)evaluateNode:(id)a0;
- (void)evaluateNode:(id)a0 notifyBlock:(id /* block */)a1;
- (id)evaluateSingleNodeBlocking:(id)a0 returningError:(id *)a1 modifyingContext:(id /* block */)a2;
- (id)initWithEvaluationQueue:(id)a0 topScript:(id)a1;
- (void)registerNodeForCallerTracking:(id)a0;

@end
