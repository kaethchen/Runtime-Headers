@class NSButton, NSString, NSTextField, WBSFaviconRequestsController, NSTableView, NSOutlineView, NSSplitView;
@protocol BookmarkChooserDelegate;

@interface BookmarkChooser : NSWindowController <NSOutlineViewDataSource, NSOutlineViewDelegate, NSTableViewDataSource, NSTableViewDelegate> {
    NSSplitView *collectionsAndContentsSplitView;
    NSTableView *collectionsTable;
    NSOutlineView *contentsOutline;
    NSButton *cancelButton;
    NSButton *confirmButton;
    NSTextField *promptField;
    WBSFaviconRequestsController *_tableRequestsController;
    WBSFaviconRequestsController *_outlineRequestsController;
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *__value_; } __end_cap_; } _uiShownRowIndexes;
}

@property (nonatomic) BOOL canChooseBookmarkLeaves;
@property (nonatomic) BOOL canChooseBookmarkCollections;
@property (weak, nonatomic) id<BookmarkChooserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bookmarkChooser;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)outlineViewSelectionDidChange:(id)a0;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)tableViewSelectionIsChanging:(id)a0;
- (void)windowDidLoad;
- (void)_cancel:(id)a0;
- (void)beginSheetModalForWindow:(id)a0;
- (BOOL)_canChooseBookmark:(id)a0;
- (id)_collectionAtRow:(long long)a0;
- (void)_confirm:(id)a0;
- (void)_refreshAllFromNotification:(id)a0;
- (void)_refreshContentsFromCollectionChange;
- (void)_refreshDataPreservingSelection:(BOOL)a0;
- (id)_selectedCollection;
- (BOOL)_shouldEnableRowAtIndex:(unsigned long long)a0;
- (void)_startObservingBookmarkAndIconChanges;
- (void)_stopObservingBookmarkAndIconChanges;
- (void)_updateConfirmButton;
- (void)_updatePrompt;
- (BOOL)_visibleSheetIsBlockingPropertyChanges;
- (id)chosenBookmark;

@end
