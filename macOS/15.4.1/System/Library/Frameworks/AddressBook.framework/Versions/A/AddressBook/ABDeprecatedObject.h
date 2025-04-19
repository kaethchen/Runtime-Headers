@interface ABDeprecatedObject : NSObject

+ (id)alloc;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)noop;

@end
