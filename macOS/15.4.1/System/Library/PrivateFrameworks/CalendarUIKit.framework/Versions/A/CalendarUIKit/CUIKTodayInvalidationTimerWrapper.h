@class NSTimer;

@interface CUIKTodayInvalidationTimerWrapper : NSObject {
    NSTimer *_tzSupportDayRolloverTimer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCalendar:(id)a0;
- (void)_killTimeZoneTimer;
- (void)_setupTimeZoneTimerWithCalendar:(id)a0;
- (void)invalidateTodayAndNotifyIfChanged;
- (BOOL)todayChangedAfterInvalidation;

@end
