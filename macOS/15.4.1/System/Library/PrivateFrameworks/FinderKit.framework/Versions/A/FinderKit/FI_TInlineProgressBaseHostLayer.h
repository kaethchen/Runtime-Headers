@class NSString, FI_TInlineProgressBarLayer, NSObject;
@protocol CAAnimationDelegate;

@interface FI_TInlineProgressBaseHostLayer : FI_TLayer <CAAnimationDelegate> {
    FI_TInlineProgressBarLayer *_progressLayer;
    unsigned long long _animationCount;
    BOOL _cleanupWhenFinished;
}

@property (nonatomic) double percentComplete;
@property (nonatomic) unsigned int state;
@property (weak, nonatomic) NSObject<CAAnimationDelegate> *animationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithLayer:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)setUserInterfaceLayoutDirection:(long long)a0;
- (long long)userInterfaceLayoutDirection;
- (void)completeAnimation;
- (id)initVariant:(int)a0 percentComplete:(double)a1;
- (void)setPercentComplete:(double)a0 animated:(BOOL)a1;
- (void)setProgressFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
