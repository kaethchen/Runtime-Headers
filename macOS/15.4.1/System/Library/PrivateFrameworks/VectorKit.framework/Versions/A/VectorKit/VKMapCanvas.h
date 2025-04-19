@class VKPuckAnimator, NSArray, NSString, VKTimedAnimation;
@protocol VKInteractiveMapDelegate;

@interface VKMapCanvas : VKScreenCanvas <VKInteractiveMap> {
    struct CGSize { double width; double height; } _lastCanvasSize;
    struct optional<float> { union { char __null_state_; float __val_; } ; BOOL __engaged_; } _lastValidCanvasSizeZoomLevel;
    VKTimedAnimation *_horizontalOffsetAnimation;
    struct shared_ptr<md::OverlayContainer> { struct OverlayContainer *__ptr_; struct __shared_weak_count *__cntrl_; } _overlayContainer;
    int _consoleFpsUpdateTicker;
    float _consoleFps;
}

@property (weak, nonatomic) id<VKInteractiveMapDelegate> delegate;
@property (weak, nonatomic) VKPuckAnimator *puckAnimator;
@property (nonatomic) BOOL trafficEnabled;
@property (nonatomic) BOOL forceRasterizationForGlobe;
@property (nonatomic) double canonicalSkyHeight;
@property (readonly, nonatomic) NSArray *overlays;
@property (readonly, nonatomic) NSArray *visibleTileSets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsMapType:(int)a0 scale:(int)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setContentsScale:(double)a0;
- (long long)tileSize;
- (id)detailedDescription;
- (void)setMapType:(int)a0;
- (void)addOverlay:(id)a0;
- (id /* block */)annotationCoordinateTest;
- (id /* block */)annotationRectTest;
- (id)attributionsForCurrentRegion;
- (void)insertOverlay:(id)a0 aboveOverlay:(id)a1;
- (void)insertOverlay:(id)a0 belowOverlay:(id)a1;
- (BOOL)isPointValidForGesturing:(struct CGPoint { double x0; double x1; })a0;
- (void)removeOverlay:(id)a0;
- (void)setMapType:(int)a0 animated:(BOOL)a1;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (void)updateOverlays;
- (void)didBecomeActive;
- (id)initWithMapEngine:(void *)a0 inBackground:(BOOL)a1;
- (BOOL)_isGlobeActive;
- (struct optional<float> { union { char x0; float x1; } x0; BOOL x1; })_zoomLevelForCanvasSize:(struct CGSize { double x0; double x1; })a0;
- (void)clearScene;
- (id)consoleString:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })convertCoordinateToCameraModelPoint:(struct { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertCoordinateToPoint:(struct { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertMapPointToPoint:(struct { double x0; double x1; })a0;
- (struct { double x0; double x1; })convertPointToCoordinate:(struct CGPoint { double x0; double x1; })a0;
- (struct { double x0; double x1; })convertPointToMapPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)debugHighlightObjectAtPoint:(struct CGPoint { double x0; double x1; })a0 highlightTarget:(unsigned char)a1;
- (void)didBecomeInActive;
- (id /* block */)globeAnnotationCoordinateTest;
- (id /* block */)globeAnnotationRectTest;
- (void)goToTileX:(int)a0 Y:(int)a1 Z:(int)a2 tileSize:(int)a3;
- (id)markerAtScreenPoint:(struct CGPoint { double x0; double x1; })a0 enableExtendedFeatureMarkers:(BOOL)a1;
- (void)populateDebugNode:(void *)a0 withOptions:(const void *)a1;
- (void)setCameraHorizontalOffset:(double)a0 duration:(double)a1 timingFunction:(id)a2;
- (void)transferStateFromCanvas:(id)a0;
- (void)transitionToTracking:(BOOL)a0 mapMode:(long long)a1 startLocation:(struct { double x0; double x1; })a2 startCourse:(double)a3 cameraController:(id)a4 pounceCompletionHandler:(id /* block */)a5;
- (void)updateCameraForFrameResize;
- (void)updateWithTimestamp:(double)a0 withContext:(void *)a1;

@end
