@class PXDisplayAssetViewModel, PXUpdater, NSImage, NSString, PXVisualIntelligenceManager, PXVKImageAnalysisOverlayView;
@protocol PXDisplayAssetViewMenuDelegate, PXVKImageAnalysis;

@interface PXDisplayAssetImageAnalysisOverlayView : UXView <PXVKImageAnalysisOverlayViewDelegate, PXChangeObserver> {
    BOOL _isPerformingLayout;
}

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXVisualIntelligenceManager *visualIntelligenceManager;
@property (readonly, nonatomic) PXVKImageAnalysisOverlayView *imageAnalysisOverlayView;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } imageAnalysisOverlayViewDefaultActionInfoEdgeInsets;
@property (nonatomic) int currentRequestID;
@property (retain, nonatomic) NSImage *imageToAnalyse;
@property (retain, nonatomic) id<PXVKImageAnalysis> imageAnalysis;
@property (nonatomic) BOOL shouldHideTextHighlights;
@property (weak, nonatomic) id<PXDisplayAssetViewMenuDelegate> displayAssetViewMenuDelegate;
@property (readonly, nonatomic) PXDisplayAssetViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)changedImageAnalysisOverlayNeededForViewModelChange:(unsigned long long)a0;
+ (BOOL)isImageAnalysisOverlayNeededForViewModel:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)initWithViewModel:(id)a0;
- (BOOL)imageAnalysisOverlay:(id)a0 shouldHandleKeyDownEvent:(id)a1;
- (BOOL)imageAnalysisOverlay:(id)a0 shouldShowMenuForEvent:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)imageAnalysisOverlay:(id)a0 updateMenu:(id)a1 forEvent:(id)a2 atPoint:(struct CGPoint { double x0; double x1; })a3;
- (BOOL)imageAnalysisOvlerlayView:(id)a0 shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })a1 forAnalysisType:(unsigned long long)a2;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateImageAnalysisOverlay;
- (BOOL)_isPointInside:(struct CGPoint { double x0; double x1; })a0;
- (void)_ensureImageAnalysisOverlayView;
- (void)_layoutImageAnalysisOverlayView;
- (void)_ensureVisualIntelligenceManager;
- (void)_handleImageAnalysis:(id)a0 error:(id)a1 forRequestID:(int)a2;
- (void)_invalidateImageAnalysis;
- (void)_invalidateImageToAnalyse;
- (void)_updateImageAnalysis;
- (void)_updateImageAnalysisOverlay;
- (void)_updateImageToAnalyse;

@end
