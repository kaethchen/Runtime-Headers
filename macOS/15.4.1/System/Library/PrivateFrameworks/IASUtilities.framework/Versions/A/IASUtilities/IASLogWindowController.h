@class NSTextField, NSString, NSArray, NSSearchField, NSMutableDictionary, NSPopUpButton, IASLogDataSource, NSBundle, NSWindow, NSTableView;

@interface IASLogWindowController : NSWindowController <NSToolbarDelegate, NSTextFieldDelegate> {
    NSWindow *window;
    NSTableView *uiLogView;
    NSTextField *sendLogCommentTxt;
    NSTextField *sendLogContactTxt;
    NSBundle *_resourcesBundle;
    NSPopUpButton *_logDetailLevelPopUpButton;
    NSSearchField *_filterField;
    NSMutableDictionary *_toolbarItems;
    NSArray *_toolbarIDList;
    id _closeWatcherObj;
    SEL _closeWatcherSel;
    IASLogDataSource *_logDataSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_sendLogViaHost:(id)a0;

- (void).cxx_destruct;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)copy:(id)a0;
- (void)keyDown:(id)a0;
- (void)saveDocument:(id)a0;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (void)toolbarWillAddItem:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)validateToolbarItem:(id)a0;
- (void)windowWillClose:(id)a0;
- (BOOL)writeLogToFile:(id)a0;
- (id)initWithCloseObserver:(id)a0 selector:(SEL)a1;
- (void)_createAndAddToolbar;
- (void)_sendLogViaCrashReporter;
- (void)_setDefaultLogWindowFrame;
- (id)_toolbarItemList;
- (void)printInstallerDocument:(id)a0;
- (void)searchFieldTextChanged:(id)a0;
- (void)showAllLogs:(id)a0;
- (void)showErrorLogs:(id)a0;
- (void)showProgressLogs:(id)a0;

@end
