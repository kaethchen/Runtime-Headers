@interface AVDetachedFullscreenWindow : NSWindow

- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)exitFullScreenMode:(id)a0;
- (void)performClose:(id)a0;
- (id)_avkitWindowController;
- (void)avkit_exitFullscreenModeImmediately:(id)a0;
- (void)avkit_performCloseImmediately:(id)a0;

@end
