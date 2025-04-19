@interface PXSmartScaleView : UXView

@property struct CGSize { double width; double height; } displaySize;
@property (readonly) double displayScale;

- (void)viewDidChangeBackingProperties;
- (void)viewDidEndLiveResize;
- (void)viewScaleDidChange;

@end
