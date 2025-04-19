@interface _NSThemeWidget : NSButton {
    long long _trackingTagNum;
    id _eventMonitor;
    unsigned char _ignoreRentry : 1;
    unsigned int __themeWidgetReserved : 31;
}

+ (void)initialize;
+ (id)widgetInView:(id)a0 withButtonID:(long long)a1 action:(SEL)a2;

- (void)setHidden:(BOOL)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (id)_startingWindowForSendAction:(SEL)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)flagsChanged;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithButtonID:(long long)a0;
- (void)setAlphaValue:(double)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0 ignoreRentry:(BOOL)a1;
- (void)startMonitoringFlagsChanged;
- (void)stopMonitoringFlagsChanged;
- (void)update;
- (void)viewDidMoveToWindow;

@end
