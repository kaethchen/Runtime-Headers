@class NSDate;

@interface ULHomeSlamTimer : NSObject

@property (nonatomic) double timeoutSeconds;
@property (retain, nonatomic) NSDate *startTime;

- (void).cxx_destruct;
- (id)checkTimeoutAtDate:(id)a0;
- (id)initWithTimeout:(double)a0 andStartTime:(id)a1;

@end
