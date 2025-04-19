@interface NSDockMiniViewWindow : NSWindow {
    BOOL shown;
}

- (BOOL)_allowsOrdering;
- (BOOL)_isNonactivatingPanel;
- (void)_setShown:(BOOL)a0;
- (void)_setVisible:(BOOL)a0;
- (BOOL)_windowManagerAware;
- (BOOL)canBecomeKeyWindow;
- (void)makeKeyAndOrderFront:(id)a0;

@end
