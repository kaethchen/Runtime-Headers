@class NSString, VKCImageAnalysisOverlayView, NSResponder;

@interface WKImageAnalysisOverlayViewDelegate : NSObject <VKCImageAnalysisOverlayViewDelegate> {
    struct WeakPtr<WebKit::WebViewImpl, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _impl;
    VKCImageAnalysisOverlayView *_overlayView;
    NSResponder *_lastOverlayResponderView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentsRectForImageAnalysisOverlayView:(id)a0;
- (BOOL)firstResponderIsInsideImageOverlay;
- (BOOL)imageAnalysisOverlay:(id)a0 shouldHandleKeyDownEvent:(id)a1;
- (id)initWithWebViewImpl:(void *)a0;

@end
