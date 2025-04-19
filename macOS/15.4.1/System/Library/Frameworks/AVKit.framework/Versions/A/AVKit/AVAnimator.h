@class NSSet;

@interface AVAnimator : NSProxy {
    id _animationTarget;
    id _defaultAnimator;
    id _currentTarget;
    NSSet *_passThroughSelectorStrings;
    unsigned long long _animatingRefCount;
}

@property (readonly, getter=isAnimating) BOOL animating;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithAnimationTarget:(id)a0 defaultAnimator:(id)a1 passThroughSelectorStrings:(id)a2;
- (id)initWithAnimationTarget:(id)a0 defaultAnimator:(id)a1 passThroughSelectors:(SEL)a2;

@end
