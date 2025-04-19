@interface PXAnimatableImageView : UXImageView

@property (nonatomic) struct CGPoint { double x; double y; } fixedAnchorPoint;

- (void)_updateLayerGeometryFromView;
- (void)_readjustLayerAnchorPoint;

@end
