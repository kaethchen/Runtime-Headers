@class NSRemoteTitlebarRenamingSession;

@interface NSLocalTitlebarRenamingWindow : NSLocalWindowWrappingRemoteWindow {
    NSRemoteTitlebarRenamingSession *_session;
}

- (void).cxx_destruct;
- (void)resignKeyWindow;
- (BOOL)_sharesParentKeyState;
- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityIsIgnored;
- (BOOL)canBecomeKeyWindow;
- (void)_setSession:(id)a0;

@end
