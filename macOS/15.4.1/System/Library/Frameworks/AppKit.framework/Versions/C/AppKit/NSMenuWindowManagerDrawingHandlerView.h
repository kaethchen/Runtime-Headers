@interface NSMenuWindowManagerDrawingHandlerView : NSView {
    id /* block */ _drawingHandler;
    BOOL _allowsVibrancy;
    struct CGSRegionObject { } *_invalidRegion;
}

@property struct CGSRegionObject { } *invalidRegion;

- (void)dealloc;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 allowsVibrancy:(BOOL)a1 drawingHandler:(id /* block */)a2;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
