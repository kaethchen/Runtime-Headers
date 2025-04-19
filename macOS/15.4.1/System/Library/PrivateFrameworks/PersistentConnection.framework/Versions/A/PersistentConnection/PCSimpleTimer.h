@class NSString, PCDispatchTimer, NSDate, NSRunLoop, NSObject;
@protocol OS_dispatch_queue;

@interface PCSimpleTimer : NSObject {
    double _fireTime;
    double _startTime;
    double _lastUpdateTime;
    double _earlyFireDelta;
    BOOL _triggerOnGMTChange;
    NSDate *_scheduledWakeDate;
    NSString *_serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    BOOL _userVisible;
    PCDispatchTimer *_preventSleepTimer;
    PCDispatchTimer *_fireTimer;
    BOOL _sleepIsImminent;
    unsigned int _powerAssertionID;
    id _timeChangeSource;
    NSRunLoop *_timerRunLoop;
    NSString *_timerMode;
    int _significantTimeChangeToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) BOOL disableSystemWaking;
@property (nonatomic, getter=isUserVisible) BOOL userVisible;

+ (double)currentMachTimeInterval;
+ (id)lastSystemWakeDate;

- (void)dealloc;
- (id)debugDescription;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)invalidate;
- (id)userInfo;
- (void)_scheduleTimer;
- (void)scheduleInRunLoop:(id)a0;
- (void)_fireTimerFired;
- (id)_getTimerMode;
- (id)_getTimerRunLoop;
- (void)_invalidateAllowAsync:(BOOL)a0;
- (void)_performBlockOnQueue:(id /* block */)a0;
- (void)_powerNotificationSleepIsImminent;
- (void)_powerNotificationSleepIsNotImminent;
- (void)_preventSleepFired;
- (void)_setPowerMonitoringEnabled:(BOOL)a0;
- (void)_setSignificantTimeChangeMonitoringEnabled:(BOOL)a0;
- (void)_significantTimeChange;
- (void)_updateTimers;
- (BOOL)firingIsImminent;
- (id)initWithAbsoluteTime:(double)a0 serviceIdentifier:(id)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4 triggerOnGMTChange:(BOOL)a5;
- (id)initWithFireDate:(id)a0 serviceIdentifier:(id)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4;
- (id)initWithTimeInterval:(double)a0 serviceIdentifier:(id)a1 target:(id)a2 selector:(SEL)a3 userInfo:(id)a4;
- (void)scheduleInQueue:(id)a0;
- (void)scheduleInRunLoop:(id)a0 inMode:(id)a1;
- (void)updateFireTime:(double)a0 triggerOnGMTChange:(BOOL)a1;

@end
