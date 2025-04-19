@interface BSDateTimeCache : NSObject {
    double _yesterday;
    double _today;
    double _tomorrow;
    double _2daysFromNow;
    double _6daysAgo;
    double _prevWeek;
    double _nextWeek;
    double _lastAttemptedResetTime;
    double _lastSuccessfulResetTime;
    BOOL _isResetting;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)_resetAndConfigure;
- (BOOL)isToday:(double)a0;
- (BOOL)isTomorrow:(double)a0;
- (BOOL)isWithinNextWeek:(double)a0;
- (BOOL)isWithinPrevWeek:(double)a0;
- (BOOL)isWithinPrevWeek:(double)a0 includeToday:(BOOL)a1;
- (BOOL)isYesterday:(double)a0;
- (double)nextWeek;
- (double)prevWeek;
- (double)today;
- (double)tomorrow;
- (double)yesterday;

@end
