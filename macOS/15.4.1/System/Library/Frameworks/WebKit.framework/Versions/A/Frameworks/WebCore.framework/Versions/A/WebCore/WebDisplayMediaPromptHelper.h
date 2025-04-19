@class NSString;

@interface WebDisplayMediaPromptHelper : NSObject <SCContentSharingSessionProtocol, SCContentSharingPickerObserver> {
    struct WeakPtr<WebCore::ScreenCaptureKitSharingSessionManager, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _callback;
    struct Vector<WTF::RetainPtr<SCContentSharingSession>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } _sessions;
    BOOL _observingPicker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)disconnect;
- (id)initWithCallback:(void *)a0;
- (void)contentSharingPicker:(id)a0 didCancelForStream:(id)a1;
- (void)contentSharingPicker:(id)a0 didUpdateWithFilter:(id)a1 forStream:(id)a2;
- (void)contentSharingPickerStartDidFailWithError:(id)a0;
- (void)pickerCanceledForSession:(id)a0;
- (void)sessionDidChangeContent:(id)a0;
- (void)sessionDidEnd:(id)a0;
- (void)startObservingPicker:(id)a0;
- (void)startObservingSession:(id)a0;
- (void)stopObservingPicker:(id)a0;
- (void)stopObservingSession:(id)a0;

@end
