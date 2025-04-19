@class NSHashTable, NSXPCConnection;

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxy, MSPMapsPushDaemonProxyObserver> {
    NSXPCConnection *_connection;
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)_connection;
- (void)clearParkedCarBulletin;
- (void)showParkedCarBulletinForEvent:(id)a0;
- (void)showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (id)_remoteObjectProxy;
- (void)closeConnection;
- (void)_clearConnection;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)a0;
- (void)_connectToDaemonIfNeeded;
- (void)clearBulletinWithRecordID:(id)a0;
- (void)clearCurrentAnnouncement;
- (void)clearLowFuelAlertBulletin;
- (void)clearMapsSuggestionsBulletin;
- (void)clearPredictedRouteTrafficIncidentBulletin;
- (void)clearTrafficIncidentBulletinWithAlertID:(id)a0;
- (void)clearVenueBulletin;
- (void)fetchCurrentAnnouncement:(id /* block */)a0;
- (void)fetchDevicePushToken:(id /* block */)a0;
- (void)handleMapsApplicationRemoval:(id /* block */)a0;
- (void)pushDaemonProxyReceivedNotificationData:(id)a0 forType:(id)a1 recordIdentifier:(id)a2;
- (void)resetAnnouncements;
- (void)showLowFuelAlertBulletinForLowFuelDetails:(id)a0;
- (void)showMapsSuggestionsBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)showTrafficIncidentAlertWithID:(id)a0 withReroute:(BOOL)a1 title:(id)a2 description:(id)a3;
- (void)showVenueBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)simulateProblemResolution;
- (void)simulateRAPStatusChangeNotification;
- (void)simulateUGCPhotoAttributionClearedNotification;
- (void)simulateUGCPhotoSubmissionResolution;

@end
