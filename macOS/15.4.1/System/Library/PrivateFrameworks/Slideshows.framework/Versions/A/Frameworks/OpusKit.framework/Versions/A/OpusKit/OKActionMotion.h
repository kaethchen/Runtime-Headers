@interface OKActionMotion : OKAction <NSSecureCoding, OKActionMotionExports>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double rotationX;
@property (readonly, nonatomic) double rotationY;
@property (readonly, nonatomic) double rotationZ;

+ (id)motionActionWithState:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 touchCount:(unsigned long long)a2 rotationX:(double)a3 rotationY:(double)a4 rotationZ:(double)a5;
+ (id)motionActionWithState:(unsigned long long)a0 rotationX:(double)a1 rotationY:(double)a2 rotationZ:(double)a3;
+ (void)setupJavascriptContext:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
