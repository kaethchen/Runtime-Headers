@class NSTextField;

@interface VFXUIVector4TextField : VFXUIBindableView {
    NSTextField *tx;
    NSTextField *ty;
    NSTextField *tz;
    NSTextField *tw;
}

@property (nonatomic) void /* unknown type, empty encoding */ vector4;

- (void).cxx_destruct;
- (id)value;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
