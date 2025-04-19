@interface _WKRemoteObjectRegistry : NSObject {
    struct RefPtr<WebKit::RemoteObjectRegistry, WTF::RawPtrTraits<WebKit::RemoteObjectRegistry>, WTF::DefaultRefDerefTraits<WebKit::RemoteObjectRegistry>> { struct RemoteObjectRegistry *m_ptr; } _remoteObjectRegistry;
    struct RetainPtr<NSMapTable> { void *m_ptr; } _remoteObjectProxies;
    struct HashMap<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>, WTF::DefaultHash<String>, WTF::HashTraits<String>, WTF::HashTraits<std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>, WTF::HashTableTraits, WTF::ShouldValidateKey::Yes> { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>>, WTF::DefaultHash<String>, WTF::HashMap<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>::KeyValuePairTraits, WTF::HashTraits<String>, WTF::ShouldValidateKey::Yes> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _exportedObjects;
    struct HashMap<unsigned long long, PendingReply, WTF::DefaultHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<PendingReply>, WTF::HashTableTraits, WTF::ShouldValidateKey::Yes> { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, PendingReply>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, PendingReply>>, WTF::DefaultHash<unsigned long long>, WTF::HashMap<unsigned long long, PendingReply>::KeyValuePairTraits, WTF::HashTraits<unsigned long long>, WTF::ShouldValidateKey::Yes> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _pendingReplies;
}

@property (readonly, nonatomic) void *remoteObjectRegistry;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_invalidate;
- (id)remoteObjectProxyWithInterface:(id)a0;
- (void)_callReplyWithID:(unsigned long long)a0 blockInvocation:(const void *)a1;
- (id)_initWithWebPage:(struct NakedRef<WebKit::WebPage> { struct WebPage *x0; })a0;
- (id)_initWithWebPageProxy:(struct NakedRef<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a0;
- (void)_invokeMethod:(const void *)a0;
- (void)_releaseReplyWithID:(unsigned long long)a0;
- (void)_sendInvocation:(id)a0 interface:(id)a1;
- (void)registerExportedObject:(id)a0 interface:(id)a1;
- (void)unregisterExportedObject:(id)a0 interface:(id)a1;

@end
