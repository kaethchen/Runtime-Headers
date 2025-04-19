@class SGTAnimationWindowEffect;

@interface SGTWindowAnimation : NSAnimation {
    SGTAnimationWindowEffect *_windowEffect;
}

@property (readonly) SGTAnimationWindowEffect *windowEffect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (float)currentValue;
- (void)setCurrentProgress:(float)a0;
- (void)discardWindowEffect;

@end
