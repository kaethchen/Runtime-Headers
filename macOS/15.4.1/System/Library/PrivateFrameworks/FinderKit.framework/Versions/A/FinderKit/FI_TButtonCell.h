@interface FI_TButtonCell : NSButtonCell

@property (nonatomic) BOOL acceptsFirstMouse;

- (id)initWithCoder:(id)a0;
- (id)initImageCell:(id)a0;
- (id)initTextCell:(id)a0;
- (long long)nextState;
- (void)initCommon;
- (BOOL)acceptsFirstMouseFE:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;

@end
