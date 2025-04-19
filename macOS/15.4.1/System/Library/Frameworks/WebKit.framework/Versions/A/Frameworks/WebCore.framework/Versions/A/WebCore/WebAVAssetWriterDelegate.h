@class NSString;

@interface WebAVAssetWriterDelegate : NSObject <AVAssetWriterDelegate> {
    struct ThreadSafeWeakPtr<WebCore::MediaRecorderPrivateWriterListener, WTF::NoTaggingTraits<WebCore::MediaRecorderPrivateWriterListener>> { struct TaggedPtr<WebCore::MediaRecorderPrivateWriterListener, WTF::NoTaggingTraits<WebCore::MediaRecorderPrivateWriterListener>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } m_writer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
