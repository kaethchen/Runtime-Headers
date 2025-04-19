@class NSArray, NSString, NSView;

@interface WKFullScreenWindowController : NSWindowController <NSWindowDelegate> {
    NSView *_webView;
    struct NakedPtr<WebKit::WebPageProxy> { struct WebPageProxy *m_ptr; } _page;
    struct RetainPtr<WebCoreFullScreenPlaceholderView> { void *m_ptr; } _webViewPlaceholder;
    struct RetainPtr<NSView> { void *m_ptr; } _exitPlaceholder;
    struct RetainPtr<NSView> { void *m_ptr; } _clipView;
    struct RetainPtr<NSView> { void *m_ptr; } _backgroundView;
    struct RetainPtr<NSTimer> { void *m_ptr; } _watchdogTimer;
    struct RetainPtr<NSArray> { void *m_ptr; } _savedConstraints;
    BOOL _requestedExitFullScreen;
    long long _fullScreenState;
    double _savedScale;
    float _savedTopContentInset;
    struct unique_ptr<WTF::Observer<void (bool)>, std::default_delete<WTF::Observer<void (bool)>>> { struct __compressed_pair<WTF::Observer<void (bool)> *, std::default_delete<WTF::Observer<void (bool)>>> { void *__value_; } __ptr_; } _pipObserver;
}

@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finalFrame;
@property NSArray *savedConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (id).cxx_construct;
- (void)noResponderFor:(SEL)a0;
- (void)windowDidFailToEnterFullScreen:(id)a0;
- (void)cancelOperation:(id)a0;
- (id)customWindowsToEnterFullScreenForWindow:(id)a0;
- (id)customWindowsToExitFullScreenForWindow:(id)a0;
- (id)destinationWindowToExitFullScreenForWindow:(id)a0;
- (void)performClose:(id)a0;
- (void)window:(id)a0 startCustomAnimationToEnterFullScreenWithDuration:(double)a1;
- (void)window:(id)a0 startCustomAnimationToExitFullScreenWithDuration:(double)a1;
- (void)windowDidEnterFullScreen:(id)a0;
- (void)windowDidExitFullScreen:(id)a0;
- (void)windowDidFailToExitFullScreen:(id)a0;
- (void *)_manager;
- (BOOL)isFullScreen;
- (void)_startEnterFullScreenAnimationWithDuration:(double)a0;
- (void)_startExitFullScreenAnimationWithDuration:(double)a0;
- (void)exitFullScreen;
- (void)finishedEnterFullScreenAnimation:(BOOL)a0;
- (void)requestExitFullScreen;
- (id)webViewPlaceholder;
- (void)_replaceView:(id)a0 with:(id)a1;
- (void)_saveConstraintsOf:(id)a0;
- (void *)_videoPresentationManager;
- (void)_watchdogTimerFired:(id)a0;
- (void)beganEnterFullScreenWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)beganExitFullScreenWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)clearVideoPresentationManagerObserver;
- (void)completeFinishExitFullScreenAnimation;
- (void)didEnterPictureInPicture;
- (void)didExitPictureInPicture;
- (void)enterFullScreen:(id)a0 completionHandler:(void *)a1;
- (void)exitFullScreenImmediately;
- (void)finishedExitFullScreenAnimationAndExitImmediately:(BOOL)a0;
- (id)initWithWindow:(id)a0 webView:(id)a1 page:(struct NakedRef<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a2;
- (void)setVideoPresentationManagerObserver;
- (void)videoControlsManagerDidChange;

@end
