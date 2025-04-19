@interface GEOViewportFrame : NSObject

@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) float heading;
@property (readonly, nonatomic) float pitch;
@property (readonly, nonatomic) float distance;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } minViewTargetBounds;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } maxViewTargetBounds;
@property (readonly, nonatomic) BOOL hasViewTargetBounds;

- (id)initWithAltitude:(double)a0 latitude:(double)a1 longitude:(double)a2 heading:(float)a3 pitch:(float)a4 distance:(float)a5 minViewTargetBounds:(struct { double x0; double x1; double x2; })a6 maxViewTargetBounds:(struct { double x0; double x1; double x2; })a7 hasViewTargetBounds:(BOOL)a8;
- (id)initWithGEOPDViewportFrame:(id)a0;

@end
