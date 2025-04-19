@interface WKVideoLayerRemote : CALayer {
    struct ThreadSafeWeakPtr<WebKit::MediaPlayerPrivateRemote, WTF::NoTaggingTraits<WebKit::MediaPlayerPrivateRemote>> { struct TaggedPtr<WebKit::MediaPlayerPrivateRemote, WTF::NoTaggingTraits<WebKit::MediaPlayerPrivateRemote>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } _mediaPlayerPrivateRemote;
    struct RetainPtr<CAContext> { void *m_ptr; } _context;
    unsigned char _videoGravity;
    struct unique_ptr<WebCore::Timer, std::default_delete<WebCore::Timer>> { struct __compressed_pair<WebCore::Timer *, std::default_delete<WebCore::Timer>> { struct Timer *__value_; } __ptr_; } _resolveBoundsTimer;
    BOOL _shouldRestartWhenTimerFires;
    struct Seconds { double m_value; } _delay;
}

@property (nonatomic) void *mediaPlayerPrivateRemote;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoLayerFrame;
@property (nonatomic) unsigned char videoGravity;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)layoutSublayers;
- (void)resolveBounds;
- (BOOL)resizePreservingGravity;

@end
