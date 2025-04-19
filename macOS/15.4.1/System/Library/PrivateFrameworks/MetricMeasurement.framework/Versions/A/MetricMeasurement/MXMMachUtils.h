@interface MXMMachUtils : NSObject

+ (double)_nanosecondsWithContinuousTime:(unsigned long long)a0;
+ (unsigned long long)_absoluteTimeWithNanoseconds:(double)a0;
+ (double)_nanosecondsWithAbsoluteTime:(unsigned long long)a0;
+ (id)_processNameWithBundleIdentifier:(id)a0;
+ (struct mach_timebase_info { unsigned int x0; unsigned int x1; } *)_timebase;

@end
