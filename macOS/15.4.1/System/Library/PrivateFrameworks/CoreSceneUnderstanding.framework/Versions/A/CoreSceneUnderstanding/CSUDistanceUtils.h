@interface CSUDistanceUtils : NSObject

+ (void)computeCosineDistanceFromBuffer:(id)a0 FromArray:(id)a1 distanceComputed:(float *)a2 error:(id *)a3;
+ (void)computeL1DistanceFromBuffer:(id)a0 FromArray:(id)a1 distanceComputed:(float *)a2 error:(id *)a3 withDistanceType:(long long)a4;

@end
