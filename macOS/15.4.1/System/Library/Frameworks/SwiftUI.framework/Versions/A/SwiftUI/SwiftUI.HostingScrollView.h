@interface SwiftUI.HostingScrollView : SwiftUI.AppKitScrollView <NSScrollViewDelegate> {
    void /* unknown type, empty encoding */ viewType;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ responder;
    void /* unknown type, empty encoding */ layoutDirection;
    void /* unknown type, empty encoding */ safeAreaHelper;
    void /* unknown type, empty encoding */ pendingContext;
    void /* unknown type, empty encoding */ animationTarget;
    void /* unknown type, empty encoding */ animationTargetConfig;
    void /* unknown type, empty encoding */ animationOffset;
    void /* unknown type, empty encoding */ lastScrollGestureAxis;
    void /* unknown type, empty encoding */ orthogonalAccumulator;
    void /* unknown type, empty encoding */ accumulatedAxisChangeThreshold;
    void /* unknown type, empty encoding */ oldContentMargins;
    void /* unknown type, empty encoding */ configuration;
}

@property (class, nonatomic, readonly) BOOL compatibleWithResponsiveScrolling;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)_nextResponderForEvent:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollWheel:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidMoveToWindow;
- (BOOL)wantsForwardedScrollEventsForAxis:(long long)a0;
- (void)scrollViewDidScrollWithNotification:(id)a0;

@end
