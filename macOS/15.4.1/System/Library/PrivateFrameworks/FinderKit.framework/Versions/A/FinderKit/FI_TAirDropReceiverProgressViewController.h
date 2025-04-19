@class NSString, NSMutableArray;

@interface FI_TAirDropReceiverProgressViewController : FI_IAirDropProgressViewController <TDraggingSource> {
    struct shared_ptr<TAirDropReceiverOperationController> { struct TAirDropReceiverOperationController *__ptr_; struct __shared_weak_count *__cntrl_; } _receiverOpController;
    NSMutableArray *_downloads;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startReceivingWithOperation:(struct __SFOperation { } *)a0;
+ (void)startReceivingWithTransfer:(id)a0 node:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 receiverOpController:(struct shared_ptr<TAirDropReceiverOperationController> { struct TAirDropReceiverOperationController *x0; struct __shared_weak_count *x1; })a2;

- (void).cxx_destruct;
- (void)resume;
- (id).cxx_construct;
- (void)cancelButtonPressed:(id)a0;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (BOOL)ignoreModifierKeysForDraggingSession:(id)a0;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)a0;
- (void)aboutToTearDown;
- (void)okButtonPressed:(id)a0;
- (void)browserViewWillBeRemovedFromWindow;
- (id)createProgressForURL:(id)a0;
- (long long)currentSFOperationEvent;
- (id)initWithReceiverOperation:(struct __SFOperation { } *)a0;
- (id)initWithTransfer:(id)a0 node:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 receiverOpController:(struct shared_ptr<TAirDropReceiverOperationController> { struct TAirDropReceiverOperationController *x0; struct __shared_weak_count *x1; })a2;
- (void)openButtonPressed:(id)a0;
- (struct shared_ptr<IAirDropBaseOperationController> { struct IAirDropBaseOperationController *x0; struct __shared_weak_count *x1; })operationController;
- (void)preflightSFOperationEvent:(long long)a0 results:(id)a1 opController:(void *)a2;
- (void)sfOperationEventAskUser:(id)a0 opController:(void *)a1;
- (void)sfOperationEventBlocked:(id)a0 opController:(void *)a1;
- (void)sfOperationEventCanceled:(id)a0 opController:(void *)a1;
- (void)sfOperationEventConflict:(id)a0 opController:(void *)a1;
- (void)sfOperationEventConnecting:(id)a0 opController:(void *)a1;
- (void)sfOperationEventConverting:(id)a0 opController:(void *)a1;
- (void)sfOperationEventErrorOccurred:(id)a0 opController:(void *)a1;
- (void)sfOperationEventFinished:(id)a0 opController:(void *)a1;
- (void)sfOperationEventPostprocess:(id)a0 opController:(void *)a1;
- (void)sfOperationEventPreprocess:(id)a0 opController:(void *)a1;
- (void)sfOperationEventProgress:(id)a0 opController:(void *)a1;
- (void)sfOperationEventStarted:(id)a0 opController:(void *)a1;
- (BOOL)shouldShowFlyOverAnimation;
- (void)showOrUpdateAskUserView;
- (void)showOrUpdateStatusView;
- (void)startDragInView:(id)a0 withEvent:(id)a1;
- (void)superOKButtonPressed:(id)a0;

@end
