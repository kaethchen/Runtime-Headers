@class NSTableView, NSMutableDictionary, NSMutableIndexSet;

@interface NSTableViewDataSourceUpdatesController : NSObject {
    NSTableView *_tableView;
    NSMutableIndexSet *_rowsToRemove;
    NSMutableIndexSet *_rowsToInsert;
    NSMutableDictionary *_moveUpdates;
    NSMutableIndexSet *_rowsToReload;
}

@property (readonly, nonatomic) NSTableView *tableView;

- (void)dealloc;
- (void)reset;
- (void)commitUpdatesWithCompletionHandler:(id /* block */)a0;
- (id)initWithTableView:(id)a0;
- (void)insertRowAtIndex:(long long)a0;
- (void)insertRowsAtIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)moveRowAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)reloadData;
- (void)reloadDataForRowAtIndex:(long long)a0;
- (void)reloadDataForRowsAtIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeRowAtIndex:(long long)a0;
- (void)removeRowsAtIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
