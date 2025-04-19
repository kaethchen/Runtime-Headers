@class WebView;

@interface WebFullScreenController : NSWindowController {
    struct RefPtr<WebCore::Element, WTF::RawPtrTraits<WebCore::Element>, WTF::DefaultRefDerefTraits<WebCore::Element>> { struct Element *m_ptr; } _element;
    WebView *_webView;
    struct RetainPtr<NSView> { void *m_ptr; } _webViewPlaceholder;
    struct RetainPtr<WebWindowScaleAnimation> { void *m_ptr; } _scaleAnimation;
    struct RetainPtr<WebWindowFadeAnimation> { void *m_ptr; } _fadeAnimation;
    struct RetainPtr<NSWindow> { void *m_ptr; } _backgroundWindow;
    struct IntPoint { int m_x; int m_y; } _scrollPosition;
    float _savedScale;
    BOOL _isEnteringFullScreen;
    BOOL _isExitingFullScreen;
    BOOL _isFullScreen;
}

@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finalFrame;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (id).cxx_construct;
- (void *)element;
- (void)animationDidEnd:(id)a0;
- (void)applicationDidChangeScreenParameters:(id)a0;
- (void)applicationDidResignActive:(id)a0;
- (void)cancelOperation:(id)a0;
- (void)performClose:(id)a0;
- (void)setElement:(void *)a0;
- (void)windowDidLoad;
- (id)webView;
- (void *)_manager;
- (void)setWebView:(id)a0;
- (BOOL)isFullScreen;
- (void)_swapView:(id)a0 with:(id)a1;
- (struct NakedPtr<WebCore::Document> { struct Document *x0; })_document;
- (void)_updateMenuAndDockForFullScreen;
- (void)_startEnterFullScreenAnimationWithDuration:(double)a0;
- (void)_startExitFullScreenAnimationWithDuration:(double)a0;
- (void)enterFullScreen:(id)a0;
- (void)exitFullScreen;
- (void)finishedEnterFullScreenAnimation:(BOOL)a0;
- (void)finishedExitFullScreenAnimation:(BOOL)a0;
- (void)requestExitFullScreen;
- (id)webViewPlaceholder;

@end
