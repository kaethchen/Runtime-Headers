@class NSImage;

@interface CSKTokenFieldCell : NSTokenFieldCell

@property (readonly, nonatomic) NSImage *findUnfocusedIcon;
@property (readonly, nonatomic) NSImage *findDefaultIcon;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_findIconRectFromContainerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
