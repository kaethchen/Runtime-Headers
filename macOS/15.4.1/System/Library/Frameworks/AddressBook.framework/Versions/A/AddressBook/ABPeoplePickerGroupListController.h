@class ABPeoplePickerGroupListStyleProvider, NSString, ABPeoplePickerGroupListView, ABGroupEntriesList;
@protocol ABGroupHelperFactory;

@interface ABPeoplePickerGroupListController : NSViewController <NSOutlineViewDataSource, NSOutlineViewDelegate> {
    BOOL _didAwakeFromNib;
    ABPeoplePickerGroupListStyleProvider *_groupListStyleProvider;
}

@property (copy) NSString *selectedGroupEntryIdentifier;
@property (weak) ABPeoplePickerGroupListView *outlineView;
@property (weak) id<ABGroupHelperFactory> helperFactory;
@property (retain, nonatomic) ABGroupEntriesList *groupEntriesList;
@property (retain) id target;
@property SEL doubleAction;
@property BOOL allowsEmptySelection;
@property BOOL allowsMultipleSelection;
@property BOOL hasBorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)selectRow:(long long)a0 byExtendingSelection:(BOOL)a1;
- (void)awakeFromNib;
- (void)deselectAll:(id)a0;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (id)outlineView:(id)a0 itemForPersistentObject:(id)a1;
- (id)outlineView:(id)a0 namesOfPromisedFilesDroppedAtDestination:(id)a1 forDraggedItems:(id)a2;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 persistentObjectForItem:(id)a1;
- (id)outlineView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (BOOL)outlineView:(id)a0 shouldEditTableColumn:(id)a1 item:(id)a2;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (BOOL)outlineView:(id)a0 writeItems:(id)a1 toPasteboard:(id)a2;
- (void)outlineViewSelectionDidChange:(id)a0;
- (void)selectAll:(id)a0;
- (void)selectGroupEntryWithIdentifier:(id)a0;
- (BOOL)canSelectEntryAtRow:(long long)a0;
- (id)childrenForEntry:(id)a0;
- (id)groupEntries;
- (void)groupEntriesDidChange:(id)a0;
- (BOOL)outlineViewNeedsIndentation:(id)a0;
- (void)reloadAndRestoreSelection;
- (void)selectGroupEntry:(id)a0;
- (long long)selectableRowForPreviouslySelectedRow:(long long)a0;
- (BOOL)canDragEntries:(id)a0;
- (void)deselectGroup:(id)a0;
- (BOOL)groupListHasFocus;
- (void)selectGroup:(id)a0 byExtendingSelection:(BOOL)a1;
- (id)selectedGroups;
- (void)writeGroupUIDs:(id)a0 toPasteboard:(id)a1;

@end
