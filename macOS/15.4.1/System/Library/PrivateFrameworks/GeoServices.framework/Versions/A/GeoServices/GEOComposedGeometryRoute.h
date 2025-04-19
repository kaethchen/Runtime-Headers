@interface GEOComposedGeometryRoute : GEOComposedRoute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initSingleLegRouteWithCoordinates:(struct { double x0; double x1; double x2; } *)a0 count:(unsigned long long)a1;
- (BOOL)isNavigable;

@end
