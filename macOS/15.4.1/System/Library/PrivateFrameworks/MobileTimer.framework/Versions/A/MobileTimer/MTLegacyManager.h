@class UNUserNotificationCenter, NSArray, Alarm, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MTLegacyManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serializer;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) NSArray *scheduledNotifications;
@property (retain, nonatomic) NSArray *alarms;
@property (retain, nonatomic) Alarm *sleepAlarm;
@property (nonatomic) double defaultDuration;
@property (copy, nonatomic) NSString *defaultSound;
@property (nonatomic) BOOL loaded;
@property (nonatomic) BOOL purged;

+ (id)sharedManager;
+ (id)_bundleIDForUNSchedule;
+ (id)_numberFromString:(id)a0;
+ (id)alarmFromOldAlarm:(id)a0;
+ (unsigned long long)repeatScheduleFromOldAlarm:(id)a0;
+ (id)soundFromOldAlarm:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_loadUserPreferences;
- (void)purgeLegacyData;
- (void)_cancelNotifications;
- (id)_copyLegacyAlarmsFromPreferences;
- (id)_copyLegacySleepAlarmFromPreferences;
- (void)_loadAlarms;
- (void)_loadScheduledNotifications;
- (void)_loadTimerDefaults;
- (void)_purgeAlarmsAndTimers;
- (void)_reconcileAlarmsAndNotifications;
- (void)cancelNotifications;
- (void)clearInvalidPendingNotifications;
- (void)loadLegacyData;

@end
