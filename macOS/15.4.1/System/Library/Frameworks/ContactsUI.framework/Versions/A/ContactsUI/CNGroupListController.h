@class NSString, NSLayoutConstraint, CNGroupListView, ABGroupEntriesList;
@protocol ABGroupHelperFactory;

@interface CNGroupListController : NSObject <NSOutlineViewDataSource, NSOutlineViewDelegate> {
    unsigned long long _countOfGroupsViewed;
    BOOL _ignoreSelectionDidChange;
}

@property (retain, nonatomic) NSLayoutConstraint *groupListViewWidthConstraint;
@property (copy) NSString *selectedGroupEntryIdentifier;
@property (retain, nonatomic) CNGroupListView *groupListView;
@property (weak, nonatomic) ABGroupEntriesList *groupEntriesList;
@property (retain) id<ABGroupHelperFactory> helperFactory;
@property (readonly) unsigned long long countOfGroupsViewed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)outlineView:(id)a0 acceptDrop:(id)a1 item:(id)a2 childIndex:(long long)a3;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (double)outlineView:(id)a0 heightOfRowByItem:(id)a1;
- (BOOL)outlineView:(id)a0 isGroupItem:(id)a1;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 rowViewForItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldShowOutlineCellForItem:(id)a1;
- (unsigned long long)outlineView:(id)a0 validateDrop:(id)a1 proposedItem:(id)a2 proposedChildIndex:(long long)a3;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)outlineViewSelectionDidChange:(id)a0;
- (void)registerForDraggedTypes:(id)a0;
- (BOOL)canDropOnEntry:(id)a0;
- (void)selectGroupEntryWithIdentifier:(id)a0;
- (BOOL)canSelectEntryAtRow:(long long)a0;
- (id)childrenForEntry:(id)a0;
- (void)configureCellView:(id)a0 forEntry:(id)a1;
- (id)dropHelperWithDraggingInfo:(id)a0 droppedEntry:(id)a1 childIndex:(long long)a2;
- (id)groupEntries;
- (void)groupEntriesDidChange:(id)a0;
- (BOOL)isValidRow:(long long)a0;
- (BOOL)outlineViewNeedsIndentation:(id)a0;
- (void)performInitialSelection;
- (void)programaticallyChangeSelectionWithBlock:(id /* block */)a0;
- (void)reloadAndRestoreSelection;
- (void)resetCountOfGroupsViewed;
- (void)selectGroupEntry:(id)a0;
- (long long)selectableRowForPreviouslySelectedRow:(long long)a0;
- (id)selectedGroupEntry;
- (void)setupListView;
- (void)updateSelectionAppearance;
- (void)updateUIForCurrentSelection;

@end
