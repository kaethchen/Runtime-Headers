@class NSString, NSMutableArray, DownloadTableView;
@protocol DownloadViewControllerDataSource, DownloadViewControllerDelegate;

@interface DownloadViewController : NSResponder <NSTableViewDelegate, NSTableViewDataSource> {
    DownloadTableView *_tableView;
}

@property (retain, nonatomic) NSMutableArray *downloadEntries;
@property (weak, nonatomic) id<DownloadViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<DownloadViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)delete:(id)a0;
- (void)cancel:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)awakeFromNib;
- (void)concludeDragOperation:(id)a0;
- (void)copy:(id)a0;
- (void)cut:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (void)keyDown:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)open:(id)a0;
- (void)paste:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 writeRowsWithIndexes:(id)a1 toPasteboard:(id)a2;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)stopLoading:(id)a0;
- (void)_removeEntry:(id)a0;
- (struct CGSize { double x0; double x1; })bestSize;
- (void)_removeEntries:(id)a0;
- (void)_resumeEntries:(id)a0;
- (void)reveal:(id)a0;
- (void)_openSelection:(id)a0;
- (void)_revealEntries:(id)a0;
- (void)_addAllEntries;
- (BOOL)_canCopyEntries:(id)a0;
- (BOOL)_canCopySelection;
- (BOOL)_canOpenEntries:(id)a0;
- (BOOL)_canOpenSelection;
- (BOOL)_canPaste;
- (BOOL)_canRemoveEntries:(id)a0;
- (BOOL)_canRemoveSelection;
- (BOOL)_canResumeEntries:(id)a0;
- (BOOL)_canResumeSelection;
- (BOOL)_canRevealEntries:(id)a0;
- (BOOL)_canRevealSelection;
- (BOOL)_canStopEntries:(id)a0;
- (BOOL)_canStopSelection;
- (void)_copyEntries:(id)a0;
- (void)_copySelection;
- (void)_insertEntry:(id)a0 atIndex:(unsigned int)a1;
- (void)_noteSizeDidChange;
- (void)_openEntries:(id)a0;
- (void)_redoRemoveEntries:(id)a0;
- (void)_removeSelection;
- (void)_resumeSelection;
- (void)_revealSelection;
- (id)_selectedEntries;
- (void)_stopEntries:(id)a0;
- (void)_stopSelection;
- (void)_undoRemoveEntries:(id)a0;
- (BOOL)_validateEntries:(id)a0 withBooleanKey:(id)a1;
- (BOOL)accessibilityPerformShowMenuForTableView:(id)a0;
- (void)downloadDidStart:(id)a0;
- (void)downloadsDidChange:(id)a0;
- (void)reloadDownloadsView;
- (void)removeIdleEntries;
- (void)stopResume:(id)a0;
- (id)tableView:(id)a0 menuForEvent:(id)a1;

@end
