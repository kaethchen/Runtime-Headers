@class NSString, NSBundle;

@interface AppKit._NSSuggestionsMenuViewController : NSViewController <AppKit._NSSuggestionsMenuTableViewDelegate, NSTableViewDelegate, NSTableViewDataSource> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ _highlightedSuggestionItem;
    void /* unknown type, empty encoding */ controlSize;
    void /* unknown type, empty encoding */ useMultiColumnLayout;
    void /* unknown type, empty encoding */ shouldHighlightRowsOnHover;
    void /* unknown type, empty encoding */ _itemsToDisplay;
    void /* unknown type, empty encoding */ isVisible;
    void /* unknown type, empty encoding */ localEventMonitor;
    void /* unknown type, empty encoding */ containsAlternateMenuItems;
    void /* unknown type, empty encoding */ imageSharingWidths;
}

@property (nonatomic, readonly) NSString *nibName;
@property (nonatomic, readonly) NSBundle *nibBundle;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (nonatomic, retain) void /* unknown type, empty encoding */ tableView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)moveUp:(id)a0;
- (void)moveDown:(id)a0;
- (void)moveToBeginningOfDocument:(id)a0;
- (void)moveToEndOfDocument:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)tableView:(id)a0 didSelectRow:(long long)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLoad;

@end
