@class NSString;
@protocol MDRenderTarget;

@interface VKAnchorWrapper : NSObject <VKAnchorDelegate> {
    struct shared_ptr<md::Anchor> { struct Anchor *__ptr_; struct __shared_weak_count *__cntrl_; } _anchor;
    struct CGPoint { double x; double y; } _screenPointInCanvas;
    struct CGSize { double width; double height; } _canvasSize;
    const void *_cameraContext;
    void *_anchorManager;
    struct Coordinate3D<geo::Degrees, double> { struct Unit<geo::DegreeUnitDescription, double> { double _value; } latitude; struct Unit<geo::DegreeUnitDescription, double> { double _value; } longitude; struct Unit<geo::MeterUnitDescription, double> { double _value; } altitude; } _lastCoordinate;
    BOOL _isUpdating;
    double _pointsPerMeter;
}

@property (nonatomic) id<MDRenderTarget> displayLayer;
@property (readonly, nonatomic) struct { double x0; double x1; } coordinate;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } coordinate3D;
@property (readonly, nonatomic) double elevationOffset;
@property (nonatomic) BOOL followsTerrain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)updateIfNeeded;
- (struct CGPoint { double x0; double x1; })pointInLayer:(id)a0 bound:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)pointOffsetForDistanceOffset:(double)a0;
- (struct shared_ptr<md::Anchor> { struct Anchor *x0; struct __shared_weak_count *x1; })_anchorWithContext:(void *)a0;
- (void)_updateCachedPoint;
- (void)anchorWorldPointDidChange:(void *)a0;
- (void)destroyAnchor;
- (void)layoutWithContext:(const void *)a0;
- (void)prepare:(struct CGSize { double x0; double x1; })a0 cameraContext:(const void *)a1 anchorContext:(const struct AnchorContext { struct AnchorManager *x0; } *)a2;

@end
