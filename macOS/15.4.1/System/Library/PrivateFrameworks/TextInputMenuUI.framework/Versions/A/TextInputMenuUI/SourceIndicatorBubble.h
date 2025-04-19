@class NSString, NSTimer, NSDate, NSButton;

@interface SourceIndicatorBubble : NSPanel <TSMMessageProtocol> {
    NSTimer *_timerToHide;
    NSTimer *_timerToCaretLocationCheck;
    long long _taskForMessage;
    struct CGPoint { double x; double y; } _lastCaretLocation;
    NSString *_lastSourceID;
    NSDate *_lastDisplayTime;
    NSDate *_lastSourceSwitch;
    NSDate *_lastFocusSwitch;
    struct ProcessSerialNumber { unsigned int highLongOfPSN; unsigned int lowLongOfPSN; } _lastKeyProcess;
    BOOL _showedIndicatorOnce;
    BOOL _sourceChangedNotificationReceived;
}

@property NSButton *button;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)makeKeyAndOrderFront:(id)a0;
- (void)orderOut:(id)a0;
- (void)handleUIServerMessage:(int)a0 withInfo:(id)a1;
- (void)_checkCaretLocation:(id)a0;
- (void)_getCaretLocationFor:(long long)a0;
- (void)_setLocationWithFlippedPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_timeToHide:(id)a0;
- (struct __CFData { } *)copyMessageReceiver:(int)a0 withInfo:(id)a1;
- (void)replyReceiver:(int)a0 withInfo:(id)a1;
- (void)showIconForSourceID:(id)a0;

@end
