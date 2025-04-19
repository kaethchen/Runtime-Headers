@class FI_TKeyValueObserverGlue, NSString, NSArray, NSArrayController, FI_TQueuedPopoverController, NSObject, FI_TNotificationCenterObserverGlue, NSIndexSet;

@interface FI_TAirDropProgressController : NSObject <TMarkTornDown> {
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _targetNode;
    FI_TQueuedPopoverController *_popoverController;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _stateText;
    NSArrayController *_allViewArrayController;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _popoverHostScrollViewWillMoveToWindowObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _popoverWillCloseObserver;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _currentSFOperationEventObserver;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _percentCompleteObserver;
}

@property (nonatomic) BOOL inlineProgressIsHidden;
@property (readonly) double percentComplete;
@property (readonly) BOOL indeterminateProgress;
@property (readonly, copy) NSString *stateText;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enumerateDelegates:(const void *)a0;
+ (BOOL)isPopoverShown;
+ (BOOL)isPopoverShownForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (BOOL)isProgressForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (id)progressControllerForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (void)registerProgressControllerDelegate:(id)a0;
+ (void)registerProgressViewController:(id)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
+ (void)showPopoverTransientForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (void)startReceivingWithOperation:(struct __SFOperation { } *)a0;
+ (void)startReceivingWithTransfer:(id)a0 node:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
+ (void)startSendingNodes:(const void *)a0 toReceiverNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 requestSource:(const void *)a2;
+ (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })stateTextForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (void)tearDownControllers;
+ (void)unregisterProgressControllerDelegate:(id)a0;
+ (void)unregisterProgressViewController:(id)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)cancel;
- (void)showPopover;
- (void)update;
- (void)aboutToTearDown;
- (void)closePopover;
- (void)setTargetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })targetNode;
- (void)updateStateText;
- (void)aboutToTearDownPopover;
- (void)addProgressViewController:(id)a0;
- (void)closeInlineProgress;
- (void)currentSFOperationEventChanged;
- (id)getOrCreateFrontMostDelegate;
- (id)initWithTargetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)isPopoverShown;
- (void)percentCompleteChanged;
- (void)popoverHostScrollViewWillMoveToWindow:(id)a0;
- (void)popoverWillClose;
- (void)removeProgressViewController:(id)a0;
- (BOOL)shouldShowInlineProgress;
- (BOOL)shouldShowPopover:(BOOL *)a0;
- (void)showInlineProgress;
- (void)showPopoverLocked:(BOOL)a0;
- (void)showPopoverTransient;
- (void)updateIndeterminateProgressState;

@end
