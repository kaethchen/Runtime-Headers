@class HDSleepPeriodInfo, NSMutableArray, NSDate;

@interface HDSleepPeriodArrayBuilder : NSObject {
    HDSleepPeriodInfo *_info;
    unsigned long long _options;
    NSMutableArray *_periods;
    NSMutableArray *_currentPeriodSegments;
    NSDate *_currentPeriodStartDate;
    NSDate *_currentPeriodEndDate;
    unsigned long long _currentUserSetScheduleIndex;
}

- (void).cxx_destruct;
- (id)finish;
- (void)addOrderedSegment:(id)a0;
- (id)initWithInfo:(id)a0 options:(unsigned long long)a1;

@end
