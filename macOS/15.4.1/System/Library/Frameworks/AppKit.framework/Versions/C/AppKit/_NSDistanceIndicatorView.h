@interface _NSDistanceIndicatorView : _NSConstraintIndicatorView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect1;
    unsigned long long edge1;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect2;
    unsigned long long edge2;
    BOOL isHorizontal;
}

- (id)constraintDescription;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 asBorder:(BOOL)a1 withLineThickness:(double)a2 forceColor:(id)a3;
- (id)initWithEdge:(unsigned long long)a0 ofRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andEdge:(unsigned long long)a2 ofRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 isHorizontal:(BOOL)a4;

@end
