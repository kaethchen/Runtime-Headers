@class NSString;

@interface Metrics : NSObject {
    struct metrics_t { unsigned long long totalAmount; unsigned long long startTime; unsigned long long stopTime; unsigned long long currentStart; struct { unsigned long long amount; unsigned long long timestamp; } history[5]; unsigned int numEvents; unsigned char index; char name[11]; } _metrics;
}

@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) double totalEventsPerSecond;
@property (readonly, nonatomic) double totalAmountPerSecond;

- (void)increment;
- (void)add:(unsigned long long)a0;
- (unsigned long long)elapsedTime;
- (void)startRecording;
- (void)stopRecording;
- (id)initWithMetrics:(struct metrics_t { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; struct { unsigned long long x0; unsigned long long x1; } x4[5]; unsigned int x5; unsigned char x6; char x7[11]; })a0;
- (void)startTimedEvent;
- (double)elapsedTimeInSeconds;
- (void)stopTimedEvent;

@end
