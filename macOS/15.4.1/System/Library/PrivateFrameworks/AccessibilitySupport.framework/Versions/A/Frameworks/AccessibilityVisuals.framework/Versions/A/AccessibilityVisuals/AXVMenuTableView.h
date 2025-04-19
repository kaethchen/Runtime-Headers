@class NSString, NSLayoutManager, NSMutableArray;
@protocol AXVMenuTableViewMouseEventDelegate;

@interface AXVMenuTableView : NSTableView <NSTableViewDataSource, NSTableViewDelegate>

@property (retain, nonatomic, setter=_setLayoutManager:) NSLayoutManager *_layoutManager;
@property (nonatomic, setter=_setSelectedRowIndex:) long long _selectedRowIndex;
@property (nonatomic) BOOL _hasSubmenuIndicators;
@property (nonatomic) double menuItemFontSize;
@property (nonatomic) BOOL isHighContrast;
@property (retain, nonatomic) NSMutableArray *menuItems;
@property (weak, nonatomic) id<AXVMenuTableViewMouseEventDelegate> mouseEventDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)_checkForSubmenus;
- (void)_handleMouseUpForMenuItemView:(id)a0 selectedRow:(long long)a1;
- (id)_menuItemViewForTableRow:(long long)a0;
- (void)_setupDefaultColumnsWithTableWidth:(double)a0;
- (void)insertMenuItems:(id)a0 atIndexes:(id)a1;
- (void)selectMenuItemAtIndex:(long long)a0;

@end
