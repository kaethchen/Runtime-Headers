@class MTXPCConnectionProvider, MTMetrics, MTAlarmCache, NSNotificationCenter, MTAlarmManagerExportedObject;

@interface MTAlarmManager : NSObject

@property (retain, nonatomic) MTAlarmManagerExportedObject *exportedObject;
@property (readonly, nonatomic) MTXPCConnectionProvider *connectionProvider;
@property (retain, nonatomic) MTMetrics *metrics;
@property (retain, nonatomic) MTAlarmCache *cache;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;

+ (void)warmUp;
+ (id)_filteredAlarms:(id)a0 afterDate:(id)a1 maxCount:(unsigned long long)a2 filter:(id /* block */)a3;
+ (id)_sortedAlarms:(id)a0 date:(id)a1 includeBedtimeNotification:(BOOL)a2;
+ (id)assistantSyncNotificationName;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)checkIn;
- (void)reconnect;
- (id)addAlarm:(id)a0;
- (id)alarms;
- (id)removeAlarm:(id)a0;
- (id)initWithMetrics:(id)a0;
- (unsigned long long)indexForAlarm:(id)a0;
- (id)alarmWithIDString:(id)a0;
- (id)alarmsIncludingSleepAlarm:(BOOL)a0;
- (id)dismissAlarmWithIdentifier:(id)a0;
- (id)updateAlarm:(id)a0;
- (id)nextAlarmsInRange:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2;
- (id)sleepAlarmSync;
- (id)snoozeAlarmWithIdentifier:(id)a0;
- (id)nextAlarmsForDateSync:(id)a0 maxCount:(unsigned long long)a1;
- (id)alarmWithIDString:(id)a0 includeSleep:(BOOL)a1;
- (id)sleepAlarmsSync;
- (id)_alarmWithIDStringAsync:(id)a0;
- (id)_alarmsIncludingSleepAlarm:(BOOL)a0 doSynchronous:(BOOL)a1;
- (void)_getCachedAlarmsWithFuture:(id)a0 finishBlock:(id /* block */)a1;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)_nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3 doSynchronous:(BOOL)a4;
- (id)_nextAlarmsInRange:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3 doSynchronous:(BOOL)a4;
- (id)_sortedNextAlarmsAfterDate:(id)a0 includeSleepAlarm:(BOOL)a1 includeBedtimeNotification:(BOOL)a2;
- (id)_sortedNextAlarmsAfterDate:(id)a0 includeSleepAlarm:(BOOL)a1 includeBedtimeNotification:(BOOL)a2 doSynchronous:(BOOL)a3;
- (id)alarmAtIndex:(unsigned long long)a0;
- (unsigned long long)alarmCount;
- (unsigned long long)alarmCountIncludingSleepAlarm:(BOOL)a0;
- (id)alarmsSync;
- (id)alarmsSyncIncludingSleepAlarm:(BOOL)a0;
- (id)dismissAlarmWithIdentifier:(id)a0 dismissAction:(unsigned long long)a1;
- (unsigned long long)firingAlarmCount;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)nextAlarm;
- (id)nextAlarmInHoursThreshold:(long long)a0;
- (id)nextAlarmSync;
- (id)nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1;
- (id)nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1 includeBedtimeNotification:(BOOL)a2;
- (id)nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2;
- (id)nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3;
- (id)nextAlarmsForDateSync:(id)a0 maxCount:(unsigned long long)a1 includeBedtimeNotification:(BOOL)a2;
- (id)nextAlarmsForDateSync:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2;
- (id)nextAlarmsForDateSync:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3;
- (id)nextAlarmsInRange:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3;
- (id)nextAlarmsInRangeSync:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2;
- (id)nextAlarmsInRangeSync:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3;
- (id)nextExpectedRefreshDate;
- (id)nextFutureAlarmDate;
- (id)nextWidgetAlarmInThreshold;
- (id)sleepAlarm;
- (id)sleepAlarms;
- (id)snoozeAlarmWithIdentifier:(id)a0 snoozeAction:(unsigned long long)a1;

@end
