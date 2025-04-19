@interface SHLocationTransformer : NSObject

+ (struct CLLocationCoordinate2D { double x0; double x1; })coordinateFromLocation:(id)a0;
+ (id)coordinateValueFromLatitude:(id)a0 longitude:(id)a1;
+ (id)coordinateValueFromLocation:(id)a0;
+ (BOOL)isValidCoordinateValue:(id)a0;
+ (id)locationFromCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (id)locationFromCoordinateValue:(id)a0;
+ (id)valueForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

@end
