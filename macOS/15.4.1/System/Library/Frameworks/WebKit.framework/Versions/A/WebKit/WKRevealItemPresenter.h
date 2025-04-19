@class NSString;

@interface WKRevealItemPresenter : NSObject <RVPresenterHighlightDelegate> {
    struct WeakPtr<WebKit::WebViewImpl, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _impl;
    struct RetainPtr<RVPresenter> { void *m_ptr; } _presenter;
    struct RetainPtr<RVPresentingContext> { void *m_ptr; } _presentingContext;
    struct RetainPtr<RVItem> { void *m_ptr; } _item;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameInView;
    struct CGPoint { double x; double y; } _menuLocationInView;
    BOOL _isHighlightingItem;
}

@property (nonatomic) BOOL shouldUseDefaultHighlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)revealContext:(id)a0 rectsForItem:(id)a1;
- (BOOL)revealContext:(id)a0 shouldUseDefaultHighlightForItem:(id)a1;
- (void)revealContext:(id)a0 startHighlightingItem:(id)a1;
- (void)revealContext:(id)a0 stopHighlightingItem:(id)a1;
- (void)showContextMenu;
- (void)_callDidFinishPresentationIfNeeded;
- (id)initWithWebViewImpl:(const void *)a0 item:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 menuLocation:(struct CGPoint { double x0; double x1; })a3;

@end
