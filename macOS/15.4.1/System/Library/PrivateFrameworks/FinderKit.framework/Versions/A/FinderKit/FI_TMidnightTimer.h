@class NSTimer, FI_TRunAfterHelper, NSDateComponents, NSDate;

@interface FI_TMidnightTimer : NSObject {
    NSTimer *_midnightTimer;
    NSDate *_midnightFireDate;
    NSDateComponents *_dateComponents;
    struct vector<TNotificationCenterObserver, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__begin_; struct TNotificationCenterObserver *__end_; struct __compressed_pair<TNotificationCenterObserver *, std::allocator<TNotificationCenterObserver>> { struct TNotificationCenterObserver *__value_; } __end_cap_; } _observers;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _checkTimerAndFireDateToken;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)aboutToTearDown;
- (void)_midnightPassed;
- (void)_checkTimerAndFireDate;
- (void)_setUpMidnightTimer;
- (void)_systemTimeChanged;
- (void)checkTimersAfterSleeping:(id)a0;
- (void)postNotificationIfDayChanged;

@end
