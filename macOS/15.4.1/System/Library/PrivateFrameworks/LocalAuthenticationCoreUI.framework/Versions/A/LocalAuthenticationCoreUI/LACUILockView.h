@class NSColor, LACUIPackagedView, CAShapeLayer;

@interface LACUILockView : NSView {
    CAShapeLayer *_shackle;
    CAShapeLayer *_body;
    LACUIPackagedView *_packagedView;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) NSColor *color;

- (id)init;
- (void).cxx_destruct;
- (void)_setup;

@end
