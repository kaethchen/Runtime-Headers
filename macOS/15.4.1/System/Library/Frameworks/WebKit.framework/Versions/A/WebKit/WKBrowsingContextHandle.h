@interface WKBrowsingContextHandle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_pageProxyID) struct Markable<WTF::ObjectIdentifierGeneric<WebKit::WebPageProxyIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>, WTF::ObjectIdentifierGeneric<WebKit::WebPageProxyIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>::MarkableTraits> { struct ObjectIdentifierGeneric<WebKit::WebPageProxyIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_value; } pageProxyID;
@property (readonly, nonatomic, getter=_webPageID) unsigned long long webPageID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (id)_initWithPage:(struct NakedRef<WebKit::WebPage> { struct WebPage *x0; })a0;
- (id)_initWithPageProxy:(struct NakedRef<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a0;
- (id)_initWithPageProxyID:(struct ObjectIdentifierGeneric<WebKit::WebPageProxyIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long x0; })a0 andWebPageID:(struct ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long x0; })a1;

@end
