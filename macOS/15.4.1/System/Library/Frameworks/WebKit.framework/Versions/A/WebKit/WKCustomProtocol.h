@interface WKCustomProtocol : NSURLProtocol {
    struct RetainPtr<__CFRunLoop *> { void *m_ptr; } _initializationRunLoop;
}

@property (readonly, nonatomic) struct Markable<WTF::ObjectIdentifierGeneric<WebKit::LegacyCustomProtocolIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>, WTF::ObjectIdentifierGeneric<WebKit::LegacyCustomProtocolIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long>::MarkableTraits> { struct ObjectIdentifierGeneric<WebKit::LegacyCustomProtocolIDType, WTF::ObjectIdentifierThreadSafeAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_value; } customProtocolID;
@property (readonly, nonatomic) struct __CFRunLoop { } *initializationRunLoop;

+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stopLoading;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (void)startLoading;

@end
