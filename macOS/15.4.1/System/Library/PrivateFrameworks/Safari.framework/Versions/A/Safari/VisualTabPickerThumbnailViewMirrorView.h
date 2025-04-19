@class NSView;

@interface VisualTabPickerThumbnailViewMirrorView : NSView

@property (weak, nonatomic) NSView *sourceView;
@property (nonatomic) double scale;
@property (nonatomic) struct CGPoint { double x; double y; } translation;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeBackingLayer;
- (void)_recalculateSublayerTransform;

@end
