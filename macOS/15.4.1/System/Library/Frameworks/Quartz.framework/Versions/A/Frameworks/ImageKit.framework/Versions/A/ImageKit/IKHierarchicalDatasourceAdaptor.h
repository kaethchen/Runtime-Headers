@class NSMutableArray;

@interface IKHierarchicalDatasourceAdaptor : NSObject {
    NSMutableArray *_items;
    NSMutableArray *_groups;
    BOOL _flattenedRepresentationValid;
}

@property id imageBrowser;
@property id dataSource;

- (void)dealloc;
- (void)invalidate;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)a0;
- (void)reloadData;
- (BOOL)dataSourceRestrictsAddAndRemove;
- (void)addItemsAtDropLocation:(id)a0;
- (void)appendChildItemsOfItem:(id)a0;
- (id)convertIndexesToParentsAndChildIndexes:(id)a0;
- (unsigned long long)convertToCellIndexChildIndex:(unsigned long long)a0 ofParent:(id)a1;
- (void)copyItemsToDropLocation:(id)a0;
- (void)currentDropOperationParent:(id *)a0 childIndex:(unsigned long long *)a1 cellIndex:(unsigned long long *)a2;
- (unsigned long long)groupIndexAtCellIndex:(unsigned long long)a0;
- (id)imageBrowser:(id)a0 groupAtIndex:(unsigned long long)a1;
- (id)imageBrowser:(id)a0 itemAtIndex:(unsigned long long)a1;
- (void)imageBrowser:(id)a0 removeItemsAtIndexes:(id)a1;
- (unsigned long long)imageBrowser:(id)a0 writeItemsAtIndexes:(id)a1 toPasteboard:(id)a2;
- (BOOL)itemAtCellIndexAllowsChildAddAndRemove:(unsigned long long)a0;
- (void)makeFlattenedRepresentationReady;
- (void)moveItemsToDropLocation:(id)a0 sourceHierarchicalDatasourceAdapter:(id)a1;
- (unsigned long long)numberOfGroupsInImageBrowser:(id)a0;
- (unsigned long long)numberOfItemsInImageBrowser:(id)a0;
- (BOOL)topLevelAllowsAddAndRemove;
- (id)topLevelItemAtDropLocation;

@end
