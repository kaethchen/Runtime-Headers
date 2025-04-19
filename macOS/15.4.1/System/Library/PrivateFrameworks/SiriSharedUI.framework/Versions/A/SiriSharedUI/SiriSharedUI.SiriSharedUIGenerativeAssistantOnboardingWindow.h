@interface SiriSharedUI.SiriSharedUIGenerativeAssistantOnboardingWindow : NSWindow {
    void /* unknown type, empty encoding */ requestType;
    void /* unknown type, empty encoding */ wasDismissed;
    void /* unknown type, empty encoding */ outsideClickEventMonitor;
    void /* unknown type, empty encoding */ insideClickEventMonitor;
}

@property (nonatomic, readonly) BOOL acceptsFirstResponder;
@property (nonatomic, readonly) BOOL canBecomeKeyWindow;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)dismissWithNotNow;

@end
