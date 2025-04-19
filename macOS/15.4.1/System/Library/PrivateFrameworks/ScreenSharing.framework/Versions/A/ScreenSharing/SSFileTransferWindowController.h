@class NSTextField, NSMutableDictionary, NSMutableArray, NSTableView, NSButton, NSUserDefaults;

@interface SSFileTransferWindowController : NSWindowController <SSFileTransferTableCellViewDelegate> {
    NSMutableArray *fileTransferArray;
    long long rowPlusOneToMakeVisibleInAwakeFromNib;
}

@property (retain) NSUserDefaults *iconCacheUserDefaults;
@property NSTableView *tableView;
@property NSTextField *transferCountTextField;
@property NSButton *cancelAllButton;
@property (retain) NSMutableDictionary *iconCacheDict;

+ (id)sharedController;

- (oneway void)release;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithWindow:(id)a0;
- (void)clear:(id)a0;
- (void)keyDown:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)windowDidLoad;
- (void)windowWillClose:(id)a0;
- (void)updateCount;
- (void)addFileTransfer:(id)a0;
- (void)addFileTransfersFromArray:(id)a0;
- (void)addFileTransfersFromArray:(id)a0 saveHistory:(BOOL)a1 scrollToLastItem:(BOOL)a2;
- (void)cancelAll:(id)a0;
- (id)iconForFilePath:(id)a0 saveCache:(BOOL)a1;
- (void)loadHistory;
- (void)removeFileTransfer:(id)a0;
- (void)removeFileTransfersFromArray:(id)a0;
- (void)removeInitialRows;
- (void)saveHistory;
- (void)saveIconCache;
- (BOOL)shouldShowCancelAllButton;

@end
