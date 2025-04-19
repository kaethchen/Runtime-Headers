@interface FBSObjectProxy : NSProxy {
    Class _class;
}

- (BOOL)isProxy;
- (Class)class;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copy;
- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)mutableCopy;
- (BOOL)respondsToSelector:(SEL)a0;
- (Class)superclass;
- (unsigned long long)length;
- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)bs_secureEncoded;

@end
