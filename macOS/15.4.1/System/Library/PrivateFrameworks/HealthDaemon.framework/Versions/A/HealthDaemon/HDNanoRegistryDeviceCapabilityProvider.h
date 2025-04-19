@class HKObserverSet;

@interface HDNanoRegistryDeviceCapabilityProvider : NSObject <HDPairedDeviceCapabilityProviding> {
    int _pairedDeviceDidChangeCapabilitiesNotificationToken;
    HKObserverSet *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_isListeningForUpdates;
    id /* block */ _activePairedDeviceProvider;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)_pairedOrActiveDevicesDidChange:(id)a0;
- (id)initWithActivePairedDeviceProvider:(id /* block */)a0;
- (id)isCapabilitySupportedOnActivePairedDevice:(id)a0 error:(id *)a1;

@end
