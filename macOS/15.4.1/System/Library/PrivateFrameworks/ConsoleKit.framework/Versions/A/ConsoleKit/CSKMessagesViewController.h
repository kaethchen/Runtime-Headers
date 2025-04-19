@class NSString, NSMapTable, NSMutableDictionary, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, CSKMessagesViewControllerDataSource;

@interface CSKMessagesViewController : CSKTableViewController <NSTableViewDataSource, CSKMessagesTableViewEventDelegate> {
    NSMutableDictionary *_rowToBlockOp;
    NSOperationQueue *_cellUpdateOpQueue;
}

@property (readonly, nonatomic) NSMapTable *expandedRowsCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cellUpdateQueue;
@property (nonatomic) unsigned long long currentRow;
@property (weak, nonatomic) id<CSKMessagesViewControllerDataSource> dataSource;
@property (nonatomic) BOOL allowsMessagesInsertion;
@property (nonatomic) unsigned long long anchorROWID;
@property (nonatomic) double defaultRowHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didAddRowView:(id)a1 forRow:(long long)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })firstSelectedRange;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)stringAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 endsWithSearchBoundary:(BOOL *)a2;
- (unsigned long long)stringLength;
- (void)tableView:(id)a0 didRemoveRowView:(id)a1 forRow:(long long)a2;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (void)tableView:(id)a0 sortDescriptorsDidChange:(id)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)reload;
- (id)entityAtIndex:(unsigned long long)a0;
- (void)_reloadMessageStringColumnRows:(id)a0;
- (BOOL)_isRowExpanded:(long long)a0;
- (void)_cacheHeightsForMessagesStringAtIndexes:(id)a0;
- (double)_cachedHeightForRow:(long long)a0;
- (id)_collapsedRowsInRows:(id)a0;
- (id)_expandedRowsInRows:(id)a0;
- (BOOL)_isMessageStringColumnVisible;
- (id)_padString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeForCharacterIndex:(unsigned long long)a0;
- (unsigned long long)_rangeToRowIndex:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_removeCachedHeightsForRows:(id)a0;
- (void)_updateCachedHeightForRow:(unsigned long long)a0 string:(id)a1 width:(double)a2;
- (void)collapseEntitiesAtIndexes:(id)a0;
- (id)defaultColumnLayout;
- (id)entitiesAtIndexes:(id)a0;
- (void)expandEntitiesAtIndexes:(id)a0;
- (void)insertMessagesAtIndexes:(id)a0;
- (void)insertMessagesAtIndexes:(id)a0 ignoreFocus:(BOOL)a1;
- (void)messagesTableViewLeftArrowDidPress:(id)a0;
- (void)messagesTableViewRightArrowDidPress:(id)a0;
- (void)removeMessagesAtIndexes:(id)a0;
- (void)scrollViewDidEndResizeNotification:(id)a0;
- (void)textFinder:(id)a0 findBarVisibilityDidChange:(BOOL)a1;

@end
