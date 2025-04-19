@interface NSAutolayoutJailWindow : NSWindow

+ (Class)frameViewClassForStyleMask:(unsigned long long)a0;

- (void)_refreshWindowResizeConstraintsWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)windowSizeConstraintsShouldAlwaysWin;

@end
