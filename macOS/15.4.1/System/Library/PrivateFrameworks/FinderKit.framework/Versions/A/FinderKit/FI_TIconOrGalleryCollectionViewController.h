@class NSString, NSImmediateActionGestureRecognizer, FI_TBrowserImmediateActionGestureRecognizerDelegate, NSObject, FI_TNotificationCenterObserverGlue;

@interface FI_TIconOrGalleryCollectionViewController : FI_TBaseCollectionViewController <TIconOrGalleryCollectionViewDelegateProtocol> {
    BOOL _doubleClickOnMouseUp;
    BOOL _startEditingOnMouseUp;
    struct CGPoint { double x; double y; } _initialClickAt;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _clipViewBoundsDidChangeObserver;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _nodeClickedOnMouseDown;
    FI_TBrowserImmediateActionGestureRecognizerDelegate *_immediateActionGestureRecognizerDelegate;
    NSImmediateActionGestureRecognizer *_quickLookImmediateActionGestureRecognizer;
    NSImmediateActionGestureRecognizer *_renameImmediateActionGestureRecognizer;
    BOOL _immediateActionGestureRecognizerDidRecognize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)handleMouseDown:(id)a0;
- (BOOL)handleMouseUp:(id)a0;
- (void)aboutToTearDown;
- (void)configureView;
- (BOOL)inlinePreviewMouseDown:(id)a0;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)nodeBeingEdited;
- (void)_setUpImmediateActionGestureRecognizers;
- (BOOL)handleMouseDragged:(id)a0;
- (id)iconOrGalleryView;
- (struct TFENode { struct OpaqueNodeRef *x0; })nodeClickedOnMouseDown;
- (void)renameSelectedItem;
- (void)shrinkToFitTextViewAboutToCloseForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)shrinkToFitTextViewAboutToOpenForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)shrinkToFitTextViewEditingComplete:(id)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 renameOp:(id)a2;
- (BOOL)startEditingWithNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 renameOp:(id)a1;
- (BOOL)startEditingWithNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 renameOp:(id)a1 afterDelay:(BOOL)a2;
- (void)stopEditing:(BOOL)a0;
- (void)updateSTFEditorLocation;

@end
