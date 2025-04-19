@interface MRUtilities : NSObject

@property (class, readonly) BOOL isOpenGLDisplayMaskSupported;

+ (void)initialize;
+ (id)executeScript:(id)a0 withHeader:(id)a1 andAttributes:(id)a2;
+ (struct CGColorSpace { } *)newColorSpaceForDevice;
+ (long long)operatingSystemMajorVersion;
+ (long long)operatingSystemMinorVersion;
+ (long long)operationQueueConcurrentOperationCount;
+ (double)transformTime:(double)a0 forAnimationPath:(id)a1 withPlugTiming:(id)a2;
+ (struct CGPoint { double x0; double x1; })valueForPointAnimationPath:(id)a0 withPlugTiming:(id)a1 atTime:(double)a2 defaultsTo:(struct CGPoint { double x0; double x1; })a3 previousKeyPoint:(struct CGPoint { double x0; double x1; } *)a4 nextKeyPoint:(struct CGPoint { double x0; double x1; } *)a5 animationIsOver:(BOOL *)a6;
+ (double)valueForScalarAnimationPath:(id)a0 withPlugTiming:(id)a1 atTime:(double)a2 defaultsTo:(double)a3 previousKeyValue:(double *)a4 nextKeyValue:(double *)a5 animationIsOver:(BOOL *)a6;
+ (id)valueForVectorAnimationPath:(id)a0 withPlugTiming:(id)a1 atTime:(double)a2;

@end
