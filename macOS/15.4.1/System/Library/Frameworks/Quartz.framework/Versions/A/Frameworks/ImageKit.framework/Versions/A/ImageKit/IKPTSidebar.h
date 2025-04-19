@class NSString, NSMutableArray, NSArray;

@interface IKPTSidebar : NSTableView <NSTableViewDataSource, NSTableViewDelegate> {
    NSMutableArray *_items;
    NSArray *_visibleItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)minimalWidthForItemTitles:(id)a0;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)itemAtIndex:(long long)a0;
- (void)addItemWithTitle:(id)a0;
- (long long)indexOfSelectedItem;
- (long long)numberOfItems;
- (void)removeAllItems;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)commonInit;
- (void)drawBackgroundInClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)highlightSelectionInClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)indexOfItem:(id)a0;
- (long long)indexOfItemWithTag:(long long)a0;
- (long long)indexOfItemWithTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertItemWithTitle:(id)a0 atIndex:(long long)a1;
- (BOOL)isOpaque;
- (id)itemArray;
- (id)itemWithTitle:(id)a0;
- (id)lastItem;
- (id)makeViewWithIdentifier:(id)a0 owner:(id)a1;
- (void)mouseDown:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)reloadData;
- (void)removeItemAtIndex:(long long)a0;
- (void)removeItemWithTitle:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)selectItemWithTag:(long long)a0;
- (id)selectedItem;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (long long)indexOfVisibleItemWithTag:(long long)a0;
- (id)itemAtVisibleIndex:(long long)a0;
- (void)setItemHidden:(BOOL)a0 forTag:(long long)a1;
- (void)setItemTitle:(id)a0 forTag:(long long)a1;

@end
