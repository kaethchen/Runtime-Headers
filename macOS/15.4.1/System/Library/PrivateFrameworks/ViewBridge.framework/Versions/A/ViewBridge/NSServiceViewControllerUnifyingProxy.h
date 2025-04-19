@class NSProxy;
@protocol NSXPCProxyCreating;

@interface NSServiceViewControllerUnifyingProxy : NSProxy {
    NSProxy<NSXPCProxyCreating> *_clientProxy;
    NSProxy<NSXPCProxyCreating> *_animationSyncProxy;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
}

- (oneway void)release;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)retain;
- (void)__vbSuperRelease;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (id)initWithClientProxy:(id)a0 andAnimationSyncProxy:(id)a1 withErrorHandler:(id /* block */)a2;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;

@end
