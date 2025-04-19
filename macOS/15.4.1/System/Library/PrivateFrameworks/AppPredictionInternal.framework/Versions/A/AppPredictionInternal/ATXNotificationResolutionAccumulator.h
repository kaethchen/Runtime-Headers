@class NSDate, NSString, ATXHistoricalResolutonsForNotification, NSMutableDictionary, BPSPublisher, NSDictionary, ATXUserNotification, ATXMemoryPressureMonitor;

@interface ATXNotificationResolutionAccumulator : NSObject <ATXMemoryPressureObserver> {
    ATXUserNotification *_userNotification;
    unsigned long long _mode;
    NSDate *_startDate;
    NSDate *_endDate;
    BPSPublisher *_unifiedModePublisher;
    BPSPublisher *_notificationPublisher;
    BPSPublisher *_appLaunchPublisher;
    NSDictionary *_cacheHistoricalAppLaunches;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
    BOOL _cacheOffloadedDueToMemoryPressure;
    NSMutableDictionary *_cachedHistoricalResolutionsForNotifications;
}

@property (readonly, nonatomic) unsigned long long timeToLaunchApp;
@property (readonly, nonatomic) ATXHistoricalResolutonsForNotification *historicalResolutionsForNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handleMemoryPressure;
- (void)cacheAppLaunchDataFromStartTime:(id)a0 toEndTime:(id)a1;
- (void)computeFeaturesForNotification:(id)a0 mode:(unsigned long long)a1;
- (void)computeHistoricalResolutionsIfNecessary;
- (void)computeTimeToLaunchAppForNotification;
- (id)dateIntervalFromModeEvent:(id)a0;
- (id)dateIntervalFromNotificationEvent:(id)a0;
- (void)historicalResolutionForNotification;
- (void)removeOldestEntry;
- (void)unloadHistoricalResolutionsForNotifications;

@end
