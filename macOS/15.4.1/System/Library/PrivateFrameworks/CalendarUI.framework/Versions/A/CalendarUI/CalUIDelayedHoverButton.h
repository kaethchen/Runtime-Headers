@class CalUIDelayedHoverButtonTableCellView;

@interface CalUIDelayedHoverButton : NSButton

@property BOOL isHovered;
@property (weak) CalUIDelayedHoverButtonTableCellView *view;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 view:(id)a1;
- (void)updateIsHovered:(BOOL)a0;

@end
