@class NSString, NSDate;

@interface CRKExecutionTimer : NSObject

@property (readonly, copy, nonatomic) NSString *timerDescription;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;

+ (id)startedTimerWithDescription:(id)a0;

- (void).cxx_destruct;
- (void)start;
- (id)stop;
- (id)initWithDescription:(id)a0;

@end
