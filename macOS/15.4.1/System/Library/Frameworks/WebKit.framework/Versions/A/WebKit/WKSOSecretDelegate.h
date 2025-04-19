@class NSString;

@interface WKSOSecretDelegate : NSObject <WKNavigationDelegate, WKUIDelegate> {
    struct ThreadSafeWeakPtr<WebKit::PopUpSOAuthorizationSession, WTF::NoTaggingTraits<WebKit::PopUpSOAuthorizationSession>> { struct TaggedPtr<WebKit::PopUpSOAuthorizationSession, WTF::NoTaggingTraits<WebKit::PopUpSOAuthorizationSession>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } _weakSession;
    BOOL _isFirstNavigation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSession:(void *)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webViewDidClose:(id)a0;

@end
