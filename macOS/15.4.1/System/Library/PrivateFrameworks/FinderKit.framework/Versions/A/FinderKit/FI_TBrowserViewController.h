@class FI_TLoadingViewController, FI_TRenameOperation, NSObject, NSMutableArray, FI_TNotificationCenterObserverGlue, NSString, NSLayoutGuide, FI_TKeyValueObserverGlue, FI_TContainerLayoutManager, NSIndexSet, NSArray, NSView, FI_TICloudNoDocumentsViewController;

@interface FI_TBrowserViewController : FI_TBaseBrowserViewController <FPUIActionViewControllerDelegate, NSMenuDelegate, NSMenuItemValidation, NSScrollViewDelegate, NSToolbarItemValidation> {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _resolvedTargetPath;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _unResolvedTargetPath;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _nodeBeingEdited;
    BOOL _isShowingICloudDriveContent;
    NSLayoutGuide *_contentInsetsLayoutGuide;
    NSArray *_minimumSizeConstraints;
    NSMutableArray *_layoutConstraints;
    struct vector<TKeyValueBinder, std::allocator<TKeyValueBinder>> { struct TKeyValueBinder *__begin_; struct TKeyValueBinder *__end_; struct __compressed_pair<TKeyValueBinder *, std::allocator<TKeyValueBinder>> { struct TKeyValueBinder *__value_; } __end_cap_; } _viewSettingsBinders;
    struct unordered_map<TFENode, ContainerObservingOptions, std::hash<TFENode>, std::equal_to<TFENode>, std::allocator<std::pair<const TFENode, ContainerObservingOptions>>> { struct __hash_table<std::__hash_value_type<TFENode, ContainerObservingOptions>, std::__unordered_map_hasher<TFENode, std::__hash_value_type<TFENode, ContainerObservingOptions>, std::hash<TFENode>, std::equal_to<TFENode>>, std::__unordered_map_equal<TFENode, std::__hash_value_type<TFENode, ContainerObservingOptions>, std::equal_to<TFENode>, std::hash<TFENode>>, std::allocator<std::__hash_value_type<TFENode, ContainerObservingOptions>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, ContainerObservingOptions>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, ContainerObservingOptions>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, ContainerObservingOptions>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, ContainerObservingOptions>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, ContainerObservingOptions>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, ContainerObservingOptions>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, ContainerObservingOptions>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TFENode, ContainerObservingOptions>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TFENode, ContainerObservingOptions>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TFENode, std::__hash_value_type<TFENode, ContainerObservingOptions>, std::hash<TFENode>, std::equal_to<TFENode>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TFENode, std::__hash_value_type<TFENode, ContainerObservingOptions>, std::equal_to<TFENode>, std::hash<TFENode>>> { float __value_; } __p3_; } __table_; } _openContainerMap;
    int _sortBy;
    BOOL _shouldSuspendPendingSelectionsAndRenamesDuringAnimation;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _pendingNodesToSelect;
    BOOL _shouldEditPendingNodesToSelect;
    FI_TRenameOperation *_editPendingNodesToSelectRenameOp;
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _nodesBeingDragged;
    double _lastArrowKeyDownTimeSince1970;
    FI_TICloudNoDocumentsViewController *_iCloudNoDocumentsViewController;
    FI_TLoadingViewController *_loadingViewController;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _viewSettingsObserver;
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _sortByBinder;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _contentInsetsDidChangeObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _scrollViewWillLiveScrollObserver;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct __compressed_pair<TNotificationCenterObserver *, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__value_; } __end_cap_; } _notificationObservers;
}

@property (retain, nonatomic) FI_TContainerLayoutManager *containerLayoutManager;
@property (nonatomic, getter=isInitialConfigInProgress) BOOL initialConfigInProgress;
@property BOOL allowAppCentricLibraryIcons;
@property (readonly, nonatomic) unsigned long long itemCount;
@property (nonatomic) BOOL selectionHasBeenHandled;
@property (readonly, nonatomic) BOOL isSnapshotImageBrowser;
@property (readonly, nonatomic) BOOL isBackupBrowser;
@property (weak, nonatomic) NSView *browserView;
@property (nonatomic, getter=isGrouping) BOOL grouping;
@property (nonatomic) int sortBy;
@property (nonatomic) BOOL userHasInteractedWithView;
@property (nonatomic) BOOL forceScrollToTop;
@property (nonatomic) double scrollDistanceFromTop;
@property BOOL shouldRestoreScrollDistance;
@property BOOL delayNextPreviewPaneRetarget;
@property (readonly) struct optional_bool { union { char __null_state_; BOOL __val_; } ; BOOL __engaged_; } cloudSyncedLocation;
@property (readonly) BOOL unbindingViewSettings;
@property (readonly) BOOL closingTarget;
@property (readonly, nonatomic) BOOL downloadsUbiquitousContents;
@property (readonly) const struct TFENode { struct OpaqueNodeRef *x0; } *snapshotNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property (setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;

- (void)dealloc;
- (void).cxx_destruct;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)target;
- (id).cxx_construct;
- (id)nibName;
- (void)swipeWithEvent:(id)a0;
- (BOOL)allowsMultipleSelection;
- (void)didScrollInScrollView:(id)a0;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)menuDidClose:(id)a0;
- (void)menuWillOpen:(id)a0;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })searchString;
- (int)viewStyle;
- (void)windowDidBecomeMain:(id)a0;
- (void)aboutToTearDown;
- (const void *)targetPath;
- (void)configureView;
- (void)initCommon;
- (id)baseView;
- (void)actionControllerDidFinishAction:(id)a0 error:(id)a1;
- (BOOL)validateDuplicate:(id)a0;
- (BOOL)validateSelectAll:(id)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })nodeAtIndex:(unsigned long long)a0;
- (BOOL)containsNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (struct CGSize { double x0; double x1; })idealContentSize;
- (struct CGPoint { double x0; double x1; })currentScrollPosition;
- (void)browserViewDidMoveToWindow;
- (void)selectionChanged;
- (BOOL)canDoubleClick:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)isAnICloudNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (struct CGSize { double x0; double x1; })minimumViewSize;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })openContainers:(const void *)a0;
- (BOOL)validateSortBy:(id)a0;
- (BOOL)closeContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (int)groupBy;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)nodeBeingEdited;
- (BOOL)nodeIsSelected:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)validateRename:(id)a0;
- (id)viewToCoverWithAuthenticationUI;
- (void)_selectNodesNowOrLaterDetails:(const void *)a0 startEditing:(BOOL)a1 renameOp:(id)a2;
- (void)aboutToDestroyBrowserView;
- (void)activateLayoutGuideRelatedConstraintsIfNeeded;
- (void)adjustObserverOptions;
- (BOOL)allowsBrowsingPackages;
- (void)attemptToSelectPendingNodes;
- (id)beginDraggingNodes:(const void *)a0 mouseDownEvent:(id)a1 dragSourceView:(id)a2;
- (void)bindViewSettings;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)browserRoot;
- (void)browserViewEffectiveAppearanceChanged;
- (id)browserViewState;
- (BOOL)canAllNodesBeOpened:(const void *)a0;
- (BOOL)canBrowseNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)canClickDimmedNodes;
- (BOOL)canSelectNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)clearPendingNodesToSelect;
- (void)clickedOnDisabledNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })closeContainers:(const void *)a0;
- (void)closeTarget;
- (void)cmdEditTags:(id)a0;
- (void)cmdRemoveTag:(id)a0;
- (void)commonPostMouseDown:(id)a0;
- (void)computeTargetPathsFor:(const void *)a0;
- (void)configureForLoadingUI:(BOOL)a0;
- (void)configureForNoDocuments:(BOOL)a0;
- (id)dragFlockIconImageForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 atIconSize:(double)a1 inView:(id)a2;
- (id)dragFlockLabelImageForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 outFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(id)a2;
- (id)dragFlockingImageComponentsForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 dropTargetView:(id)a1;
- (void)editTagsForNodes:(const void *)a0 withPopoverBelowView:(id)a1 verticalInset:(double)a2;
- (int)editingSelectionType;
- (void)getNodes:(void *)a0 fromArray:(id)a1 upTo:(unsigned long long)a2;
- (void)getNodes:(void *)a0 fromIndexSet:(id)a1 upTo:(unsigned long long)a2;
- (unsigned long long)getSelectedNodes:(void *)a0 forContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 upTo:(unsigned long long)a2;
- (void)getVisibleNodes:(void *)a0;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)groupNodeOfNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)groupingByTag;
- (BOOL)handleKeyDown:(id)a0 currentKey:(unsigned short)a1;
- (void)handleMagnify:(double)a0;
- (BOOL)hasPendingNodesToSelect;
- (id)iconImageForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)inBrowseMode;
- (unsigned long long)indexForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (id)initWithTargetPath:(const void *)a0 containerLayoutManager:(id)a1 containerController:(id)a2;
- (BOOL)isContainerOpen:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)isKnownContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)isShowingICloudDriveContent;
- (BOOL)isTimeMachineBrowser;
- (unsigned long long)itemCountForLoadingUI;
- (BOOL)makeBrowserViewFirstResponder;
- (BOOL)mayResortChildrenAfterNameChange;
- (BOOL)nodeIsDimmed:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)nodeIsGroupNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (unsigned int)nodeObserverOptionsForContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (const void *)nodesBeingDragged;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })nodesInBrowser;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })nodesToRestore;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })nodesWithViews;
- (BOOL)openContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)openPreviewPanelInFullScreen:(BOOL)a0;
- (void)openQuickLookNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)openSelectionWithModifiers:(unsigned long long)a0 allowTabs:(BOOL)a1;
- (void)openTarget;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })openedContainers;
- (BOOL)panelDisableNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (struct TFENodeVector { struct TFENode *x0; struct TFENode *x1; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *x0; } x2; })pendingNodesToSelectUpTo:(unsigned long long)a0;
- (BOOL)performDrop;
- (void)prefetchEnableStates:(const void *)a0;
- (struct duration<double, std::ratio<1>> { double x0; })previewPaneDisplayDelay;
- (void)privateBindSettings;
- (BOOL)quickLookHandleEvent:(id)a0;
- (BOOL)quickLookShouldShowOpenButtonForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)receivingDrag;
- (void)refreshNoDocumentsView;
- (void)refreshNodeSettings:(BOOL)a0;
- (void)refreshSubviewContentInsets;
- (void)resetCloudSyncedLocation:(struct optional_bool { union { char x0; BOOL x1; } x0; BOOL x1; })a0;
- (const void *)resolvedTargetPath;
- (void)resortDataSource:(BOOL)a0;
- (void)resortDataSource:(BOOL)a0 withSortBy:(int)a1 completionHandler:(const void *)a2;
- (void)restoreBrowserViewState:(id)a0;
- (void)restoreTransientViewState;
- (BOOL)retargetedInternally:(const void *)a0;
- (void)reusingDataSource;
- (void)saveScrollPosition;
- (void)saveTransientViewState;
- (void)scrollToSavedPosition;
- (void)selectNodesNowOrLater:(const void *)a0;
- (void)selectionChangedByUserAction:(BOOL)a0;
- (void)setContainerController:(id)a0;
- (void)setNodeBeingEdited:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)setNodesBeingDragged:(const void *)a0;
- (void)setPendingNodesToSelect:(const void *)a0 startEditing:(BOOL)a1 renameOp:(id)a2;
- (void)setSelectionChangedAnimationsEnabled:(BOOL)a0;
- (void)setShowIconPreview:(BOOL)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })settingsNode;
- (BOOL)shouldCalculateFolderSizesForContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)shouldDelayNextPreviewPaneRetargetForCurrentKey:(unsigned short)a0;
- (BOOL)shouldDelayNextPreviewPaneRetargetForKeyDownEvent:(id)a0 currentKey:(unsigned short)a1;
- (BOOL)shouldObserveSpotlightAttributesForContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)shouldOpenDSStoreForContainer:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)shouldSaveAndRestoreScrollDistanceFromTop;
- (BOOL)shouldShowNoDocumentsUI;
- (BOOL)shouldSortFoldersFirstForSortBy:(int)a0 groupBy:(int)a1;
- (BOOL)shouldSortInIncreasingOrderForSortBy:(int)a0;
- (BOOL)shouldTypeSelectForEvent:(id)a0 withCurrentSearchString:(id)a1;
- (void)showAllExtensionsPrefChanged;
- (BOOL)showEjectButtonForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)showHiddenFilesPreferenceChanged;
- (BOOL)showingLoadingUI;
- (BOOL)showingNoDocumentsUI;
- (void)sidebarDidChangeVisibility:(BOOL)a0;
- (void)sortFoldersFirstPrefChanged;
- (BOOL)startEditingNodeNowOrLater:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 renameOp:(id)a1;
- (void)suspendPendingNodeSelectionDuringAnimation;
- (void)syncAllContainers;
- (void)syncOnActivateIfRemoteTarget;
- (BOOL)trimPath:(const void *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)ubiquityStatusChange:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)unbindViewSettings;
- (void)updateLayoutGuideRelatedConstraintsIfNeeded;
- (void)updateQueryHitPreviewForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)updateSubviewContentInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)validateDeselectAll:(id)a0;
- (BOOL)validateEditTags:(id)a0;
- (BOOL)validateMoveToTrash:(id)a0;
- (BOOL)validateRemoveTag:(id)a0;
- (BOOL)validateShare:(id)a0;
- (void)viewDidFullyPopulate;
- (id)viewToOverlayForLoadingUI;

@end
