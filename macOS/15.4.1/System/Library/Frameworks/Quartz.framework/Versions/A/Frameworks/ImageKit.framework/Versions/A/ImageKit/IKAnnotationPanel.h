@interface IKAnnotationPanel : NSPanel

- (void)resignKeyWindow;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)resignMainWindow;
- (void)closeDown;

@end
