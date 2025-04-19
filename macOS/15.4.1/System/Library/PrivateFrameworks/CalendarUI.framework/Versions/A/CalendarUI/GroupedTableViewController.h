@class NSArray, NSString, NSSet, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface GroupedTableViewController : NSObject <NSTableViewDelegate, NSTableViewDataSource>

@property int organizationType;
@property (retain) NSArray *items;
@property (retain) NSString *itemPropertyForGroup;
@property (retain) NSSet *groups;
@property (retain) NSString *groupPropertyForItemArray;
@property (retain) NSDictionary *itemsForGroups;
@property (copy) id /* block */ itemFilter;
@property (copy) id /* block */ groupFilter;
@property (retain) NSMutableArray *itemsWithGroups;
@property (retain) NSMutableDictionary *rowsForObjects;
@property (retain) NSString *groupPropertyForEditability;
@property BOOL showsSummaryRow;
@property BOOL summaryRowIsSelectable;
@property (retain) id emptyGroup;
@property (retain) NSArray *itemSortDescriptors;
@property (retain) NSArray *groupSortDescriptors;
@property BOOL showsHeaderForSingularGroup;
@property BOOL showsHeaderForFirstGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)itemAtRow:(long long)a0;
- (unsigned long long)numberOfRows;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)print:(id)a0;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)groupOwningRow:(long long)a0;
- (id)groupAtRow:(long long)a0;
- (id)groupForItem:(id)a0;
- (id)indexesWithoutGroupRowsForProposedIndexes:(id)a0;
- (BOOL)isBlankRow:(long long)a0;
- (BOOL)isGroupRow:(long long)a0;
- (BOOL)isItemRow:(long long)a0;
- (BOOL)isSummaryRow:(long long)a0;
- (id)itemsInGroup:(id)a0;
- (unsigned long long)numberOfVisibleGroups;
- (id)objectAtRow:(long long)a0;
- (id)objectsAtRows:(id)a0;
- (void)refreshItemsWithGroups;
- (long long)rowOfObject:(id)a0;
- (id)rowsOfObjects:(id)a0;
- (id)selectedItemsInTableView:(id)a0;
- (void)setGroupPropertyForItemArray:(id)a0 groupPropertyForEditability:(id)a1 groupsSortedBy:(id)a2 itemsSortedBy:(id)a3;
- (void)setItemPropertyForGroup:(id)a0 groupPropertyForEditability:(id)a1 groupsSortedBy:(id)a2 itemsSortedBy:(id)a3;
- (void)setShowsSummaryRow:(BOOL)a0 selectable:(BOOL)a1;
- (void)updateEmptyGroup:(id)a0;
- (void)updateGroups:(id)a0;
- (void)updateItemFilter:(id /* block */)a0;
- (void)updateItems:(id)a0;

@end
