@class NSWindow;

@interface _NSFullScreenToolbarSurrogateWindow : NSWindow {
    NSWindow *_realWindow;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_close:(id)a0;
- (void)becomeKeyWindow;
- (void)_changeWindowTileLocation:(id)a0;
- (id)_localSharingWindowController;
- (void)_startWindowDragWithEvent:(id)a0 options:(unsigned long long)a1 animate:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)_windowForSharing;
- (void)addChildWindow:(id)a0 ordered:(long long)a1;
- (void)becomeMainWindow;
- (BOOL)canEnterFullScreenMode;
- (BOOL)hasKeyAppearanceIncludingSheets:(BOOL)a0;
- (id)initSurrogateForWindow:(id)a0;
- (BOOL)isKeyWindow;
- (void)performClose:(id)a0;
- (void)realWindowExitedFullScreenNotification:(id)a0;
- (void)realWindowKeyChangedNotification:(id)a0;
- (void)removeChildWindow:(id)a0;
- (BOOL)showsWindowSharingTitlebarButton;
- (void)toggleFullScreen:(id)a0;

@end
