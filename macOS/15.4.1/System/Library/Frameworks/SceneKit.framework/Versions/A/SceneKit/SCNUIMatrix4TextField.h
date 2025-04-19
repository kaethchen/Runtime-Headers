@class SCNUIVector4TextField;

@interface SCNUIMatrix4TextField : SCNUIBindableView {
    SCNUIVector4TextField *tx;
    SCNUIVector4TextField *ty;
    SCNUIVector4TextField *tz;
    SCNUIVector4TextField *tw;
}

@property (nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } matrix4;

- (void).cxx_destruct;
- (id)value;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
