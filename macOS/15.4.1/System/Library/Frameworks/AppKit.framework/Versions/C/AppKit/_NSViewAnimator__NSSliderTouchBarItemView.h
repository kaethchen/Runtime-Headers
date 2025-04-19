@class NSString, NSLayoutConstraint;

@interface _NSViewAnimator__NSSliderTouchBarItemView : _NSViewAnimator <CAAnimationDelegate> {
    NSLayoutConstraint *_collapseAnimationConstraint;
    long long _animationDepth;
    BOOL _animatingCollapse;
}

@property double valueAccessoryWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)stopAndCleanupCollapseAnimation;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setCollapsed:(BOOL)a0;
- (id)sliderItemViewTarget;

@end
