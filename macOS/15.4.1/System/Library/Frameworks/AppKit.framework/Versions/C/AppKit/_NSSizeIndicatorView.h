@interface _NSSizeIndicatorView : _NSConstraintIndicatorView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
    BOOL isHorizontal;
}

- (id)constraintDescription;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 asBorder:(BOOL)a1 withLineThickness:(double)a2 forceColor:(id)a3;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isHorizontal:(BOOL)a1;

@end
