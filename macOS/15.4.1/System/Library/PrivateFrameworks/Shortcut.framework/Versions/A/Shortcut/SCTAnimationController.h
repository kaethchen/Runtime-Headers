@class NSString, NSView, SCTPopAnimation, SCTShowcaseWindow, NSViewAnimation, SCTInfiniteAnimation;

@interface SCTAnimationController : NSObject <NSAnimationDelegate> {
    SCTShowcaseWindow *mShowcaseWindow;
    NSView *mShowcaseView;
    struct CGPoint { double x; double y; } mNextAnimationLocation;
    NSViewAnimation *mFadeInAnimation;
    NSViewAnimation *mPopAnimationPhaseOne;
    NSViewAnimation *mPopAnimationPhaseTwo;
    NSViewAnimation *mFadeOutAnimation;
    SCTPopAnimation *mPopAnimation;
    SCTInfiniteAnimation *mHoverAnimation;
    BOOL mIsShowcasing;
    unsigned long long mPreviousPosition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controller;

- (void)dealloc;
- (void)animationDidEnd:(id)a0;
- (void)hide;
- (BOOL)inShowcaseMode;
- (void)setupShowcaseWindow;
- (void)showcaseRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 position:(unsigned long long)a1;
- (void)showcaseRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 window:(id)a1;
- (void)showcaseRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 window:(id)a1 position:(unsigned long long)a2;

@end
