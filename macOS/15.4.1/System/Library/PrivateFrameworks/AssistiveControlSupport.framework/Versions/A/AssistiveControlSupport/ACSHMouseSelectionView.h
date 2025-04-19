@interface ACSHMouseSelectionView : ACSHView

@property (nonatomic) struct CGPoint { double x; double y; } selectionStartPoint;
@property (nonatomic) struct CGPoint { double x; double y; } selectionEndPoint;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_selectionEndPointUpdated;

@end
