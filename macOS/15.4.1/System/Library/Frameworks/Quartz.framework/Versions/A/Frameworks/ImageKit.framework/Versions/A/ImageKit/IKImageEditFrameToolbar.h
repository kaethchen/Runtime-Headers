@class NSView;

@interface IKImageEditFrameToolbar : NSView {
    NSView *_buttonContainer;
    id _delegate;
}

- (void)setup;
- (void)addTool:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 action:(SEL)a2;
- (void)drawRect2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (id)toolbarType;

@end
