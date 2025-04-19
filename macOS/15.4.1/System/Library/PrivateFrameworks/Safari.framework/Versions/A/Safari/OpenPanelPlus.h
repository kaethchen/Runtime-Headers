@class NSTimer;

@interface OpenPanelPlus : NSOpenPanel {
    NSTimer *_keyDownTimer;
    BOOL _acceptsKeyEvents;
    NSTimer *_enableOKButtonTimer;
    id _leftMouseButtonEventMonitor;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)becomeKeyWindow;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)_removeLeftMouseButtonEventMonitor;
- (void)_restartEnableOKButtonTimer;

@end
