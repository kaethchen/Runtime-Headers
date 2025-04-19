@class NSArray, NSString, GEOComposedString, GEOStyleAttributes;
@protocol GEOServerFormattedString, GEOTransitArtworkDataSource;

@interface GEOComposedRouteVisualInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) id<GEOServerFormattedString> title;
@property (readonly, nonatomic) id<GEOServerFormattedString> detail;
@property (readonly, nonatomic) GEOComposedString *titleString;
@property (readonly, nonatomic) GEOComposedString *detailString;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> icon;
@property (readonly, nonatomic) NSArray *laneChangeInfos;
@property (readonly, nonatomic) GEOComposedString *phoneticName;
@property (readonly, nonatomic) NSString *shieldText;
@property (readonly, nonatomic) int shieldType;
@property (readonly, nonatomic) struct GEOPolylineCoordinateRange { struct { unsigned int index; float offset; } start; struct { unsigned int index; float offset; } end; } routeCoordinateRange;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } startCoordinate;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } endCoordinate;

+ (id)_infosForRouteLineStyleInfos:(id)a0 pathIndex:(unsigned long long)a1 coordinates:(id)a2 updateable:(BOOL)a3;
+ (id)cameraInfosForGeoWaypointRoute:(id)a0 coordinates:(id)a1 updateable:(BOOL)a2;
+ (id)cameraInfosForRoute:(id)a0 etaRoute:(id)a1;
+ (id)visualInfosForGeoWaypointRoute:(id)a0 coordinates:(id)a1 updateable:(BOOL)a2;
+ (id)visualInfosForRoute:(id)a0 etaRoute:(id)a1;
+ (id)visualInfosForRouteLabelsForGeoWaypointRoute:(id)a0 coordinates:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_typeForStyleAttribute:(id)a0;
- (id)initWithGeoNameInfo:(id)a0 routeLegRange:(id)a1 pathIndex:(unsigned long long)a2 coordinates:(id)a3;
- (id)initWithGeoRouteLineStyleInfo:(id)a0 pathIndex:(unsigned long long)a1 coordinates:(id)a2 distanceOffset:(double)a3;
- (id)initWithType:(unsigned long long)a0 title:(id)a1 detail:(id)a2 routeCoordinate:(struct { unsigned int x0; float x1; })a3 locationCoordinate:(struct { double x0; double x1; double x2; })a4;
- (id)initWithType:(unsigned long long)a0 title:(id)a1 detail:(id)a2 routeCoordinateRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x0; float x1; } x0; struct { unsigned int x0; float x1; } x1; })a3 startLocationCoordinate:(struct { double x0; double x1; double x2; })a4 endLocationCoordinate:(struct { double x0; double x1; double x2; })a5;

@end
