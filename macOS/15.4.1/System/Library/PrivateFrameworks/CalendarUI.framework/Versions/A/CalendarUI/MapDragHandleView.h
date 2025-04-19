@class MapDragRadiusView;

@interface MapDragHandleView : NSView

@property (weak) MapDragRadiusView *radView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)updateLayer;

@end
