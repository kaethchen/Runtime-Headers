@interface WKAccessibilityWebPageObjectBase : NSObject {
    struct NakedPtr<WebKit::WebPage> { struct WebPage *m_ptr; } m_page;
    struct Markable<WTF::ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>, WTF::ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>::MarkableTraits> { struct ObjectIdentifierGeneric<WebCore::PageIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_value; } m_pageID;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } m_cacheLock;
    struct FloatPoint { float m_x; float m_y; } m_position;
    struct IntSize { int m_width; int m_height; } m_size;
    struct ThreadSafeWeakPtr<WebCore::AXCoreObject, WTF::NoTaggingTraits<WebCore::AXCoreObject>> { struct TaggedPtr<WebCore::AXCoreObject, WTF::NoTaggingTraits<WebCore::AXCoreObject>> { unsigned long long m_ptr; } m_objectOfCorrectType; struct RefPtr<WTF::ThreadSafeWeakPtrControlBlock, WTF::RawPtrTraits<WTF::ThreadSafeWeakPtrControlBlock>, WTF::ThreadSafeWeakPtrControlBlockRefDerefTraits> { struct ThreadSafeWeakPtrControlBlock *m_ptr; } m_controlBlock; } m_isolatedTreeRoot;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } m_windowLock;
    struct WeakObjCPtr<id> { id m_weakReference; } m_window;
    struct IntPoint { int m_x; int m_y; } m_remoteFrameOffset;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } m_parentLock;
    struct RetainPtr<id> { void *m_ptr; } m_parent;
    BOOL m_hasMainFramePlugin;
    struct optional<WebCore::ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>>> { union { char __null_state_; struct ProcessQualified<WTF::ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long>> { struct ObjectIdentifierGeneric<WebCore::FrameIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_object; struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits<uint64_t>, unsigned long long> { unsigned long long m_identifier; } m_processIdentifier; } __val_; } ; BOOL __engaged_; } m_frameID;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setSize:(const struct IntSize { int x0; int x1; } *)a0;
- (void)setPosition:(const struct FloatPoint { float x0; float x1; } *)a0;
- (id)accessibilityFocusedUIElement;
- (void)setWindow:(id)a0;
- (id)accessibilityPluginObject;
- (struct IntPoint { int x0; int x1; })accessibilityRemoteFrameOffset;
- (id)accessibilityRootObjectWrapper;
- (struct NakedPtr<WebCore::AXObjectCache> { struct AXObjectCache *x0; })axObjectCache;
- (void)enableAccessibilityForAllProcesses;
- (void *)remoteLocalFrame;
- (void)setFrameIdentifier:(const void *)a0;
- (void)setHasMainFramePlugin:(BOOL)a0;
- (void)setIsolatedTreeRoot:(struct NakedPtr<WebCore::AXCoreObject> { struct AXCoreObject *x0; })a0;
- (void)setRemoteFrameOffset:(struct IntPoint { int x0; int x1; })a0;
- (void)setRemoteParent:(id)a0;
- (void)setWebPage:(struct NakedPtr<WebKit::WebPage> { struct WebPage *x0; })a0;

@end
