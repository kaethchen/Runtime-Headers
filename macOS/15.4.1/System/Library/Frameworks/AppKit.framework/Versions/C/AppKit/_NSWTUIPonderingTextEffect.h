@class _NSWTUITextEffectView, _NSWTUITextChunk, CALayer, _NSWTUIDirectionalLightEffectView;

@interface _NSWTUIPonderingTextEffect : NSObject <_NSWTUITextEffect>

@property (retain, nonatomic) _NSWTUIDirectionalLightEffectView *lightingEffectView;
@property (retain, nonatomic) CALayer *maskLayer;
@property struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (weak) _NSWTUITextEffectView *effectView;
@property (retain) _NSWTUITextChunk *chunk;

- (void).cxx_destruct;
- (void)updateSnapshot:(id)a0;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 effectView:(id)a1;
- (void)invalidate:(BOOL)a0;
- (void)startAnimationWith:(id)a0;
- (void)updateAnimationForTimeDelta:(double)a0;

@end
