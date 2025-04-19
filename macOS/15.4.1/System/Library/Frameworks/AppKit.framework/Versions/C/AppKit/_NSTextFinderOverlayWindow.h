@interface _NSTextFinderOverlayWindow : NSWindow

- (void)dealloc;
- (id)_cornerMask;
- (void)_setWindowTag;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsIgnored;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)setParentWindow:(id)a0;

@end
