@interface PIPPanel : NSPanel

@property (nonatomic) BOOL isWindowDragging;

- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)performWindowDragWithEvent:(id)a0;
- (void)sendEvent:(id)a0;

@end
