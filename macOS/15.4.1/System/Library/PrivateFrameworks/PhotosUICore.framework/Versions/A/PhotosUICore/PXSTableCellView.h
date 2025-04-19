@class NSView;

@interface PXSTableCellView : NSTableCellView

@property (readonly, nonatomic) NSView *nameView;
@property (readonly, nonatomic) NSView *valueView;

- (void).cxx_destruct;
- (void)layout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutValueView:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)initWithNameView:(id)a0 valueView:(id)a1;

@end
