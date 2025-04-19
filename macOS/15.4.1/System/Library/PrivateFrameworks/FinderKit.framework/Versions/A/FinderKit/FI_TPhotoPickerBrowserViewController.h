@class NSArray, NSString, NSLayoutConstraint, PHPickerViewController;

@interface FI_TPhotoPickerBrowserViewController : FI_TBrowserViewController <PHPickerViewControllerDelegate> {
    NSString *_searchString;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_topConstraint;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
    struct condition_variable_any { struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } __cv_; struct shared_ptr<std::mutex> { struct mutex *__ptr_; struct __shared_weak_count *__cntrl_; } __mut_; } _loadingConditional;
    struct unordered_map<PHPickerResult *, NSURL *, std::hash<PHPickerResult *>, std::equal_to<PHPickerResult *>, std::allocator<std::pair<PHPickerResult *const, NSURL *>>> { struct __hash_table<std::__hash_value_type<PHPickerResult *, NSURL *>, std::__unordered_map_hasher<PHPickerResult *, std::__hash_value_type<PHPickerResult *, NSURL *>, std::hash<PHPickerResult *>, std::equal_to<PHPickerResult *>>, std::__unordered_map_equal<PHPickerResult *, std::__hash_value_type<PHPickerResult *, NSURL *>, std::equal_to<PHPickerResult *>, std::hash<PHPickerResult *>>, std::allocator<std::__hash_value_type<PHPickerResult *, NSURL *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSURL *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSURL *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSURL *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSURL *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSURL *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSURL *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSURL *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSURL *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSURL *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<PHPickerResult *, std::__hash_value_type<PHPickerResult *, NSURL *>, std::hash<PHPickerResult *>, std::equal_to<PHPickerResult *>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<PHPickerResult *, std::__hash_value_type<PHPickerResult *, NSURL *>, std::equal_to<PHPickerResult *>, std::hash<PHPickerResult *>>> { float __value_; } __p3_; } __table_; } _itemToURLMap;
    struct unordered_map<PHPickerResult *, NSProgress *, std::hash<PHPickerResult *>, std::equal_to<PHPickerResult *>, std::allocator<std::pair<PHPickerResult *const, NSProgress *>>> { struct __hash_table<std::__hash_value_type<PHPickerResult *, NSProgress *>, std::__unordered_map_hasher<PHPickerResult *, std::__hash_value_type<PHPickerResult *, NSProgress *>, std::hash<PHPickerResult *>, std::equal_to<PHPickerResult *>>, std::__unordered_map_equal<PHPickerResult *, std::__hash_value_type<PHPickerResult *, NSProgress *>, std::equal_to<PHPickerResult *>, std::hash<PHPickerResult *>>, std::allocator<std::__hash_value_type<PHPickerResult *, NSProgress *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSProgress *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSProgress *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSProgress *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSProgress *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSProgress *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSProgress *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSProgress *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSProgress *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<PHPickerResult *, NSProgress *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<PHPickerResult *, std::__hash_value_type<PHPickerResult *, NSProgress *>, std::hash<PHPickerResult *>, std::equal_to<PHPickerResult *>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<PHPickerResult *, std::__hash_value_type<PHPickerResult *, NSProgress *>, std::equal_to<PHPickerResult *>, std::hash<PHPickerResult *>>> { float __value_; } __p3_; } __table_; } _pendingItemToProgressMap;
}

@property (retain, nonatomic) PHPickerViewController *photoPicker;
@property (retain, nonatomic) NSArray *pickedItems;
@property (copy, nonatomic) NSString *searchNSString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)itemCount;
- (id).cxx_construct;
- (void)loadView;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })searchString;
- (id)selectedURLs;
- (int)viewStyle;
- (void)aboutToTearDown;
- (BOOL)containsNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)canChooseImages;
- (BOOL)canChooseMovies;
- (BOOL)nodeIsSelected:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)bestTypeToRequestForProvider:(id)a0;
- (void)dataSourceChanged:(const void *)a0;
- (void)deselectAllNodes;
- (id)filterForImagesOrVideosOrBoth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (unsigned long long)getSelectedNodesFromView:(void *)a0 upTo:(unsigned long long)a1;
- (void)getVisibleNodes:(void *)a0;
- (unsigned long long)indexForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)indexSetForNodes:(const void *)a0;
- (void *)itemToURLMap;
- (unsigned long long)mediaBrowserShownTypes;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })nodesInBrowser;
- (void *)pendingItemToProgressMap;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)privateBindSettings;
- (void)reloadIconsInView;
- (void)revealNodes:(const void *)a0 select:(BOOL)a1;
- (id)searchNSString;
- (void)selectAllNodes;
- (unsigned long long)selectedNodesCount;
- (void)setSearchNSString:(id)a0;
- (void)setSelectedNodes:(const void *)a0 byExtendingSelection:(BOOL)a1;
- (BOOL)startEditingWithNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 renameOp:(id)a1;
- (void)stopEditing:(BOOL)a0;
- (void)updateSTFEditorLocation;
- (void)updateSubviewContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
