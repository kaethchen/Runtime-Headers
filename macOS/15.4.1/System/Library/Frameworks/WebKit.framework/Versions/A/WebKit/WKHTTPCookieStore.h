@class NSString;

@interface WKHTTPCookieStore : NSObject <WKObject> {
    struct ObjectStorage<API::HTTPCookieStore> { struct type { unsigned char __lx[48]; } data; } _cookieStore;
    struct HashMap<const void *, WTF::RefPtr<WKHTTPCookieStoreObserver>, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *>, WTF::HashTraits<WTF::RefPtr<WKHTTPCookieStoreObserver>>, WTF::HashTableTraits, WTF::ShouldValidateKey::Yes> { struct HashTable<const void *, WTF::KeyValuePair<const void *, WTF::RefPtr<WKHTTPCookieStoreObserver>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<const void *, WTF::RefPtr<WKHTTPCookieStoreObserver>>>, WTF::DefaultHash<const void *>, WTF::HashMap<const void *, WTF::RefPtr<WKHTTPCookieStoreObserver>>::KeyValuePairTraits, WTF::HashTraits<const void *>, WTF::ShouldValidateKey::Yes> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _observers;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id).cxx_construct;
- (void)addObserver:(id)a0;
- (void)deleteCookie:(id)a0 completionHandler:(id /* block */)a1;
- (void)_flushCookiesToDiskWithCompletionHandler:(id /* block */)a0;
- (void)_getCookiesForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setCookieAcceptPolicy:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)getAllCookies:(id /* block */)a0;
- (void)getCookiePolicy:(id /* block */)a0;
- (void)setCookie:(id)a0 completionHandler:(id /* block */)a1;
- (void)setCookiePolicy:(long long)a0 completionHandler:(id /* block */)a1;

@end
