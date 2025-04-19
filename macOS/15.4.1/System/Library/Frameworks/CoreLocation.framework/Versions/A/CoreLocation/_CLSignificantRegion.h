@interface _CLSignificantRegion : CLCircularRegion

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 identifier:(id)a2 onBehalfOfBundleId:(id)a3 referenceFrame:(int)a4;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })a0 radius:(double)a1 referenceFrame:(int)a2 lowPower:(BOOL)a3 identifier:(id)a4 onBehalfOfBundleId:(id)a5 notifyOnEntry:(BOOL)a6 notifyOnExit:(BOOL)a7 emergency:(BOOL)a8;

@end
