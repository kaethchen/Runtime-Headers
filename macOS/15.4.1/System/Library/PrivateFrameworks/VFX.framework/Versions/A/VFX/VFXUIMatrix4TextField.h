@class VFXUIVector4TextField;

@interface VFXUIMatrix4TextField : VFXUIBindableView {
    VFXUIVector4TextField *tx;
    VFXUIVector4TextField *ty;
    VFXUIVector4TextField *tz;
    VFXUIVector4TextField *tw;
}

@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } matrix4;

- (void).cxx_destruct;
- (id)value;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
