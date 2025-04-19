@interface SHKShareWindow : NSPanel

@property BOOL isClosing;

- (void)displayIfNeeded;
- (void)display;
- (void)_close;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (BOOL)hidesOnDeactivate;
- (BOOL)isMovableByWindowBackground;

@end
