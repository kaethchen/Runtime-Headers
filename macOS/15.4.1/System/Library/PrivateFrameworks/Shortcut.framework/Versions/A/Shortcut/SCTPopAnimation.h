@class SCTHelpPointerView;

@interface SCTPopAnimation : NSAnimation {
    SCTHelpPointerView *mAnimatedView;
    float mSlope;
    float mScale;
    float mScaleStep;
}

- (void)dealloc;
- (id)initWithView:(id)a0;
- (void)setCurrentProgress:(float)a0;
- (void)startAnimation;

@end
