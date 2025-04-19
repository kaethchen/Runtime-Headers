@interface PXOverlayFeedLayoutMetrics : PXLayoutMetrics

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) struct CGSize { double width; double height; } interItemSpacing;
@property (nonatomic) double firstRowTopMargin;
@property (nonatomic) double regularItemAspectRatio;
@property (nonatomic) double largeItemAspectRatio;
@property (nonatomic) BOOL useSimpleLayout;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
