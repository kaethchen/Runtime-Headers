@class NSVisualEffectView;

@interface AXVVoiceOverStyleWindow : AXVWindow

@property (weak, nonatomic) NSVisualEffectView *_visualEffectView;
@property (nonatomic) BOOL isHighContrast;
@property (nonatomic, getter=isInSharedSpace) BOOL inSharedSpace;

- (void).cxx_destruct;
- (id)accessibilityChildren;
- (void)addView:(id)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)removeView:(id)a0;
- (void)_updateStyle;
- (void)showWindow;
- (void)hideWindow;
- (id)_maskImageWithCornerRadius:(double)a0;
- (void)_moveWindowToSharedSpace:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrameWithinVoiceOverStyleBorder;
- (BOOL)decreaseWindowSizeInDirection:(long long)a0 withSteps:(unsigned long long)a1;
- (BOOL)increaseWindowSizeInDirection:(long long)a0 withSteps:(unsigned long long)a1;
- (BOOL)moveWindowInDirection:(long long)a0 withSteps:(unsigned long long)a1;
- (void)setupVisualStyle;
- (struct CGPoint { double x0; double x1; })windowOriginToCenterContent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
