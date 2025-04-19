@class GEOComposedRoute;

@interface GEOComposedWaypointToRoute : GEOComposedWaypoint <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) GEOComposedRoute *route;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)geoWaypointTyped;
- (id)initWithRoute:(id)a0;

@end
