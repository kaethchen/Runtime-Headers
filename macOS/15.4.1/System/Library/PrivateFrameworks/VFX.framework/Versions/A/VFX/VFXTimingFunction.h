@interface VFXTimingFunction : NSObject <NSSecureCoding> {
    struct __CFXTimingFunction { } *_timingFunction;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)functionWithCAMediaTimingFunction:(id)a0;
+ (id)functionWithMass:(float)a0 stiffness:(float)a1 damping:(float)a2 initialVelocity:(float)a3;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (float)evalAtTime:(double)a0;
- (id)initWithTimingFunctionRef:(struct __CFXTimingFunction { } *)a0;
- (struct __CFXTimingFunction { } *)cfxTimingFunction;

@end
