@class IKImageEffectsView, CALayer, NSTextField;

@interface IKSingleImageEffect : NSView {
    IKImageEffectsView *_effectsView;
    NSTextField *_label;
    CALayer *_mylayer;
}

- (void)dealloc;
- (void)finalize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)setImage:(struct CGImage { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setupWithOptions:(id)a0;
- (void)viewWillBecomeInActive;

@end
