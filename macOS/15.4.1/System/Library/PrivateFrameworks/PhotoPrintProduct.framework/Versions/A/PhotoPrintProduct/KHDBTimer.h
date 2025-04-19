@class NSMutableDictionary;

@interface KHDBTimer : NSObject {
    unsigned long long _start;
    unsigned long long _stop;
    void /* function */ *_timeFN;
    NSMutableDictionary *_measurements;
}

+ (id)timer;
+ (id)cpuTimer;

- (void)dealloc;
- (id)init;
- (void)start;
- (void)reset;
- (double)seconds;
- (BOOL)isRunning;
- (double)microseconds;
- (double)milliseconds;
- (unsigned long long)nanoseconds;
- (void)stop;
- (id)initForCPUTime:(BOOL)a0;
- (unsigned long long)absoluteTicks;
- (double)absoluteTicksPerNanosecond;

@end
