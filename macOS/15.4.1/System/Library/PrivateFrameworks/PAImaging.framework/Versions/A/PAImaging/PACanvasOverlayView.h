@class NSView;

@interface PACanvasOverlayView : NSView

@property (retain, nonatomic) NSView *viewForMagnificationEvents;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)magnifyWithEvent:(id)a0;
- (BOOL)wantsUpdateLayer;

@end
