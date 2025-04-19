@class NSMapTable;

@interface EXSNetworkController : NSObject {
    unsigned int _powerConnection;
    struct IONotificationPort { } *_notificationPort;
    unsigned int _powerNotifierReference;
    NSMapTable *_reachabilityReferencesForWatchedSyncProtocols;
}

+ (id)sharedInstance;
+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (struct __SCNetworkReachability { } *)_newNetworkReachabilityReferenceForHostname:(id)a0;
- (id)_watchedSyncProtocols;
- (void)notifyWatchersOfSleepWake;
- (void)startListeningForPowerNotifications;
- (void)startWatchingReachabilityForSyncProtocol:(id)a0;
- (void)stopListeningForPowerNotifications;
- (void)stopWatchingReachabilityForSyncProtocol:(id)a0;

@end
