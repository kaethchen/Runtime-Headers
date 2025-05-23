@class NSObject, NSString, FI_TColumnPreviewController, NSTimer, FI_TRunAfterHelper, NSFont, FI_TNotificationCenterObserverGlue;

@interface FI_TColumnViewController : FI_TBrowserViewController <TableView_Common_Delegate, FIAliasResolution, TColumnViewDelegate, TDuplicateTaskDelegateProtocol, TListNameFieldDelegate> {
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _draggingSourceContainer;
    BOOL _selectedItemNeedsPreviewView;
    FI_TColumnPreviewController *_previewViewController;
    BOOL _configuring;
    BOOL _resizingAllColumns;
    BOOL _forwardKeydownsToNextColumn;
    struct TAliasesTargets { struct map<TFENode, std::pair<unsigned long, TFENode>, std::less<TFENode>, std::allocator<std::pair<const TFENode, std::pair<unsigned long, TFENode>>>> { struct __tree<std::__value_type<TFENode, std::pair<unsigned long, TFENode>>, std::__map_value_compare<TFENode, std::__value_type<TFENode, std::pair<unsigned long, TFENode>>, std::less<TFENode>>, std::allocator<std::__value_type<TFENode, std::pair<unsigned long, TFENode>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TFENode, std::pair<unsigned long, TFENode>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<TFENode, std::__value_type<TFENode, std::pair<unsigned long, TFENode>>, std::less<TFENode>>> { unsigned long long __value_; } __pair3_; } __tree_; } fMap; } _resolvedAliasTable;
    void *_optimizer;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _brokenAlias;
    NSTimer *_delayedContainerSynchingTimer;
    struct TColumnOptimizerContainers { struct __tree<std::__value_type<std::pair<long, TFENode>, short>, std::__map_value_compare<std::pair<long, TFENode>, std::__value_type<std::pair<long, TFENode>, short>, std::greater<std::pair<long, TFENode>>>, std::allocator<std::__value_type<std::pair<long, TFENode>, short>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::pair<long, TFENode>, short>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::pair<long, TFENode>, std::__value_type<std::pair<long, TFENode>, short>, std::greater<std::pair<long, TFENode>>>> { unsigned long long __value_; } __pair3_; } __tree_; } _delayedContainers;
    struct shared_ptr<TColumnPreviewQTEjectHelper> { struct TColumnPreviewQTEjectHelper *__ptr_; struct __shared_weak_count *__cntrl_; } _ejectHelper;
    long long _columnIndexOriginatingDrag;
    NSFont *_cellViewFont;
    BOOL _settingSelectionPath;
    BOOL _bumpedIn;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _showDelayedPreviewToken;
    struct unordered_set<TFENode, std::hash<TFENode>, std::equal_to<TFENode>, std::allocator<TFENode>> { struct __hash_table<TFENode, std::hash<TFENode>, std::equal_to<TFENode>, std::allocator<TFENode>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<TFENode, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TFENode, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<TFENode, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TFENode, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TFENode, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<TFENode, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<TFENode, void *> *>, std::allocator<std::__hash_node<TFENode, void *>>> { struct __hash_node_base<std::__hash_node<TFENode, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<TFENode>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<TFENode>> { float __value_; } __p3_; } __table_; } _pendingOpenContainerNodes;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _userDidResizeColumnsObserver;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct __compressed_pair<TNotificationCenterObserver *, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__value_; } __end_cap_; } _columnViewNotificationObservers;
}

@property (nonatomic) BOOL showIcons;
@property (nonatomic) BOOL showPreviewColumn;
@property (nonatomic) BOOL showsSize;
@property (nonatomic) BOOL delayedOpening;
@property (nonatomic) int arrangeBy;
@property (nonatomic) double preferredColumnWidth;
@property (readonly, retain, nonatomic) FI_TColumnPreviewController *previewViewController;
@property (nonatomic) BOOL nextSelectionAllowsRetarget;
@property struct TFENode { struct OpaqueNodeRef *x0; } nodeToDoubleClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isEditing) BOOL editing;

+ (id)makeColumnCellViewForBrowserTableView:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)itemCount;
- (id).cxx_construct;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)rootNode;
- (long long)browser:(id)a0 numberOfChildrenOfItem:(id)a1;
- (double)browser:(id)a0 sizeToFitWidthOfColumn:(long long)a1;
- (id)nibName;
- (BOOL)browser:(id)a0 acceptDrop:(id)a1 atRow:(long long)a2 column:(long long)a3 dropOperation:(unsigned long long)a4;
- (BOOL)browser:(id)a0 canDragRowsWithIndexes:(id)a1 inColumn:(long long)a2 withEvent:(id)a3;
- (id)browser:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (id)browser:(id)a0 headerViewControllerForItem:(id)a1;
- (double)browser:(id)a0 heightOfRow:(long long)a1 inColumn:(long long)a2;
- (BOOL)browser:(id)a0 isLeafItem:(id)a1;
- (id)browser:(id)a0 objectValueForItem:(id)a1;
- (id)browser:(id)a0 previewViewControllerForLeafItem:(id)a1;
- (id)browser:(id)a0 selectionIndexesForProposedSelection:(id)a1 inColumn:(long long)a2;
- (BOOL)browser:(id)a0 shouldAutoExpandItem:(id)a1;
- (BOOL)browser:(id)a0 shouldEditItem:(id)a1;
- (double)browser:(id)a0 shouldSizeColumn:(long long)a1 forUserResize:(BOOL)a2 toWidth:(double)a3;
- (BOOL)browser:(id)a0 shouldTypeSelectForEvent:(id)a1 withCurrentSearchString:(id)a2;
- (unsigned long long)browser:(id)a0 validateDrop:(id)a1 proposedRow:(long long *)a2 column:(long long *)a3 dropOperation:(unsigned long long *)a4;
- (BOOL)browser:(id)a0 writeRowsWithIndexes:(id)a1 inColumn:(long long)a2 toPasteboard:(id)a3;
- (void)browserDidScroll:(id)a0;
- (id)columnView;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (long long)focusedColumn;
- (long long)lastColumn;
- (void)menuNeedsUpdate:(id)a0;
- (void)mouseDown:(id)a0;
- (id)rootItemForBrowser:(id)a0;
- (void)selectAll:(id)a0;
- (long long)selectedColumn;
- (int)viewStyle;
- (void)aboutToTearDown;
- (void *)setOptimizer:(void *)a0;
- (void)configureView;
- (void)initCommon;
- (void)setGrouping:(BOOL)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })currentNode;
- (struct TFENode { struct OpaqueNodeRef *x0; })nodeAtIndex:(unsigned long long)a0;
- (BOOL)containsNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)setTextSize:(double)a0;
- (struct CGSize { double x0; double x1; })idealContentSize;
- (void)alias:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 resolvedAs:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 temporaryNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (id)childAtIndex:(long long)a0 ofColumnContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (id)columnsForContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 upToColumn:(long long)a1;
- (struct CGSize { double x0; double x1; })minimumViewSize;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })openContainers:(const void *)a0;
- (double)rowHeightForVariableIconAndText;
- (BOOL)syncTargetPath:(BOOL)a0;
- (struct CGImage { } *)newRestoreImageForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 outRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (BOOL)nodeIsSelected:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)updateDisabledStateForColumnCellView:(id)a0 browserTableView:(id)a1 node:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2 row:(long long)a3;
- (id)_zoomImageFromViewForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)aboutToDestroyBrowserView;
- (void)adjustColumnWidthAutomaticallyChanged;
- (void)adjustPreviewColumnWidth;
- (void)attemptToSelectPendingNodes;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)browserRoot;
- (id)browserViewState;
- (double)calculateIconSize;
- (unsigned long long)childrenCountOfNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })closeContainers:(const void *)a0;
- (void)closeTarget;
- (void)columnView:(id)a0 willStartUsingItem:(id)a1 forColumn:(long long)a2;
- (void)columnView:(id)a0 willStartUsingNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 forColumn:(long long)a2;
- (void)columnView:(id)a0 willStopUsingItem:(id)a1 forColumn:(long long)a2;
- (void)columnView:(id)a0 willStopUsingNodes:(const void *)a1 forColumn:(long long)a2;
- (void)columnViewConfigurationDidChange;
- (long long)columnWithKeyboardFocus;
- (void)computeTargetPathsFor:(const void *)a0;
- (void)configureRowHeight;
- (struct TFENode { struct OpaqueNodeRef *x0; })containerForColumn:(long long)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })containerNodeForTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)dataSourceChanged:(const void *)a0;
- (void)delayedContainerSynching;
- (void)deselectAllNodes;
- (id)dragFlockIconImageForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 atIconSize:(double)a1 inView:(id)a2;
- (id)dragFlockLabelImageForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 outFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(id)a2;
- (int)editingSelectionType;
- (void)enumerateAvailableCellViews:(const void *)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })focusNode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (struct pair<TFENodeVector, unsigned long> { struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; } x0; unsigned long long x1; })getCommandTarget:(SEL)a0 upTo:(unsigned long long)a1;
- (void)getNodes:(void *)a0 fromSet:(id)a1 forColumn:(long long)a2 upTo:(unsigned long long)a3;
- (unsigned long long)getSelectedNodes:(void *)a0 forContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 upTo:(unsigned long long)a2;
- (unsigned long long)getSelectedNodes:(void *)a0 inColumn:(long long)a1;
- (unsigned long long)getSelectedNodesFromView:(void *)a0 inColumn:(long long)a1 upTo:(unsigned long long)a2;
- (unsigned long long)getSelectedNodesFromView:(void *)a0 upTo:(unsigned long long)a1;
- (unsigned long long)getSelectedNodesInFocus:(void *)a0 upTo:(unsigned long long)a1;
- (unsigned long long)getTargetSelection:(void *)a0 includeTarget:(BOOL)a1 upTo:(unsigned long long)a2;
- (void)getVisibleNodes:(void *)a0;
- (double)greedyWidthForPreviewColumn:(long long)a0;
- (BOOL)handleKeyDown:(id)a0 currentKey:(unsigned short)a1;
- (void)handleMoveToTrashCommand:(const void *)a0 immediately:(BOOL)a1;
- (void)handleNodeChangedPropertyMap:(const void *)a0 forBrowserTableView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconFrameForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (int)includeBadgeInIconImage;
- (struct optional_bool { union { char x0; BOOL x1; } x0; BOOL x1; })includeTargetForCommandSelector:(SEL)a0;
- (unsigned long long)indexForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (unsigned long long)indexForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 getColumn:(long long *)a1;
- (unsigned long long)indexForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 inColumn:(long long)a1;
- (BOOL)isGroupRow:(long long)a0 inColumn:(long long)a1;
- (BOOL)isInitialPopulationComplete;
- (BOOL)isItem:(id)a0 expandedAtRow:(long long)a1 column:(long long)a2;
- (BOOL)isPreviewColumn:(long long)a0;
- (id)itemAtIndex:(unsigned long long)a0 inColumn:(long long)a1;
- (unsigned long long)itemCountForLoadingUI;
- (void)itemDoubleClick:(id)a0;
- (void)itemSelection:(id)a0;
- (void)killDelayedContainerSynchingTimer;
- (long long)lastContainerColumn;
- (BOOL)makeBrowserViewFirstResponder;
- (id)makeCellViewForDragImage:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 inBrowserTableView:(id)a1;
- (id)makeDragImageForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 inView:(id)a1 includeIcon:(BOOL)a2 includeText:(BOOL)a3 outTextFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (id)newConfiguredPreviewViewController;
- (struct TFENode { struct OpaqueNodeRef *x0; })nextNodeInViewAfter:(const void *)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })nodeAtIndex:(unsigned long long)a0 inColumn:(long long)a1;
- (struct TFENode { struct OpaqueNodeRef *x0; })nodeAtPoint:(const struct CGPoint { double x0; double x1; } *)a0 includeTarget:(BOOL)a1;
- (struct TFENode { struct OpaqueNodeRef *x0; })nodeOrContainerAtIndex:(long long)a0 inColumn:(long long)a1;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })nodesInBrowser;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })nodesWithViews;
- (void)openTarget;
- (struct TFENode { struct OpaqueNodeRef *x0; })parentNodeForColumn:(long long)a0;
- (id)popoverAnchorViewForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)privateBindSettings;
- (void)processInvalidatedThumbnailNodes:(const void *)a0;
- (void)reloadIconsInView;
- (void)reloadLastColumn;
- (struct TFENode { struct OpaqueNodeRef *x0; })resolvedNodeForTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)restoreBrowserViewState:(id)a0;
- (void)restoreTransientViewState;
- (void)reusingDataSource;
- (void)revealNodes:(const void *)a0 select:(BOOL)a1;
- (void)saveTransientViewState;
- (void)scrollToSavedPosition;
- (void)selectAllNodes;
- (id)selectedItemsForColumn:(long long)a0;
- (unsigned long long)selectedNodesCount;
- (unsigned long long)selectedNodesCountInFocus;
- (void)selectionChanged:(id)a0 inColumn:(long long)a1;
- (void)selectionChangedByUserAction:(BOOL)a0;
- (void)setBrowserIsShowingICloud;
- (void)setColumnToIdealWidthForContainerNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)setFocusToColumn:(long long)a0;
- (void)setInternalTargetPath:(const void *)a0;
- (void)setSelectedItems:(id)a0 inColumn:(long long)a1 byExtendingSelection:(BOOL)a2;
- (void)setSelectedNodes:(const void *)a0 byExtendingSelection:(BOOL)a1;
- (void)setShowIconPreview:(BOOL)a0;
- (BOOL)shouldCalculateFolderSizesForContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)shouldDelayNextPreviewPaneRetargetForCurrentKey:(unsigned short)a0;
- (BOOL)shouldObserveOrUnobserveNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 forColumn:(long long)a1;
- (BOOL)shouldShowChildrenForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)showDelayedPreview;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })sortedGroups:(const void *)a0 forContainerNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)startEditingSelectedRow;
- (BOOL)startEditingWithNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 renameOp:(id)a1;
- (void)stopEditing:(BOOL)a0;
- (BOOL)syncPathWithColumns:(const void *)a0 delayOpening:(BOOL)a1 forwardKeydownsToNextColumn:(BOOL)a2;
- (struct TFENode { struct OpaqueNodeRef *x0; })thumbnailTargetNodeForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })thumbnailTargetNodeFromContainerNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)trimPath:(const void *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)unwindOpenCloseContainers;
- (void)updateColumnCellView:(id)a0 browserTableView:(id)a1 masterLayoutGuide:(id)a2 node:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a3 row:(long long)a4;
- (void)updateDraggingItemsForDrag:(id)a0 dropTargetView:(id)a1;
- (void)updateHeaderCellView:(id)a0 node:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (BOOL)updateRowHeights;
- (void)updateSTFEditorLocation;
- (void)updateSubviewContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)updateTitleForNode:(id)a0 node:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (id)viewToOverlayForLoadingUI;
- (void)willPresentPopoverForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)zoomImageForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;

@end
