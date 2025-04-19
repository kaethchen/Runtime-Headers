@class NSString;

@interface FI_TPromiseDragReceiver : NSObject <TCoalescingNodeObserverProtocol> {
    struct function<void (const TFENode &)> { struct __value_func<void (const TFENode &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _promiseDragNodeAddedCallback;
    struct function<void (const TFENodeVector &, const TError &)> { struct __value_func<void (const TFENodeVector &, const TError &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _promiseDragCompletionCallback;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _nodeObserver;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _dropTargetNode;
    struct vector<TString, std::allocator<TString>> { struct TString *__begin_; struct TString *__end_; struct __compressed_pair<TString *, std::allocator<TString>> { struct TString *__value_; } __end_cap_; } _rawNamesOfPendingPromisedNodes;
    struct shared_ptr<TPromiseDragReceiverThread> { struct TPromiseDragReceiverThread *__ptr_; struct __shared_weak_count *__cntrl_; } _receiverThread;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)aboutToTearDown;
- (void)coalescingNodeObserver:(void *)a0 nodesAdded:(const void *)a1 toObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 nodesChanged:(const void *)a1 inObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 openSyncCompleted:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (id)initWithDropTargetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)receivePromiseDrag:(void *)a0 nodeAddedCallback:(const void *)a1 completionCallback:(const void *)a2;
- (void)waitForPromisedNodesAsync;

@end
