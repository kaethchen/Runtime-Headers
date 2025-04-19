@class NSString, OSADictionaryView, NSSearchField, OSADictionaryControllerPrivate;

@interface OSADictionaryController : NSController <NSBrowserDelegate, NSTableViewDelegate, NSOutlineViewDelegate, NSOutlineViewDataSource, NSSplitViewDelegate> {
    OSADictionaryView *dictionaryView;
    NSSearchField *searchField;
    OSADictionaryControllerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSSearchField *searchField;

- (void)dealloc;
- (id)init;
- (id)dictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)setDictionary:(id)a0;
- (void)awakeFromNib;
- (long long)browser:(id)a0 numberOfRowsInColumn:(long long)a1;
- (void)browser:(id)a0 willDisplayCell:(id)a1 atRow:(long long)a2 column:(long long)a3;
- (id)dataSource;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 objectValueForTableColumn:(id)a1 byItem:(id)a2;
- (void)outlineView:(id)a0 willDisplayCell:(id)a1 forTableColumn:(id)a2 item:(id)a3;
- (void)outlineViewSelectionDidChange:(id)a0;
- (void)setDataSource:(id)a0;
- (BOOL)splitView:(id)a0 canCollapseSubview:(id)a1;
- (void)splitViewDidResizeSubviews:(id)a0;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 request:(id)a2 frame:(id)a3 decisionListener:(id)a4;
- (void)webView:(id)a0 didFinishLoadForFrame:(id)a1;
- (void)webView:(id)a0 resource:(id)a1 didFailLoadingWithError:(id)a2 fromDataSource:(id)a3;
- (id)webView:(id)a0 resource:(id)a1 willSendRequest:(id)a2 redirectResponse:(id)a3 fromDataSource:(id)a4;
- (void)setViewState:(id)a0;
- (id)viewState;
- (id)webView:(id)a0 contextMenuItemsForElement:(id)a1 defaultMenuItems:(id)a2;
- (BOOL)webView:(id)a0 validateUserInterfaceItem:(id)a1 defaultValidation:(BOOL)a2;
- (void)goBack:(id)a0;
- (void)makeTextLarger:(id)a0;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)goForward:(id)a0;
- (void)makeTextSmaller:(id)a0;
- (void)updateContentView;
- (void)selectDefinitionsInContentView:(id)a0;
- (void)changeSelection:(id)a0;
- (id)dataSourceItemWithDefinition:(id)a0;
- (id)dataSourceItemWithDefinition:(id)a0 inItems:(id)a1;
- (id)definitionForAnchor:(id)a0;
- (id)definitionForAnchor:(id)a0 inItems:(id)a1;
- (id)definitionsController;
- (id)dictionaryHistory;
- (id)dictionaryView;
- (void)expandOutlineItemsForObjects:(id)a0;
- (id)itemsToExpandForItem:(id)a0;
- (id)makeDataSourceFromDictionary:(id)a0;
- (id)parentItemOfDataSourceItem:(id)a0;
- (id)parentItemOfDataSourceItem:(id)a0 inItems:(id)a1;
- (void)selectOutlineItemsForObjects:(id)a0;
- (id)selectedDefinitions;
- (BOOL)selectingObjects;
- (void)setDefinitionsController:(id)a0;
- (void)setDictionaryHistory:(id)a0;
- (void)setDictionaryView:(id)a0;
- (void)setSelectingObjects:(BOOL)a0;

@end
