@class NSString;

@interface WebAVRoutePickerViewHelper : NSObject <AVRoutePickerViewDelegate> {
    struct WeakPtr<WebCore::AVRoutePickerViewTargetPicker, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCallback:(void *)a0;
- (void)clearCallback;
- (void)notificationHandler:(id)a0;
- (void)routePickerViewDidEndPresentingRoutes:(id)a0;

@end
