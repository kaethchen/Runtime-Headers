@class NSString;

@interface WebCoreFPSContentKeySessionDelegate : NSObject <AVContentKeySessionDelegate> {
    struct WeakPtr<WebCore::AVContentKeySessionDelegateClient, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _parent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithParent:(void *)a0;
- (void)contentKeySession:(id)a0 contentKeyRequest:(id)a1 didFailWithError:(id)a2;
- (void)contentKeySession:(id)a0 contentKeyRequestDidSucceed:(id)a1;
- (void)contentKeySession:(id)a0 contentProtectionSessionIdentifierDidChangeForReportGroup:(id)a1;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequests:(id)a1 forInitializationData:(id)a2;
- (void)contentKeySession:(id)a0 didProvideRenewingContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 externalProtectionStatusDidChangeForContentKey:(id)a1;
- (void)contentKeySession:(id)a0 externalProtectionStatusDidChangeForContentKeyRequest:(id)a1;
- (BOOL)contentKeySession:(id)a0 shouldRetryContentKeyRequest:(id)a1 reason:(id)a2;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)a0;
- (void)contentKeySession:(id)a0 contentProtectionSessionIdentifierDidChangeForKeyGroup:(id)a1;

@end
