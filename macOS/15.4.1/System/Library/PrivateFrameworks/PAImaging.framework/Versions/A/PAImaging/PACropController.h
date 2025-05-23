@class PAItemViewConfiguration, PAImageItemViewMode, NSString, PAImageItemViewController, NUCropModel, PACompositionEditController, PACropModelEditor, PACanvasItemView, PACropInteractionContext, PAImageItemView;

@interface PACropController : NSObject <PACompositionEditControllerObserver> {
    BOOL _interactive;
    unsigned int _targetArea;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _beginRect;
    double _beginYawAngle;
    double _beginPitchAngle;
    double _beginStraightenAngle;
    PAItemViewConfiguration *_beginConfiguration;
    double _beginScale;
    NUCropModel *_model;
    long long _orientation;
    double _autoAngle;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _autoCrop;
    BOOL _hasAuto;
    PACompositionEditController *_observedCompositionEditController;
    PACropModelEditor *_modelEditor;
    BOOL _didBeginEditing;
}

@property (readonly, nonatomic) PAImageItemViewController *viewController;
@property (readonly, nonatomic) PAImageItemView *imageView;
@property (readonly, nonatomic) PAImageItemViewMode *cropMode;
@property (readonly, nonatomic) PAImageItemViewMode *normalMode;
@property (readonly, nonatomic) PACanvasItemView *canvasView;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isCurrent;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputExtent;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } masterSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } viewCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } integralViewCropRect;
@property (readonly, nonatomic) double straightenAngle;
@property (readonly, nonatomic) double verticalAngle;
@property (readonly, nonatomic) double horizontalAngle;
@property (readonly, nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } transform;
@property (readonly, nonatomic) struct PIRotationAttributes { double x0; double x1; double x2; } rotationAttributes;
@property (readonly, nonatomic) double autoStraightenAngle;
@property (readonly, nonatomic) double autoStraightenAngleWithOrientation;
@property (readonly, nonatomic) struct { unsigned long long x0; unsigned long long x1; } aspectRatio;
@property (readonly, nonatomic) struct { unsigned long long width; unsigned long long height; } viewAspectRatio;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) unsigned long long hitVertexId;
@property (readonly) PACropInteractionContext *currentInteractionContext;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_cropModelWithEditController:(id)a0 inputExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)_cropModelWithImageItemController:(id)a0 inputExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)_cropModelWithInputExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cropController:(id)a1;
+ (id)_cropOperationForImageItemController:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_inputExtentForImageItemController:(id)a0;
+ (long long)_orientationForImageItemController:(id)a0;

- (void).cxx_destruct;
- (void)reset;
- (void)_exit;
- (void)_imageViewFrameDidChange:(id)a0;
- (void)orientationChanged:(long long)a0;
- (struct { unsigned long long x0; unsigned long long x1; })originalAspectRatio;
- (BOOL)hasCrop;
- (BOOL)aspectRatioIsFreeForm;
- (BOOL)aspectRatioIsOriginal;
- (struct { unsigned long long x0; unsigned long long x1; })freeFormAspectRatio;
- (BOOL)imageContainsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTol:(double)a1;
- (void)makeCurrentAspectRatioFreeForm;
- (void)makeCurrentFreeFormAspectFixed;
- (BOOL)_isAnchorValid:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_validBeginRect;
- (double)currentViewZoom;
- (double)_straightenAngleForOrientation:(long long)a0;
- (void)didExit;
- (struct { unsigned long long x0; unsigned long long x1; })_aspectRatioForOrientation:(long long)a0;
- (void)_autoComputeStraightenAndCropWithCompletionBlock:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentCropRectForCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 masterSize:(struct CGSize { double x0; double x1; })a1 orientation:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentCropRectForViewCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (id)_cropMode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cropRectForContentCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 masterSize:(struct CGSize { double x0; double x1; })a1 orientation:(long long)a2;
- (void)_didFinishComputingAutoValues;
- (void)_enterWithCompletion:(id /* block */)a0;
- (void)_handleBeginEditing;
- (void)_resetBeginState;
- (void)_resetBeginStateIfNonInteractive;
- (void)_setAutoValuesWithCropAutoSettings:(id)a0;
- (void)_setAutoValuesWithCropOperation:(id)a0;
- (void)_setModelEditor:(id)a0;
- (double)_straightenMultiplierForOrientation:(long long)a0;
- (void)_updateCropModelIfNeeded:(id)a0 orientation:(long long)a1;
- (void)_updateCropOperation:(id)a0;
- (void)_updateModelFromEditControllerIfNeeded:(id)a0;
- (void)_updateTargetAreaWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTargetAreaWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 force:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewCropRectForContentCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (struct CGVector { double x0; double x1; })_viewOffsetInContentSpace:(struct CGVector { double x0; double x1; })a0;
- (void)beginInteractiveWithContext:(id)a0;
- (BOOL)canApplyAutoCropInRenderDescription;
- (void)compositionEditController:(id)a0 didAddAdjustment:(id)a1;
- (void)compositionEditController:(id)a0 didRemoveAdjustment:(id)a1;
- (void)compositionEditController:(id)a0 didUpdateAdjustment:(id)a1;
- (void)compositionEditController:(id)a0 didUpdateAdjustments:(id)a1;
- (void)compositionEditControllerChanged:(id)a0;
- (void)compositionEditControllerCompositionChanged:(id)a0 compositionKey:(id)a1;
- (void)computeAutoValues:(id /* block */)a0;
- (void)conformCrop;
- (id)cropConfigurationToLoad;
- (void)cropDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRectFromViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 anchor:(struct CGPoint { double x0; double x1; })a1 configuration:(id)a2;
- (void)didEnterWithCompletion:(id /* block */)a0;
- (void)endInteractive;
- (BOOL)hasAutoValues;
- (BOOL)hasCropInRenderDescription;
- (void)imageViewFrameDidChange;
- (id)initWithItemViewController:(id)a0;
- (void)makeCropRectIntegral;
- (void)moveCropBy:(struct CGVector { double x0; double x1; })a0;
- (id)normalConfigurationToLoad;
- (void)removeAutoCalcSettings:(id)a0;
- (void)setAutoValues;
- (void)setAutoValuesIfNeeded;
- (unsigned long long)setViewCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 anchor:(struct CGPoint { double x0; double x1; })a1 configuration:(id)a2 force:(BOOL)a3 viewConstraint:(unsigned long long)a4;
- (unsigned long long)setViewCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 anchor:(struct CGPoint { double x0; double x1; })a1 force:(BOOL)a2 viewConstraint:(unsigned long long)a3;
- (void)updateAspectRatio:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (void)updateHorizontalAngle:(double)a0;
- (void)updateRenderDescription:(id)a0;
- (void)updateStraightenAngle:(double)a0;
- (void)updateVerticalAngle:(double)a0;
- (void)updateViewport;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewCropRectForViewConfiguration:(id)a0;
- (void)whenReady:(id /* block */)a0;
- (void)willEnter;
- (void)willEnter:(id /* block */)a0;
- (void)willExit;
- (void)willExit:(id /* block */)a0;
- (void)zoomIntoCrop:(double)a0;

@end
