@class FI_TNotificationCenterObserverGlue, NSString, FI_TRunAfterHelper, QLPreviewPanel, NSObject;
@protocol TQLPreviewWindowControllerProtocol;

@interface FI_TQLPreviewWindowController : NSObject <QLPreviewPanelDataSource, QLPreviewPanelDelegate, FIAliasResolution, TCoalescingNodeObserverProtocol> {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _nodes;
    struct TNSWeakPtr<NSObject<TQLPreviewWindowControllerProtocol>> { NSObject<TQLPreviewWindowControllerProtocol> *fWeakObject; } _weakActiveViewController;
    unsigned int _avcRespondsToFlags;
    QLPreviewPanel *_previewPanel;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _nodeObserver;
    struct shared_ptr<TQLPreviewWindowQTEjectHelper> { struct TQLPreviewWindowQTEjectHelper *__ptr_; struct __shared_weak_count *__cntrl_; } _ejectHelper;
    BOOL _canZoom;
    struct unordered_map<TFENode, std::pair<TString, TString>, std::hash<TFENode>, std::equal_to<TFENode>, std::allocator<std::pair<const TFENode, std::pair<TString, TString>>>> { struct __hash_table<std::__hash_value_type<TFENode, std::pair<TString, TString>>, std::__unordered_map_hasher<TFENode, std::__hash_value_type<TFENode, std::pair<TString, TString>>, std::hash<TFENode>, std::equal_to<TFENode>>, std::__unordered_map_equal<TFENode, std::__hash_value_type<TFENode, std::pair<TString, TString>>, std::equal_to<TFENode>, std::hash<TFENode>>, std::allocator<std::__hash_value_type<TFENode, std::pair<TString, TString>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::pair<TString, TString>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::pair<TString, TString>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::pair<TString, TString>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::pair<TString, TString>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::pair<TString, TString>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::pair<TString, TString>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::pair<TString, TString>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TFENode, std::pair<TString, TString>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, std::pair<TString, TString>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TFENode, std::__hash_value_type<TFENode, std::pair<TString, TString>>, std::hash<TFENode>, std::equal_to<TFENode>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TFENode, std::__hash_value_type<TFENode, std::pair<TString, TString>>, std::equal_to<TFENode>, std::hash<TFENode>>> { float __value_; } __p3_; } __table_; } _nodeNames;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _dateTimeFormattersChangedObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _previewPanelWillClosedObserver;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _tearDownToken;
}

@property (weak, nonatomic) NSObject<TQLPreviewWindowControllerProtocol> *activeViewController;
@property (nonatomic) BOOL positionNearPreviewItem;
@property (nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } overrideNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controller;
+ (BOOL)isActiveViewController:(id)a0;
+ (BOOL)panelExists;
+ (BOOL)panelIsShowing;
+ (id)quickLookMenuItemTitleForNodes:(const void *)a0 actualCount:(unsigned long long)a1 fullScreen:(BOOL)a2;
+ (BOOL)quickLookShouldOpenFullscreenWithEvent:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)beginPreviewPanelControl:(id)a0;
- (void)endPreviewPanelControl:(id)a0;
- (void)hide;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)a0;
- (BOOL)previewPanel:(id)a0 handleEvent:(id)a1;
- (id)previewPanel:(id)a0 previewItemAtIndex:(long long)a1;
- (BOOL)previewPanel:(id)a0 shouldOpenURL:(id)a1 forPreviewItem:(id)a2;
- (BOOL)previewPanel:(id)a0 shouldShowOpenButtonForItem:(id)a1;
- (BOOL)previewPanel:(id)a0 shouldShowShareButtonForItem:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewPanel:(id)a0 sourceFrameOnScreenForPreviewItem:(id)a1;
- (id)previewPanel:(id)a0 transitionImageForPreviewItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)reloadData;
- (const void *)nodes;
- (void)setNodes:(const void *)a0;
- (id)previewPanel:(id)a0 sharedPreviewViewForPreviewItem:(id)a1;
- (void)removeNodes:(const void *)a0;
- (void)alias:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 resolvedAs:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 temporaryNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)previewAtIndex:(long long)a0;
- (void)showFullScreen:(BOOL)a0;
- (void)coalescingNodeObserver:(void *)a0 nodesChanged:(const void *)a1 inObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 nodesDeleted:(const void *)a1 fromObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 nodesGoingAway:(const void *)a1;
- (void)previewPanelWillClose:(id)a0;
- (void)refreshCurrentPreviewNode;
- (void)setCanZoom:(BOOL)a0;
- (void)updateDisplayedDates;
- (void)updatePanelConfigurationForBackupBrowser:(BOOL)a0;
- (void)updatePreviewPanel;

@end
