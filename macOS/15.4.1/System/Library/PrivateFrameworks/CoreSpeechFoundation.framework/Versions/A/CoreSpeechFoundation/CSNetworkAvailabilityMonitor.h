@interface CSNetworkAvailabilityMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (BOOL)isAvailable;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_availabilityChanged;
- (void)_didReceivedNetworkAvailabilityChangedNotification:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withNetworkAvailability:(BOOL)a1;

@end
