@interface AppStoreKit.UpdateStore : ASDSoftwareUpdatesStore {
    void /* unknown type, empty encoding */ notificationQueue;
    void /* unknown type, empty encoding */ coalesceUpdateNotifications;
    void /* unknown type, empty encoding */ notificationWorkItem;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)a0;
- (void)broadcastChangeNotificationIfNotCoalescing;

@end
