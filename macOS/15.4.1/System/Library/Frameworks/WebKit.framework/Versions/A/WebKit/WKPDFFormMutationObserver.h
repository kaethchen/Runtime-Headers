@interface WKPDFFormMutationObserver : NSObject {
    struct ThreadSafeWeakPtr<WebKit::UnifiedPDFPlugin, WTF::NoTaggingTraits<WebKit::UnifiedPDFPlugin>> { struct TaggedPtr<WebKit::UnifiedPDFPlugin, WTF::NoTaggingTraits<WebKit::UnifiedPDFPlugin>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } _plugin;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithPlugin:(void *)a0;
- (void)formChanged:(id)a0;

@end
