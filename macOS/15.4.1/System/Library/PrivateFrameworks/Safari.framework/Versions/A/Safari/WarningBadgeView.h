@interface WarningBadgeView : NSImageView

- (id)init;
- (void)viewDidMoveToWindow;
- (void)_updateState;
- (void)_mainWindowDidChange:(id)a0;

@end
