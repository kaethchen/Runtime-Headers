@interface KHBookGridLayoutAttributes : UXCollectionViewLayoutAttributes

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } dropTargetInsets;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } dropTargetFrame;

@end
