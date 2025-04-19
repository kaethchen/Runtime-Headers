@class NSTextField, NSString, NSArray, NSSearchField, NSLayoutConstraint, IPKeyboardLayoutWebView, NSButton, NSTableView;

@interface IPAddInputSourceSheetController : NSWindowController <NSTableViewDataSource, NSTableViewDelegate>

@property NSButton *inputSourcesSheetCancelButton;
@property NSTableView *languagesTableView;
@property NSLayoutConstraint *languagesTableWidthConstraint;
@property NSTableView *inputSourcesTableView;
@property NSSearchField *keywordSearchField;
@property IPKeyboardLayoutWebView *keyboardLayoutWebView;
@property NSTextField *keyboardLayoutNotAvailableText;
@property (retain, nonatomic) NSArray *topLanguages;
@property (retain, nonatomic) NSArray *otherLanguages;
@property (retain, nonatomic) NSArray *filteredLanguages;
@property (retain, nonatomic) NSArray *inputSources;
@property (retain, nonatomic) NSArray *keywordFilteredInputSources;
@property (retain, nonatomic) NSArray *languageFilteredInputSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;
+ (void)runSheetForAllInputSourcesForWindow:(id)a0 completionHandler:(id /* block */)a1;
+ (void)runSheetForWindow:(id)a0 topLanguages:(id)a1 otherLanguages:(id)a2 completionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)windowDidLoad;
- (id)languageForRow:(long long)a0;
- (void)keywordChanged:(id)a0;
- (void)adjustConstraint:(id)a0 usingLocalizedStrings:(id)a1 forTableView:(id)a2;
- (void)closeInputSourcesSheet:(id)a0;
- (void)commonInitForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)runSheetForAllInputSourcesForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)runSheetForWindow:(id)a0 topLanguages:(id)a1 otherLanguages:(id)a2 completionHandler:(id /* block */)a3;
- (void)updateFilteredLanguages;
- (void)updateKeyboardLayoutWebView;
- (void)updateKeywordFilteredInputSources;
- (void)updateLanguageFilteredInputSources;
- (id)validateLanguage:(id)a0;

@end
