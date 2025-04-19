@class NSString;

@interface IMStopWatch : NSObject {
    unsigned long long _startTime;
    NSString *_descriptionString;
}

+ (void)initialize;
+ (id)stopwatch;
+ (id)stopwatchWithDescription:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)reset;
- (double)time;
- (void)report;
- (void)setDescription:(id)a0;
- (void)reportWithMarker:(id)a0;

@end
