@interface ABMiniGridView : NSView

@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) double horizontalSpacing;

- (void)abLayoutSubviews;

@end
