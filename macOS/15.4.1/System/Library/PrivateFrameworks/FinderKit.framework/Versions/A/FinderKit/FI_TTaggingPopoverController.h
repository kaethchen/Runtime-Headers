@class FI_TTagEditorController, NSObject, FI_TTaggingPopoverContentViewController, FI_TNotificationCenterObserverGlue;

@interface FI_TTaggingPopoverController : FI_TPopoverController {
    FI_TTaggingPopoverContentViewController *_popoverContentViewController;
    FI_TTagEditorController *_editorController;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _didEndEditingObserver;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)cancel:(id)a0;
- (void)popoverDidShow:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)aboutToTearDown;
- (void)setNodes:(const void *)a0;
- (id)initWithWidth:(double)a0;
- (void)showPopoverForNodes:(const void *)a0 belowView:(id)a1 verticalInset:(double)a2;
- (void)showPopoverOverNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 forNodes:(const void *)a1 belowView:(id)a2;

@end
