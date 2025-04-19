@class NSNumber, NSDate;

@interface SHKLatencyMeasurement : NSObject

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property (readonly) BOOL isComplete;
@property (readonly) NSNumber *durationMs;

- (void).cxx_destruct;
- (void)start;
- (void)stop;

@end
