@class NSString, NSView, NSProgressIndicator, NSMenu, NSMenuItem, FI_TRunAfterHelper;
@protocol FI_TPathSelectDelegate;

@interface FI_TPathSelectController : NSObject <NSMenuDelegate, TCoalescingNodeObserverProtocol, TMarkTornDown> {
    struct TFENodeSortedMap { struct unordered_map<TFENode, TFENodeSortedMap::TMapData, std::hash<TFENode>, std::equal_to<TFENode>, std::allocator<std::pair<const TFENode, TFENodeSortedMap::TMapData>>> { struct __hash_table<std::__hash_value_type<TFENode, TFENodeSortedMap::TMapData>, std::__unordered_map_hasher<TFENode, std::__hash_value_type<TFENode, TFENodeSortedMap::TMapData>, std::hash<TFENode>, std::equal_to<TFENode>>, std::__unordered_map_equal<TFENode, std::__hash_value_type<TFENode, TFENodeSortedMap::TMapData>, std::equal_to<TFENode>, std::hash<TFENode>>, std::allocator<std::__hash_value_type<TFENode, TFENodeSortedMap::TMapData>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, TFENodeSortedMap::TMapData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, TFENodeSortedMap::TMapData>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, TFENodeSortedMap::TMapData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, TFENodeSortedMap::TMapData>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, TFENodeSortedMap::TMapData>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, TFENodeSortedMap::TMapData>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, TFENodeSortedMap::TMapData>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TFENode, TFENodeSortedMap::TMapData>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, TFENodeSortedMap::TMapData>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TFENode, std::__hash_value_type<TFENode, TFENodeSortedMap::TMapData>, std::hash<TFENode>, std::equal_to<TFENode>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TFENode, std::__hash_value_type<TFENode, TFENodeSortedMap::TMapData>, std::equal_to<TFENode>, std::hash<TFENode>>> { float __value_; } __p3_; } __table_; } fNodeToIndexMap; struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } fSortedNodes; struct shared_ptr<TFENodeComparator> { struct TFENodeComparator *__ptr_; struct __shared_weak_count *__cntrl_; } fSortComparator; } _nodeMap;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _nodeObserver;
    struct optional<CGRect> { union { char __null_state_; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } __val_; } ; BOOL __engaged_; } _presentationRect;
    NSMenuItem *_currentMenuItem;
    NSMenuItem *_loadingMenuItem;
    NSView *_referenceView;
    struct optional<double> { union { char __null_state_; double __val_; } ; BOOL __engaged_; } _iconScaleFactor;
    struct optional<bool> { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } _darkBackground;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _slowLoadingToken;
    struct function<bool (const TFENode &)> { struct __value_func<bool (const TFENode &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _shouldShowNode;
}

@property (getter=isPopulated) BOOL populated;
@property (weak, nonatomic) NSProgressIndicator *loadingSpinner;
@property (weak, nonatomic) id<FI_TPathSelectDelegate> delegate;
@property (retain, nonatomic) NSMenu *peerMenu;
@property (readonly, nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } openedNode;
@property (readonly, nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } parentNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isTornDown) BOOL tornDown;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })confinementRectForMenu:(id)a0 onScreen:(id)a1;
- (BOOL)menu:(id)a0 updateItem:(id)a1 atIndex:(long long)a2 shouldCancel:(BOOL)a3;
- (void)menuDidClose:(id)a0;
- (long long)numberOfItemsInMenu:(id)a0;
- (void)aboutToTearDown;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })allNodes;
- (void)updateAll;
- (void)batchIconFetch:(id)a0 nodes:(const void *)a1;
- (void)coalescingNodeObserver:(void *)a0 nodesAdded:(const void *)a1 toObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 nodesChanged:(const void *)a1 inObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 syncCompleted:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)configureItem:(id)a0 forNode:(struct TFENode { struct OpaqueNodeRef *x0; })a1 asyncIconFetch:(BOOL)a2;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })filterNodes:(const void *)a0;
- (id)initWithParent:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 openedFromNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (id)newMenuItemForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 fetchIcon:(BOOL)a1;
- (void)prepareWithReferenceView:(id)a0;
- (void)presentPeerMenuFromView:(id)a0 event:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)selectedPeer:(id)a0;

@end
