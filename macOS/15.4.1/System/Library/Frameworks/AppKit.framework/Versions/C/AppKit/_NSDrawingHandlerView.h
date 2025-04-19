@interface _NSDrawingHandlerView : NSView {
    id /* block */ _drawingHandler;
    BOOL _flipped;
    BOOL _opaque;
}

@property (copy, nonatomic) id /* block */ drawingHandler;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_drawsNothing;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flipped:(BOOL)a1 opaque:(BOOL)a2;
- (BOOL)isFlipped;
- (BOOL)isOpaque;

@end
