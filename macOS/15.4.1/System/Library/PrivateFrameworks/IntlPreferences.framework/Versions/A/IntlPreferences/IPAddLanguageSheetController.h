@class NSImageView, NSTextField, NSSearchField, NSArray, NSTableView, NSButton, NSString;

@interface IPAddLanguageSheetController : NSWindowController <NSTableViewDataSource, NSTableViewDelegate>

@property (retain) NSTableView *tableView;
@property (retain) NSButton *helpButton;
@property (retain) NSButton *addButton;
@property (retain) NSImageView *nonSystemLanguageIcon;
@property (retain) NSTextField *nonSystemLanguageLabel;
@property (retain) NSSearchField *searchField;
@property (retain) NSArray *systemLanguages;
@property (retain) NSArray *otherLanguages;
@property (retain) NSArray *filteredSystemLanguages;
@property (retain) NSArray *filteredOtherLanguages;
@property (copy) id /* block */ didEndBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)runSheetForWindow:(id)a0 systemLanguages:(id)a1 otherLanguages:(id)a2 showHelpButton:(BOOL)a3 usingBlock:(id /* block */)a4;
+ (void)runSheetForWindow:(id)a0 systemLanguages:(id)a1 otherLanguages:(id)a2 usingBlock:(id /* block */)a3;

- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)showHelp:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)windowDidLoad;
- (void)doAdd:(id)a0;
- (void)doCancel:(id)a0;
- (void)runSheetForWindow:(id)a0 systemLanguages:(id)a1 otherLanguages:(id)a2 showHelpButton:(BOOL)a3 usingBlock:(id /* block */)a4;
- (void)searchStringChanged:(id)a0;
- (long long)tableView:(id)a0 typeForRow:(long long)a1 index:(unsigned long long *)a2;

@end
