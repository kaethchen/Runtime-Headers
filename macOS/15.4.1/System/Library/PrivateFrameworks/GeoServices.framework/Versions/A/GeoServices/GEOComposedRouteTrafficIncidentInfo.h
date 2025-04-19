@class GEORouteIncident;

@interface GEOComposedRouteTrafficIncidentInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GEORouteIncident *incident;
@property (nonatomic) struct { double latitude; double longitude; } coordinate;
@property (nonatomic) double offsetMeters;
@property (nonatomic) struct { unsigned int index; float offset; } routeCoordinate;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
