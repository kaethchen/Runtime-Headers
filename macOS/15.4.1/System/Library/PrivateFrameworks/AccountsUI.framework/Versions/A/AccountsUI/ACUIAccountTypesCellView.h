@class ACUIAccountTypesViewController;

@interface ACUIAccountTypesCellView : NSTableCellView

@property BOOL isLastRow;
@property BOOL isHovered;
@property (weak) ACUIAccountTypesViewController *accountTypesVC;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)click:(id)a0;

@end
