@class NSString;

@interface NSLockoutUIPlaceholderWindow : NSWindow <NSLockoutUIWindow> {
    double _animationDuration;
    BOOL _engaged;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)engaged;
- (long long)_effectiveOrderFrontAnimationTypeIfModal:(BOOL)a0;
- (long long)_effectiveOrderOutAnimationTypeIfModal:(BOOL)a0;
- (BOOL)_wantsSnapshotProxyWindowForOrderOutAnimation;
- (id)_windowTransformAnimationForOrdering:(long long)a0 animationType:(long long)a1 interruptingAnimation:(id)a2;
- (void)disengageWithDuration:(double)a0 completionHandler:(id /* block */)a1;
- (void)engageWithDuration:(double)a0 completionHandler:(id /* block */)a1;
- (void)setStyleMask:(unsigned long long)a0;
- (BOOL)transitioning;

@end
