@class _TtC18MobileTimerSupport22MTWatchActivityManager;

@interface MobileTimerSupport.MTWatchActivityManager : NSObject {
    void /* unknown type, empty encoding */ activityManager;
}

@property (class, nonatomic, retain) _TtC18MobileTimerSupport22MTWatchActivityManager *shared;

- (id)init;
- (void).cxx_destruct;
- (void)endActivityWithAlarmID:(id)a0;
- (void)startActivityWithAlarmID:(id)a0 firingDate:(id)a1;

@end
