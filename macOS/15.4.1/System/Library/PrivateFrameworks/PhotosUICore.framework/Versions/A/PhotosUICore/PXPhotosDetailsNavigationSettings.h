@interface PXPhotosDetailsNavigationSettings : PXSettings <PXPhotosDetailsNavigationSettingsProtocol>

@property (class, nonatomic, readonly) BOOL canEnableZoomBounce;

@property (nonatomic) BOOL useZoomTransition;
@property (nonatomic) BOOL customZoomTransitionDimming;
@property (nonatomic) double zoomTransitionDimmingWhite;
@property (nonatomic) double zoomTransitionDimmingOpacity;
@property (nonatomic) BOOL customZoomTransitionDimmingBlurEffect;
@property (nonatomic) long long zoomTransitionDimmingBlurEffectStyle;
@property (nonatomic) BOOL allowZoomBounce;
@property (nonatomic) double zoomBounceScale;
@property (nonatomic) double zoomBounceDelay;
@property (nonatomic) double zoomBounceRefractoryPeriod;
@property (nonatomic) BOOL useSystemSwipeToDismiss;
@property (nonatomic) BOOL ensureOpaqueDestination;
@property (nonatomic) BOOL useDebugColors;
@property (nonatomic) BOOL showDebugOverlays;
@property (nonatomic) BOOL allowScreenEdgeSwipeToDismiss;
@property (nonatomic) double screenEdgeSwipeForegroundInset;
@property (nonatomic) double screenEdgeSwipeSlideDownDuration;
@property (nonatomic) double screenEdgeSwipeInteractionRelativeDistance;
@property (nonatomic) double screenEdgeSwipeInteractiveFraction;
@property (nonatomic) BOOL workAround123679412;
@property (nonatomic) BOOL allowZoomFromSheets;
@property (nonatomic) BOOL workAround125263280;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
