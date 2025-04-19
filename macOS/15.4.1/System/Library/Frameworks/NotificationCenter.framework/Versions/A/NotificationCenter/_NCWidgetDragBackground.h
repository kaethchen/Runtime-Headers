@class CALayer;

@interface _NCWidgetDragBackground : NCTexturedView {
    BOOL _dark;
    CALayer *backgroundLayer1;
    CALayer *backgroundLayer2;
}

- (void).cxx_destruct;
- (void)layout;
- (id)makeBackingLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dark:(BOOL)a1;

@end
