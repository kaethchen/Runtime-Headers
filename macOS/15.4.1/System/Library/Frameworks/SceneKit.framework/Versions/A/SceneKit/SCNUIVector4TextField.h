@class NSTextField;

@interface SCNUIVector4TextField : SCNUIBindableView {
    NSTextField *tx;
    NSTextField *ty;
    NSTextField *tz;
    NSTextField *tw;
}

@property (nonatomic) struct SCNVector4 { double x0; double x1; double x2; double x3; } vector4;

- (void).cxx_destruct;
- (id)value;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
