@class NSString, FI_TShrinkToFitController;

@interface FI_TIconOrGalleryCollectionView : FI_TCollectionView <TShrinkToFitDelegateProtocol> {
    FI_TShrinkToFitController *_stfController;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _nodeBeingEdited;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (const struct TFENode { struct OpaqueNodeRef *x0; } *)nodeBeingEdited;
- (void)shrinkToFitTextViewAboutToClose;
- (id)hitTestInIconViewIcon:(const struct CGPoint { double x0; double x1; } *)a0;
- (id)hitTestInIconViewIconOrText:(const struct CGPoint { double x0; double x1; } *)a0;
- (id)hitTestInIconViewText:(const struct CGPoint { double x0; double x1; } *)a0;
- (id)iconOrGalleryCollectionViewDelegate;
- (struct pair<CGRect, double> { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; })maxSTFEditorGlobalFrameAndBaselineForIconView:(id)a0;
- (BOOL)shrinkToFitTextViewAboutToOpen;
- (void)shrinkToFitTextViewEditingComplete:(id)a0;
- (BOOL)startEditingWithNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 renameOp:(id)a1 afterDelay:(BOOL)a2;
- (void)stopEditing:(BOOL)a0;
- (void)updateSTFEditorLocation;
- (id)viewAtLocalPoint:(const struct CGPoint { double x0; double x1; } *)a0;

@end
