@class NSDate;

@interface MockDateProvider : NSObject <StopwatchDateProvider>

@property (retain, nonatomic) NSDate *overrideDate;

+ (id)mockDate;

- (void).cxx_destruct;
- (id)date;
- (void)updateDate:(id)a0;

@end
