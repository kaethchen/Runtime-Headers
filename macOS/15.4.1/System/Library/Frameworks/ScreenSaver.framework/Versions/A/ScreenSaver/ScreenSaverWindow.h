@class NSMutableArray;

@interface ScreenSaverWindow : NSWindow {
    NSMutableArray *_trectTags;
}

- (void)_cancelKey:(id)a0;
- (void)_discardTrackingRect:(int)a0;
- (int)_setTrackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inside:(BOOL)a1 owner:(id)a2 userData:(void *)a3 useTrackingNum:(int)a4;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)startAnimating;
- (void)stopAnimating;
- (void)removeAllTrackingRects;

@end
