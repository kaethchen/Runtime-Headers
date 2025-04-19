@interface PXNSRoundedCornerOverlayView : PXNSShapeView

@property (nonatomic) double cornerRadius;

- (void)setPath:(id)a0;
- (void)layout;
- (void)_updatePath;

@end
