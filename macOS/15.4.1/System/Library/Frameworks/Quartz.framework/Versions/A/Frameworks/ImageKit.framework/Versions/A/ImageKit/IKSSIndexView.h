@class IKSSIndexHandler;

@interface IKSSIndexView : NSView

@property IKSSIndexHandler *indexHandler;

- (void)swipeWithEvent:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)scrollWheel:(id)a0;

@end
