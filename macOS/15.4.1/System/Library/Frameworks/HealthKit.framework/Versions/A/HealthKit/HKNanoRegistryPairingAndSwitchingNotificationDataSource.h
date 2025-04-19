@interface HKNanoRegistryPairingAndSwitchingNotificationDataSource : HKObserverBridge

- (id)_notificationCenter;
- (id)_pairingChangeNotifications;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (void)registerObserverForDevicePairingChanges:(id)a0 block:(id /* block */)a1;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (void)unregisterObserverForDevicePairingChanges:(id)a0;

@end
