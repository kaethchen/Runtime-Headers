@interface WebAVSampleBufferListenerPrivate : NSObject {
    struct WeakPtr<WebCore::WebAVSampleBufferListenerClient, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _client;
    struct Vector<WTF::RetainPtr<NSObject<WebSampleBufferVideoRendering>>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } _videoRenderers;
    struct Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } _audioRenderers;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithClient:(void *)a0;
- (void)audioRendererWasAutomaticallyFlushed:(id)a0;
- (void)beginObservingAudioRenderer:(id)a0;
- (void)beginObservingVideoRenderer:(id)a0;
- (void)layerFailedToDecode:(id)a0;
- (void)layerReadyForDisplayChanged:(id)a0;
- (void)layerRequiresFlushToResumeDecodingChanged:(id)a0;
- (void)stopObservingAudioRenderer:(id)a0;
- (void)stopObservingVideoRenderer:(id)a0;

@end
