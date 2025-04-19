@class NSString, NSArray, AXVTextField, AXVMenuTableView;
@protocol AXVMenuWindowMouseEventDelegate;

@interface AXVMenuWindow : AXVVoiceOverStyleWindow <AXVMenuTableViewMouseEventDelegate>

@property (retain, nonatomic, setter=_setMenuTitleTextField:) AXVTextField *_menuTitleTextField;
@property (retain, nonatomic, setter=_setTableView:) AXVMenuTableView *_menuTableView;
@property (copy, nonatomic, setter=_setMenuTitle:) NSString *_menuTitle;
@property (copy, nonatomic, setter=_setMenuItems:) NSArray *_menuItems;
@property (nonatomic, setter=_setRowCountToShow:) long long _rowCountToShow;
@property (nonatomic) double menuFontSize;
@property (nonatomic) BOOL shouldDisplayTitle;
@property (weak, nonatomic) id<AXVMenuWindowMouseEventDelegate> mouseEventDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)_setupStackView;
- (id)_setupMenuTitle;
- (void)_adjustWindowFrameToFitContent;
- (void)_adjustWindowFrameToFitContent:(double)a0 menuItemCount:(unsigned long long)a1;
- (double)_heightForMenuTableWithMenuItemCount:(long long)a0 availableSpace:(double)a1;
- (double)_heightForMenuTitle;
- (double)_heightForWindowToFitContent:(long long)a0;
- (id)_setupMenuScrollView;
- (struct CGSize { double x0; double x1; })_sizeOfString:(id)a0 withFont:(id)a1;
- (void)_updateAddedMenuItems:(id)a0 atIndexes:(id)a1;
- (void)_updateMenuItems:(id)a0;
- (void)_updateMenuTitle:(id)a0;
- (void)_updateRowCountToShow:(long long)a0;
- (struct CGSize { double x0; double x1; })_windowSizeToFitContent:(double)a0 menuItemCount:(unsigned long long)a1;
- (void)mouseDownOnMenuItemView:(id)a0 atRowIndex:(long long)a1 forMenuTableView:(id)a2;
- (void)selectMenuItemAtIndex:(long long)a0;
- (void)setIsHighContrast:(BOOL)a0;
- (void)updateWithMenuInfo:(id)a0;

@end
