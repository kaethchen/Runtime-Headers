@interface SafariScribbleEffectView : NSView {
    struct CGPoint { double x; double y; } _vanishingPoint;
}

- (id)initWithImage:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 vanishingPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)startEffectWithCompletionHandler:(id /* block */)a0;

@end
