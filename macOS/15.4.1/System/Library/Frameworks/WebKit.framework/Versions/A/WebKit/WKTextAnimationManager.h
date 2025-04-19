@class NSString;

@interface WKTextAnimationManager : NSObject <_WTTextPreviewAsyncSource> {
    struct WeakPtr<WebKit::WebViewImpl, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _webView;
    struct RetainPtr<NSMutableDictionary<NSUUID *,WKTextAnimationTypeEffectData *>> { void *m_ptr; } _chunkToEffect;
    struct RetainPtr<_WTTextEffectView> { void *m_ptr; } _effectView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)textPreviewForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;
- (void)addTextAnimationForAnimationID:(id)a0 withData:(const struct TextAnimationData { unsigned char x0; unsigned char x1; struct UUID { unsigned __int128 x0; } x2; struct UUID { unsigned __int128 x0; } x3; struct UUID { unsigned __int128 x0; } x4; } *)a1;
- (BOOL)hasActiveTextAnimationType;
- (void)hideTextAnimationView;
- (id)initWithWebViewImpl:(void *)a0;
- (void)removeTextAnimationForAnimationID:(id)a0;
- (void)restoreTextAnimationType;
- (void)suppressTextAnimationType;
- (void)textPreviewsForChunk:(id)a0 completion:(id /* block */)a1;
- (void)updateIsTextVisible:(BOOL)a0 forChunk:(id)a1 completion:(id /* block */)a2;

@end
