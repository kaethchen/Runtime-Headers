@class CASpringAnimation, NSString, PXUpdater, PXValueSpringAnimation, PXNumberAnimator;

@interface PXZoomablePhotosMiniModeAnimator : PXObservable <PXChangeObserver> {
    PXUpdater *_updater;
    BOOL _performAnimated;
    CASpringAnimation *_rowUnfoldingAnimation;
    CASpringAnimation *_rowFoldingAnimation;
    PXValueSpringAnimation *_rowUnfoldingValueAnimation;
    PXValueSpringAnimation *_rowFoldingValueAnimation;
}

@property (readonly, nonatomic) PXNumberAnimator *gridExpansionAnimator;
@property (readonly, nonatomic) PXNumberAnimator *gridMiniStylingAnimator;
@property (readonly, nonatomic) PXNumberAnimator *gridMiniChromeVisibilityAnimator;
@property (readonly, nonatomic) PXNumberAnimator *gridBackgroundVisibilityAnimator;
@property (readonly, nonatomic) unsigned long long previousState;
@property (nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) unsigned long long targetState;
@property (readonly, nonatomic) double interactionProgress;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isContentAnimating;
@property (readonly, nonatomic) double gridExpansionPercentage;
@property (readonly, nonatomic) double gridMiniStylingPercentage;
@property (readonly, nonatomic) double gridMiniChromeVisibilityPercentage;
@property (readonly, nonatomic) double gridBackgroundVisibilityPercentage;
@property (nonatomic) double gridExpansionVelocity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0;
- (void)setTargetState:(unsigned long long)a0;
- (void)setInteractionProgress:(double)a0;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didPerformChanges;
- (void)_updateAnimator;
- (void)_applyAnimationValue:(struct { double x0; double x1; double x2; long long x3; double x4; BOOL x5; })a0 toAnimator:(id)a1 animateImmediately:(BOOL)a2;
- (void)_invalidateAnimator;
- (void)_invalidateIsAnimating;
- (void)_updateIsAnimating;
- (double)gridMiniFoldingPercentage;
- (double)gridMiniUnfoldingPercentage;
- (void)performAnimated:(BOOL)a0 changes:(id /* block */)a1;
- (void)setIsContentAnimating:(BOOL)a0;

@end
