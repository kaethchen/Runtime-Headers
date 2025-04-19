@class NSView, NSButton;

@interface IKEmbeddedImageEditToolbar : IKImageEditFrameToolbar {
    NSView *_cropButtonContainer;
    NSButton *_cropButton;
    BOOL _cropMode;
}

- (void)dealloc;
- (void)finalize;
- (id)backgroundColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)configButton:(id)a0 action:(SEL)a1 title:(id)a2;
- (void)enterCropMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)leaveCropMode;
- (void)selectionRectAdded;
- (void)selectionRectRemoved;
- (id)toolbarType;

@end
