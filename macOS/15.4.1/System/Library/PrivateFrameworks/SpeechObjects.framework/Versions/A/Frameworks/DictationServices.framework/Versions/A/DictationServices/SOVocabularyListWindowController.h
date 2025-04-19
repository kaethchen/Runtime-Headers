@class NSString, SOAddRemoveActionBar, NSTableView, NSButton, NSMutableArray;

@interface SOVocabularyListWindowController : NSWindowController <NSTableViewDelegate, NSTableViewDataSource> {
    NSTableView *_entriesTableView;
    NSButton *_saveButton;
    NSButton *_cancelButton;
    SOAddRemoveActionBar *_addRemoveActionBar;
    id /* block */ _completionHandler;
    NSMutableArray *_mutableList;
    long long _originalEntryCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultController;

- (void)dealloc;
- (void)cancel:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)save:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)_setupAccessibilityIdentifiers;
- (void)_sortListAndReload;
- (void)pressAddRemoveActionBar:(id)a0;
- (void)showSheetForWindow:(id)a0 entries:(id)a1 completionHandler:(id /* block */)a2;

@end
