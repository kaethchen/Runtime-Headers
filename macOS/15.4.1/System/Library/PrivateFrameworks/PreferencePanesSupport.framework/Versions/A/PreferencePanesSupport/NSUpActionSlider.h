@class NSArray, NSTickLabelsView;

@interface NSUpActionSlider : NSSlider {
    id fUpTarget;
    SEL fUpAction;
    NSTickLabelsView *fTickLabelsView;
    NSArray *fTickLabels;
}

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)pageUp:(id)a0;
- (void)moveUp:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)moveDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)pageDown:(id)a0;
- (void)addTickLabelsView:(id)a0;
- (void)sendUpAction;
- (void)setTickLabels:(id)a0;
- (void)setUpTarget:(id)a0 action:(SEL)a1;

@end
