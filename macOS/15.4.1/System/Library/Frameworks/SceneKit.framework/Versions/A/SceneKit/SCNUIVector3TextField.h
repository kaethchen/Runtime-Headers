@class NSObject, NSString, NSTextField;

@interface SCNUIVector3TextField : SCNUIBindableView {
    NSTextField *tx;
    NSTextField *ty;
    NSTextField *tz;
    NSObject *observer;
    NSString *observedKeyPath;
}

@property (nonatomic) struct SCNVector3 { double x0; double x1; double x2; } vector3;

- (void).cxx_destruct;
- (id)value;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
