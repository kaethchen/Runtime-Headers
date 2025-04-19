@interface _NSFullScreenMouseDetectionWindow : NSWindow

- (BOOL)_ignoreForVisibleNonFullScreenSpace;
- (BOOL)_ignoredForScripting;
- (void)_setWindowTag;
- (void)assignToSpace:(unsigned long long)a0;
- (id)initWithSpaceID:(unsigned long long)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;

@end
