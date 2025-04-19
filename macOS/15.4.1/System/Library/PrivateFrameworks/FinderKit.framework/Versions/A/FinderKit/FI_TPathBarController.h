@class FI_TKeyValueObserverGlue, NSString, NSArray, FI_TPathSelectController, FI_TEphemeralPathBarDisplayController, FI_TRunAfterHelper, NSTrackingArea, FI_TPathControl, FI_TNotificationCenterObserverGlue, NSObject, NSIndexSet;
@protocol FI_TPathBarContainerDelegate;

@interface FI_TPathBarController : FI_TViewController <FI_TPathSelectDelegate, TPathControlDelegate, TNodeObserverProtocol, NSMenuDelegate, TMarkTornDown> {
    FI_TPathControl *_pathControl;
    struct shared_ptr<TNodeObserverCocoaBridge> { struct TNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _nodeObserver;
    struct TNSWeakPtr<NSObject<FI_TPathBarContainerDelegate>> { NSObject<FI_TPathBarContainerDelegate> *fWeakObject; } _containerDelegate;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _commonPathVector;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _observedSelection;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _backingPropertiesChangedObserver;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _effectiveAppearanceObserver;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _refreshToken;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _singleClickDelayToken;
    NSTrackingArea *_ephemeralMouseOverTrackingArea;
    double _barHeight;
}

@property (readonly, weak) NSObject<FI_TPathBarContainerDelegate> *containerDelegate;
@property (retain, nonatomic) FI_TPathSelectController *pathSelectController;
@property (readonly, nonatomic, getter=isEphemeral) BOOL ephemeral;
@property (readonly, weak, nonatomic) FI_TEphemeralPathBarDisplayController *ephemeralDisplayController;
@property (nonatomic) BOOL trackingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isTornDown) BOOL tornDown;

+ (double)defaultPathBarHeight;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)loadView;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)viewDidLayout;
- (void)aboutToTearDown;
- (void)refresh;
- (void)configureView;
- (void)initCommon;
- (void)scheduleUpdate;
- (BOOL)commonPathForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 andSelection:(const void *)a1;
- (void)clearCommonPathNodes;
- (void)clearObservedSelection;
- (void)handleSingleClickOnNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 event:(id)a1 cell:(id)a2 pathSelect:(id)a3;
- (id)initWithContainerDelegate:(id)a0;
- (id)initWithEphemeralDisplayController:(id)a0 containerDelegate:(id)a1 height:(struct optional<double> { union { char x0; double x1; } x0; BOOL x1; })a2;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)nodeForCell:(id)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })nodeForClickedCell;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)nodeInPathBar:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)nodeObserver:(void *)a0 nodeChanged:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 inObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2 property:(unsigned int)a3;
- (void)nodeObserver:(void *)a0 nodeDeleted:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 fromObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)pathControlDoubleClick:(id)a0;
- (void)pathControlSingleClick:(id)a0;
- (void)pathSelect:(id)a0 didSelectNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)pathSelectMenuDidClose:(id)a0;
- (BOOL)preflightSelection:(const void *)a0 commonParent:(struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)setTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 selection:(const void *)a1;
- (void)updateEphemeralTrackingArea;
- (void)updatePathComponents;
- (void)updateSelection:(const void *)a0 forceUpdate:(BOOL)a1;

@end
