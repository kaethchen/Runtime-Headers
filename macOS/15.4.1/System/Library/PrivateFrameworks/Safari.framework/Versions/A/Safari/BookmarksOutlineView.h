@class SidebarSearchFieldView, NSSearchField;
@protocol BookmarksOutlineViewDelegate;

@interface BookmarksOutlineView : OutlineViewPlus

@property (weak) id<BookmarksOutlineViewDelegate> delegate;
@property (readonly, nonatomic) NSSearchField *searchField;
@property (readonly, nonatomic) SidebarSearchFieldView *searchFieldView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (double)_totalHeightOfTableView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)drawGridInClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfCellAtColumn:(long long)a0 row:(long long)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (BOOL)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;
- (void)_commonBookmarksOutlineViewInit;
- (void)_didRecogizeLongPress:(id)a0;

@end
