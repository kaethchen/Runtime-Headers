@interface WebEffectiveRateChangedListenerObjCAdapter : NSObject {
    struct ThreadSafeWeakPtr<WebCore::EffectiveRateChangedListener, WTF::NoTaggingTraits<WebCore::EffectiveRateChangedListener>> { struct TaggedPtr<WebCore::EffectiveRateChangedListener, WTF::NoTaggingTraits<WebCore::EffectiveRateChangedListener>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } _listener;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithEffectiveRateChangedListener:(const void *)a0;

@end
