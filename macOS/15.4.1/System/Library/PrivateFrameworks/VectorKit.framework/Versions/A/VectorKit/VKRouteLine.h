@class GEOComposedRoute, VKPolylineOverlayRenderRegion, GEOPathMatcher, NSUUID, NSSet, NSMutableArray, VKPolylineOverlay;
@protocol VKRouteLineObserverProtocol;

@interface VKRouteLine : NSObject {
    BOOL _matchToRoads;
    struct Matrix<double, 4, 4> { double _e[16]; } _inverseMatrix;
    double _boundsUnitsPerMeter;
    double _metersPerPoint;
    double _viewUnitsPerPoint;
    struct fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator> { struct _fast_shared_ptr_control *_control; } _userLocationSection;
    struct PolylineCoordinate { unsigned int index; float offset; } _userLocationIndex;
    struct Matrix<float, 2, 1> { float _e[2]; } _userLocation;
    struct _retain_ptr<NSUUID *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; NSUUID *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _revisionIdentifier;
    double _lastTrafficTimeStamp;
    NSSet *_retainedMatchedSegment;
    struct ManeuverArrowCoordinates { struct vector<md::ManeuverArrowInfo, std::allocator<md::ManeuverArrowInfo>> { struct ManeuverArrowInfo *__begin_; struct ManeuverArrowInfo *__end_; struct __compressed_pair<md::ManeuverArrowInfo *, std::allocator<md::ManeuverArrowInfo>> { struct ManeuverArrowInfo *__value_; } __end_cap_; } _maneuverArrows; } _maneuverArrowCoordinates;
    double _builtViewUnitsPerPoint;
    NSMutableArray *_pendingMatchedSegments;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _matchedSegmentsLock;
}

@property BOOL hasNewRoadMatches;
@property (readonly, nonatomic) struct vector<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>, std::allocator<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>>> { void *__begin_; void *__end_; struct __compressed_pair<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator> *, std::allocator<geo::fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator>>> { void *__value_; } __end_cap_; } sections;
@property (readonly, nonatomic) struct Box<double, 3> { struct Matrix<double, 3, 1> { double _e[3]; } _minimum; struct Matrix<double, 3, 1> { double _e[3]; } _maximum; } bounds;
@property (readonly, nonatomic) VKPolylineOverlayRenderRegion *renderRegion;
@property (readonly, nonatomic) double boundsInWorldUnit;
@property (readonly, nonatomic) struct vector<Arrow, std::allocator<Arrow>> { struct Arrow *__begin_; struct Arrow *__end_; struct __compressed_pair<Arrow *, std::allocator<Arrow>> { struct Arrow *__value_; } __end_cap_; } arrows;
@property (readonly, nonatomic) VKPolylineOverlay *overlay;
@property (readonly, nonatomic) GEOComposedRoute *composedRoute;
@property (weak, nonatomic) id<VKRouteLineObserverProtocol> observer;
@property (readonly, nonatomic) GEOPathMatcher *pathMatcher;
@property unsigned short numPathsMatching;
@property (readonly, nonatomic) NSMutableArray *matchedSegments;
@property (nonatomic) unsigned int matchingStartIndex;
@property (nonatomic) unsigned int matchingEndIndex;
@property (nonatomic) double simplificationEpsilonPoints;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)forEachSection:(id /* block */)a0;
- (struct optional<VKRouteLineSnapResult> { union { char x0; struct VKRouteLineSnapResult { struct Mercator3<double> { double x0[3]; } x0; struct pair<geo::Mercator3<double>, geo::Mercator3<double>> { struct Mercator3<double> { double x0[3]; } x0; struct Mercator3<double> { double x0[3]; } x1; } x1; } x1; } x0; BOOL x1; })snapRouteMatch:(id)a0;
- (void)_addMatchedSegments:(id)a0;
- (void)_clearMatchedSegments;
- (double)_findSimplifiedOffsetFor:(const struct PolylineCoordinate { unsigned int x0; float x1; } *)a0 betweenA:(const struct PolylineCoordinate { unsigned int x0; float x1; } *)a1 andB:(const struct PolylineCoordinate { unsigned int x0; float x1; } *)a2;
- (struct optional<std::pair<const unsigned int, const unsigned int>> { union { char x0; struct pair<const unsigned int, const unsigned int> { unsigned int x0; unsigned int x1; } x1; } x0; BOOL x1; })_getSnappedSegment:(struct fast_shared_ptr<md::RouteLineSection, mdm::MDAllocator> { struct _fast_shared_ptr_control *x0; })a0 coord:(const struct PolylineCoordinate { unsigned int x0; float x1; } *)a1;
- (void)_updateBounds:(id)a0 boundsInflation:(float)a1;
- (void)_updateTilesCovered:(id)a0;
- (double)boundsUnitsPerMeter;
- (BOOL)buildRouteLine:(id)a0 matchToRoads:(BOOL)a1 shouldGenerateSnapPath:(BOOL)a2 viewUnitsPerPoint:(double)a3 force:(BOOL)a4 boundsInflation:(float)a5 isGradientTraffic:(BOOL)a6 currentLegIndex:(unsigned int)a7 elevationSource:(void *)a8 elevationSourceContext:(void *)a9;
- (void)createMeshIfNecessary:(long long)a0;
- (void)generateArrowsForManeuverDisplayMode:(int)a0 routeLineWidth:(double)a1 collideTrafficFeatures:(const void *)a2;
- (id)initWithPolylineOverlay:(id)a0;
- (struct Matrix<double, 4, 4> { double x0[16]; })inverseManeuverTransform;
- (BOOL)isTrafficUpToDate;
- (BOOL)isTrafficUptoDate:(double)a0;
- (struct vector<gm::Matrix<float, 2, 1>, std::allocator<gm::Matrix<float, 2, 1>>> { void *x0; void *x1; struct __compressed_pair<gm::Matrix<float, 2, 1> *, std::allocator<gm::Matrix<float, 2, 1>>> { void *x0; } x2; })maneuverPoints;
- (struct Matrix<double, 4, 4> { double x0[16]; })maneuverTransform;
- (BOOL)needsUpdateForViewingScale:(double)a0;
- (void)splitRouteLineAtAnnotation:(id)a0 puckOffset:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;

@end
