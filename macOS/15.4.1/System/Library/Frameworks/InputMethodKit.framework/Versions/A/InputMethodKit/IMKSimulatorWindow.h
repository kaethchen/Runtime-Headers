@class IMKInputController, NSViewController, NSTextView, NSWindow;
@protocol IMKSimulatorDelegate, IMKTextInput, NSObject;

@interface IMKSimulatorWindow : NSWindow {
    BOOL _isPressAndHold;
    NSWindow *_touchBarViewChildWindow;
    struct __CFMessagePort { } *_simulatorMessagePort;
    struct __CFRunLoopSource { } *_simulatorMessageRunLoopSource;
}

@property (readonly, nonatomic) BOOL isPressAndHold;
@property (retain, nonatomic) id<IMKTextInput, NSObject> client;
@property (retain, nonatomic) IMKInputController *inputController;
@property (retain, nonatomic) id<IMKSimulatorDelegate, NSObject> simulatorDelegate;
@property (readonly, nonatomic) NSTextView *textView;
@property (retain, nonatomic) NSViewController *touchBarViewController;

- (void)dealloc;
- (void)sendEvent:(id)a0;
- (BOOL)handlePressAndHoldEvent:(id)a0 simulatorController:(id)a1;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3 delegate:(id)a4;
- (void)removeChildWindowForTouchBarController;
- (void)touchBarCloseButtonPressed:(id)a0;

@end
