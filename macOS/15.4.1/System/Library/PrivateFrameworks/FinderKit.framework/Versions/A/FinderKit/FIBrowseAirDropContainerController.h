@interface FIBrowseAirDropContainerController : FI_TBrowserContainerController

- (BOOL)allowsMultipleSelection;
- (BOOL)allowsBrowsingPackages;
- (BOOL)canBrowseNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)canClickDimmedNodes;
- (BOOL)canDuplicateItems;
- (BOOL)canMoveItemsToTrash;
- (BOOL)canRenameItems;
- (BOOL)canSelectNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)clickedOnDisabledNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)configureAccessoryViews:(id)a0;
- (BOOL)nodeIsDimmed:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)openLocation:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 origin:(struct shared_ptr<ISpawnOrigin> { struct ISpawnOrigin *x0; struct __shared_weak_count *x1; })a1;
- (void)openSelection;
- (BOOL)panelDisableNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)quickLookShouldShowOpenButtonForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)shouldShowSidebarSplitter;
- (BOOL)shouldTypeSelectForEvent:(id)a0 withCurrentSearchString:(id)a1;
- (BOOL)urlIsDimmed:(id)a0;

@end
