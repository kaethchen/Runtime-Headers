@interface CSKTableHeaderView : NSTableHeaderView

@property (nonatomic) BOOL wantsTopBorder;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
