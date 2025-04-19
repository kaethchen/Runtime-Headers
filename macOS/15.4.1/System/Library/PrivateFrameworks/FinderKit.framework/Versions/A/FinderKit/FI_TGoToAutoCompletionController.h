@class NSString, NSArray;
@protocol FI_TGoToAutoCompletionControllerDelegate;

@interface FI_TGoToAutoCompletionController : NSObject <NSCopying> {
    struct TSpinLock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } fSpinLock; } _lock;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _pathToCompleteStr;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _adjustedPathToCompleteStr;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _nodesInPath;
    BOOL _adjustedPathToCompleteIsValid;
    BOOL _isAdjustedPathFolderFullyResolved;
    BOOL _isAutoCompleting;
    BOOL _isQuit;
    struct vector<TCompletionNodeAndNames, std::allocator<TCompletionNodeAndNames>> { struct TCompletionNodeAndNames *__begin_; struct TCompletionNodeAndNames *__end_; struct __compressed_pair<TCompletionNodeAndNames *, std::allocator<TCompletionNodeAndNames>> { struct TCompletionNodeAndNames *__value_; } __end_cap_; } _completionNodesAndNames;
    struct vector<TCompletionNodeAndNames, std::allocator<TCompletionNodeAndNames>> { struct TCompletionNodeAndNames *__begin_; struct TCompletionNodeAndNames *__end_; struct __compressed_pair<TCompletionNodeAndNames *, std::allocator<TCompletionNodeAndNames>> { struct TCompletionNodeAndNames *__value_; } __end_cap_; } _filteredSortedCompletionNodesAndNames;
    NSArray *_itemsInPath;
    struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _updatePathHandler;
    struct function<void (NSArray<id<TGoToItemProtocol>> *)> { struct __value_func<void (NSArray<id<TGoToItemProtocol>> *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _suggestionsHandler;
    struct function<TString (const TString &)> { struct __value_func<TString (const TString &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _autoCompleteHandler;
    struct function<void (const TFENode &, const TString &)> { struct __value_func<void (const TFENode &, const TString &)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _completionHandler;
}

@property (readonly, nonatomic) NSString *pathToCompleteStr;
@property (readonly, nonatomic) NSString *adjustedPathToCompleteStr;
@property (readonly, nonatomic) NSArray *itemsInPath;
@property (readonly, nonatomic) BOOL adjustedPathToCompleteIsValid;
@property (readonly, nonatomic) BOOL isAutoCompleting;
@property (readonly, nonatomic) BOOL isAdjustedPathFolderFullyResolved;
@property (readonly, nonatomic) BOOL isQuit;
@property (weak, nonatomic) id<FI_TGoToAutoCompletionControllerDelegate> delegate;

+ (struct vector<TCompletionNodeAndNames, std::allocator<TCompletionNodeAndNames>> { struct TCompletionNodeAndNames *x0; struct TCompletionNodeAndNames *x1; struct __compressed_pair<TCompletionNodeAndNames *, std::allocator<TCompletionNodeAndNames>> { struct TCompletionNodeAndNames *x0; } x2; })_filterCompletionNodesAndNames:(const void *)a0 withPartialWord:(const void *)a1;
+ (id)filteredSuggestedItemsForResult:(const struct TGoToAutoCompletionResult { id x0; id x1; BOOL x2; } *)a0 delegate:(id)a1 path:(const void *)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)quit;
- (BOOL)_isQuit;
- (BOOL)_adjustedPathToCompleteIsValid;
- (const void *)_adjustedPathToCompleteStr;
- (BOOL)_canReuseControllerWithPath:(const void *)a0;
- (const void *)_completionNodesAndNames;
- (const void *)_filteredSortedCompletionNodesAndNames;
- (BOOL)_isAutoCompleting;
- (id)_itemsInPath;
- (const void *)_nodesInPath;
- (const void *)_pathToCompleteStr;
- (void)_setAdjustedPathToCompleteIsValid:(BOOL)a0;
- (void)_setAdjustedPathToCompleteStr:(const void *)a0;
- (void)_setCompletionNodesAndNames:(const void *)a0;
- (void)_setFilteredSortedCompletionNodesAndNames:(const void *)a0;
- (void)_setIsAdjustedPathFolderFullyResolved:(BOOL)a0;
- (void)_setIsAutoCompleting:(BOOL)a0;
- (void)_setItemsInPath:(id)a0;
- (void)_setNodesInPath:(const void *)a0;
- (void)_setPathToCompleteStr:(const void *)a0;
- (void)_setQuit:(BOOL)a0;
- (void)autoCompletePath:(id)a0 relativeToItem:(id)a1 allowLeftoverLastPathComponent:(BOOL)a2 updatePathHandler:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a3 suggestionsHandler:(struct function<void (NSArray<id<TGoToItemProtocol>> *)> { struct __value_func<void (NSArray<id<TGoToItemProtocol>> *)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a4;
- (void)autoCompletePath:(const void *)a0 relativeToNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 allowLeftoverLastPathComponent:(BOOL)a2 updatePathHandler:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a3 autoCompleteHandler:(struct function<TString (const TString &)> { struct __value_func<TString (const TString &)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a4 completionHandler:(struct function<void (const TFENode &, const TString &)> { struct __value_func<void (const TFENode &, const TString &)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a5;
- (BOOL)canReuseControllerWithPath:(const void *)a0;
- (id)completionNamesForPartialWord:(const void *)a0;
- (struct vector<TCompletionNodeAndNames, std::allocator<TCompletionNodeAndNames>> { struct TCompletionNodeAndNames *x0; struct TCompletionNodeAndNames *x1; struct __compressed_pair<TCompletionNodeAndNames *, std::allocator<TCompletionNodeAndNames>> { struct TCompletionNodeAndNames *x0; } x2; })completionNodesAndNames;
- (struct vector<TCompletionNodeAndNames, std::allocator<TCompletionNodeAndNames>> { struct TCompletionNodeAndNames *x0; struct TCompletionNodeAndNames *x1; struct __compressed_pair<TCompletionNodeAndNames *, std::allocator<TCompletionNodeAndNames>> { struct TCompletionNodeAndNames *x0; } x2; })filteredSortedCompletionNodesAndNames;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })nodesInPath;
- (void)setIsAutoCompleting:(BOOL)a0;

@end
