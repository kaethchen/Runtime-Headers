@class NSString;

@interface ReaderizedArticleFetcherNavigationDelegate : NSObject <WKNavigationDelegate> {
    struct WeakPtr<Safari::ReaderizedArticleFetcher, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _readerizedArticleFetcher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 preferences:(id)a2 decisionHandler:(id /* block */)a3;
- (void)_webView:(id)a0 webContentProcessDidTerminateWithReason:(long long)a1;
- (id)initWithReaderizedArticleFetcher:(void *)a0;

@end
