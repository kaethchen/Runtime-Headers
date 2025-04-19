@class QLWindowAnimation, NSArray, NSString;

@interface QLAnimationWindowEffect : QLWindowEffect <NSAnimationDelegate> {
    unsigned int _windowID;
    unsigned int _cid;
    QLWindowAnimation *_animation;
    BOOL _mainEffect;
    BOOL _inverted;
}

@property (retain) QLWindowAnimation *animation;
@property (readonly) double additionalDuration;
@property float progress;
@property BOOL inverted;
@property (retain) NSArray *subEffects;
@property (copy) id /* block */ postSubEffectsCompletionBlock;
@property double parentEffectDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invoke;
- (void)setValue:(float)a0;
- (BOOL)stop;
- (id)prepare;
- (void)animationDidEnd:(id)a0;
- (void)setWindow:(id)a0;
- (void)done;
- (void)abort;
- (void)_setProgress:(float)a0;
- (id)initWithWindow:(id)a0 animation:(id)a1;
- (void)invertWithCompletionBlock:(id /* block */)a0;
- (id)subEffectWithID:(unsigned int)a0;

@end
