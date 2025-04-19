@class NSImmediateActionGestureRecognizer, FI_TBrowserImmediateActionGestureRecognizerDelegate, NSObject, FI_TNotificationCenterObserverGlue;

@interface FI_TPropertyColumnPreviewNameController : FI_TPropertyTitleBubbleViewController {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _nodes;
    FI_TBrowserImmediateActionGestureRecognizerDelegate *_immediateActionGestureRecognizerDelegate;
    NSImmediateActionGestureRecognizer *_renameImmediateActionGestureRecognizer;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _clipViewBoundsChangedObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _columnViewClipViewBoundsChangedObserver;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
