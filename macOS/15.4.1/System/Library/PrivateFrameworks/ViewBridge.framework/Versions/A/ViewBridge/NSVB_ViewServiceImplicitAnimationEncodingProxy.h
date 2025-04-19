@class NSVB_ViewAnimationAttributes;

@interface NSVB_ViewServiceImplicitAnimationEncodingProxy : NSVB_TargetedProxy {
    id _controlMessageTarget;
    NSVB_ViewAnimationAttributes *_animationAttributes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _sentAnimationAttributes;
}

+ (id)proxyEncodingAnimationsForTarget:(id)a0 controlMessageTarget:(id)a1 animationAttributes:(id)a2 sentAnimationAttributes:(id /* block */)a3;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;

@end
