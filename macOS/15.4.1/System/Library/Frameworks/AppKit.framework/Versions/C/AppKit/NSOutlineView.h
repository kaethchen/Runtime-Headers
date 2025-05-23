@class NSString, _NSOVRowEntry, NSOutlineButtonCell, NSMutableSet, NSTableColumn, NSButtonCell, NSMapTable, NSMutableArray;
@protocol NSOutlineViewDataSource, NSOutlineViewDelegate;

@interface NSOutlineView : NSTableView <NSAccessibilityOutline> {
    long long _numberOfRows;
    _NSOVRowEntry *_rowEntryTree;
    NSMapTable *_itemToEntryMap;
    struct __CFArray { } *_rowEntryArray;
    long long _firstRowIndexDrawn;
    id _autoExpandTimerItem;
    NSTableColumn *_outlineTableColumn;
    BOOL _initedRows;
    BOOL _indentationMarkerInCell;
    long long _indentationPerLevel;
    NSButtonCell *_outlineCell;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _trackingOutlineFrame;
    id _expandingItem;
    NSMutableArray *_draggedItems;
    long long *_indentArray;
    long long _indentArraySize;
    long long _originalOutlineColumnWidth;
    NSMutableSet *_expandSet;
    NSMutableSet *_expandSetToExpandItemsInto;
    NSButtonCell *_trackingOutlineCell;
    long long _trackingRow;
    NSMutableArray *_autoExpandedItems;
    struct CGPoint { double x; double y; } _lastHoverPoint;
    unsigned long long _lastDragOperation;
    id _outlineCellTrackingAreaItem;
    NSOutlineButtonCell *_textOutlineCell;
    id _itemBeingMade;
    struct { unsigned char allowAutomaticAnimations : 1; unsigned char animateExpandAndCollapse : 1; unsigned char autoSaveExpandItems : 1; unsigned char autoresizesOutlineColumn : 1; unsigned char dataSourceInternalRespondsTo_draggedImageMovedTo : 1; unsigned char dataSourceInternalRespondsTo_draggingEndedAt : 1; unsigned char dataSourceRespondsTo_objectValueByItem : 1; unsigned char dataSourceRespondsTo_childOfItem : 1; unsigned char dataSourceRespondsTo_isItemExpandable : 1; unsigned char dataSourceRespondsTo_numberOfChildrenOfItem : 1; unsigned char delayRowEntryFreeDisabled : 1; unsigned char delegatePrivateRespondsTo_autoExpandItem : 1; unsigned char delegateRespondsTo_selectionShouldChangeInOutlineView : 1; unsigned char delegatePrivateRespondsTo_shouldAutoExpandItem : 1; unsigned char delegateRespondsTo_shouldCollapseItem : 1; unsigned char delegateRespondsTo_shouldEditTableColumn : 1; unsigned char delegateRespondsTo_shouldExpandItem : 1; unsigned char delegateRespondsTo_shouldSelectItem : 1; unsigned char delegateRespondsTo_shouldReselectItem : 1; unsigned char delegateRespondsTo_didReselectItem : 1; unsigned char delegateRespondsTo_shouldSelectTableColumn : 1; unsigned char delegateRespondsTo_shouldShowOutlineCellForItem : 1; unsigned char delegateRespondsTo_tintConfigurationForItem : 1; unsigned char delegatePrivateRespondsTo_tintColorForItem : 1; unsigned char delegateRespondsTo_willDisplayCell : 1; unsigned char delegateRespondsTo_willDisplayOutlineCell : 1; unsigned char dontRedisplayOnFrameChange : 1; unsigned char enableExpandNotifications : 1; unsigned char isSpringLoadingFlashing : 1; unsigned char numberOfRowsDataExpandEntered : 1; unsigned char reloadingData : 1; unsigned char selectionAdjustmentDisabled : 1; unsigned char sourceListIndentationMode : 2; unsigned char stronglyReferencesItems : 1; unsigned char subclassOverrides_collapseItem_collapseChildren : 1; unsigned char subclassOverrides_expandItem_expandChildren : 1; unsigned char subclassOverrides_frameOfOutlineCellAtRow : 1; unsigned char subclassOverrides_rowForItem : 1; unsigned char isBatchExpanding : 1; } _ovFlags;
}

@property (nonatomic, readonly) Class _intelligenceBaseClass;
@property (weak) id<NSOutlineViewDelegate> delegate;
@property (weak) id<NSOutlineViewDataSource> dataSource;
@property NSTableColumn *outlineTableColumn;
@property double indentationPerLevel;
@property BOOL indentationMarkerFollowsCell;
@property BOOL autoresizesOutlineColumn;
@property BOOL autosaveExpandedItems;
@property long long userInterfaceLayoutDirection;
@property BOOL stronglyReferencesItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_delayedFreeRowEntryFreeList;
+ (BOOL)_shouldAllowAutoCollapseItemsDuringDragsDefault;
+ (BOOL)_shouldAllowAutoExpandItemsDuringDragsDefault;
+ (BOOL)_shouldRequireAutoCollapseOutlineAfterDropsDefault;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_canUseWhiteDisclosureTriangles;
- (void)_finishedTableViewInitWithCoder;
- (void)_postItemDidExpandNotification:(id)a0;
- (void)_setOutlineCellTrackingAreaRow:(long long)a0;
- (void)addTableColumn:(id)a0;
- (BOOL)isItemExpanded:(id)a0;
- (void)_cancelAnyScheduledAutoCollapse;
- (BOOL)_delegateRespondsToCanSelectRow;
- (id)_makeAndCacheStaticDataForItem:(id)a0;
- (id)_sendDelegateToolTipForCell:(id)a0 tableColumn:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 row:(long long)a3 mouseLocation:(struct CGPoint { double x0; double x1; })a4;
- (void)_setOutlineButtonVisible:(BOOL)a0 onRow:(long long)a1;
- (BOOL)_shouldDoExpandAnimationForRow:(long long)a0;
- (BOOL)_shouldFloatRow:(long long)a0 inVisibleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_shouldSlideBackAfterDragFailed;
- (void)draggedImage:(id)a0 endedAt:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)draggingExited:(id)a0;
- (id)_accessibilityTableRow:(long long)a0;
- (void)_addOutlineCellTrackingAreas;
- (void)_adjustDrawingTestFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 atRow:(long long)a1 column:(long long)a2;
- (void)_adjustEditedCellLocation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_adjustRectForFocusRing:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atRow:(long long)a1;
- (void)_adjustSelectionForItemEntry:(id)a0 numberOfRows:(long long)a1 adjustFieldEditorIfNecessary:(BOOL)a2;
- (id)_alternateAutoExpandImageForOutlineCell:(id)a0 inRow:(long long)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (Class)_animatorClass;
- (void)_autoExpandFlashOnce;
- (void)_autoExpandItem:(id)a0;
- (void)_autoExpandItem:(id)a0 afterFlashCount:(long long)a1;
- (BOOL)_autoExpandItemUnderCursor;
- (void)_autoscrollForDraggingInfo:(id)a0 timeDelta:(double)a1;
- (void)_batchCollapseItemsWithItemEntries:(struct __CFArray { } *)a0 collapseChildren:(BOOL)a1;
- (void)_batchCollapseItemsWithItemEntries:(struct __CFArray { } *)a0 collapseChildren:(BOOL)a1 clearExpandState:(BOOL)a2;
- (void)_batchExpandItemsWithItemEntries:(struct __CFArray { } *)a0 expandChildren:(BOOL)a1;
- (void)_becomeASourceList;
- (void)_calcOutlineColumnWidth;
- (BOOL)_canUseUpdatedIdentation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cellOffsetConstraintConstantsForColumn:(long long)a0 row:(long long)a1;
- (void)_checkDataSource;
- (BOOL)_clickedInExpansionTriangle:(struct CGPoint { double x0; double x1; })a0;
- (void)_collapseAllAutoExpandedItems;
- (unsigned long long)_collapseAnimation;
- (void)_collapseAutoExpandedItems:(id)a0;
- (void)_collapseItem:(id)a0 collapseChildren:(BOOL)a1 clearExpandState:(BOOL)a2;
- (void)_collapseItemEntry:(id)a0 collapseChildren:(BOOL)a1 clearExpandState:(BOOL)a2;
- (void)_collapseRootEntry:(BOOL)a0 clearExpandState:(BOOL)a1;
- (id)_columnsForDragImage;
- (void)_commonInit;
- (id)_convertPersistentItem:(id)a0;
- (long long)_countDisplayedDescendantsOfItem:(id)a0;
- (id)_dataSourceChild:(long long)a0 ofItem:(id)a1;
- (BOOL)_dataSourceIsItemExpandable:(id)a0;
- (id)_dataSourceNamesOfPromisedFilesAtDestination:(id)a0;
- (long long)_dataSourceNumberOfChildrenOfItem:(id)a0;
- (BOOL)_dataSourceRespondsToNamesOfPromisedFilesDroppedAtDestination;
- (BOOL)_dataSourceRespondsToPasteboardWriterForRow;
- (BOOL)_dataSourceRespondsToSortDescriptorsDidChange;
- (BOOL)_dataSourceRespondsToWriteDragData;
- (void)_dataSourceSetValue:(id)a0 forColumn:(id)a1 row:(long long)a2;
- (id)_dataSourceValueForColumn:(id)a0 row:(long long)a1;
- (void)_debugDrawRowNumberInCell:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forRow:(long long)a2;
- (void)_delegateDidAddRowView:(id)a0 forRow:(long long)a1;
- (void)_delegateDidRemoveRowView:(id)a0 forRow:(long long)a1;
- (BOOL)_delegateRespondsToCanReselectRow;
- (BOOL)_delegateRespondsToDidReselectRow;
- (BOOL)_delegateRespondsToGetToolTip;
- (BOOL)_delegateRespondsToShouldShowCellExpansion;
- (BOOL)_delegateRespondsTo_didAddRowView;
- (BOOL)_delegateRespondsTo_didRemoveRowView;
- (BOOL)_delegateRespondsTo_nextTypeSelectMatchFromRow;
- (BOOL)_delegateRespondsTo_setHoverAccessoriesAreVisible;
- (BOOL)_delegateRespondsTo_shouldTypeSelectForEvent;
- (BOOL)_delegateRespondsTo_typeSelectStringForTableColumn;
- (BOOL)_delegateRespondsTo_wantsGroupRowHoverCallbacks;
- (BOOL)_delegateRespondsTo_wantsTrackingAreasForRowColumn;
- (id)_delegateRowViewForRow:(long long)a0;
- (void)_delegateSetHoverAccessoriesAreVisible:(BOOL)a0 atRow:(long long)a1;
- (BOOL)_delegateShouldReorderColumn:(long long)a0 toColumn:(long long)a1;
- (BOOL)_delegateShouldShowOutlineCellForItem:(id)a0;
- (id)_delegateTypeSelectStringForTableColumn:(id)a0 row:(long long)a1;
- (void)_delegateUpdateDraggingItemsForDrag:(id)a0;
- (BOOL)_delegateWantsGroupRowHoverCallbacksForItem:(id)a0;
- (void)_delegateWantsTrackingAreasForRow:(long long)a0 column:(long long)a1;
- (void)_delegateWillDisplayCell:(id)a0 forColumn:(id)a1 row:(long long)a2;
- (void)_delegateWillDisplayOutlineCell:(id)a0 forColumn:(id)a1 row:(long long)a2;
- (id)_delegate_dataCellForTableColumn:(id)a0 row:(long long)a1;
- (BOOL)_delegate_isFooterRow:(long long)a0;
- (BOOL)_delegate_isGroupRow:(long long)a0;
- (long long)_delegate_nextTypeSelectMatchFromRow:(long long)a0 toRow:(long long)a1 forString:(id)a2;
- (BOOL)_delegate_shouldTypeSelectForEvent:(id)a0 withCurrentSearchString:(id)a1;
- (double)_delegate_sizeToFitWidthOfColumn:(long long)a0;
- (id)_delegate_viewForTableColumn:(id)a0 row:(long long)a1;
- (void)_determineDropCandidateForDragInfo:(id)a0;
- (id)_didMoveNotificationName;
- (id)_disclosureButtonForRowView:(id)a0;
- (void)_doExpandAnimation:(BOOL)a0 forRow:(long long)a1;
- (void)_doUserExpandOrCollapseOfItem:(id)a0 isExpand:(BOOL)a1 optionKeyWasDown:(BOOL)a2;
- (void)_drawContentsAtRow:(long long)a0 column:(long long)a1 withCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_drawDropHighlight;
- (void)_drawOutlineCell:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)_drawOutlineCellAtRow:(long long)a0;
- (long long)_dropCandidateChildIndex;
- (id)_dropCandidateItem;
- (long long)_dropCandidateRow;
- (long long)_dropCandidateRowToHighlight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dropDestinationIndicatorFrameForDraggingDestinationStyle:(long long)a0 rowIndexes:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dropHighlightBackgroundRectForRow:(long long)a0;
- (double)_dropHighlightIndentationForRow:(long long)a0 withLevel:(long long)a1;
- (void)_dropOverdrawBeforeAnimation;
- (void)_endEditingIfEditedCellIsChildOfItemEntry:(id)a0;
- (void)_ensureTextOutlineCell;
- (unsigned long long)_expandAnimation;
- (void)_expandItemEntry:(id)a0 expandChildren:(BOOL)a1;
- (void)_expandItemEntry:(id)a0 expandChildren:(BOOL)a1 startLevel:(long long)a2;
- (void)_expandItemEntryChildren:(id)a0 atStartLevel:(long long)a1 expandChildren:(BOOL)a2 andInvalidate:(BOOL)a3;
- (id)_findParentWithLevel:(long long)a0 beginingAtItem:(id)a1 childEncountered:(long long *)a2;
- (void)_finishedMakingConnections;
- (void)_flashOutlineCell;
- (void)_forgetBeingASourceList;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameOfOutlineCellAtRow:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameOfSourceListGroupOutlineCellRow:(long long)a0;
- (void)_getRow:(long long *)a0 andParentRow:(long long *)a1 forDropCandidateItem:(id)a2 childIndex:(long long)a3;
- (void)_gutterSpacingChanged;
- (void)_handleLeftArrowKeyWithChildren:(BOOL)a0;
- (void)_handleRightArrowKeyWithChildren:(BOOL)a0;
- (void)_highlightOutlineCell:(id)a0 highlight:(BOOL)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inView:(id)a3;
- (long long)_hitRowForDropTargetRow:(long long)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_hoverAreaIsSameAsLast:(id)a0;
- (id)_identifierForDisclosureButtonForRowView:(id)a0;
- (void)_indentCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 atColumn:(long long)a1 row:(long long)a2;
- (double)_indentationForDropTargetRow:(long long)a0;
- (double)_indentationForRow:(long long)a0 withLevel:(long long)a1 isSourceListGroupRow:(BOOL)a2;
- (void)_initializeStaticRowViews;
- (void)_insertItemsAtIndexes:(id)a0 inParentRowEntry:(id)a1 withAnimation:(unsigned long long)a2;
- (void)_invalidateDropCandidateItem;
- (BOOL)_isDisclosureButtonVisibleOnRow:(long long)a0;
- (BOOL)_isDropFeedbackRow:(long long)a0;
- (BOOL)_isEditingRowAChildOfRowAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_isExpanding;
- (BOOL)_isItemLoadedAndExpanded:(id)a0;
- (BOOL)_isOutlineView;
- (id)_itemsFromRowsWithIndexes:(id)a0;
- (long long)_lastGroupRowChildFromRow:(long long)a0;
- (id)_lazyRowEntryForItem:(id)a0 requiredRowEntryLoadMask:(unsigned long long)a1;
- (double)_leadingDividerInsetForRowAt:(long long)a0;
- (double)_legacyIndentationForLevel:(long long)a0 isSourceListGroupRow:(BOOL)a1;
- (void)_loadItemsIfNeeded;
- (double)_locOfOutlineColumnAtMin:(BOOL)a0;
- (id)_makeChevronOutlineCell;
- (id)_makeChevronOutlineControl;
- (id)_makeNewRowViewForItem:(id)a0;
- (id)_makeOutlineControl;
- (id)_makeOutlineControleWithCell:(id)a0;
- (id)_makeShowHideOutlineControl;
- (id)_makeTextOutlineCell;
- (double)_maxXLocOfOutlineColumn;
- (double)_minXLocOfOutlineColumn;
- (void)_moveItemAtIndex:(long long)a0 inParentRowEntry:(id)a1 toIndex:(long long)a2 inParentRowEntry:(id)a3;
- (BOOL)_needsRedisplayOnFrameChange;
- (struct __CFArray { } *)_newSelectedRowEntriesArrayIncludingExpandable:(BOOL)a0 includingUnexpandable:(BOOL)a1 withCurrentExpandState:(BOOL)a2;
- (long long)_nextFloatableRowFromRow:(long long)a0 inVisibleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_nonStaticDataSourceChild:(long long)a0 ofItem:(id)a1;
- (BOOL)_nonStaticDataSourceIsItemExpandable:(id)a0;
- (long long)_nonStaticNumberOfChildrenOfItem:(id)a0;
- (void)_notifyDelegateOfStateChangeForCell:(id)a0;
- (long long)_numVisibleChildrenForEntry:(id)a0;
- (BOOL)_numberOfRowsIsValid;
- (double)_originalOutlineColumnWidth;
- (id)_outlineCell;
- (long long)_outlineCellBackgroundStyleForRow:(long long)a0;
- (double)_outlineCellIndentation;
- (void)_outlineControlClicked:(id)a0;
- (void)_outlineMouseEntered:(id)a0;
- (void)_outlineMouseExited:(id)a0;
- (long long)_outlineTrackingRowForEvent:(id)a0;
- (id)_pasteboardWriterForRow:(long long)a0;
- (void)_postItemDidCollapseNotification:(id)a0;
- (void)_postItemWillCollapseNotification:(id)a0;
- (void)_postItemWillExpandNotification:(id)a0;
- (long long)_preferredDragColumnForEvent:(id)a0;
- (id)_preparedOutlineCellForRow:(long long)a0;
- (void)_printDataSourceWarning;
- (BOOL)_priorRowIsSelectedFromRow:(long long)a0 inSelection:(id)a1;
- (void)_readPersistentExpandItems;
- (void)_readPersistentTableColumns;
- (void)_recursiveCollapseItemEntry:(id)a0 collapseChildren:(BOOL)a1 clearExpandState:(BOOL)a2;
- (void)_recursivelyDeleteRowEntryAndAllChildren:(id)a0;
- (void)_recursivelyReloadItem:(id)a0 reloadChildren:(BOOL)a1 withInsertAnimation:(unsigned long long)a2 removeAnimation:(unsigned long long)a3;
- (void)_redisplayAfterExpansionChangeFromRow:(long long)a0 withOriginalRowCount:(long long)a1;
- (void)_redisplayAndResizeFromRow:(long long)a0;
- (void)_removeDisclosureButtonForRowView:(id)a0;
- (BOOL)_removeDisclosureButtonForRowView:(id)a0 withIdentifier:(id)a1;
- (void)_removeDisclosureButtonOtherIdentifierForRowView:(id)a0 withIdentifier:(id)a1;
- (void)_removeItemsAtIndexes:(id)a0 inParentRowEntry:(id)a1 withAnimation:(unsigned long long)a2;
- (void)_resizeOutlineColumn;
- (void)_restoreExpandedChildrenForItem:(id)a0;
- (BOOL)_rowEntryExistsForItem:(id)a0;
- (id)_rowEntryForChild:(long long)a0 ofParent:(id)a1 requiredRowEntryLoadMask:(unsigned long long)a2;
- (id)_rowEntryForItem:(id)a0;
- (id)_rowEntryForItem:(id)a0 requiredRowEntryLoadMask:(unsigned long long)a1;
- (id)_rowEntryForRow:(long long)a0 requiredRowEntryLoadMask:(unsigned long long)a1;
- (void)_scheduleAutoExpandTimerForItem:(id)a0 dragInfo:(id)a1;
- (void)_scrollFieldEditorToVisible:(id)a0;
- (id)_selectionDidChangeNotificationName;
- (id)_selectionIsChangingNotificationName;
- (void)_sendBindingAdapterWillDisplayCell:(id)a0 forColumn:(id)a1 row:(long long)a2;
- (void)_sendDataSourceSortDescriptorsDidChange:(id)a0;
- (BOOL)_sendDataSourceWriteDragDataWithIndexes:(id)a0 toPasteboard:(id)a1;
- (BOOL)_sendDelegateCanReselectRow:(long long)a0;
- (BOOL)_sendDelegateCanSelectColumn:(long long)a0;
- (BOOL)_sendDelegateCanSelectRow:(long long)a0;
- (void)_sendDelegateDidClickColumn:(long long)a0;
- (void)_sendDelegateDidDragColumn:(long long)a0;
- (void)_sendDelegateDidMouseDownInHeader:(long long)a0;
- (void)_sendDelegateDidReselectRow:(long long)a0;
- (double)_sendDelegateHeightOfRow:(long long)a0;
- (id)_sendDelegateSelectionIndexesForProposedSelection:(id)a0;
- (BOOL)_sendDelegateShouldShowCellExpansionForColumn:(long long)a0 row:(long long)a1;
- (void)_sendDelegateWillDisplayCell:(id)a0 forColumn:(id)a1 row:(long long)a2;
- (void)_sendDelegateWillDisplayOutlineCell:(id)a0 inOutlineTableColumnAtRow:(long long)a1;
- (void)_sendDraggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (BOOL)_sendShouldTrackCell:(id)a0 forTableColumn:(id)a1 row:(long long)a2;
- (void)_sendWillBeginDraggingSession:(id)a0 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a1 forDraggedRowIndexes:(id)a2;
- (void)_setAllowAnimationsToYes;
- (void)_setAnimateExpandAndCollapse:(BOOL)a0;
- (void)_setDisclosureButtonVisible:(BOOL)a0 onRow:(long long)a1;
- (void)_setNeedsDisplayForDropCandidateItem:(id)a0 childIndex:(long long)a1 mask:(unsigned long long)a2;
- (void)_setNeedsDisplayInRow:(long long)a0;
- (void)_setOutlineCell:(id)a0;
- (void)_setOutlineTableColumn:(id)a0;
- (void)_setStaticItems:(id)a0;
- (void)_setTrackingOutlineCell:(id)a0;
- (void)_setupAnimationsIfNeeded;
- (void)_setupStateForOutlineCell:(id)a0 atRow:(long long)a1;
- (BOOL)_shouldAnimateChanges;
- (BOOL)_shouldAnimateExpandCollapse;
- (BOOL)_shouldAttemptDroppingAsChildOfLeafItems;
- (BOOL)_shouldAutoExpandItem:(id)a0;
- (BOOL)_shouldAutoExpandNoExpandableItem:(id)a0;
- (BOOL)_shouldCallWillDisplayOutlineCell;
- (BOOL)_shouldCollapseItem:(id)a0;
- (BOOL)_shouldContinueExpandAtLevel:(long long)a0 beganAtLevel:(long long)a1;
- (BOOL)_shouldDoDragUpdateOfViewBasedRowData;
- (BOOL)_shouldEncodeUILayoutDirection;
- (BOOL)_shouldExpandItem:(id)a0;
- (BOOL)_shouldHighlightParentRows;
- (BOOL)_shouldIndentBackgroundRect;
- (BOOL)_shouldReuseViews;
- (BOOL)_shouldShowOutlineCellForGroupRow:(long long)a0;
- (BOOL)_shouldUseTrackingAreasForOutlineCell;
- (void)_sizeModeChangeForRowView:(id)a0 row:(long long)a1;
- (double)_sizeToFitWidthOfColumn:(long long)a0 row:(long long)a1;
- (double)_sourceListGroupRowBottomSpacing;
- (unsigned long long)_sourceListIndentationMode;
- (void)_startAutoExpandWithFlash:(id)a0;
- (void)_startAutoExpandingItemFlash;
- (id)_staticDataForItem:(id)a0;
- (id)_staticDataSourceChild:(long long)a0 ofItem:(id)a1;
- (BOOL)_staticDataSourceIsItemExpandable:(id)a0;
- (void)_staticInsertItemsAtIndexes:(id)a0 inParent:(id)a1;
- (id)_staticItemDataChild:(long long)a0 ofItemData:(id)a1;
- (BOOL)_staticItemWasExpanded:(id)a0;
- (id)_staticItems;
- (void)_staticLoadChildrenForItem:(id)a0 itemData:(id)a1;
- (void)_staticMoveItemAtIndex:(long long)a0 inParent:(id)a1 toIndex:(long long)a2 inParent:(id)a3;
- (long long)_staticNumberOfChildrenOfItem:(id)a0;
- (void)_staticRemoveAllChildrenForItemEntry:(id)a0;
- (void)_staticRemoveItemsAtIndexes:(id)a0 inParent:(id)a1;
- (id)_staticRowViewForRow:(long long)a0;
- (void)_staticSetItem:(id)a0 isExpanded:(BOOL)a1;
- (void)_staticTableViewDecodeRowsWithCoder:(id)a0;
- (void)_staticTableViewEncodeRowsWithCoder:(id)a0;
- (void)_stopAutoExpandingItemFlash;
- (BOOL)_supportsRTL;
- (BOOL)_switchToNonViewBased;
- (void)_switchToViewBasedIfNeeded;
- (id)_tableViewColumnDidResizeNotificationName;
- (void)_throwExceptionForUpdateErrorAtIndexes:(id)a0 kind:(id)a1 ofParentRowEntry:(id)a2;
- (id)_trackingOutlineCell;
- (id)_trackingOutlineCellForRow:(long long)a0;
- (void)_tryDrop:(id)a0 dropItem:(id)a1 dropChildIndex:(long long)a2;
- (long long)_uncachedNumberOfRows;
- (void)_updateCellViewContentTintColors;
- (void)_updateDisclosureButtonAtRow:(long long)a0;
- (void)_updateDisclosureButtonForRowView:(id)a0 atRow:(long long)a1;
- (void)_updateDisclosureButtonForRowView:(id)a0 forRow:(long long)a1 removeIfNotAvailable:(BOOL)a2 updatePosition:(BOOL)a3 inDidAddRowView:(BOOL)a4;
- (void)_updateDropFeedbackFromPriorItem:(id)a0 childIndex:(long long)a1 mask:(unsigned long long)a2;
- (void)_updateForSizeModeChange;
- (void)_updateTrackingAreasWithInvalidCursorRects:(BOOL)a0;
- (BOOL)_userCanChangeSelection;
- (BOOL)_userCanEditTableColumn:(id)a0 row:(long long)a1;
- (void)_validateParentRowEntry:(id)a0 reason:(id)a1 indexes:(id)a2;
- (void)_validateRowEntryArray;
- (BOOL)_wantsGroupRowHoverCallbacksForRow:(long long)a0;
- (void)_writePersistentExpandItems;
- (void)_writePersistentTableColumns;
- (BOOL)acceptsFirstResponder;
- (void)accessibilityPostNotification:(id)a0 context:(id)a1;
- (id)accessibilityRoleAttribute;
- (void)addDropBetweenFeedbackViewsForRow:(long long)a0;
- (void)addDropOnFeedbackViewsForRow:(long long)a0;
- (id)child:(long long)a0 ofItem:(id)a1;
- (long long)childIndexForItem:(id)a0;
- (void)collapseItem:(id)a0;
- (void)collapseItem:(id)a0 collapseChildren:(BOOL)a1;
- (void)didAddRowView:(id)a0 forRow:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dragFrameOfCellAtColumn:(long long)a0 row:(long long)a1;
- (void)dragImage:(id)a0 at:(struct CGPoint { double x0; double x1; })a1 offset:(struct CGSize { double x0; double x1; })a2 event:(id)a3 pasteboard:(id)a4 source:(id)a5 slideBack:(BOOL)a6;
- (void)draggedImage:(id)a0 movedTo:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)draggingEntered:(id)a0;
- (unsigned long long)draggingUpdated:(id)a0;
- (void)drawRowIndexes:(id)a0 clipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)expandItem:(id)a0;
- (void)expandItem:(id)a0 expandChildren:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfCellAtColumn:(long long)a0 row:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfOutlineCellAtRow:(long long)a0;
- (id)identifierForRow:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertItemsAtIndexes:(id)a0 inParent:(id)a1 withAnimation:(unsigned long long)a2;
- (void)insertRowsAtIndexes:(id)a0 withAnimation:(unsigned long long)a1;
- (BOOL)isExpandable:(id)a0;
- (id)itemAtRow:(long long)a0;
- (void)keyDown:(id)a0;
- (long long)levelForItem:(id)a0;
- (long long)levelForRow:(long long)a0;
- (id)makeViewWithIdentifier:(id)a0 owner:(id)a1;
- (void)mouseDown:(id)a0;
- (BOOL)mouseTracker:(id)a0 didStopTrackingWithEvent:(id)a1;
- (BOOL)mouseTracker:(id)a0 shouldContinueTrackingWithEvent:(id)a1;
- (BOOL)mouseTracker:(id)a0 shouldStartTrackingWithEvent:(id)a1;
- (void)moveItemAtIndex:(long long)a0 inParent:(id)a1 toIndex:(long long)a2 inParent:(id)a3;
- (void)moveRowAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)noteHeightOfRowsWithIndexesChanged:(id)a0;
- (long long)numberOfChildrenOfItem:(id)a0;
- (long long)numberOfRows;
- (id)parentForItem:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)prepareDraggingDestinationView:(id)a0 forRowIndexes:(id)a1 draggingStyle:(long long)a2;
- (id)preparedCellAtColumn:(long long)a0 row:(long long)a1;
- (void)reloadData;
- (void)reloadItem:(id)a0;
- (void)reloadItem:(id)a0 reloadChildren:(BOOL)a1;
- (void)reloadItem:(id)a0 reloadChildren:(BOOL)a1 withInsertAnimation:(unsigned long long)a2 removeAnimation:(unsigned long long)a3;
- (void)removeFromSuperview;
- (void)removeItemsAtIndexes:(id)a0 inParent:(id)a1 withAnimation:(unsigned long long)a2;
- (void)removeRowsAtIndexes:(id)a0 withAnimation:(unsigned long long)a1;
- (void)removeTableColumn:(id)a0;
- (long long)rowForItem:(id)a0;
- (void)setAutosaveName:(id)a0;
- (void)setDropItem:(id)a0 dropChildIndex:(long long)a1;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSelectionHighlightStyle:(long long)a0;
- (void)setStronglyReferencesItems:(BOOL)a0;
- (void)setUserInterfaceLayoutDirection:(long long)a0;
- (void)setUsesStaticContents:(BOOL)a0;
- (BOOL)shouldCollapseAutoExpandedItemsForDeposited:(BOOL)a0;
- (BOOL)shouldShowOutlineCellInlineForRow:(long long)a0;
- (BOOL)stronglyReferencesItems;
- (void)viewWillDraw;

@end
