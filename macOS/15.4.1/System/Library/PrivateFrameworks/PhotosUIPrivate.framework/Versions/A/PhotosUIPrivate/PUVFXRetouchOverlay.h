@class _TtC15PhotosUIPrivate27PUVFXDimmingBackgroundLayer, NSString, NSView, CIContext, PUVFXBrushView, NSArray, PIInpaintMaskContext, NSDictionary, NSObject, NSWindow, NUComposition;
@protocol PUVFXCleanupOverlayDelegate, OS_dispatch_queue;

@interface PUVFXRetouchOverlay : NSView <CAAnimationDelegate, PUVFXBrushViewDelegate> {
    PIInpaintMaskContext *_inpaintCtx;
    _TtC15PhotosUIPrivate27PUVFXDimmingBackgroundLayer *_rootLayer;
    NSWindow *_controls;
    PUVFXBrushView *_brushView;
    NSDictionary *_settings;
    NUComposition *_composition;
    NSView *_constrainingView;
    CIContext *_ciContext;
    NSArray *_imageGenerators;
    BOOL _isBrushing;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<PUVFXCleanupOverlayDelegate> overlayDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_blurredEdgeImageWithImage:(id)a0 settings:(id)a1;
+ (double)_dragCoefficient;

- (void).cxx_destruct;
- (void)layout;
- (void)removeFromSuperview;
- (id)rootLayer;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)didMoveToSuperview;
- (void)_removeNotifications;
- (void)_powerStateDidChange:(id)a0;
- (void)_layoutSubviews;
- (void)_thermalStateDidChange:(id)a0;
- (void)_addNotifications;
- (void)_configureEmitter:(id)a0 withSettings:(id)a1;
- (void)_asyncCIRenderWithFlush:(id /* block */)a0;
- (void)_configureOverrides:(id)a0 withSettings:(id)a1;
- (void)_accessibilityDisplayOptionsChanged:(id)a0;
- (void)_createAndAddLayers;
- (void)_createDeclutterMaskForComposition:(id)a0;
- (id)_createOutlineImage:(id)a0 settings:(id)a1;
- (id)_createRadialGradientWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)_createSubjectExclusionMaskForComposition:(id)a0;
- (void)_delayedScreenParamsDidChange:(id)a0;
- (void)_didMoveToSuperview;
- (void)_didUndoRedo:(id)a0;
- (void)_manageThrottledState;
- (double)_maxEDRForDisplay;
- (id)_scaleCIImage:(id)a0 toFitSize:(struct CGSize { double x0; double x1; })a1;
- (void)_screenParamsDidChange:(id)a0;
- (void)_snapshotAvailable:(id)a0;
- (id)_syncGetSourceImageOfSize:(struct CGSize { double x0; double x1; })a0;
- (id)brushView;
- (void)didEndBrushing;
- (void)didRenderComposition:(id)a0;
- (void)didResetComposition:(id)a0;
- (void)didStartBrushing;
- (id)initWithComposition:(id)a0 maskContext:(id)a1 constrainingView:(id)a2 isHDR:(BOOL)a3 overlayDelegate:(id)a4;
- (void)prepareForRevertToOriginal;
- (void)selectPoint:(struct CGPoint { double x0; double x1; })a0 withMask:(id)a1 composition:(id)a2;
- (void)setBrushPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)showControls:(BOOL)a0;
- (void)undimMasks;

@end
