@interface NUMaskUtilities : NSObject

+ (double)_areaOfMaskImage:(id)a0 context:(id)a1;
+ (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })_tightBoundsOfMaskImage:(id)a0 context:(id)a1;
+ (double)densityForMask:(id)a0 context:(id)a1;
+ (id)propertiesForMask:(id)a0 context:(id)a1;

@end
