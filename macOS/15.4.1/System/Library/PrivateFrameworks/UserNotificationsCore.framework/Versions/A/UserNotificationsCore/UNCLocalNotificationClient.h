@class UNCLocationMonitor, NSString, UNCPendingNotificationRepository, PCPersistentTimer, NSObject, UNCNotificationScheduleRepository, NSMutableArray;
@protocol OS_dispatch_queue, UNCNotificationRepository;

@interface UNCLocalNotificationClient : NSObject <UNCLocationMonitorObserver> {
    NSString *_bundleIdentifier;
    id<UNCNotificationRepository> _notificationRepository;
    UNCNotificationScheduleRepository *_notificationScheduleRepository;
    UNCPendingNotificationRepository *_pendingNotificationRepository;
    NSMutableArray *_lazy_pendingNotificationsAwaitingDelivery;
    UNCLocationMonitor *_locationMonitor;
    PCPersistentTimer *_localNotificationTimer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _monitoringLocaleAndTimeChanges;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_dateFormatter;
- (void)handleSignificantTimeChange;
- (void)_queue_triggerDidFireForRegion:(id)a0;
- (void)_setPendingNotificationRecords:(id)a0;
- (void)_fireNotification:(id)a0;
- (void)_invalidateNotificationRecordTimersAndRegionMonitors;
- (void)_invalidatePendingNotificationRecordRegionMonitors;
- (void)_invalidatePendingNotificationRecordTimers;
- (id)_lastLocalNotificationFireDate;
- (id)_pendingNotificationRecords;
- (void)_queue_triggerDidFireForDate:(id)a0;
- (void)_queue_triggerDidFireForTimer:(id)a0;
- (id)_sanitizeNotificationRecords:(id)a0;
- (void)_setLastLocalNotificationFireDate:(id)a0;
- (void)_setMonitoredRegions:(id)a0;
- (void)_setRequestDateForPendingNotificationRecords:(id)a0;
- (void)_updateRegionMonitorsForPendingNotificationRecords:(id)a0;
- (void)_updateTimersAndRegionMonitorsForPendingNotificationRecords:(id)a0;
- (void)_updateTimersForPendingNotificationRecords:(id)a0;
- (void)addPendingNotificationRecords:(id)a0;
- (void)handleApplicationStateRestore;
- (void)handleLocaleChange;
- (id)initWithNotificationRepository:(id)a0 pendingNotificationRepository:(id)a1 notificationScheduleRepository:(id)a2 locationMonitor:(id)a3 bundleIdentifier:(id)a4 queue:(id)a5;
- (void)locationMonitor:(id)a0 triggerDidFireForRegion:(id)a1 forBundleIdentifier:(id)a2;
- (id)pendingNotificationRecords;
- (void)removeAllPendingNotificationRecords;
- (void)removePendingNotificationRecords:(id)a0;
- (void)removePendingNotificationRecordsWithIdentifiers:(id)a0;
- (void)setPendingNotificationRecords:(id)a0;
- (id)undeliveredNotificationRecords;

@end
