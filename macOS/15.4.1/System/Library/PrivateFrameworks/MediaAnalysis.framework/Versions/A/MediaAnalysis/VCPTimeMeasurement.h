@interface VCPTimeMeasurement : NSObject {
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebase;
    unsigned long long _start;
}

@property (readonly) double elapsedTimeSeconds;
@property (readonly) BOOL started;

- (id)init;
- (int)start;
- (void)reset;
- (int)stop;

@end
