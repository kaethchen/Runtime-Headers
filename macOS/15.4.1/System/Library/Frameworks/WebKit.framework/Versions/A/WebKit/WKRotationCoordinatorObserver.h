@interface WKRotationCoordinatorObserver : NSObject {
    struct WeakPtr<WebKit::UserMediaPermissionRequestManagerProxy, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _managerProxy;
    struct HashMap<WTF::String, WTF::RetainPtr<AVCaptureDeviceRotationCoordinator>, WTF::DefaultHash<String>, WTF::HashTraits<String>, WTF::HashTraits<WTF::RetainPtr<AVCaptureDeviceRotationCoordinator>>, WTF::HashTableTraits, WTF::ShouldValidateKey::Yes> { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVCaptureDeviceRotationCoordinator>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVCaptureDeviceRotationCoordinator>>>, WTF::DefaultHash<String>, WTF::HashMap<WTF::String, WTF::RetainPtr<AVCaptureDeviceRotationCoordinator>>::KeyValuePairTraits, WTF::HashTraits<String>, WTF::ShouldValidateKey::Yes> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } m_coordinators;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop:(const void *)a0;
- (id)initWithRequestManagerProxy:(void *)a0;
- (BOOL)isMonitoringCaptureDeviceRotation:(const void *)a0;
- (struct optional<WebCore::VideoFrameRotation> { union { char x0; unsigned short x1; } x0; BOOL x1; })start:(const void *)a0 layer:(id)a1;

@end
