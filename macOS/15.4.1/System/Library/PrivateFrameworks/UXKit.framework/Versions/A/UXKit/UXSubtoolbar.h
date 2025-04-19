@class NSLayoutConstraint;

@interface UXSubtoolbar : UXToolbar

@property (class, readonly) double defaultHeight;

@property (readonly, nonatomic) NSLayoutConstraint *heightConstraint;

- (void).cxx_destruct;
- (void)setHeight:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
