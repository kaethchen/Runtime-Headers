@class NSString;

@interface OKActionKeyPressed : OKAction <OKActionKeyPressedExports, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *keyPressed;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL isKeyUp;

+ (id)keyPressendActionWithKey:(id)a0 atTime:(double)a1 isKeyUp:(BOOL)a2 withLocation:(struct CGPoint { double x0; double x1; })a3;
+ (void)setupJavascriptContext:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
