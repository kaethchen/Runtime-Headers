@interface PTPrecomputeRandom : NSObject

+ (id)computeGaussian:(id)a0 sideLength:(int)a1;
+ (id)computeRandomUChars:(id)a0 rayCount:(int)a1;
+ (struct PTUnitDisk { id x0; int x1; void /* unknown type, blank encoding */ x2; })computeUnitDiskPoints:(id)a0 numberOfPatternCircles:(int)a1;

@end
