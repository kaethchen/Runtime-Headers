@class NSString, FI_TRunAfterHelper, NSArray, NSIndexSet, NSObject, FI_TKeyValueObserverGlue;

@interface FI_TPropertyColumnPreviewSmallIconController : FI_TPropertyImageViewController <TPropertyThumbnailExtractorDelegate, TDraggingSource, TThumbnailExtractorDelegate> {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _nodes;
    struct unordered_set<TFENode, std::hash<TFENode>, std::equal_to<TFENode>, std::allocator<TFENode>> { struct __hash_table<TFENode, std::hash<TFENode>, std::equal_to<TFENode>, std::allocator<TFENode>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<TFENode, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TFENode, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<TFENode, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TFENode, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TFENode, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TFENode, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<TFENode, void *> *>, std::allocator<std::__hash_node<TFENode, void *>>> { struct __hash_node_base<std::__hash_node<TFENode, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<TFENode>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<TFENode>> { float __value_; } __p3_; } __table_; } _pendingKeyNodes;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _pendingKeyNodesToken;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct __compressed_pair<TNotificationCenterObserver *, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__value_; } __end_cap_; } _viewObservers;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _effectiveAppearanceObserver;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _updateAfterResizeToken;
    NSObject *_cachedValue;
}

@property BOOL wantsToWaitForThumbnails;
@property (nonatomic, getter=isApplicableToUI) BOOL applicableToUI;
@property (readonly, nonatomic) struct vector<std::pair<TFENode, NSImage *>, std::allocator<std::pair<TFENode, NSImage *>>> { void *x0; void *x1; struct __compressed_pair<std::pair<TFENode, NSImage *> *, std::allocator<std::pair<TFENode, NSImage *>>> { void *x0; } x2; } nodeToImageList;
@property (nonatomic) struct TFENode { struct OpaqueNodeRef *x0; } browserTargetNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingShouldBeVisible;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)flush;
- (void)aboutToTearDown;
- (void)configureView;
- (void)initCommon;
- (void)flushCachedValue;
- (BOOL)shouldBeVisible;
- (void)updateIconSize;
- (void)invalidateThumbnailForKeyNodes:(const void *)a0;
- (id)beginDraggingNodes:(const void *)a0 mouseDownEvent:(id)a1;
- (void)configureThumbnailer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 iconSize:(double)a1 scaleFactor:(double)a2;
- (id)dragFlockingImageComponentsForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)fetchIconifiedThumbnails;
- (void)imageViewBackingPropertiesChanged;
- (void)imageViewEffectiveAppearanceChanged;
- (BOOL)isAllowedToDragNodes:(const void *)a0;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (void)startDragInView:(id)a0 withEvent:(id)a1;
- (struct TFENode { struct OpaqueNodeRef *x0; })thumbnailTargetNodeForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)thumbnailValueExtractor;
- (void)timesUpWaitingForThumbs;
- (void)updateWithNodes:(const void *)a0;
- (void)waitForThumbnail:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;

@end
