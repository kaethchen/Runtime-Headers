@interface IKImageBrowserGenieEffectManager : NSObject

+ (void)threadedGenieFXWithImage:(id)a0 fromScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withAlpha:(float)a3;
+ (void)threadedGenieFXFromWindow:(id)a0 toWindow:(id)a1;

- (void)_threadedGenieFXFromWindow:(id)a0 toWindow:(id)a1;
- (void)_threadedGenieFXWithImage:(id)a0 fromScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withAlpha:(float)a3;
- (void)closeGenieFX:(id)a0;
- (void)genieFXLoop:(id)a0;

@end
