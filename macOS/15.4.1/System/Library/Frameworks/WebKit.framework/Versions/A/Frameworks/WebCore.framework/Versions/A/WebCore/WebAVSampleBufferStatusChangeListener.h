@interface WebAVSampleBufferStatusChangeListener : NSObject {
    struct RetainPtr<CALayer> { void *m_ptr; } _displayLayer;
    struct ThreadSafeWeakPtr<WebCore::LocalSampleBufferDisplayLayer, WTF::NoTaggingTraits<WebCore::LocalSampleBufferDisplayLayer>> { struct TaggedPtr<WebCore::LocalSampleBufferDisplayLayer, WTF::NoTaggingTraits<WebCore::LocalSampleBufferDisplayLayer>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } _parent;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;
- (id)initWithParent:(void *)a0;
- (void)begin:(id)a0;

@end
