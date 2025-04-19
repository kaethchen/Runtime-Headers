@class GEOComposedRoute, NSArray, GEORouteMatch, NSHashTable;

@interface VKNavContext : NSObject {
    struct vector<AdditionalPointInfo, std::allocator<AdditionalPointInfo>> { struct AdditionalPointInfo *__begin_; struct AdditionalPointInfo *__end_; struct __compressed_pair<AdditionalPointInfo *, std::allocator<AdditionalPointInfo>> { struct AdditionalPointInfo *__value_; } __end_cap_; } _pointsToFrame;
    NSHashTable *_observers;
    unsigned long long _navCameraHeadingOverride;
    struct vector<AdditionalRouteInfo, std::allocator<AdditionalRouteInfo>> { struct AdditionalRouteInfo *__begin_; struct AdditionalRouteInfo *__end_; struct __compressed_pair<AdditionalRouteInfo *, std::allocator<AdditionalRouteInfo>> { struct AdditionalRouteInfo *__value_; } __end_cap_; } _additionalRoutesToFrame;
}

@property (readonly, nonatomic) GEOComposedRoute *route;
@property (retain, nonatomic) GEORouteMatch *routeMatch;
@property (nonatomic) unsigned long long currentStepIndex;
@property (readonly, nonatomic) unsigned long long groupedManeuverCount;
@property (copy, nonatomic) NSArray *groupedManeuverCounts;
@property (nonatomic) unsigned long long navigationCameraHeadingOverride;
@property (nonatomic) unsigned long long debugFlags;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id).cxx_construct;
- (void)addObserver:(id)a0;
- (struct DebugTreeNode { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; } x1; struct vector<gdc::DebugTreeNode, std::allocator<gdc::DebugTreeNode>> { struct DebugTreeNode *x0; struct DebugTreeNode *x1; struct __compressed_pair<gdc::DebugTreeNode *, std::allocator<gdc::DebugTreeNode>> { struct DebugTreeNode *x0; } x2; } x2; struct vector<gdc::DebugTreeProperty, std::allocator<gdc::DebugTreeProperty>> { struct DebugTreeProperty *x0; struct DebugTreeProperty *x1; struct __compressed_pair<gdc::DebugTreeProperty *, std::allocator<gdc::DebugTreeProperty>> { struct DebugTreeProperty *x0; } x2; } x3; })_createDebugNode;
- (void)_notifyObserversStateChanged;
- (void)addPointToFrame:(struct { double x0; double x1; double x2; })a0 ofType:(unsigned long long)a1;
- (void)addRouteToFrame:(id)a0 divergenceCoord:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 convergenceCoord:(struct PolylineCoordinate { unsigned int x0; float x1; })a2;
- (void)clearAdditionalRoutesToFrame;
- (void)clearPointsToFrame;
- (void)clearPointsToFrameOfType:(unsigned long long)a0;
- (void)enumerateAdditionalRoutesToFrameUsingBlock:(id /* block */)a0;
- (void)enumeratePointsToFrameOfType:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePointsToFrameUsingBlock:(id /* block */)a0;
- (unsigned long long)groupedManeuverCount;
- (void)updateWithNewRoute:(id)a0 currentStepIndex:(unsigned long long)a1;

@end
