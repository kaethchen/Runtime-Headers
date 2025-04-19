@protocol MenuTableViewDelegate;

@interface MenuTableView : NSTableView {
    BOOL _lastMousePositionWasOverList;
}

@property (weak) id<MenuTableViewDelegate> delegate;
@property (nonatomic) double cellViewHorizontalInset;

- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (void)drawGridInClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfCellAtColumn:(long long)a0 row:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isOpaque;
- (void)mouseDown:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (id)_accessibilityDescription;
- (BOOL)_rowIsSelectableByUser:(long long)a0;
- (long long)_numberOfRowsSelectableByUser;

@end
