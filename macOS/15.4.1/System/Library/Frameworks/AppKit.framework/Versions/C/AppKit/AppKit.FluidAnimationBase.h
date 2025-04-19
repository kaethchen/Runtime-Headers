@interface AppKit.FluidAnimationBase : NSObject <NSRunningAnimation> {
    void /* unknown type, empty encoding */ animatedObject;
    void /* unknown type, empty encoding */ keyPath;
    void /* unknown type, empty encoding */ bridgedAnimation;
}

- (id)init;
- (void).cxx_destruct;
- (void)apply:(double)a0 object:(id)a1 finished:(BOOL *)a2;
- (void)end:(BOOL)a0;
- (void)start:(double)a0;

@end
