@class NSString, NSMutableDictionary, CLLocationManager, EKTimedEventStorePurger, NSObject, NSDate;
@protocol CALNRouteHypothesizerProvider, OS_dispatch_queue, OS_dispatch_source;

@interface EKTravelEngine : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_syncYieldTimer;
    BOOL _running;
    BOOL _needsRefresh;
    BOOL _databaseIsEncryptedAndUnreadable;
    BOOL _yieldingToSync;
    NSMutableDictionary *_eventExternalURLsToAgendaEntries;
    CLLocationManager *_locationManager;
    EKTimedEventStorePurger *_timedEventStorePurger;
    NSDate *_lastRefreshDate;
}

@property (readonly, nonatomic) id<CALNRouteHypothesizerProvider> routeHypothesizerProvider;
@property (nonatomic) BOOL authorizedInternal;
@property (copy, nonatomic) id /* block */ adviceBlock;
@property (readonly, nonatomic) BOOL authorized;
@property (copy, nonatomic) id /* block */ authorizationChangedBlock;
@property (copy, nonatomic) id /* block */ eventSignificantlyChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestedDarwinNotifications;
+ (double)_travelAgendaTimeWindowInterval;
+ (double)_periodicRefreshInterval;
+ (double)requestRefreshTimeInterval;
+ (id)travelEligibleEvents:(id)a0 fromStartDate:(id)a1 untilEndDate:(id)a2;
+ (id)travelEligibleEventsInEventStore:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)_eventStore;
- (void)handleDarwinNotification:(id)a0;
- (void)_enableTravelAdvisoriesForAutomaticBehaviorNotificationReceived;
- (BOOL)_authorizedToAcquireLocation;
- (void)_calDatabaseChangedNotificationReceived;
- (void)_calSyncClientBeginningMultiSaveNotificationReceived;
- (void)_calSyncClientFinishedMultiSaveNotificationReceived;
- (void)_eventKitFeatureSetChanged;
- (void)_installLocationManager;
- (void)_installPeriodicRefreshTimer;
- (void)_installSyncYieldTimer;
- (BOOL)_isProtectedDataAvailable;
- (void)_periodicRefreshTimerFired;
- (void)_refreshIfNeeded;
- (void)_sendFeedbackForPostingNotificationForEventWithExternalURL:(id)a0 feedback:(id /* block */)a1;
- (void)_significantTimeChangeNotificationReceived;
- (void)_stopInternal;
- (void)_suggestEventLocationsSettingChanged;
- (void)_trimAgendaEntriesBeforeDate:(id)a0 andAfterDate:(id)a1;
- (void)_uninstallLocationManager;
- (void)_uninstallPeriodicRefreshTimer;
- (void)_uninstallSyncYieldTimer;
- (void)_unregisterAllAgendaEntries;
- (void)_updateDatabaseEncryptionState;
- (id)alarmName;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)a0;
- (void)ceaseMonitoringForEventWithExternalURL:(id)a0;
- (id)initWithRouteHypothesizerProvider:(id)a0;
- (BOOL)isLocationManagerStatusAuthorized:(int)a0;
- (void)receivedAlarmNamed:(id)a0;
- (void)requestHypothesisRefreshAtDate:(id)a0 forEventWithExternalURL:(id)a1;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)a0;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)a0;

@end
