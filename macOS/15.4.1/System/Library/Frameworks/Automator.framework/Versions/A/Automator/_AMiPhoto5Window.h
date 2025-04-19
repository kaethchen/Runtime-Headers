@interface _AMiPhoto5Window : _AMiPhoto5Item

- (id)name;
- (void)setName:(id)a0;
- (int)index;
- (void)setIndex:(int)a0;
- (id)document;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setVisible:(BOOL)a0;
- (BOOL)visible;
- (BOOL)floating;
- (int)id;
- (void)setZoomed:(BOOL)a0;
- (BOOL)resizable;
- (BOOL)modal;
- (BOOL)closeable;
- (BOOL)miniaturizable;
- (BOOL)miniaturized;
- (void)setMiniaturized:(BOOL)a0;
- (BOOL)titled;
- (BOOL)zoomable;
- (BOOL)zoomed;

@end
