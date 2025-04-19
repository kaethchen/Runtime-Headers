@class NSString, NSArray, NSTextFieldCell;

@interface NSTextFinderBarSearchFieldCell : NSSearchFieldCell {
    NSArray *recentAttributedSearchStrings;
    NSTextFieldCell *statusCell;
}

@property (copy) NSString *statusString;
@property (copy) NSArray *recentAttributedSearchStrings;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusStringFieldRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonTextFinderInit;
- (void)_searchFieldClearRecents:(id)a0;
- (void)_searchFieldDoRecentPattern:(id)a0;
- (void)_updateSearchMenu;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityHelpStringForChild:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsChildFocusable:(id)a0;
- (id)accessibilityPositionOfChild:(id)a0;
- (id)accessibilitySizeOfChild:(id)a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)initTextCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })searchTextRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
