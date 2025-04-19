@class NSString, SCTAnimationController;

@interface SCTShowcaseWindow : NSWindow <NSAnimationDelegate> {
    SCTAnimationController *mAnimator;
    struct CGSize { double width; double height; } mMinimumRequiredSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setMinimumRequiredSize:(struct CGSize { double x0; double x1; })a0;

@end
