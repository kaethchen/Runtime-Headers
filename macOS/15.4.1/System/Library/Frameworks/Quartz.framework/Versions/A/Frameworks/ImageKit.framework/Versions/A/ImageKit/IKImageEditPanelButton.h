@interface IKImageEditPanelButton : NSButton

- (void)close:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (id)panel;
- (void)zoomin:(id)a0;
- (void)big:(id)a0;
- (void)crop:(id)a0;
- (void)effects:(id)a0;
- (void)rotate90ccw:(id)a0;
- (void)rotate90cw:(id)a0;
- (void)setImageName:(id)a0 action:(SEL)a1 target:(id)a2;
- (void)small:(id)a0;
- (void)zoomout:(id)a0;

@end
