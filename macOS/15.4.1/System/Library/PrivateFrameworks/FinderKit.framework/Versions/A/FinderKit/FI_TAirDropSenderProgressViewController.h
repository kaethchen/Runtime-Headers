@class NSImage, NSString, FI_TPropertyLogicalSizeExtractor;

@interface FI_TAirDropSenderProgressViewController : FI_IAirDropProgressViewController <TCoalescingNodeObserverProtocol> {
    struct shared_ptr<TAirDropSenderOperationController> { struct TAirDropSenderOperationController *__ptr_; struct __shared_weak_count *__cntrl_; } _senderOpController;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _nodesBeingSent;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _nodeObserver;
    FI_TPropertyLogicalSizeExtractor *_sizeExtractor;
}

@property (copy, nonatomic) NSImage *largeImage;
@property (readonly, nonatomic) long long previousSFOperationEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startSendingNodes:(const void *)a0 toReceiverNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 requestSource:(const void *)a2;

- (void).cxx_destruct;
- (void)resume;
- (id).cxx_construct;
- (void)cancelButtonPressed:(id)a0;
- (void)aboutToTearDown;
- (void)browserViewWillBeRemovedFromWindow;
- (void)coalescingNodeObserver:(void *)a0 bulkNodesChanged:(const void *)a1;
- (long long)currentSFOperationEvent;
- (id)initWithReceiverServerNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 nodesToSend:(const void *)a1 requestSource:(const void *)a2;
- (struct shared_ptr<IAirDropBaseOperationController> { struct IAirDropBaseOperationController *x0; struct __shared_weak_count *x1; })operationController;
- (void)sfOperationEventAskUser:(id)a0 opController:(void *)a1;
- (void)sfOperationEventBlocked:(id)a0 opController:(void *)a1;
- (void)sfOperationEventCanceled:(id)a0 opController:(void *)a1;
- (void)sfOperationEventConflict:(id)a0 opController:(void *)a1;
- (void)sfOperationEventConnecting:(id)a0 opController:(void *)a1;
- (void)sfOperationEventErrorOccurred:(id)a0 opController:(void *)a1;
- (void)sfOperationEventFinished:(id)a0 opController:(void *)a1;
- (void)sfOperationEventPostprocess:(id)a0 opController:(void *)a1;
- (void)sfOperationEventPreprocess:(id)a0 opController:(void *)a1;
- (void)sfOperationEventProgress:(id)a0 opController:(void *)a1;
- (void)sfOperationEventStarted:(id)a0 opController:(void *)a1;
- (void)sfOperationEventWaitForAnswer:(id)a0 opController:(void *)a1;
- (void)showOrUpdateStatusView;

@end
