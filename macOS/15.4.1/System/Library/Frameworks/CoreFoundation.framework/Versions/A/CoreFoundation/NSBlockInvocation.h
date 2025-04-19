@interface NSBlockInvocation : NSInvocation

- (SEL)selector;
- (void)invokeUsingIMP:(void /* function */ *)a0;
- (void)invoke;
- (void)invokeSuper;
- (void)setSelector:(SEL)a0;

@end
