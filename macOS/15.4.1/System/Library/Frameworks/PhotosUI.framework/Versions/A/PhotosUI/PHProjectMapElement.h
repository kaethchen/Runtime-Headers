@class NSArray;

@interface PHProjectMapElement : PHProjectElement <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long mapType;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } centerCoordinate;
@property (readonly, nonatomic) double heading;
@property (readonly, nonatomic) double pitch;
@property (readonly, nonatomic) double altitude;
@property (readonly, copy, nonatomic) NSArray *annotations;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description:(BOOL)a0;
- (id)initWithMapType:(unsigned long long)a0 center:(struct CLLocationCoordinate2D { double x0; double x1; })a1 heading:(double)a2 pitch:(double)a3 altitude:(double)a4 annotiations:(id)a5 placement:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6;

@end
