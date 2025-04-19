@class FI_TRunAfterHelper;

@interface FIContainerController : FI_TBrowserContainerController {
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } fTelemetryToken;
}

@property (nonatomic) BOOL historyDisabled;
@property (readonly, nonatomic) BOOL downloadsUbiquitousContents;
@property (nonatomic) unsigned long long mediaBrowserShownTypes;

+ (unsigned long long)_mediaBrowserTypeForTargetPath:(const void *)a0;
+ (BOOL)_isMediaBrowserInTargetPath:(const void *)a0;
+ (BOOL)_isMediaBrowserNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
+ (unsigned long long)_mediaBrowserTypeForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)allowsMultipleSelection;
- (BOOL)previewPanel:(id)a0 shouldShowOpenButtonForItem:(id)a1;
- (void)setViewStyle:(int)a0;
- (BOOL)shouldEnableShareButton;
- (void)aboutToTearDown;
- (BOOL)canShare;
- (id)_historySearchTemplateMenu;
- (struct TFENode { struct OpaqueNodeRef *x0; })_nodeForLastMediaBrowserMode;
- (void)_replaceUnresolvedTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 withTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (BOOL)_updateViewStyle:(int)a0;
- (void)addCurrentTargetPathToHistory;
- (void)addToHistory:(const void *)a0 windowState:(id)a1;
- (BOOL)allowsBrowsingPackages;
- (id)appCustomMenuItemsForNodes:(const void *)a0;
- (void)backForwardCommon:(BOOL)a0;
- (Class)browserClassForViewStyle:(int)a0;
- (BOOL)canBrowseNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)canClickDimmedNodes;
- (BOOL)canDuplicateItems;
- (BOOL)canMoveItemsToTrash;
- (BOOL)canSelectNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)clickedOnDisabledNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)cmdShowInFinder:(id)a0;
- (void)cmdToggleHideExtension:(id)a0;
- (void)destroyBrowserView:(BOOL)a0;
- (void)disableHistoryAndDoWork:(const void *)a0;
- (void)gotoHistoryEntry:(id)a0;
- (id)gutsController;
- (BOOL)hidesSharedItems;
- (void)historyChanged;
- (BOOL)inBrowseMode;
- (BOOL)nodeIsDimmed:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)nodeIsOurICloud:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)openLocation:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 origin:(struct shared_ptr<ISpawnOrigin> { struct ISpawnOrigin *x0; struct __shared_weak_count *x1; })a1;
- (void)openQuickLookNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)openSelection;
- (BOOL)panelDisableNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)prefetchEnableStates:(const void *)a0;
- (BOOL)quickLookShouldShowOpenButtonForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })reduceRootedPath:(const void *)a0;
- (void)saveQuery:(BOOL)a0;
- (void)searchFieldTextChanged;
- (void)searchTextChanged:(id)a0;
- (void)searchWasChanged;
- (void)setAnimating:(BOOL)a0 expanded:(BOOL)a1;
- (void)setHidesSharedItems:(BOOL)a0;
- (void)setPreferredViewStyle:(int)a0;
- (BOOL)shouldShowPathBarForTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)shouldShowSidebarSplitter;
- (BOOL)shouldTypeSelectForEvent:(id)a0 withCurrentSearchString:(id)a1;
- (BOOL)sidebarInitiallyVisible;
- (struct TFENode { struct OpaqueNodeRef *x0; })sidebarTarget;
- (BOOL)urlIsDimmed:(id)a0;
- (BOOL)validateShowInFinder:(id)a0;
- (BOOL)validateToggleHideExtension:(id)a0;
- (void)viewDidSyncToDataSource:(const void *)a0;

@end
