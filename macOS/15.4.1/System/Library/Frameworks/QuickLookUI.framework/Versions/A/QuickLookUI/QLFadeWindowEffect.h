@interface QLFadeWindowEffect : QLAnimationWindowEffect {
    double _initialAlpha;
    double _finalAlpha;
}

@property BOOL restoreAlpha;

+ (id)fadeWindow:(id)a0 fromAlpha:(double)a1 toAlpha:(double)a2 duration:(double)a3;

- (void)setValue:(float)a0;
- (float)animation:(id)a0 valueForProgress:(float)a1;
- (void)done;

@end
