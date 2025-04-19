@class NUIContainerView;

@interface NUITableViewContainerCell : NSView

@property (class, readonly, nonatomic) Class containerViewClass;

@property (readonly, nonatomic) NUIContainerView *containerView;

- (void).cxx_destruct;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (BOOL)_layoutHeightDependsOnWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)containerViewDidLoad;

@end
