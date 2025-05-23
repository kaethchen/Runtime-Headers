@class NSDate;

@interface StopWatch : NSObject {
    NSDate *start;
    double cumul;
}

+ (BOOL)nearlyEqualRun:(double)a0 toRun:(double)a1 fudgeFactor:(double)a2;

- (void).cxx_destruct;
- (void)start;
- (BOOL)isRunning;
- (double)stop;
- (double)total;
- (double)currentRun;
- (BOOL)wasRunningBefore:(id)a0;

@end
