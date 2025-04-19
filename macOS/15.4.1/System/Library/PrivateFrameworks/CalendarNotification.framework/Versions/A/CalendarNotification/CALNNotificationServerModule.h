@class CALNNotificationStorageWrapper, CALNInboxNotificationMonitor, CALNNotificationServer, CALNNotificationIconCache, CALNSchedulingSnoozeUpdateTimer, EKEphemeralCacheEventStoreProvider, EKEventStore, CALNNotificationSourceRefresher, CALNTriggeredEventNotificationSource, NSString, CALNTriggeredEmailHandler, NSArray, CALNTriggeredURLHandler;
@protocol CALNCalendarIconIdentifierProvider, CalIconProvider, CALNNotificationIconProvider;

@interface CALNNotificationServerModule : NSObject <CADModule> {
    EKEphemeralCacheEventStoreProvider *_eventStoreProvider;
    EKEventStore *_lastCreatedEventStore;
}

@property (readonly, nonatomic) CALNInboxNotificationMonitor *inboxNotificationMonitor;
@property (readonly, nonatomic) CALNTriggeredEmailHandler *triggeredEmailHandler;
@property (readonly, nonatomic) CALNTriggeredURLHandler *triggeredURLHandler;
@property (readonly, nonatomic) CALNNotificationServer *calendarNotificationServer;
@property (readonly, nonatomic) CALNNotificationSourceRefresher *notificationSourceRefresher;
@property (readonly, nonatomic) CALNNotificationStorageWrapper *calendarStorageWrapper;
@property (readonly, nonatomic) CALNTriggeredEventNotificationSource *triggeredEventNotificationSource;
@property (readonly, nonatomic) CALNNotificationIconCache *iconCache;
@property (readonly, nonatomic) CALNSchedulingSnoozeUpdateTimer *snoozeUpdateTimer;
@property (readonly, nonatomic) id<CALNNotificationIconProvider, CALNCalendarIconIdentifierProvider, CalIconProvider> iconProvider;
@property (readonly, nonatomic) NSArray *modules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_filesToMigrate;
+ (id)_createNotificationStorageAtPath:(id)a0 protected:(BOOL)a1;
+ (id)_createTimeToLeaveRefreshStorageAtPath:(id)a0;
+ (id)_createTriggeredEventNotificationDataStorageAtPath:(id)a0 protected:(BOOL)a1;
+ (void)_migrateNotificationFiles;
+ (void)_migrateNotificationFilesFromDirectory:(id)a0 toDirectory:(id)a1;
+ (id)_notificationStoragePathWithName:(id)a0;
+ (id)_protectedCalendarNotificationStorage;
+ (id)_protectedTriggeredEventNotificationDataStorage;
+ (void)_setProtectedClassForStorageAtPath:(id)a0;
+ (id)_timeToLeaveRefreshStorage;
+ (id)_timeToLeaveRefreshStoragePathWithName:(id)a0;
+ (id)_triggeredEventNotificationDataStoragePathWithName:(id)a0;
+ (id)_unprotectedCalendarNotificationStorage;
+ (id)_unprotectedTriggeredEventNotificationDataStorage;

- (id)init;
- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)_updateLocaleReloadIfDifferent:(BOOL)a0;
- (void)protectedDataDidBecomeAvailable;
- (void)updateIconsToNewVersionIfNeeded;
- (id)_createCalendarNotificationServerWithUserNotificationCenterFactory:(id)a0 storage:(id)a1 eventStoreProvider:(id)a2 alarmEngineMonitor:(id)a3 travelEngine:(id)a4 timeToLeaveRefreshMonitor:(id)a5 timeToLeaveRefreshStorage:(id)a6;
- (id)_createNotificationServerWithUserNotificationCenter:(id)a0 storage:(id)a1 eventStoreProvider:(id)a2 alarmEngineMonitor:(id)a3 travelEngine:(id)a4 timeToLeaveRefreshMonitor:(id)a5 timeToLeaveRefreshStorage:(id)a6;
- (id)_createNotificationSourcesWithNotificationManager:(id)a0 eventStoreProvider:(id)a1 inboxNotificationProvider:(id)a2 alarmEngineMonitor:(id)a3 travelEngine:(id)a4 timeToLeaveRefreshMonitor:(id)a5 timeToLeaveRefreshStorage:(id)a6;
- (void)_registerSettingsCaptureHandlers;
- (void)_reloadNotificationRecords:(id)a0 forNotificationServer:(id)a1;
- (void)_reloadNotificationsAfterFirstUnlock;
- (void)_reloadNotificationsFromUnprotectedStorage:(id)a0 intoProtectedStorage:(id)a1 withStorageWrapper:(id)a2 forNotificationServer:(id)a3;
- (void)_reloadTriggeredEventNotificationData;
- (void)_removeNotificationsFromUnprotectedStorage:(id)a0;
- (void)_updateSourceClientIdentifiersIfNeeded;
- (void)didRegisterForAlarms;
- (void)receivedAlarmNamed:(id)a0;
- (void)receivedNotificationNamed:(id)a0;
- (void)refreshEventStoreInResponseToDatabaseChangeNotification:(id)a0;

@end
