@class NSString, NSArray, WebHTMLView, NSTableView, WebView, NSWindow;

@interface WebTextCompletionController : NSObject <NSTableViewDelegate, NSTableViewDataSource> {
    WebView *_view;
    WebHTMLView *_htmlView;
    NSWindow *_popupWindow;
    NSTableView *_tableView;
    NSArray *_completions;
    NSString *_originalString;
    int prefixLength;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)tableAction:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)_buildUI;
- (void)_insertMatch:(id)a0;
- (void)_placePopupWindow:(struct CGPoint { double x0; double x1; })a0;
- (void)_reflectSelection;
- (void)doCompletion;
- (void)endRevertingChange:(BOOL)a0 moveLeft:(BOOL)a1;
- (BOOL)filterKeyDown:(id)a0;
- (id)initWithWebView:(id)a0 HTMLView:(id)a1;
- (BOOL)popupWindowIsOpen;

@end
