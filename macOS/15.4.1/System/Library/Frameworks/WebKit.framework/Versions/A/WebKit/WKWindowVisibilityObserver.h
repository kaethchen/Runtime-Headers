@class NSWindow;

@interface WKWindowVisibilityObserver : NSObject {
    struct WeakPtr<WebKit::WebViewImpl, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _impl;
    NSWindow *_window;
    BOOL _didRegisterForLookupPopoverCloseNotifications;
    BOOL _shouldObserveFontPanel;
    BOOL _isObservingFontPanel;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stopObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_windowDidMove:(id)a0;
- (void)_windowDidBecomeKey:(id)a0;
- (void)_windowDidOrderOnScreen:(id)a0;
- (void)_windowDidResize:(id)a0;
- (void)startObserving:(id)a0;
- (void)_windowDidOrderOffScreen:(id)a0;
- (void)_windowDidChangeOcclusionState:(id)a0;
- (void)_windowDidChangeBackingProperties:(id)a0;
- (void)_windowDidChangeScreen:(id)a0;
- (void)_activeSpaceDidChange:(id)a0;
- (void)_screenDidChangeColorSpace:(id)a0;
- (void)_windowDidChangeLayerHosting:(id)a0;
- (void)_windowDidDeminiaturize:(id)a0;
- (void)_windowDidMiniaturize:(id)a0;
- (void)_windowDidResignKey:(id)a0;
- (void)_windowWillBeginSheet:(id)a0;
- (void)enableObservingFontPanel;
- (id)initWithView:(id)a0 impl:(void *)a1;
- (void)startObservingFontPanel;
- (void)startObservingLookupDismissalIfNeeded;

@end
