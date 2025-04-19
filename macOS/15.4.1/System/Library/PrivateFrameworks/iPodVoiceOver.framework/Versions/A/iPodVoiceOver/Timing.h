@interface Timing : NSObject

+ (void)finishTiming:(struct { double x0; double x1; unsigned int x2; } *)a0;
+ (void)logTiming;
+ (void)startTiming:(struct { double x0; double x1; unsigned int x2; } *)a0;

@end
