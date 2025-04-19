@interface HMProxyObject : NSProxy

- (Class)class;
- (BOOL)conformsToProtocol:(id)a0;
- (id)debugDescription;
- (id)description;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)performSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)self;
- (Class)superclass;

@end
