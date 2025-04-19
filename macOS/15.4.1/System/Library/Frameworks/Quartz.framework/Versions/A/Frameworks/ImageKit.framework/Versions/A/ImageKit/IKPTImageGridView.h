@interface IKPTImageGridView : IKImageBrowserView

+ (BOOL)isCompatibleWithOverlayScrollers;

- (void)awakeFromNib;
- (void)drawBackgroundOverhangInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)startDragNDropWithEvent:(id)a0 itemIndexes:(id)a1;

@end
