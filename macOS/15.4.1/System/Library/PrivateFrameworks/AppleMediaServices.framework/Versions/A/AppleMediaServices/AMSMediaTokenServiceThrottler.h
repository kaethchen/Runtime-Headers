@class NSDate;

@interface AMSMediaTokenServiceThrottler : NSObject

@property unsigned long long attemptNumber;
@property (retain) NSDate *throttleDate;
@property double baseSleepInterval;
@property double maxSleepInterval;

- (void).cxx_destruct;
- (void)reset;
- (BOOL)shouldThrottle;
- (void)throttle;
- (double)_calculateThrottleInterval;
- (id)initWithBaseSleepInterval:(double)a0 maxSleepInterval:(double)a1;

@end
